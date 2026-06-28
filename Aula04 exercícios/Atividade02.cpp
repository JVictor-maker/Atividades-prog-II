#include <iostream>

using namespace std;

// Função soma
int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Digite o primeiro valor inteiro: ";
    cin >> num1;
    cout << "Digite o segundo valor inteiro: ";
    cin >> num2;

    int resultado = soma(num1, num2);
    
    cout << "O resultado da soma e: " << resultado << endl;

    return 0;
}