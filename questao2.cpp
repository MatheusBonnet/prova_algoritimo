#include <iostream>
using namespace std;



int main()
{

int numeros[4];
int f1, f2, num, f3;

cout << "digite um numero: ";
cin >> numeros[0];
    
cout << "digite um numero: ";
cin >> numeros[1];
    
cout << "digite um numero: ";
cin >> numeros[2];

cout << "digite um numero: ";
cin >> numeros[3];        


    
    for(f1=0;f1<4;f1++)
    {                
        for(f2=f1+1;f2<4;f2++)
        {                   
            if(numeros[f1] < numeros[f2])
            {
                    num=numeros[f1];
                    numeros[f1]=numeros[f2];
                    numeros[f2]=num;
            }
        }
    }
        

    for (f3=0; f3<4; f3++)
    {    
        cout << numeros[f3];
        cout << "\n";
    }
   

    return 0;

}