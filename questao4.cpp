#include <iostream>
using namespace std;


float adicao(float n1, float n2, float n3);
float sub(float n1, float n2, float n3);

int main()
{
   
    char escolha;
    float n1, n2, n3+;

    cout << "Escolha um dos operador (+, -): ";
    cin >> escolha;
    cout << "entre com primeiro numeros: " ;
    cin >> n1 ;
    cout << "Entre com o segundo numero: " ;
    cin >> n2;
    cout << "Entre com o terceiro numero: " ;
    cin >> n3;


    switch (escolha) {
        case '+':
            cout << "O resultado da soma é: " << adicao(n1, n2, n3);
            cout << "\n";
            break;
        case '-':
            cout << "O resultado da subtração é: " << sub(n1, n2, n3);
            cout << "\n";
            break;
        default:
            cout << "Opa desculpe! O operador digitado é inválido";
            cout << "\n";
            break;
    }

    return 0;
}

float adicao(float n1, float n2, float n3)
{
    return n1 + n2 + n3;
}

float sub(float n1, float n2, float n3)
{
    return n1 - n2 - n3;
}