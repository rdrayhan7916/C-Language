#include <stdio.h>

int main() {
    int T, i;
    unsigned long long S, A, B, C, missing;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%llu %llu %llu %llu", &S, &A, &B, &C);

        missing = S - A - B - C;

        printf("%llu\n", missing);
    }

    return 0;
}