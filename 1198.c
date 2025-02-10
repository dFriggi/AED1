#include <stdio.h>

int main() {
    long long hashmat, opponent;
    while (scanf("%lld %lld", &hashmat, &opponent) != EOF) {
        if (hashmat > opponent)
            printf("%lld\n", hashmat - opponent);
        else
            printf("%lld\n", opponent - hashmat);
    }
    return 0;
}
