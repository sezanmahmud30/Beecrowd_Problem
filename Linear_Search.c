#include <stdio.h>
int main()
{
    int a[]={2,4,3,6,8,11,19,13};

    int x,c = 0;

    printf("Enter the Number : ");

    scanf("%d",&x);

    for(int i = 1;i <= a ; i++){
        if(a[i] == x)
        {
            printf("Data Found : %d",i+1);
            c++;
            break;
        }
    }
    if(c == 0){
            printf("Data not Found !");
        }
    return 0;
}
