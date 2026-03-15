#include <iostream>

using namespace std;

int main() { // Adicione 'int' antes de main
    int *vet = new int[5];

    vet[0] = 10; // Atribuindo um valor para testar

    cout << vet << endl;    // Imprime o ENDEREÇO de memória onde o array começa.
    cout << vet[0] << endl; // Imprime o VALOR guardado na primeira posição (10).
    cout << *vet << endl;   // Imprime o VALOR da primeira posição (mesma coisa que vet[0]).

    delete[] vet; // Boa prática: sempre liberar memória alocada com 'new'
    return 0;
}