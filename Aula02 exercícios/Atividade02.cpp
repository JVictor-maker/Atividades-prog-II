#include <iostream>
#include <string>

using namespace std;

int main(){

    int A;
    float B;
    string nome;

    cout <<"Digite seu nome completo: ";
    getline (cin,nome);
    cout <<"Digite sua idade: ";
    cin >> A;
    cout <<"Digite sua altura: ";
    cin >> B;

    cout <<"seu nome eh: "<< nome <<endl;
    cout <<"sua idade eh: "<< A <<endl;
    cout <<"sua altura eh: "<< B <<endl;
    
    return 0;

}