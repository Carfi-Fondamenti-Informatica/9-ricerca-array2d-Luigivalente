#include <string.h>
#include "lib.h"

// procedura che trasforma le maiuscole in minuscole in una stringa
void lower(char stringa[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (stringa[i] == '\0') {
            break;
        }else if (stringa[i] >= 'A' && stringa[i] <= 'Z') {
            stringa[i] = stringa[i] + 32;
        }
    }
}

bool contenuto(char matnomi[r][c], char nome[c], int &indice){
    lower(nome,c);
    for(int i = 0; i<r;i++){
        lower(matnomi[i],c);
        if (strncmp (matnomi[i],nome,c) == 0){
            indice=i;
            return true;
        }
    }
    return false;
}
