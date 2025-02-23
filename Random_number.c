#include <stdio.h>

int main() {

    srand(time(0));

    int num = (rand()%10+1);

    printf("Random Number 1 - 10 :\n");

    printf("Answer : %d\n",num);

    return 0;
}
