//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include <iostream>
#include <string>
#include <algorithm>
#include "StaticStack.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string str;
    int contagem = 0;
    int palindromo = 0;
    StaticStack stack = Create();
    cout << "Insira a frase/palavra para verificar se é um palíndromo : ";
    getline(cin, str);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    int tam = str.length();

    for (int i=0;i<tam;i++){
        Push(stack, str[i]);
    }

    while (contagem < tam){
        if (Top(stack) == str[contagem]){
            Pop(stack);
            palindromo++;
        }
        contagem++;
    }
    if (palindromo == tam){
        cout << "É um palíndromo";
    }
    else{
        cout << "Não é um palíndromo";
    }
}
