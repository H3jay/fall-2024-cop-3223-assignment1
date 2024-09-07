#include <stdio.h>
#include <math.h>

void input(int *x1, int *y1, int *x2, int *y2, float *z) 
{
    printf("Enter x1: ");
    scanf("%d", x1);

    printf("Enter y1: ");
    scanf("%d", y1);

    printf("Enter x2: ");
    scanf("%d", x2);

    printf("Enter y2: ");
    scanf("%d", y2);

    *z = sqrtf((*x2 - *x1) * (*x2 - *x1) + (*y2 - *y1) * (*y2 - *y1));
}

double calculateDistance(int x1, int y1, int x2, int y2, float z) 
{
    printf("x1 entered: %d, y1 entered: %d, x2 entered: %d, y2 entered: %d\n", x1, y1, x2, y2);
    printf("Diameter: %.2f\n", z);
    return z;
}

double calculatePerimeter(int x1, int y1, int x2, int y2, float z) 
{
    double perimeter = z * M_PI;
    printf("x1 entered: %d, y1 entered: %d, x2 entered: %d, y2 entered: %d\n", x1, y1, x2, y2);
    printf("Perimeter: %.2f\n", perimeter);
    return 3;
}

double calculateArea(int x1, int y1, int x2, int y2, float z) 
{
    double area = M_PI * (z / 2) * (z / 2);
    printf("x1 entered: %d, y1 entered: %d, x2 entered: %d, y2 entered: %d\n", x1, y1, x2, y2);
    printf("Area: %.2f\n", area);
    return 3;
}

double calculateWidth(int x1, int y1, int x2, int y2, float z) 
{
    double width = z / 2;
    printf("x1 entered: %d, y1 entered: %d, x2 entered: %d, y2 entered: %d\n", x1, y1, x2, y2);
    printf("Width: %.2f\n", width);
    return 3;
}

double calculateHeight(int x1, int y1, int x2, int y2, float z) 
{
    double height = z / 2;
    printf("x1 entered: %d, y1 entered: %d, x2 entered: %d, y2 entered: %d\n", x1, y1, x2, y2);
    printf("Height: %.2f\n", height);
    return 3;
}

int main(void) 
{
    int x1, y1, x2, y2;
    float z;
    
    input(&x1, &y1, &x2, &y2, &z);
    calculateDistance(x1, y1, x2, y2, z);
    calculatePerimeter(x1, y1, x2, y2, z);
    calculateArea(x1, y1, x2, y2, z);
    calculateWidth(x1, y1, x2, y2, z);
    calculateHeight(x1, y1, x2, y2, z);
    
    return 0;
}