# Algoritimo Guloso: Caminhando na Matriz

<div style="display: inline-block;">    
<img align="center" height="20px" width="60px" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/> 
<img align="center" height="20px" width="80px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>

<p> </p>
<p> </p>


<p align="justify">
O código trata de ler um número N de matrizes de tamanho M x M de um arquivo e caminhar sobre elas sempre adquirindo os maiores valores possíveis dentro das regras impostas para movimentação, sendo elas:

|                        |  Regras                                                                                           |
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `1`                   | Não se pode retornar a mesma casa já passada;                                                     |
|  `2`                   | Ápos descer uma linha, não é permitido subir novamente;                                           |
|  `3`                   | É autorizado andar em diagonais, para baixo, direita e esquerda;                                  |
|  `4`                   | Quando chegar a última linha, só é permitido andar para a direita.                                |

<p> </p>

<p> </p>

<p align="justify">
Dessa forma, o algoritimo inicia com uma função, (<i>Read</i>), para ler o arquivo (<i>input.data</i>) onde estão as matrizes para armazená-las em um vector. As funções se encontram todas no arquivo mordomo.cpp.

<p> </p>

As demais funções são chamadas dentro dessa função(<i>Read</i>), sendo elas:

| Função                                                                                                                                                                                    |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|  `Moving`                                                                                                                                                                                 |
|  `Show`                                                                                                                                                                                   |
  
<p align="justify"> Na função <i>Moving</i> é salvo o valor da primeira posição da matriz (matriz[0][0]) e o valor da posição passa a ser -1, que indica a casa pela qual o algoritimo passou (linhas 20 e 28). Após definida a posição inicial, o algoritimo segue a movimentação entrando em algumas condições, seguindo as regras impostas (linhas 24 a 121). Tendo como prioridade de movimentação sempre a casa com o maior valor. Em caso de número iguais, é utilizado as condições em forma da seguinte prioridade: Diagonal Direita -> Direita -> Baixo -> Diagonal Esquerda -> Esquerda, caso chegue a última linha da matriz, ele só caminhará para a direita (linhas 59 a 67). A iteração do algoritimo termina quando o valor das variáveis <i>row</i> e <i>columns</i> for igual ao tamanho da matriz - 1, linha e coluna respectivamente (linhas 117 a 120).

|                                                                                                                                                                                           |
| ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|  `row`    ->  A cada linha descida, aumenta o valor da variável em 1;                                                                                                                     |
|  `columns` ->  Direita e Diagonal Direita somado 1; Esquerda e Diagonal Esquerda subtraido 1.                                                                                             |


<p align="justify"> Dentro da função ainda é realizada as somas. O valor de cada casa é armazenada em uma variável[<i>Consumed</i>] e sempre somada ao valor da casa anterior, dando a soma total percorrida na matriz, isso tudo feito quando se entra em alguma condição(<i>If, Else If, Else</i>). Há também a soma dos valores totais, em que pega o valor total anterior e soma com os da matrizes seguintes, dando o valor total percorrido em todas as matrizes (linha 125). 

</p>

<p align="justify"> Na função <i>Show</i>, é utilizada apenas para impirmir a matriz na tela, é chamada assim que a matriz é transportada para o vector, e após percorrer o caminho. 

# Observações

<p align="justify">
<span color="red"> 1:</span> Note no código que o arquivo input.data está sendo direcionado para uma pasta chamada dataset. Ao clonar o repositório ou baixar o zip essa pasta pode não ser contemplada como parte da hierarquia da aplicação, então, não esqueça de criá-la antes de iniciar a execução. Caso contrário, um erro de arquivo não encontrado surgirá como retorno.

<p align="justify">
<span color="red">2:</span> Dado a forma que foi feita a função <i>Moving</i>, ela só funcionara para casos de matrizes quadráticas. 
</p>


# Especificações do Dispositivo utilizado

|                                                                                                                            |
| -------------------------------------------------------------------------------------------------------------------------- |
|  `Processador`         -> Intel(R) Core(TM) i7-8565U CPU @ 1.80GHz   1.99 GHz                                              |
|  `RAM Instalada`       -> 16.0 GB (utilizável: 15.8 GB)                                                                    |
|  `Tipo de Sistema`     -> Sistema operacional de 64 bits, processador baseado em x64                                       |
|  `Sistema Operacional` -> Edição Windows 10 Home Single Language, versão 21H2                                              |


# Compilação e Execução

Esse pequeno exemplo possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


# Contatos

<div style="display: inline-block;">
<a href="https://t.me/jmarconia">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Telegram-2CA5E0?style=for-the-badge&logo=telegram&logoColor=white"/> 
</a>

<a href="https://www.linkedin.com/in/jmarconi-almeida/">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"/>
</a>

</div>

<p> </p>

<a style="color:black" href="mailto:jmarconiadm@outlook.com?subject=[GitHub]%20Source%20Dynamic%20Lists">
✉️ <i>jmarconiadm@outlook.com</i>
</a>
