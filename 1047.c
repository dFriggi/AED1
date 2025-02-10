#include <stdio.h>

int main() {
    int hourI, minI, hourF, minF;
    scanf("%d %d %d %d", &hourI, &minI, &hourF, &minF);
    
    int start = hourI * 60 + minI;
    int end = hourF * 60 + minF;
    
    if (end <= start) {
        end += 24 * 60;
    }
    
    int timeF = end - start;
    int hours = timeF / 60;
    int minutes = timeF % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
    
    return 0;
}
