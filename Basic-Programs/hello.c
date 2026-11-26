#include <stdio.h>

int main() {
    int N, i, j, value;
    int firstSum = 0;
    int secondSum = 0;
    int difference;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &value);

            if (i == j) {
                firstSum = firstSum + value;
            }

            if (i + j == N - 1) {
                secondSum = secondSum + value;
            }
        }
    }

    difference = firstSum - secondSum;

    if (difference < 0) {
        difference = -difference;
    }

    printf("%d\n", difference);

    return 0;
}