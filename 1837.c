#include <stdio.h>
int main()
{
    int a,b;
    int X;
    int p,q,r;
    scanf("%d %d", &a, &b);

    if(a<0)
    {
        X=b;
        if(b<0) X=b*-1;
        for(r=0; r<X; r++)
        {
            p=a-r;
            if(p%b==0) break;
        }
        q=p/b;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);
    return 0;
}
