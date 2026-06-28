#include <iostream>

using namespace std;

int main() {
    // Declarando e inicializando as variáveis
    int x = 10;
    int y = 25;

    // Exibindo o conteúdo e o endereço de x
    cout << "Conteudo de x: " << x << endl;
    cout << "Endereco de memoria de x: " << &x << endl;

    // Exibindo o conteúdo e o endereço de y
    cout << "Conteudo de y: " << y << endl;
    cout << "Endereco de memoria de y: " << &y << endl;

    return 0;
}