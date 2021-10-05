//homework #1

#include <iostream>

using namespace std;

int main()
{
    int b;
    float a=5.0, c=5.0, d;
    printf("a=%f \nc=%f \n\nplease enter a value for the variable b. b=", a, c);
    scanf("%d", &b);
    printf("b=%d\n", b);

    printf("\na=a+b-2 "
          "\na=%f+%d-2\n", a, b);
    a=a+b-2;
    printf("a=%f\n", a);

    printf("\nc=c+1"
          "\nc=%f+1", c);
    c=c+1;
    printf("\nc=%f", c);

    printf("\n\nplease enter a value for the variable d. d=");
    scanf("%f", &d);

    printf("\nd=c-a+d"
          "\nd=%f-%f+%f", c, a, d);
    d=c-a+d;
    printf("\nd=%f", d);

    printf("\n\na=a*c"
          "\na=%f/%f", a, c);
    a=a*c;
    printf("\na=%f", a);

    printf("\n\nc=c-1"
          "\nc=%f-1", c);
    c=c-1;
    printf("\nc=%f",c);

    printf("\n\na=a/10"
          "\na=%f/10", a);
    a=a/10;
    printf("\na=%f", a);

    printf("\n\nc=c/2"
          "\nc=%f/2", c);
    c=c/2;
    printf("\nc=%f", c);

    printf("\n\nb=b-1"
          "\nb=%d-1", b);
    b=b-1;
    printf("\nb=%d", b);

    printf("\n\nd=d*(c+b+a)"
          "\nd=%f*(%f+%d+%f)", d, c, b, a);
    d=d*(c+b+a);
    printf("\nd=%f\n\n", d);

    return 0;
}
