#include<iostream>
#include<string>

using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    float salario;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    Pessoa p;

    //Os atributos de P podem conte lixo de mem�ria!
    cout << "Pessoa: " << p.nome << ", " << p.idade << ", " << p.salario << endl;

    //Inicializar manualmente...
    p.nome = "joao";
    p.idade = 10;
    p.salario = 1110.0f;
    cout << "Pessoa: " << p.nome << ", " << p.idade << ", " << p.salario << endl;

    return 0;
}
