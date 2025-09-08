#include <stdio.h>

int min(int a , int b) {
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    return min;   
}

int main() {
    int x, y;
    printf("Entrer deux nombres: ");
    scanf("%d %d", &x, &y);

    printf("Le minimum entre %d et %d est: %d\n", x, y, min(x, y));

    return 0;
}

