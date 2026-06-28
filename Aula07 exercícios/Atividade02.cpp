#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string numeroConta;
    double saldo;

public:
    // Construtor: inicia o saldo em 0
    ContaBancaria(string num) {
        numeroConta = num;
        saldo = 0.0; 
    }

    // Apenas getter para o saldo
    double getSaldo() {
        return saldo;
    }

    // Método para depositar
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Deposito de R$" << valor << " realizado na conta " << numeroConta << "." << endl;
        } else {
            cout << "Erro: Valor de deposito invalido." << endl;
        }
    }

    // Método para sacar
    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado na conta " << numeroConta << "." << endl;
        } else {
            cout << "Erro: Saque invalido. Verifique o valor e o seu saldo." << endl;
        }
    }
};

int main() {
    ContaBancaria minhaConta("12345-X");
    
    cout << "Saldo inicial: R$" << minhaConta.getSaldo() << endl;
    
    minhaConta.depositar(500.0);
    cout << "Saldo atual: R$" << minhaConta.getSaldo() << endl;
    
    minhaConta.sacar(150.0);
    cout << "Saldo atual: R$" << minhaConta.getSaldo() << endl;
    
    minhaConta.sacar(1000.0); // Tentativa de sacar mais do que tem

    return 0;
}