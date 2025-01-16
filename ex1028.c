#include <stdio.h>

int mdc(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int qtd, num1, num2;
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        scanf("%d %d", &num1, &num2);
        printf("%d\n", mdc(num1, num2));
    }
    return 0;
}
