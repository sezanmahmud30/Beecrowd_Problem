
#include <stdio.h>
int main()
{
    int arr[20];
    int i,num,j,temp;

    printf("Enter the Value of Number : \n");

    scanf("%d",&num);


    printf("Enter the elements one by one : \n");
    for(i = 0; i < num ; i++){
        scanf("%d",&arr[i]);

    }
    printf("Input Array is : \n");

    for(i = 0;i < num ; i++){
        printf("%d\n",arr[i]);
    }

    // Bubble Sorting -->>


    for (i = 0;i < num - 1 ; i++){
        for(j = 0 ; j < num - 1 -i ; j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t ;
            }
        }
    }
    printf("After  Shoring : ");

    for (i = 0; i < num ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
