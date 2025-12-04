#include <stdio.h>
#include <string.h>

int main() {
    char s1[20]= "Sezan";
    char s2[20]= "Mahmud";

    strcat(s1, s2);

    printf("%s",s1);
    return 0;
}
