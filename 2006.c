#include <stdio.h>
int main()
{
    int x,y,z=0;

    scanf("%d",&x);

    if(x>0 && x<5){
    for(int i = 0;i < 5;i++)
    {
        scanf("%d",&y);

        if(y>0 && y<5){
            if(y==x){
              z++;
          }
        }
      }
    }
    printf("%d\n",z);

    return 0;
}
