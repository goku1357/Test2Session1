
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    scanf("%f %f %f %f", x1, y1, x2, y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *area)
{
    float q = (x2 - x1) * (x2 - x1);
    float w = (y2 - y1) * (y2 - y1);
    float r = q + w;
    *area = sqrt(r);
}

void output(float area
{
    printf("the distance is %.1f", area);
}

int main()
{
    float x1, y1, x2, y2;
    input(&x1, &y1, &x2, &y2);
    float area;
    find_distance(x1, y1, x2, y2, &area);
    output(area);
}