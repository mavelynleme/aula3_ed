#include <iostream>
using namespace std;

int main (){
    int a[5], b[5], c [5];

    // carrega vetor A
    cout << "### VETOR A ####"<< endl;
    for (int i = 0; i <5; ++i){
        cout << "Informe o valor " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "########"<< endl;

    // carrega vetor B (CORRIGIDO)
    cout << "### VETOR B ####"<< endl;
    for (int i = 0; i < 5; ++i){ // Adicionado o loop for
        cout << "Informe o valor " << i+1 << ": ";
        cin >> b[i];
    }
    cout << "########"<< endl;

    // Soma dos vetores
    cout << "### SOMA DOS VALORES ####"<< endl;
    for (int i =0; i < 5; i++){
        c[i]= a[i] + b[i];
        cout << "Soma [" << i << "]: " << c[i] << endl;
    }

    return 0;
}

