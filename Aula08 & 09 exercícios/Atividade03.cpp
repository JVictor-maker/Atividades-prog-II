#include <iostream>
#include <string>
#include <utility> 

using namespace std;

class StringSegura {
private:
    string texto;

public:
    StringSegura(string t) : texto(t) {}

    // Deleta o construtor de cópia
    StringSegura(const StringSegura&) = delete;
    
    // Deleta o operador de atribuição de cópia
    StringSegura& operator=(const StringSegura&) = delete;

    // Habilita construtor de movimento
    StringSegura(StringSegura&&) = default;
    
    // Habilita operador de atribuição de movimento
    StringSegura& operator=(StringSegura&&) = default;

    void mostrar() {
        cout << "Texto guardado: " << texto << endl;
    }
};

int main() {
    cout << "--- Testando StringSegura ---" << endl;
    
    StringSegura s1("Arquivos confidenciais do projeto");
    s1.mostrar();

    // StringSegura s2 = s1; 
    
    // Mas a movimentação é permitida usando std::move
    StringSegura s3 = std::move(s1);
    cout << "\nObjeto movido com sucesso para s3!" << endl;
    s3.mostrar();

    return 0;
}