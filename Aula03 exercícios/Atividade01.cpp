#include <iostream>

using namespace std;

int main(){

    int idade , Niveis;

    cout <<"informe a sua idade: ";
    cin >> idade;

    if (idade < 16){
        cout <<"Acesso negado";
    }
    else if (idade == 16 || idade == 17){
        cout <<"Precissa de autorizacao";
    }
    else {idade >= 18;
        cout <<"Acesso liberado"<<endl;

        cout <<"Acesso com niveis (1 a 3): ";
        cin >> Niveis;

        switch (Niveis) {

        case 1:
            cout <<"Nivel Basico";
            break;

        case 2:
            cout <<"Nivel Intermediario";
            break;

        case 3:
            cout <<"Acesso Total";
            break;
        
        default:
            cout <<"Nivel invalido";
            break;
        }
    }
    
    return 0;

}