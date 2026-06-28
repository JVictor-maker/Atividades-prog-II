#include <iostream>
#include <string>

using namespace std;

// Classe Base
class Veiculo {
public:
    string marca;
};

// Classe Derivada herdando publicamente de Veiculo
class Carro : public Veiculo {
public:
    int numeroPortas;
};

int main() {
    Carro meuCarro;
    meuCarro.marca = "Fiat";       // Atributo da classe base
    meuCarro.numeroPortas = 4;     // Atributo da classe derivada

    cout << "Marca do carro: " << meuCarro.marca << endl;
    cout << "Portas: " << meuCarro.numeroPortas << endl;

    return 0;
}