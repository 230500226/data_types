#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(void)
{
//DATA TYPES
    // float radius, area;
    // printf("Enter the radius: ");
    // scanf("%f", &radius);

    // area = PI*radius*radius;
    // printf("Area = %.2f \n", area);

    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);    
}