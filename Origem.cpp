#include <iostream>
#include "modulo.h"  // Incluindo o cabeçalho com a declaração da função
using namespace std;

// declaração de var. e exibindo saidas com iteração do user
void var() {

    int vidas = 0; //var inteira
    char letra = 'b'; //var letra 'b'
    double decimal = 5.2; //var decimal '2,5'
    float decimal2 = 5.2; //var ponto flutuante
    bool vivo = true; // true ou false
    string texto = "bruno"; //var que reecebe 'texto'

    cout << "Digite o numero de vidas: ";
    cin >> vidas;
   
    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Digite um numero decimal: ";
    cin >> decimal;

    
    cout << "Digite seu nome: ";
    cin >> texto;
    
    cout << "Valores descritos:\n" << "\nVidas: " << vidas << "\nLetra: " << letra << "\nDecimal: " << decimal << "\nTexto: " << texto;
}


// declaração de multiplas var. constantes
#define name "rei";
void constante() {

    int vidas, life;
    cout << "\n" << name;
}

// var. globais e operadores
int n1, n2; // var globais
void globais(){

    int n3, n4; //var locais
    int res;

    // operadores matematicos: + - / * % ()
    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2) - (n3 * n4);
    cout << "\nSomas: " << res;
}


void incremento() {

    int n1, n2;
    n1 = 0;
    n2 = 10;

    cout << n1 << "\n";

    n1 += 1 ;
    cout << n1 << "\n";

}