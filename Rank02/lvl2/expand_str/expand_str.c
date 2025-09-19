#include <unistd.h>

int space(char c)
{
    if (c == ' ' || c == '\t')
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    int first_word = 1;

    if (ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    while (av[1][i])
    {
        // Skip spaces
        while (av[1][i] && space(av[1][i]))
            i++;

        // Start of a word
        if (av[1][i])
        {
            if (!first_word)
                write(1, "   ", 3); // 3 spaces between words
            first_word = 0;

            // Write the word
            while (av[1][i] && !space(av[1][i]))
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }

    write(1, "\n", 1);
    return 0;
}
