#include <stdio.h>

void main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        int x = 5;

        for (int k = 0; k < n - i; k++) {
            printf("  ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("%d ", x);
            if (j < i)
                x--;
            else
                x++;
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        int x = 5;

        for (int k = 0; k < n - i; k++) {
            printf("  ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) {
            printf("%d ", x);
            if (j < i)
                x--;
            else
                x++;
        }
        printf("\n");
    }
}
