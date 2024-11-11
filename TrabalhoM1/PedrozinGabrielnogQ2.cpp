#include <iostream>

using namespace std;

int main()
{
    float cigarrosFumadosDia, cigarrosFumadosTotal, anosFumando, diasFumando, diasPerdidos, minutosPerdidos;
    cout << "Quantos cigarros voce fuma por dia?" << endl;
    cin>>cigarrosFumadosDia;
    cout << "A quantos anos voce fuma?" << endl;
    cin>>anosFumando;
    diasFumando = anosFumando * 365;
    cigarrosFumadosTotal = cigarrosFumadosDia * diasFumando;
    minutosPerdidos = cigarrosFumadosTotal * 10;
    diasPerdidos = minutosPerdidos / 60 / 24;
    cout << diasPerdidos<<endl;

    return 0;
}
