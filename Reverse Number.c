#include <stdio.h>
int main()
{
    int x,org,rev = 0,rem;

    printf("Enter the Value :");
    scanf("%d",&x);

    org = x;

    while(x != 0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
      printf("Reversed number: %d\n", rev);
    return 0;
}
