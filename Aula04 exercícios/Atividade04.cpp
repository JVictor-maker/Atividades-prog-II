#include <iostream>

using namespace std;

// Definindo os tamanhos
const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double totalGeral = 0.0;

    cout << "--- Cadastro de Despesas ---" << endl;
    
    // Loop para ler os valores
    for (int i = 0; i < ANO; i++) {
        cout << "\nAno " << (i + 1) << ":" << endl;
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "Digite a despesa do trimestre " << (j + 1) << ": R$ ";
            cin >> despesas[i][j];
            totalGeral += despesas[i][j]; // Já vai somando no total geral
        }
    }

    cout << "--- Relatorio de Despesas ---" << endl;
    
    // Loop para exibir a tabela
    for (int i = 0; i < ANO; i++) {
        cout << "\n-> Ano " << (i + 1) << ":" << endl;
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << "   Trimestre " << (j + 1) << ": R$ " << despesas[i][j] << endl;
        }
    }
    
    cout << "Valor total de despesas nos dois anos: R$ " << totalGeral << endl;

    return 0;
}