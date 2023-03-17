#include "mordomo.hpp"

int main()
{
    cout << endl << '\t' << "----- Starting the greedy algorithm -----" << endl << endl;

    Read();

    return 0;
}

//  O código se trata de ler um número N de matrizes de tamanho M x M e caminhar sobre elas sempre adquirindo os maiores valores possíveis dentro das regras
// impostas, sendo elas:
//  [1] Não se pode retornar a mesma casa já passada;
//  [2] Ápos descer uma linha, não é permitido subir novamente;
//  [3] É autorizado andar em diagonais, para baixo, direita e esquerda;
//  [4] É necessário mostrar o caminho percorrido no final;
//  [5] É necessário mostrar a soma total dos valores de cada casa passada na matriz.
//  [6] Somar os valores do item 5 e ter o valor total de todas as matrizes.