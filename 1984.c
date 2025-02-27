#include <stdio.h>
int main()
{
    int x;

    char a[100000];
    scanf("%s",&a);

    x=strlen(a);
    for(int i = x-1;i >= 0 ;i--){
        if(i==0){
            printf("%c\n",a[i]);
        }else{
            printf("%c",a[i]);
        }
    }
    return 0;
}
