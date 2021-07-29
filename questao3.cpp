#include <iostream>
using namespace std;



int main()
{
    int vetor[15];
    srand(time(NULL));
    int aleatorio = rand() % 100;

    for(int i = 0;  i < 15; i++)
    {
        vetor[i] = rand() % 100; 
        if(vetor[i] % 2 == 0){
            cout << "o numero "<< vetor[i] << " é par ";
            cout << "\n";
        }

        else{
            cout << "O numero " << vetor[i] << " é impar";
            cout << "\n";
        }
    }

    return 0;
}