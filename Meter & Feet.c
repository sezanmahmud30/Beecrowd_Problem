#include <stdio.h>
#include <conio.h>
int main()
{
    float num;
    int choice;

    printf("1 : Feet to Meters - \n2 : Meter to Feets - \n");
    printf("Enter Choice : ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("Enter Number of Feet : ");
        scanf("%f",&num);
        printf("Meters : %.3f\n",num/3.28);
    }
    else{
        printf("Enter Number of Meters : ");
        scanf("%f",&num);
        printf("Feet : %.3f\n",num*3.28);
    }
    //return 0;
    getch();
}
