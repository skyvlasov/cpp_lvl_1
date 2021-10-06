//program takes number N and returns number of digits in N

#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Please enter number: ");
    scanf("%d", &number);

    int counter = 0;
    while(number != 0)
    {
        counter++;
        number /= 10;
    }
    printf("Number of digits is: %d\n", counter);

    return 0;
}
