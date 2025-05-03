#include <stdio.h>
int main()
{
    float d,v,t;

    printf("Please. insert velocity (v) in meter/second : ");
    scanf("%f",&v);

    printf("Please. insert time (t) in seconds : ");
    scanf("%f",&t);

    d=v*t;

    printf("Distance = %.2f meter",d);
    return 0;
}
