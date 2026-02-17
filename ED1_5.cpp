#include <iostream>
using namespace std;

void tamanhoVetor(int *tam);
void alocarVetor(int** v, int tamanho);
void preencherVetor(int* v, int tamanho);
void mostrarVetor(int* v, int tamanho);

int main() {
    int* meuVetor = NULL; //V[1]=NULL
    int tam;
    tamanhoVetor(&tam);
    alocarVetor(&meuVetor, tam); //ENVIA ENDEREÇO DO VETOR
    preencherVetor(meuVetor, tam);
    mostrarVetor(meuVetor, tam);
    delete[] meuVetor;
    meuVetor = nullptr;

    return 0;
}

void tamanhoVetor(int *tam){
    cout << "Informe o tamanho do vetor: ";
    cin >> *tam;
    if (*tam<= 0) {
        cout << "Tamanho invalido." << endl;
    }
}

void alocarVetor(int** v, int tamanho) {
    if (*v != NULL) {//SE V[1] ESTA NULL OU NÃO
        delete[] *v;
        cout << "Memoria anterior liberada." << endl;
    }
    *v = new int[tamanho];// CRIA VETOR DENOVO
}

void preencherVetor(int* v, int tamanho) {
    cout << "Digite os " << tamanho << " valores do vetor:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Posicao [" << i << "]: ";
        cin >> *(v + i);
    }
}

void mostrarVetor(int* v, int tamanho) {
    cout << "Valores no vetor: ";
    for (int i = 0; i < tamanho; i++) {
        cout << *(v + i) << " ";
    }
    cout << endl;
}

