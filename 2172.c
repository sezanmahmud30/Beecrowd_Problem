#include <stdio.h>
int main()
{
    int a;
    unsigned long long int b,c;

    while(1){
        scanf("%d  %llu",&a,&b);

        if(a==0 && b==0){
            break;
        }

        c = a*b;
        printf("%llu\n",c);
    }

    return 0;
}
