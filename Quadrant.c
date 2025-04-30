#include <stdio.h>
int main()
{
    int a,b;
    printf("Input the values for A and B coordinate : ");
    scanf("%d %d",&a,&b);

    if(a>0 && b>0){
        printf("%d and %d - Quadrant 1\n",a,b);
    }
    else if(a<0 && b>0){
        printf("%d and %d - Quadrant 2\n",a,b);
    }
    else if(a<0 && b<0){
        printf("%d and %d - Quadrant 3\n",a,b);
    }
    else if(a>0 && b>0){
        printf("%d and %d - Quadrant 4\n",a,b);
    }
    else if(a==0 && b==0){
        printf("%d and %d - Origin\n",a,b);
    }
    return 0;
}
