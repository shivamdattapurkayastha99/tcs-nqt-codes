// circumference of a circle
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    float radius,c;
    scanf("%f",&radius);
    c=3.14*radius*radius;
    printf("%0.2f",c);
    
    return 0;
}
