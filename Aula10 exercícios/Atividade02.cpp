#include <iostream>
#include <string>

using namespace std;

class Veiculo {
public:
    string marca;

    // Função virtual declarada na classe base
    virtual void emitirSom() {
        cout << "Ruido do motor: Vrummmmm..." << endl;
    }
};

int main() {
    Veiculo meuVeiculo;
    meuVeiculo.emitirSom(); // Vai imprimir o som genérico do motor

    return 0;
}