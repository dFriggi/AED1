#include <stdio.h>

void ordenar(int *a, int *b, int *c) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int a1 = a, b1 = b, c1 = c;
    ordenar(&a1, &b1, &c1);
    
    printf("%d\n%d\n%d\n\n", a1, b1, c1);
    printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}
