#ifndef FUNCOES_H
#define FUNCOES_H
#include <iostream>
#include <math.h>
#include <string>
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

int fatorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

//PATH: Aula%20ED/questoes.h
#endif // FUNCOES_H