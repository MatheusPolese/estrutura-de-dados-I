#include<iostream>
#include<string>

using namespace std;

struct Pessoa
{
    string nome;
    int idade;
    float salario;

    Pessoa()
    {
        nome = ""; //inicializar as variáveis
        idade = 0;
        salario = 0.0f;
    }
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    Pessoa p;
    cout << "Pessoa: " << p.nome << ", " << p.idade << ", " << p.salario << endl;

    return 0;
}
