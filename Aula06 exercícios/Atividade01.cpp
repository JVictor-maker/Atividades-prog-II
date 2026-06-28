#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Código original:
    // int *ptr = new int(42);
    // delete ptr;

    // Código refatorado:
    unique_ptr<int> ptr = make_unique<int>(42);
    
    cout << "Valor armazenado: " << *ptr << endl;

    return 0;
}