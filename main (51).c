
#include <stdio.h>

int main() {
    int stars;

    for (int i = 1; i <= 5; i++) {
        if (i == 1 || i == 5) {
            stars = 1;
        } else if (i == 2 || i == 4) {
            stars = 3;
        } else {
            stars = 5;
        }

        for (int j = 1; j <= stars; j++) {
            printf("*\n");
        }

        
            printf("\n");
        
    }

    return 0;
}