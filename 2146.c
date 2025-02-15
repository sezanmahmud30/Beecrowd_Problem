#include <stdio.h>
int main()
{
    int x;

    while(scanf("%d",&x) != EOF){

        if(x >= 1001 && x <= 9999){

             printf("%d\n",x-1);
        }
    }
    return 0;
}
