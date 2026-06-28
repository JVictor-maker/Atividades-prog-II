#include <iostream>

using namespace std;

class Termometro {
private:
    double temperaturaCelsius;

public:
    // Construtor: inicia em 25.0
    Termometro() {
        temperaturaCelsius = 25.0; 
    }

    // Setter com bloqueio do zero absoluto
    void setTemperaturaCelsius(double temp) {
        if (temp >= -273.15) {
            temperaturaCelsius = temp;
            cout << "Temperatura ajustada para " << temperaturaCelsius << "C" << endl;
        } else {
            cout << "Erro: Impossivel atingir temperaturas abaixo do zero absoluto (-273.15C)!" << endl;
        }
    }

    // Getter Celsius
    double getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    // Getter Fahrenheit (calcula na hora)
    double getTemperaturaFahrenheit() {
        return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    }
};

int main() {
    Termometro termo;
    
    cout << "Temperatura inicial em Celsius: " << termo.getTemperaturaCelsius() << "C" << endl;
    cout << "Temperatura inicial em Fahrenheit: " << termo.getTemperaturaFahrenheit() << "F" << endl;
    
    cout << "\nTestando uma temperatura valida:" << endl;
    termo.setTemperaturaCelsius(30.0);
    cout << "Nova temperatura em Fahrenheit: " << termo.getTemperaturaFahrenheit() << "F" << endl;

    cout << "\nTestando o limite do zero absoluto:" << endl;
    termo.setTemperaturaCelsius(-300.0); // Vai barrar

    return 0;
}