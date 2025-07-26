#include <stdio.h>
int main()
{
    int x;
    printf("Random Number 1 - 10 :\n");

    printf("Guess the Number : ");
    scanf("%d",&x);

    srand(time(0));

    int num = (rand()%10+1);
    printf("Answer : %d\n",num);

    if(x==num){
        printf("You Won !\n");

    }else{
        printf("You Are Loss !\n");

  }
    return 0;
}
