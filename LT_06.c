#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        // switch ((i % 5 == 0) ? (i % 3 == 0 ? 2 : 1) : (i % 3 == 0 ? 3 : 0))
        // {
        //     case 2:
        //         printf("FizzBuzz ");
        //         break;
        //     case 1:
        //         printf("Buzz ");
        //         break;
        //     case 3:
        //         printf("Fizz ");
        //         break;
        //     default:
        //         printf("%d ", i);
        //         break;
        // }
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz ");
        else if (i % 3 == 0)
        {
            printf("Pizz ");
        }
        else if(i%5==0)
        {
            printf("Buzz ");
        }
        else
            printf("%d ", i);
    }
}
