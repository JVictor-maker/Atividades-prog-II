#include <iostream>

using namespace std;

int main(){

    float saldo = 1000.0;
    double valor;
    int opcao = 0;

    while (opcao != 4) {
        cout <<"-----menu do Caixa-----"<<endl;

        cout <<"Escolha uma opcao: ";
        cout <<"Opcao 1. Ver saldo"<<endl;
        cout <<"Opcao 2. Depositar"<<endl;
        cout <<"Opcao 3. sacar"<<endl;
        cout <<"Opcao 4. sair"<<endl;       
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout <<"Saldo: R$"<<saldo<<endl;
            break;

        case 2:
            cout <<"Valor do deposito: ";
            cin >> valor;
            if (valor > 0){
                saldo += valor;
                cout <<"Deposito realizado."<<endl;
            }
            else{
                cout <<"Valor invalido!"<<endl;
            }
            break;

        case 3:
            cout <<"Informe o valor de saque: ";
            cin >> valor;
            if (valor > 0 && valor <= saldo){
                saldo -= valor;
                cout <<"Saque realizado."<<endl;
            }
            else if (valor > 0 && valor > saldo){
                cout <<"saldo insuficiente"<<endl;
            }
            else {
                cout <<"valor invalido!"<<endl;
            }
            break;

        case 4:
            cout <<"Encerrando o Progama."<<endl;
            break;

        default:
            cout <<"opcao invalida!"<<endl;
            break;
        }

    }

    return 0;
    
}