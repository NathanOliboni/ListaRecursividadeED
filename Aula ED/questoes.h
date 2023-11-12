// configurar para arquivo header
#ifndef QUESTOES_H // include guard
#define QUESTOES_H
#include <iostream>
#include <math.h>
#include <string>
#include "funcoes.h"
using namespace std;

int questao01()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "O somatorio de " << n << " e: " << somatorio(n) << endl;
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

int questao04()
{
    int n1, n2;
    cout << "Informe um numero n1: " << endl;
    cin >> n1;
    cout << "Informe um numero n2: " << endl;
    cin >> n2;
    cout << n1 << " multiplicado por " << n2 << " e: " << multRec(n1, n2) << endl;
}

int questao05()
{
    int n, k;
    cout << "Informe a quantidade de pessoas: " << endl;
    cin >> n;
    cout << "Informe a quantidade quantos grupos terão: " << endl;
    cin >> k;
    cout << "A quantidade de pessoas por grupo é: " << qntdGrupos(n, k) << endl;
}

int questao06()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "A soma dos dígitos do número é:" << somaDigitos(n) << endl;
}

int questao07()
{
    int x, y;
    cout << "Informe um numero x: " << endl;
    cin >> x;
    cout << "Informe um numero y: " << endl;
    cin >> y;
    cout << "O MDC de " << x << " e " << y << " e: " << mdc(x, y) << endl;
}

int questao08()
{
    int n;
    cout << "Informe um numero para mostrar sua na sequencia: " << endl;
    cin >> n;
    cout << "O numero " << n << " na sequencia de tribonacci e: " << tribonacci(n + 1) << endl;
    cout << "O numero " << n << " na sequencia de padovan e: " << padovan(n - 1) << endl;
    // Tive que colocar o n+1 na tribonacci e o n-1 na padovan pois em um estava retornando um numero a menos e no outro um numero a mais, respectivamente
    return 0;
}

int questao09()
{
    int a, b;
    cout << "Informe um numero a: " << endl;
    cin >> a;
    cout << "Informe um numero b: " << endl;
    cin >> b;
    cout << "A multiplicacao russa de " << a << " por " << b << " e: " << multRussa(a, b) << endl;
}

int questao10()
{
    int n;
    cout << "Informe um numero:" << endl;
    cin >> n;
    cout << "O numero " << n << " na palavra de fibonacci e: " << palFibonacci(n - 1) << endl;
}

int questao11()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "O numero " << n << " na sequencia de padovan e: " << padovan(n - 1) << endl;
}

int questao12()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "O numero fatorial quadruplo de " << n << "  e: " << fatorial(2 * n) / fatorial(n) << endl;
}

//PATH: Aula%20ED/funcoes.h
#endif // QUESTOES_H