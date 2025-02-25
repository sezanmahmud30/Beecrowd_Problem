#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter 3 Number : \n");

    scanf("%d %d %d",&x,&y,&z);

    if((x < y) && (z < y)){
        printf("Biggest Number : %d \n",y);
    }
    else if((x < z) && (y < z)){
        printf("Biggest Number : %d \n",z);
    }
    else
        printf("Biggest Number : %d \n",x);

    return 0;
}
