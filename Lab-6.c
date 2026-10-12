#include <stdio.h>

int main() {
    int a[] = {5, 6, -3, 8, 1, 9, 2};
    int n = 7;
    int i, j, k;
    int found = 0;

    printf("Triplets with sum 0:\n");

    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (a[i] + a[j] + a[k] == 0) {
                    printf("(%d, %d, %d)\n", a[i], a[j], a[k]);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("No triplet found.\n");

    return 0;
}
