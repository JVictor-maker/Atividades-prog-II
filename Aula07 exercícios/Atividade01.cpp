#include <iostream>
#include <string>

using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;

public:
    // Construtor
    Gato(string n, int i, double p) {
        nome = n;
        idade = i;
        // Chama o setter para aproveitar a validação logo na criação
        setPeso(p);
    }

    // Setter com a validação pedida
    void setPeso(double p) {
        if (p > 0) {
            peso = p;
        } else {
            cout << "Erro: O peso deve ser maior que zero!" << endl;
            // Só pra não ficar com um valor zoado caso dê erro na criação
            if (peso <= 0) peso = 1.0; 
        }
    }

    void exibirGato() {
        cout << "Gato: " << nome << " | Idade: " << idade << " anos | Peso: " << peso << "kg" << endl;
    }
};

int main() {
    cout << "Criando um gato normal:" << endl;
    Gato gato1("Garfield", 5, 4.5);
    gato1.exibirGato();

    cout << "\nTentando criar um gato com peso negativo:" << endl;
    Gato gato2("Frajola", 3, -2.0);
    gato2.exibirGato();

    return 0;
}