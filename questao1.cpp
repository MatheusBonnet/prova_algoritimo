#include <iostream>
#include <string>
using namespace std;



int main()
{

    int alunos = 0;
    cout << "Quantos alunos irão ser informados: ";
    cin >> alunos;

    string vetorN[alunos];
    float vetorNoat1[alunos];
    float vetorNoat2[alunos];
    
    for(int i = 0; i < alunos; i++)
    {
        cout << "Digite o " << i + 1 << " nome: ";
        cin >> vetorN[i];
        cout << "Informe a nota do primeiro bimestre: ";
        cin >> vetorNoat1[i];
        cout << "Informe a nota do segundos bimestre: ";
        cin >> vetorNoat2[i];    

    }

    for(int i = 0; i < alunos; i++)
    {
        float media = (vetorNoat1[i] + (vetorNoat2[i] * 2)) / 3;

        if(media < 6)
        {
            cout << "O aluno " << vetorN[i] << " não atingiu a média para aprovação, SUA MÉDIA FOI: " << media;
            cout << "\n";    
        }
    
        else 
        {
            cout << "O aluno " << vetorN[i] << " atingiu a média para aprovação, SUA MÉDIA FOI: " << media;
            cout << "\n"; 
        }
    }

    return 0;
}
