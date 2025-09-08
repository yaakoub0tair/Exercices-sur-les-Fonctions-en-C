#include <stdio.h>
int somme(int a, int b) {
    int sum = a + b;
    return sum; 
}

int main() {
    int result = somme(5, 8); 
    printf("La somme de 5 + 8 est: %d\n", result);

    return 0;
}