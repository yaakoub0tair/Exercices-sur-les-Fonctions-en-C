#include <stdio.h>
#include <string.h>

void inverser_chaine(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char mot[100];

    printf("Entrer une chaine : ");
    scanf("%s", mot);

    inverser_chaine(mot);

    printf("Chaine inversée : %s\n", mot);

    return 0;
}
