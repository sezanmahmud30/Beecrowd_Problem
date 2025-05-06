
#include <stdio.h>
int main()
{
    int num,is_prime;
    printf("Enter the Number : ");
    scanf("%d",&num);

    is_prime = 1;

    for(int i = 2;i <= num/2; i = i+1){
        if((num%i)==0) is_prime=0;
    }
        if(is_prime == 1 && num!= 0 && num != 1){
            printf("The Number is Prime.\n");
        }
        else{
            printf("The Number is Not Prime.\n");
        }


    return 0;
}
