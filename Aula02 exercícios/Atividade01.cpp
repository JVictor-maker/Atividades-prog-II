#include <iostream>
#include <string>

using namespace std;

int main(){

    int A;
    string nome;

    cout <<"Digite seu nome completo: ";
    getline (cin,nome);
    cout <<"Digite sua idade: ";
    cin >> A;

    cout <<"seu nome eh: "<< nome <<endl;
    cout <<"sua idade eh: "<< A <<endl;
    
    return 0;

}