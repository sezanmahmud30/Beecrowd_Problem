#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Value : ");
    scanf("%d",&x);

    printf("Even Number : \n");

    for(int i = 1; i <= x;i++){
        if(i % 2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
