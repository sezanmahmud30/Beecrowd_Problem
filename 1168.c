#include <stdio.h>
int main()
{
    int a,s,led=0;
    char x[1000];

    scanf("%d",&a);

    for(int i = 0;i < a; i++){
        scanf("%s",&x);

        s=strlen(x);

        for(int j = 0;j < s;j++){

            switch(x[j])
            {
                case '0':
                    led=led+6;
                break;
                case '1':
                    led=led+2;
                break;
                case '2':
                    led=led+5;
                break;
                case '3':
                    led=led+5;
                break;
                case '4':
                    led=led+4;
                break;
                case '5':
                    led=led+5;
                break;
                case '6':
                    led=led+6;
                break;
                case '7':
                    led=led+3;
                break;
                case '8':
                    led=led+7;
                break;
                case '9':
                    led=led+6;
                break;
            }
        }
        printf("%d leds\n",led);
        //led = 0;
    }
    return 0;
}
