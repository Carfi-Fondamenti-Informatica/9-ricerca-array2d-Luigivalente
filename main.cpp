#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char matnomi[r][c];
    char nome[c];
    int indice;
    for(int i=0; i<r; i++){
        cin >>matnomi[i];
    }
    cin >>nome;
    if(contenuto(matnomi, nome,indice)==true){
        cout<< indice <<endl;
    }else{
        cout<< "non presente"<<endl;
    }
    return 0;
}
