#include <stdio.h>
int main()
{
    int a,b,x=0,i;

    scanf("%d %d",&a,&b);
    int c[b];

    for(i = 0;i < b;i++){
        scanf("%d",&c[i]);

        if(i>0){
            if(c[i]>=c[i-1]){
                if((c[i]-c[i-1])>a){
                    x++;
                }
            }
            else{
                if((c[i-1]-c[i])>a){
                    x++;
                }
            }
        }
    }
    if(x!=0){
        printf("GAME OVER\n");
    }else{
        printf("YOU WIN\n");
    }
    return 0;
}
