#include <iostream>

using namespace std;

class Contador {
private:
    int valor;

public:
    // Construtor garantindo inteiro positivo
    Contador(int v) {
        valor = (v > 0) ? v : 1; 
    }

    // Operador de Incremento
    // Retorna uma referência para o próprio objeto APÓS o incremento.
    Contador& operator++() {
        ++valor;
        return *this;
    }

    // Operador de Incremento Pós-fixado (c++)
    // O int na assinatura é um "dummy parameter" só pra diferenciar.
    // Retorna uma CÓPIA do estado ANTES do incremento.
    Contador operator++(int) {
        Contador copiaAntiga = *this; // Salva o estado atual
        ++valor;                      // Incrementa o original
        return copiaAntiga;           // Retorna o que foi salvo
    }

    void exibir() const {
        cout << "Valor do contador: " << valor << endl;
    }
};

int main() {
    cout << "--- Testando Contador ---" << endl;
    Contador c(5);
    
    cout << "Original: ";
    c.exibir();

    cout << "\nAplicando pre-fixado (++c):" << endl;
    Contador pre = ++c;
    pre.exibir(); // Vai ser 6
    c.exibir();   // Vai ser 6

    cout << "\nAplicando pos-fixado (c++):" << endl;
    Contador pos = c++;
    pos.exibir(); // Vai ser 6 
    c.exibir();   // Vai ser 7 

    return 0;
}