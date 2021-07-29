#include <iostream>
using namespace std;

void mult(int num);

int main(){

    for(int i = 1; i <= 10; i++)
    {
        mult(i);
        cout << "\n";
    }

    return 0;
}

void mult(int num){
    for(int i = 1; i <= 10;i++)
    {
        cout << i << " x " << num << " = " << i * num ;
        cout << "\n";
    }
}