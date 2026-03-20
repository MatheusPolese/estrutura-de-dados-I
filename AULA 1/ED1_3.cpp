#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main()
{
    srand(time(0));

    int *vet = new int[10];

    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand() % 15 + 16;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << vet[i];

            if ( i != 9)
            {
                cout << ", ";
            }
    }

    delete [] vet;

}