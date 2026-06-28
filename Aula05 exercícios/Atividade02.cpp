#include <iostream>

using namespace std;

int main() {
    double a[100];
    double *aPtr = a; // aPtr recebe o endereço base do array 'a'
    int quantidade;
    double soma = 0.0;

    cout << "Quantos valores deseja inserir? (maximo de 100): ";
    cin >> quantidade;

    // Validação de segurança básica
    if (quantidade > 100 || quantidade <= 0) {
        cout << "Quantidade invalida. O programa sera encerrado." << endl;
        return 1;
    }

    // Leitura dos dados usando a notação exigida (a + j)
    cout << "\n--- Entrada de Dados ---" << endl;
    for (int j = 0; j < quantidade; j++) {
        cout << "Digite o valor " << (j + 1) << ": ";
        cin >> *(a + j); 
    }

    // Acumulando os valores usando a notação com o ponteiro aPtr
    for (int j = 0; j < quantidade; j++) {
        soma += *(aPtr + j); 
    }

    // Calculando a média
    double media = soma / quantidade;

    // Exibindo os resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Soma dos valores: " << soma << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}