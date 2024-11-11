#include <iostream>

using namespace std;

int main()

///int n1, n2, n3;

////float numero, numero_final; Errado
///int numero, numero_final; Correção

    ///cout << "Digite uma data no formato ddmmaa" << endl;
    ///cin >> numero;
    ///n1 = numero / 10000;
    ///n2 = (numero % 10000) / 100;
    ///n3 = numero % 100;

    //numero_final = n1 * 10000 + n2 * 100 + n3; Errado
    /// numero_final = n2 * 10000 + n1 * 100 + n3; Correção

    ///cout << "\nNovo formato = "<<numero_final<<endl;
    ///return 0;
{
    int n1, n2, n3, numero, numero_final;

    cout << "Digite uma data no formato ddmmaa" << endl;
    cin >> numero;

    n1 = numero / 10000;
    n2 = (numero % 10000) / 100;
    n3 = numero % 100;

    numero_final = n2 * 10000 + n1 * 100 + n3;

    cout << "\nNovo formato = "<<numero_final<<endl;
    return 0;
}
