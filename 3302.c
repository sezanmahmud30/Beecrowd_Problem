#include <stdio.h>
int main()
{
    int a,x;

    scanf("%d",&a);

    for(int i = 1; i <= a; i++){
        scanf("%d",&x);

        printf("resposta %d: %d\n",i,x);
    }

    return 0;
}
