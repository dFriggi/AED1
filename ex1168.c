#include <stdio.h>
#include <string.h>

int main() {
    int times, sum;
    char num[1001];

    scanf("%d", &times);

    for (int i = 0; i < times; i++) {
        scanf("%s", num);

        sum = 0;

        // Processa cada caractere da string
        for (int j = 0; j < strlen(num); j++) {
            switch (num[j]) {
            case '1':
                sum += 2;
                break;
            case '2':
                sum += 5;
                break;
            case '3':
                sum += 5;
                break;
            case '4':
                sum += 4;
                break;
            case '5':
                sum += 5;
                break;
            case '6':
                sum += 6;
                break;
            case '7':
                sum += 3;
                break;
            case '8':
                sum += 7;
                break;
            case '9':
                sum += 6;
                break;
            case '0':
                sum += 6;
                break;
            }
        }

        printf("%d leds\n", sum);
    }

    return 0;
}
