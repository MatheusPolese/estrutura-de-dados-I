#include <iostream>
#include<string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Aluno
{
    int matricula;
    string nome;
    float notaf;
};

int main()
{
    int x;
    Aluno A;

    setlocale(LC_ALL, "portuguese");

    cout<<"Quantidade de alunos: ";
    cin>> x;
    Aluno *vet =  new Aluno[x];

    cout<<"registre os dados dos alunos:";

    for(int i = 0; i < x; i++){
    
    cout << "\nDigite sua matricula: ";
    cin >> vet[i].matricula;
    cout << "\nDigite seu nome: ";
    cin >> vet[i].nome;
    cout << "\nDigite sua nota: ";
    cin >> vet[i].notaf;
    }

    for(int i = 0; i < x; i++ ){
    
    cout <<"\nmatricula "<<i+1<<": "<< vet[i].matricula<<endl;
    cout <<"\nnome "<<i+1<<": "<<  vet[i].nome<<endl;
    cout <<"\nnota "<<i+1<<": "<<  vet[i].notaf<<endl;
    }

}