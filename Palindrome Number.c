#include <stdio.h>
int main()
{
    int x,orginal,reverse = 0,remainder;
    printf("Enter the Value : ");
    scanf("%d",&x);

    orginal = x;

    while(x != 0){
        remainder = x % 10;
        reverse = reverse * 10 + remainder;
        x = x / 10;
    }

    if( orginal == reverse){
        printf("%d is a Palindorme\n",orginal);
    }else{
        printf("%d is a Not Palindorme\n",orginal);
    }
    return 0;
}
