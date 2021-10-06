//program that calculates the area of which figure is larger

#include <stdio.h>
#include <math.h>

int main()
{
    double circle_radius;
    printf("Please enter circle radius: ");
    scanf("%lf", &circle_radius);

    const double circle_area = M_PI * pow(circle_radius, 2);
    printf("Circle area is: %lf\n\n", circle_area);

    double triangle_side_length;
    printf("Please enter triangle side length: ");
    scanf("%lf", &triangle_side_length);

    const double triangle_area = ((pow(triangle_side_length, 2)) * sqrt(3))/4;
    printf("Triangle area is: %lf\n\n", triangle_area);

    double square_side_length;
    printf("Please enter square side length: ");
    scanf("%lf", &square_side_length);

    const double square_area = pow(square_side_length, 2);
    printf("Square area is: %lf\n\n", square_area);

    double largest_area;
    circle_area > triangle_area ? largest_area = circle_area : largest_area = triangle_area;
    largest_area > square_area ?: largest_area = square_area;

    largest_area != circle_area ?: printf("Circle has the largest area: %lf\n", circle_area);
    largest_area != triangle_area ?: printf("Triangle has the largest area: %lf\n", triangle_area);
    largest_area != square_area ?: printf("Square has the largest area: %lf\n", square_area);

    return 0;
}
