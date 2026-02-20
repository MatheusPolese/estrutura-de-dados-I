#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Temperatura
{
    string dia;
    float tempMin;
    float tempMax;
};

int main()
{

    setlocale(LC_ALL, "portuguese");
    cout << fixed << setprecision(2);

    stringstream strBuffer;
    string op, linha;

    ifstream arq("exemplo6.txt");

    if (!arq.is_open())
    {
        cout << "Erro: n�o foi poss�vel abrir o arquivo texto.\n";
        return 0;
    }

    float *vetmin = new float[7];
    float *vetmax = new float[7];
    int i = 0;
    while (!arq.eof())
    {
        linha = ""; // IMPORTANTE, sempre inicializar a string
        getline(arq, linha);
        if (linha.size() == 0)
        {
            break;
        }

        strBuffer = stringstream(linha);
        Temperatura t;

        strBuffer >> t.dia;

        strBuffer >> t.tempMin;
        *(vetmin + i) = t.tempMin;

        strBuffer >> t.tempMax;

        *(vetmax + i) = t.tempMax;
        // cout << "Coisas lidas: " << t.dia << ", " << t.tempMin << ", " << t.tempMax  << endl;

        i++;
    }

    int j = 0;
    float medmax = 0, medmin = 0;
    for (j; j < (i - 1); j++)
    {
        medmin = medmin + *(vetmin + j);
        medmax = medmax + *(vetmax + j);
    }
    cout << i << endl;
    medmax = (medmax / (j + 1));

    medmin = (medmin / (j + 1));
    cout << "Media temp max: " << medmax << endl
         << "Media temp min" << medmin << endl;

    float aux = 0;
    float maior =0;
    float menor = 0;
    for (int j = 0; j < (i - 1); j++)
    {

        aux = *(vetmax + j);
        if (aux < *(vetmax + j + 1))
        {
            maior = *(vetmax + j + 1);
        }
    }
    cout<<"maior valor: "<<maior<<endl;
    for (int j = 0; j < (i - 1); j++)
    {
        aux = *(vetmin + j);
        if (aux > *(vetmin + j + 1))
        {
            menor = *(vetmin + j + 1);
        }
    }
    cout<<"menor valor: "<<menor<<endl;

    return 0;
}
