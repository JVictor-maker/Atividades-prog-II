#include <iostream>

using namespace std;

// Função inline para conversão
inline double converteParaReais(double dolares) {
    double cotacao = 5.00; // Valor fixo de exemplo para a cotação
    return dolares * cotacao;
}

int main() {
    double dolares;

    cout << "Digite a quantia em dolares que deseja converter: US$ ";
    cin >> dolares;

    double reais = converteParaReais(dolares);

    cout << "A quantia convertida em reais e: R$ " << reais << endl;

    return 0;
}