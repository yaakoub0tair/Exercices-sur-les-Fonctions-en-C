#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Entrer n : ");
    scanf("%d", &n);

    printf("F(%d) = %lld\n", n, fibonacci(n));
    return 0;
}
