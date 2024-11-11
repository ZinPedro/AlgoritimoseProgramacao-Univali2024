#include <iostream>
#include <locale.h>

using namespace std;


///EXERCICIO 1

int main()
{
    setlocale(LC_ALL, "portuguese");

    string nome;
    cout<<"Qual é o seu nome?"<<endl;
    cin>>nome;
    cout<<"Olá, "<<nome<<endl;
    return 0;
}

/*
///EXERCICIO 2

int main()
{
    setlocale(LC_ALL, "portuguese");

    int nCavalo, nFerrage
    return 0;
}
*/

