#include <iostream>
#include <math.h>
using namespace std;

int somatorio(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + somatorio(n - 1);
    }
}

int questao01()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "O somatorio de " << n << " e: " << somatorio(n) << endl;
}

int eleva(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * eleva(x, n - 1);
    }
}

int questao02()
{
    int x, n;
    cout << "Informe um numero n: " << endl;
    cin >> n;
    cout << "Informe um numero x: " << endl;
    cin >> x;
    cout << x << " elevado a " << n << " e: " << eleva(x, n) << endl;
}

float somaVetor(float vetor[], int n)
{
    if (n == 0)
    {
        return vetor[0];
    }
    else
    {
        return vetor[n] + somaVetor(vetor, n - 1);
    }
}

float questao03()
{
    int n;
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> n;
    float vetor[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Informe o valor da posiaoo " << i << " do vetor: " << endl;
        cin >> vetor[i];
    }
    cout << "A soma dos elementos do vetor e: " << somaVetor(vetor, n) << endl;
}

int multRec(int n1, int n2)
{
    if (n2 == 0)
    {
        return 0;
    }
    else
    {
        return n1 + multRec(n1, n2 - 1);
    }
}

int questao04()
{
    int n1, n2;
    cout << "Informe um numero n1: " << endl;
    cin >> n1;
    cout << "Informe um numero n2: " << endl;
    cin >> n2;
    cout << n1 << " multiplicado por " << n2 << " e: " << multRec(n1, n2) << endl;
}

int qntdGrupos(int n)
{
}

int questao05()
{
    int n;
    cout << "Informe a quantidade de pessoas: " << endl;
    cin >> n;
}

int questao06()
{
    cout << "Em construcao..." << endl;
}
int questao07()
{
    cout << "Em construcao..." << endl;
}

int main()
{
    int questao = 0;
    do
    {
        cout << "Informe qual questao deseja executar: " << endl;
        cout << "1 - Questao 01" << endl;
        cout << "2 - Questao 02" << endl;
        cout << "3 - Questao 03" << endl;
        cout << "4 - Questao 04" << endl;
        cout << "5 - Questao 05" << endl;
        cout << "6 - Questao 06" << endl;
        cout << "7 - Questao 07" << endl;
        cout << "0 - Sair" << endl;
        cin >> questao;
        switch (questao)
        {
        case 1:
            questao01();
            break;
        case 2:
            questao02();
            break;
        case 3:
            questao03();
            break;
        case 4:
            questao04();
            break;
        case 5:
            questao05();
            break;
        case 6:
            questao06();
            break;
        case 7:
            questao07();
            break;
        case 0:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Questão inválida!" << endl;
            break;
        }
    } while (questao != 0);
}

// Path: listarecursividade.cpp
