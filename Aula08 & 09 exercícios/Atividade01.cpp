#include <iostream>

using namespace std;

class MatrizDinamica {
private:
    int** matriz;
    int linhas;
    int colunas;

public:
    // Construtor parametrizado (Alocação no Heap)
    MatrizDinamica(int l, int c) : linhas(l), colunas(c) {
        matriz = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            matriz[i] = new int[colunas]{0}; // Aloca e já zera os valores
        }
        cout << "Matriz " << linhas << "x" << colunas << " alocada no heap." << endl;
    }

    // Construtor de Cópia
    MatrizDinamica(const MatrizDinamica& outra) : linhas(outra.linhas), colunas(outra.colunas) {
        matriz = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            matriz[i] = new int[colunas];
            for (int j = 0; j < colunas; ++j) {
                // Copia o valor real, não o ponteiro
                matriz[i][j] = outra.matriz[i][j];
            }
        }
        cout << "Copia profunda realizada com sucesso." << endl;
    }

    // Destrutor preventivo de vazamentos
    ~MatrizDinamica() {
        for (int i = 0; i < linhas; ++i) {
            delete[] matriz[i]; // Deleta cada linha primeiro
        }
        delete[] matriz; // Deleta o array de ponteiros principal
        cout << "Memoria da matriz liberada (sem vazamentos!)." << endl;
    }
};

int main() {
    cout << "--- Testando MatrizDinamica ---" << endl;
    MatrizDinamica m1(3, 3);
    
    // Testando o construtor de cópia profunda
    MatrizDinamica m2 = m1; 

    return 0;
}