#include <stdio.h> 
#include <stdlib.h>

int main()
{

      // Put Code Here

    int a = 0;

    while (a < 500)
    {
        a++;
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("FizzBuzz \n");
        } else if (a % 3 == 0)
        {
            printf("Fizz \n");
        } else if (a % 5 == 0)
        {
            printf("Buzz \n");
        } else if (a % 7 == 0)
        {
            printf("Bang \n");
        } else if (a % 7 && a % 3)
        {
            printf("FizzBang \n");
        } else if (a % 7 && a % 5)
        {
            printf("BuzzBang \n");
        } else if (a % 7 && a % 3 && a % 5)
        {
            printf("FizzBuzzBang \n");
        } else
        {
            printf("%d \n", a);
        } 
    }

    return 0;
}