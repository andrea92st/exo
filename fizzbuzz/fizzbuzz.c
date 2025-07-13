#include <unistd.h>

void mini_atoi(int i)
{
    char c;
    
    if (i >= 10)
    {  
        mini_atoi(i / 10);
        mini_atoi(i % 10);
      
    }
    if (i < 10)
    {
        c = i + '0';     
        write(1, &c, 1);
    }
    
} 

int main(int ac, char **av) 
{
    int i = 0; 
    i++;
    while (i <= 100)
    {
        if(i % 5 == 0 && i % 3 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else 
        {
            mini_atoi(i);
            write(1, "\n", 1);
        }
        i++;
    }

}