#ifndef _HPP_PILHA_DINAMICA
#define _HPP_PILHA_DINAMICA

#include <string> //biblioteca usada para formatar a impressão da pilha


struct NoPilha
{
    string dado; //informação do nó
    NoPilha *prox; //próximo elemento
};

struct Pilha
{
    NoPilha *topo;

    Pilha()  //Construtor. Inicialização da pilha
    {
        topo = nullptr;
    }
};


bool vaziaP(Pilha *p)
{
    if (p->topo == NULL)
        return true;
    else
        return false;
}

bool empilhaStr(Pilha *p, string dado)
{
    NoPilha *novo =  new NoPilha(); //cria um novo nó
    novo->dado = dado; //armazena a informação no nó
    novo->prox = p->topo; //o próximo elemento do nó criado será o último elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o nó criado.
    return true;
}

void inverteP(Pilha *p)
{
    string *vet = new string[1];
    int i = 0, j=0;
    NoPilha *no = p->topo;
    while (no != NULL)
    {
        *(vet + i) = no->dado;
        no = no->prox;
        i++;
    }
    while(j<i)
    {
        no->dado = *(vet + j) ;
    }
}

void mostraP(Pilha *p, string nome="")
{

    cout << "PILHA " << nome << ": " << endl;
    cout << "TOPO: " << p->topo << endl;
    if(vaziaP(p) == false)
    {
        cout << "------------" << endl;
        NoPilha *no = p->topo;
        while (no != NULL)
        {

            cout  << no << "|" << no->prox << "|" << no->dado  << endl;
            cout << "------------" << endl;

            no = no->prox;
        }
    }
    else
    {
        cout << "------------" << endl;
        cout << "VAZIA\n";
        cout << "------------" << endl;
    }
}

#endif // _HPP_PILHA_DINAMICA





