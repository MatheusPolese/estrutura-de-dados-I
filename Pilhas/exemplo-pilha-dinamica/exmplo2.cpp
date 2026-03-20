#include <iostream>
using namespace std;

#include "pilha-dinamica.hpp"


int main(void)
{
    setlocale(LC_ALL, "Portuguese");


    Pilha p1;
    int valor;
    bool resultado;




    cout << "\n\n###TESTE 1\n";
    //empilhando o valor 100
    valor = 100;
    resultado = empilhaP(&p1, valor);
    if(resultado == true)
        cout << "O valor " << valor << " foi empilhado com sucesso!\n";
    else
        cout << "N�o foi poss�vel empilhar o valor " << valor <<"!\n";

    //empilhando o valor 30
    valor = 30;
    if(empilhaP(&p1, valor) == true )
        cout << "O valor " << valor << " foi empilhado com sucesso!\n";
    else
        cout << "N�o foi poss�vel empilhar o valor " << valor <<"!\n";


    //mostra a pilha
    mostraP(&p1);




    system("pause");
    cout << "\n\n###TESTE 2\n";
    cout << "Empilhar os valors 300, 40, 50 e 90\n";
    empilhaP(&p1, 300);
    empilhaP(&p1, 40);
    empilhaP(&p1, 50);
    empilhaP(&p1, 90);




    //mostra a pilha
    mostraP(&p1);



    //verificando se a pilha est� vazia
    if(vaziaP(&p1) == true)
        cout << "A pilha est� vazia!\n";
    else
        cout << "A pilha N�O est� vazia!\n";


    system("pause");
    cout << "\n\n###TESTE 3\n";
    //desempilhar
    if(vaziaP(&p1) == false)
    {
        valor = espiaP(&p1);
        cout << "O valor no topo da pilha � " << valor << endl;
    }
    else
        cout << "N�o foi possivel consultar o valor no topo da pilha, a pilha est� vazia!\n";

    mostraP(&p1);


    system("pause");
    cout << "\n\n###TESTE 4\n";
    cout << "Informe um valor para buscar na pilha:";
    cin >> valor;

    //desempilhar
    if(buscaP(&p1, valor) == true)
        cout << "O valor " << valor << " foi encontrado na pilha!\n";
    else
        cout << "O valor " << valor << " N�O foi encontrado na pilha!\n";



    system("pause");
    cout << "\n\n###TESTE 5\n";
    //desempilhar

    if(vaziaP(&p1) == false)
    {
        valor = desempilhaP(&p1);
        cout << "O valor desempilhado � " << valor << endl;
    }
    else
        cout << "N�o foi possivel desempilhar, a pilha est� vazia!\n";

    mostraP(&p1);







    system("pause");
    cout << "\n\n###TESTE 6\n";

    while(vaziaP(&p1)== false)
    {
        valor = desempilhaP(&p1);
        cout << "O valor desempilhado � " << valor << endl;
    }
    mostraP(&p1);


    //verificando se a pilha est� vazia
    if(vaziaP(&p1) == true)
        cout << "A pilha est� vazia!\n";
    else
        cout << "A pilha N�O est� vazia!\n";

    //desalocar mem�ria
    destroiP(&p1);


    return EXIT_SUCCESS;

}//final do main

