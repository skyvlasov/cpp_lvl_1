//formula calculation program

#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("Please enter X: ");
    scanf("%lf", &x);

    const double numerator = 2*cos(x-(M_PI/6)+sqrt(2));
    const double denominator = (1/(2*(log(x)))) + pow(sin(pow(x,2)),2);

    double y = numerator/denominator;
    printf("y = %lf\n", y);
}
