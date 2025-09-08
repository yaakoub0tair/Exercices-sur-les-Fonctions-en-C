#include <stdio.h>


int est_pair(int nombre) {
    if (nombre % 2 == 0) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int n;
    printf("Entrer un nombre : ");
    scanf("%d", &n);

    if (est_pair(n)) {
        printf("%d est pair.\n", n);
    } else {
        printf("%d est impair.\n", n);
    }

    return 0;
}
