#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include "questoes.h"
#include "funcoes.h"

using namespace std;
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
