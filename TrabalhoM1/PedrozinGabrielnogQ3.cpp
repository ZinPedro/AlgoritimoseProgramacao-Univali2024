#include <iostream>

using namespace std;

int main()
{
    int amigo1, amigo2, amigo3, custoCartela, premio, premioPorInvestimento, amigo1Saida, amigo2Saida, amigo3Saida;
    cout << "Quantos reais a primeira pessoa investiu?" << endl;
    cin>>amigo1;
    cout << "Quantos reais a segunda pessoa investiu?" << endl;
    cin>>amigo2;
    cout << "Quantos reais a terceira pessoa investiu?" << endl;
    cin>>amigo3;
    cout << "Qual e o premio em reais?" << endl;
    cin>>premio;
    custoCartela = amigo1 + amigo2 + amigo3;
    premioPorInvestimento = premio / custoCartela;
    amigo1Saida = premioPorInvestimento * amigo1;
    amigo2Saida = premioPorInvestimento * amigo2;
    amigo3Saida = premioPorInvestimento * amigo3;

    cout << "A primeira pessoa recebe: " << amigo1Saida << endl;
    cout << "A segunda pessoa recebe: " << amigo2Saida << endl;
    cout << "A terceira pessoa recebe: " << amigo3Saida << endl;

    return 0;
}
