
#include <stdio.h>

int factorial(int n){

    if(n==0)         //Base Case
        return 1;
    else
        return n*factorial(n - 1);  // Recursive Call

}

int main(){

    int num;
    printf("Enter Your Value : ");
    scanf("%d",&num);

    printf("Factorial Of %d = %d\n",num,factorial(num));

    return 0;
}
