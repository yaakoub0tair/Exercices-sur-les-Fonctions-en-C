#include <stdio.h>


int max(int a , int b){
    int max;
    if(a>b){
        max=a;
        
    }else{
        max=b;
        
    }
    return max;
}
int main(){
    int resultat = max(10, 7); 
    printf("Le plus grand entre 10 et 7 est: %d\n", resultat);



    return 0;
}