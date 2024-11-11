#include <iostream>
#include <locale.h>

using namespace std;


///EXERCICIO 1
/*
int main(){
    setlocale(LC_ALL, "portuguese");

    string nome;
    cout<<"Qual é o seu nome?"<<endl;
    cin>>nome;
    cout<<"Olá, "<<nome<<endl;
    return 0;
}
*/

///EXERCICIO 2
/*
int main()
{
    setlocale(LC_ALL, "portuguese");

    int nCavalos, nFerraduras;
    cout<<"Qual o número de cavalos comprados?"<<endl;
    cin>>nCavalos;
    nFerraduras = nCavalos * 4;
    cout<<"São necessárias "<<nFerraduras<<" ferraduras."<<endl;
    return 0;
}
*/

///EXERCICIO 3
/*
int main()
{
    setlocale(LC_ALL, "portuguese");

    float salario, conta1, conta2, TxAtraso, restante;
    salario = 1200.00;
    conta1 = 200;
    conta2 = 120;
    TxAtraso = 0.02;
    restante = salario - (conta1*(1+TxAtraso)+conta2*(1+TxAtraso));
    cout<<"Salário restante: "<<restante<<endl;
    return 0;
}
*/

///EXERCICIO 4
/*
int main()
{
    setlocale(LC_ALL, "portuguese");

    float Pqueijo, Ppresunto, Phamburguer, Qsanduiches;
    cout <<"Qual o número de sanduíches?"<<endl;
    cin>>Qsanduiches;
    Pqueijo = 0.05 * 2 * Qsanduiches;
    Ppresunto = 0.05 * 1 * Qsanduiches;
    Phamburguer = 0.1 * 1 * Qsanduiches;
    cout<<"Comprar:\n"<<Pqueijo<<"Kg de queijo;\n"<<Ppresunto<<"Kg de presunto;\n"<<Phamburguer<<"Kg de hamburguer."<<endl;
    return 0;
}
*/

///EXERCICIO 5
/*
int main()
{
    setlocale(LC_ALL, "portuguese");

    float distancia, consumo, Plitro, Pfinal;
    cout<<"Qual a distância em quilômetros?"<<endl;
    cin>>distancia;
    cout<<"Qual o consumo (em quilômeros por litro) do veículo?"<<endl;
    cin>>consumo;
    cout<<"Qual o preço (em reais) do litro do combustível?"<<endl;
    cin>>Plitro;
    Pfinal = distancia/consumo*Plitro;
    cout<<"O valor a ser pago será:\nR$"<<Pfinal<<endl;
    return 0;
}
*/

///EXERCICIO 6
/*
int main()
{
    setlocale(LC_ALL, "portuguese");

    float prova1, prova2, prova3, P1, P2, P3, media, dMedia;
    P1 = 2;
    P2 = 4;
    P3 = 6;
    dMedia = P1 + P2 + P3;
    cout<<"Qual a nota na primeira prova?"<<endl;
    cin>>prova1;
    cout<<"Qual a nota na segunda prova?"<<endl;
    cin>>prova2;
    cout<<"Qual a nota na terceira prova?"<<endl;
    cin>>prova3;
    media = (prova1*P1+prova2*P2+prova3*P3)/dMedia;
    cout<<"Média:"<<media<<endl;
    return 0;
}
*/

///EXERCICIO 7

int main()
{
    setlocale(LC_ALL, "portuguese");

    int alunosC, alunosD, alunosRC, alunosAD;
    float PercentRC, PercentAD, TaxaRC, TaxaAD;
    cout<<"Qual o percentual de reprovação da turma C?\nEscreva apenas o número(Exp:30)"<<endl;
    cin>>PercentRC;
    cout<<"Qual o percentual de aprovação da turma D?\nEscreva apenas o número(Exp:30)"<<endl;
    cin>>PercentAD;
    alunosC = 60;
    alunosD = 20;
    TaxaRC = PercentRC/100;
    TaxaAD = PercentAD/100;
    alunosRC = alunosC*TaxaRC;
    alunosAD = alunosD*TaxaAD:
        ///INCOMPLETO
    return 0;
}








