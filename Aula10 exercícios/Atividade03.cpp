#include <iostream>
#include <string>

using namespace std;

// A base precisa existir para o Carro poder herdar
class Veiculo {
public:
    string marca;
    virtual void emitirSom() {
        cout << "Ruido do motor: Vrummmmm" << endl;
    }
};

class Carro : public Veiculo {
public:
    int numeroPortas;

    // Sobrescrevendo o método da classe base
    void emitirSom() override {
        cout << "Som da buzina automotiva: Biiii biiii!" << endl;
    }
};

int main() {
    Carro meuCarro;
    
    // Agora, ao invés do motor, ele vai chamar a buzina do Carro
    meuCarro.emitirSom(); 

    return 0;
}