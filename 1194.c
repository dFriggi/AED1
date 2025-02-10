#include <stdio.h>
#include <string.h>

void construirPosfixo(char *pre, char *in, int n) {
    if (n <= 0)
        return;
    
    char raiz = pre[0];
    
    int i;
    for (i = 0; i < n; i++) {
        if (in[i] == raiz)
            break;
    }
    
    construirPosfixo(pre + 1, in, i);
    construirPosfixo(pre + i + 1, in + i + 1, n - i - 1);
    
    putchar(raiz);
}

int main() {
    int casos;
    scanf("%d", &casos);
    
    while (casos--) {
        int n;
        char pre[53], in[53];
        scanf("%d %s %s", &n, pre, in);
        
        construirPosfixo(pre, in, n);
        putchar('\n');
    }
    
    return 0;
}
