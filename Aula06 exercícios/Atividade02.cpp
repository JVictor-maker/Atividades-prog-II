#include <iostream>
#include <list>

using namespace std;

void imprimeLista(const list<int>& l) {
    cout << "Itens na lista: ";
    for (int item : l) {
        cout << item << " ";
    }
    cout << "\nTamanho atual (size): " << l.size() << "\n\n";
}

int main() {
    list<int> minhaLista;

    cout << "Inserindo itens..." << endl;
    minhaLista.push_back(10);  // Coloca no final
    minhaLista.push_front(20); // Coloca no início
    minhaLista.push_back(30);  // Coloca no final
    minhaLista.push_front(40); // Coloca no início
    
    imprimeLista(minhaLista);

    int valorParaRemover = 20;
    cout << "Removendo o valor " << valorParaRemover << "..." << endl;
    minhaLista.remove(valorParaRemover);

    imprimeLista(minhaLista);

    return 0;
}