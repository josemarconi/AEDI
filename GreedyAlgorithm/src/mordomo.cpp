#include "mordomo.hpp"

void Show(vector<vector<int>> matrix, int line) //Função para imprimir as matrizes//
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl << endl;
}

void Moving(vector<vector<int>> matrix, int line, int *somaTotal) //Função para caminhar nas matrizes//
{
    int right, left, down, diagonalR, diagonalL, row = 0, columns = 0, consumed = 0;

    consumed = matrix[0][0];

    cout << endl << endl << "EATEM" << endl << endl;

    while(1)
    {
        if (consumed == matrix[0][0]) //Condição inicial, para pegar a primeira posição da Matriz//
        {
            matrix[0][0] = -1;       //mudando o valor da primeira posição para -1//

            right = matrix[row][columns + 1];              //guardando o valor da posição a direita da inicial
            down = matrix[row + 1][columns];              //guardando o valor da posição a baixo da inicial
            diagonalR = matrix[row + 1][columns + 1];    //guardando o valor da posição a diagonal direita da inicial

            if (diagonalR >= right && diagonalR >= down)    //Essas três condições averiguam para onde vai "Greedy", em que,
            {                                              //ele sempre vai atrás do maior valor, e mesmo no caso de igualdade,
                consumed = consumed + diagonalR;          //sempre tera uma ordem de prioridade, sendo Diagonal Direita -> Baixo ->
                matrix[row + 1][columns + 1] = -1;       //Direita. E, nessas condições além de pegar o valor inicial, ja pega o da próxima casa
                                                        //soma seu valor ao anterior e "seta" o valor da segunda casa pega em -1 também //
                row = row + 1;
                columns = columns + 1; 
            }
            else if (down >= diagonalR && down >= right)
            {
                consumed = consumed + down;
                matrix[row + 1][columns] = -1;

                row = row + 1;
            }
            else if (right >= diagonalR && right >= down)
            {
                consumed = consumed + right;
                matrix[row][columns + 1] = -1;

                columns = columns + 1; 
            }
        }
        else                                        //Depois de pegar as duas posições iniciais, ele continua a sua "full meal" //
        {                                                     
            if(row == (line - 1))                   //Essa condição é para quando "Greedy" chegar a ultima linha, em que ele só pode caminhar
            {                                       //para a direita a partir daí. //
                right = matrix[row][columns + 1];

                consumed = consumed + right;
                matrix[row][columns + 1] = -1;

                columns = columns + 1; 
            }
            else                                            // As demais condições são como as para pegar as primeiras casas, mas com a adição de "left"
            {                                               //e "DiagonalL", trazendo a prioridade de movimentação para Diagonal Direita -> Baixo -> 
                right = matrix[row][columns + 1];           //Diagonal Esquerda -> Direita -> Esquerda. Outro detalhe é que, para manter o controle 
                left = matrix[row][columns - 1];            //sempre que passa para uma linha de baixo é guardado o número da linha e/ou da coluna
                down = matrix[row + 1][columns];            //sendo que quando ele caminha para esquerda ou diagonal esquerda o valor da coluna reduz em 1. // 
                diagonalR = matrix[row + 1][columns + 1];
                diagonalL = matrix[row + 1][columns - 1];

                if (diagonalR >= right && diagonalR >= down && diagonalR >= diagonalL && diagonalR >= left)
                {
                    consumed = consumed + diagonalR;
                    matrix[row + 1][columns + 1] = -1;

                    row = row + 1;
                    columns = columns + 1; 

                }
                else if (down >= diagonalR && down >= right && down >= diagonalL && down >= left)
                {
                    consumed = consumed + down;
                    matrix[row + 1][columns] = -1;

                    row = row + 1;
                }
                else if(diagonalL >= right && diagonalL >= down && diagonalL >= diagonalR && diagonalL >= left)
                {
                    consumed = consumed + diagonalL;
                    matrix[row + 1][columns - 1] = -1;

                    row = row + 1;
                    columns = columns - 1;
                }
                else if (right >= diagonalR && right >= down && right >= diagonalL && right >= left)
                {
                    consumed = consumed + right;
                    matrix[row][columns + 1] = -1;

                    columns = columns + 1; 
                }
                else if(left >= diagonalR && left >= down && left >= diagonalL && left >= right)
                {
                    consumed = consumed + left;
                    matrix[row][columns - 1] = -1;

                    columns = columns - 1; 
                }
            }
        }

        if (row == (line - 1) && columns == (line - 1))          //O controle do valor das linha e colunas é para essa condição, em que, quando ambas chegam ao máximo -  
        {                                                        //em que no código o máximo é o o tamanho da linha/colunas da Matriz - 1, ja que são quadráticas, que é dada
            break;                                              //pela variável "line" - a condição quebra o while e termina uma matriz para pular para a próxima ou terminar o programa.
        }
    }

    Show(matrix, line);

    *somaTotal = *somaTotal + consumed;                         //Soma os valores totais de todas as matrizes//

    cout << endl << "Consumed: " << consumed << endl;        //Aqui mostra o valor total consumido pelo "Greedy" //
    cout << endl << "-------------------------------------------------------------" << endl << endl;
}

void Read()                                 //Função para ler o arquivo e armazenar as matrizes em uma matriz de "vector"//
{
    string arqName("dataset/input.data");
    string sizeMatrix, aux;
    int line, cont = 0, mm = 0, somaTotal = 0;
    ifstream arq(arqName);
    vector <int> matrixLine;
    vector<vector<int>> matrix;

    if(!arq)                                            //Averigua se foi possível abrir o arquivo//
    {
        cout << endl << "Não foi possível abrir o arquivo de entrada: " << endl << endl << "Saindo do programa!!!" << endl;
        exit(-1);
    }
    while (!arq.eof())                                  //Um loop para caminhar até o fim do arquivo//
    {
        while (getline(arq, sizeMatrix, '\n'))          //Outro loop para ler as linhas do arquivo, até o \n//
        {
            stringstream token(sizeMatrix);             //Aqui ele pega cada valor da linha separadamente, quebrando a string em pedaços// 

            if(cont == 0)                               //Já que a primeira linha do arquivo tem o tamanho das matrizes, aqui armazena o valor na variavel line//
            {
                line = atoi(sizeMatrix.c_str());        //Função "atoi" para transformar a string em tipo int //
                cont++;
                continue; 
            }
            else if(sizeMatrix.size() > 1)                                     
            {
                while(token >> aux)                     //armazenar os avalores da matriz do arquivo, tokenizando as linhas e transformando para int//
                {
                    matrixLine.push_back(atoi(aux.c_str()));
                }

                matrix.push_back(matrixLine);           

                matrixLine.clear();                     //limpando os vetores//
                aux.clear();
            }
            else
            {  
                cout << endl << "[" << mm + 1 << "]" << endl;
                mm = mm + 1;

                Show(matrix, line);
                Moving(matrix, line, &somaTotal);

                matrix.clear();                         //limpando a matriz//
            }
        }
    }

    cout << endl << "Soma Total de todas as matrizes: " << somaTotal << endl << endl << endl;
    cout << endl << "-------------------------------------------------------------" << endl << endl;
}