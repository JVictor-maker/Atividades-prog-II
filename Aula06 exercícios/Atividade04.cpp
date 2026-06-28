#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> editor;
    string palavra;
    int opcao;

    do {
        cout << "\n--- Editor de Texto (Pilha) ---" << endl;
        cout << "1. Digitar palavra (push)" << endl;
        cout << "2. Desfazer ultima palavra (pop)" << endl;
        cout << "3. Ver ultima palavra (top)" << endl;
        cout << "4. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite a palavra: ";
                cin >> palavra;
                editor.push(palavra);
                cout << "Palavra '" << palavra << "' inserida." << endl;
                break;
            case 2:
                if (!editor.empty()) {
                    cout << "Desfazendo... removendo a palavra: '" << editor.top() << "'" << endl;
                    editor.pop();
                } else {
                    cout << "O editor ja esta vazio." << endl;
                }
                break;
            case 3:
                if (!editor.empty()) {
                    cout << "Ultima palavra no topo: " << editor.top() << endl;
                } else {
                    cout << "O editor esta vazio." << endl;
                }
                break;
            case 4:
                cout << "Fechando o editor..." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    } while (opcao != 4);

    return 0;
}