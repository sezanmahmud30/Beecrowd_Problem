#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int dice, sum = 0, countSix = 0;

    while (1) {
        dice = (rand() % 6) + 1;   // Always random dice roll
        printf("Dice: %d\n", dice);

        if (dice == 6) {
            sum += 6;
            countSix++;
        }
        else {
            sum += dice;   // Add the number (1–5)
            break;         // Stop rolling
        }

        if (countSix == 3) {
            printf("Result = 0 (Three consecutive sixes)\n");
            return 0;
        }
    }
    printf("Result = %d\n", sum);
    return 0;
}
