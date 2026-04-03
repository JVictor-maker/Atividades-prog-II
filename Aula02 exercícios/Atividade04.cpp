#include <iostream>
#include <string>

using namespace std;

int main(){

    float salario;
    string nome;

    cout <<"informe seu nome: ";
    getline(cin,nome);
    cout <<"informe seu salario: ";
    cin >> salario;

    int reais = (int) salario; //Aqui eu faço uma conversão forçada e pego só a parte inteira do número que o usuário digitou
    float resto = salario - reais; //Faço o salario (float) menos a parte inteira (reais) para obter a parte depois da virgula
    int centavos = (int) (resto * 100); // agora eu faço o resto * 100 para obter outro numero inteiro que vai ficar depois da virgula

    cout <<"seu nome eh: "<< nome <<endl;
    cout <<"seu salario eh: R$" << reais << "." << centavos <<endl;

    return 0;
    
}