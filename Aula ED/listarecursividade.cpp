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
        return x * eleva(x, n - 1); // x elevado a n = x * x elevado a n - 1
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
        return vetor[n] + somaVetor(vetor, n - 1); // soma dos elementos do vetor = vetor[n] + soma dos elementos do vetor - 1
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

int qntdGrupos(int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == k)
    {
        return 1;
    }
    else
    {
        return 1 + qntdGrupos(n - k, k); // quantidade de grupos = 1 + quantidade de grupos - k
    }
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

int somaDigitos(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + somaDigitos(n / 10); // soma dos digitos do numero = resto da divisão de n por 10 + soma dos digitos do numero / 10
    }
}

int questao06()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "A soma dos dígitos do número é:" << somaDigitos(n) << endl;
}

int mdc(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return mdc(y, x % y); // x % y = resto da divisão de x por y
    }
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

int tribonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3); // tribonacci = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3)
    }
}

int padovan(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int result = padovan(n - 2) + padovan(n - 3);
        return result;
    }
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

int multRussa(int a, int b)
{
    if (a == 1)
    {
        return b;
    }
    else if (a % 2 == 0)
    {
        return multRussa(a / 2, b * 2);
    }
    else
    {
        return b + multRussa(a / 2, b * 2);
    }
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

string palFibonacci(int n)
{
    if (n == 0)
    {
        return "b";
    }
    else if (n == 1)
    {
        return "a";
    }

    else
    {
        return palFibonacci(n - 1) + palFibonacci(n - 2); // palFibonacci = palFibonacci(n - 1) + palFibonacci(n - 2)
    }
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

int fatQuad(int n)
{
    cout << "Em construcao....." << endl;
}

int questao12()
{
    int n;
    cout << "Informe um numero: " << endl;
    cin >> n;
    cout << "O numero fatorial quadruplo de " << n << "  e: " << fatQuad(n) << endl;
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
        cout << "8 - Questao 08" << endl;
        cout << "9 - Questao 09" << endl;
        cout << "10 - Questao 10" << endl;
        cout << "11 - Questao 11" << endl;
        cout << "12 - Questao 12" << endl;
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
        case 8:
            questao08();
            break;
        case 9:
            questao09();
            break;
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
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
