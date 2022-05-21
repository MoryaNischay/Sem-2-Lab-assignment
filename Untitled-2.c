#include <stdio.h>
#include <math.h>
int main()
{
    float d,a=90;
    float i=40.23;
    float radian;
    radian = i * (M_PI / 180);
    d = tan(radian) - sin(radian);
    printf("%f",d);
    
    
    }