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
    Pessoa(string n, int i, float s)
    {
        nome = n; //inicializar as variáveis
        idade = i;
        salario = s;
    }
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    Pessoa p1;
    Pessoa p2("Fulano", 32, 3000.70f);
    Pessoa p3 = Pessoa("Cilano", 50, 4000.25f);

    cout << "Pessoa 1: " << p1.nome << ", " << p1.idade << ", " << p1.salario << endl;
    cout << "Pessoa 2: " << p2.nome << ", " << p2.idade << ", " << p2.salario << endl;
    cout << "Pessoa 3: " << p3.nome << ", " << p3.idade << ", " << p3.salario << endl;

    return 0;
}
