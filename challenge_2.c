#include <stdio.h>


int produit(int a, int b) {
    return a * b;  
}
int main() {
    int result = produit(5, 4);  
    printf("La multiplication de 5 * 4 est: %d\n", result);

    return 0;
}