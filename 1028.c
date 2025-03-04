#include <stdio.h>
int main()
{
    int x,a1,a2,temp;
    scanf("%d",&x);

    for(int i = 0;i < x;i++){
        scanf("%d %d",&a1,&a2);

        do{
            temp=a2;
            a2=a1%a2;
            a1=temp;
        }
        while(a2 != 0);
        printf("%d\n",a1);
    }
    return 0;
}
