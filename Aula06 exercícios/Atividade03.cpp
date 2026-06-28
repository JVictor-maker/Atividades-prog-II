#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaDocumentos;

    // Documentos entram na fila
    filaDocumentos.push("Contrato_Aluguel.pdf");
    filaDocumentos.push("Planilha_Custos.xlsx");
    filaDocumentos.push("Foto_Perfil.png");

    cout << "Total de documentos aguardando: " << filaDocumentos.size() << "\n\n";

    // Processando (removendo) os documentos da fila
    while (!filaDocumentos.empty()) {
        // .front() apenas lê o primeiro da fila, .pop() efetivamente o remove
        cout << "Processando documento: " << filaDocumentos.front() << endl;
        filaDocumentos.pop(); 
    }

    cout << "\nTodos os documentos foram processados. Fila vazia." << endl;

    return 0;
}