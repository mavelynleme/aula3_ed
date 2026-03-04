#include <iostream>
using namespace std;

int main() {
    int n, soma = 0;

    cout << "Digite um numero inteiro positivo: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        soma += i; 
    }

    cout << "A soma dos numeros inteiros positivos de 1 ate " << n << " e: " << soma << endl;

    return 0;
}

