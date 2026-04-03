#include <iostream>
#include <string>

using namespace std;

int main(){

    float N1 , N2 , N3;
    string aluno;
    int idade;

    cout <<"Digite seu nome completo: ";
    getline (cin,aluno);
    cout <<"Digite sua idade: ";
    cin >> idade;
    cout <<"informe as 3 notas (clique em espaço antes de digitar as outras notas): ";
    cin >> N1 >> N2 >> N3;

    float media = (N1 + N2 + N3) / 3;

    int mediaint = (int) media;
    float mediadec = (media - mediaint);
    int mediaf = (int) (mediadec * 100);

    cout<<"-------Informacoes do Aluno-------\n";

    cout <<"Aluno: "<< aluno <<endl;
    cout <<"Idade: "<< idade <<endl;
    cout <<"Nota_1: "<< N1 <<" |Nota_2: "<< N2 <<" |Nota_3: "<< N3 <<endl;
    cout <<"Media Final: "<< mediaint <<"."<< mediaf <<endl;

    cout<<"----------------------------------\n";

    return 0;

}