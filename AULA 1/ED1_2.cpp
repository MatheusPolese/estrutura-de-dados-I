#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

main(){
    srand(time(0));

    int *vet =  new int[5];
    int i = 0;
    do
    {
        vet[i] = rand()%40 + 11;
        if (vet[i] % 2 == 1)
        {
            i++;
        }
        
    } while (i<5);

    for ( i = 0; i < 5; i++)
    {
        cout<< vet[i] <<endl;
    }
    delete[] vet;
}