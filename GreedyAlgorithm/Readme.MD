# Algoritimo Guloso: Caminhando na Matriz

<div style="display: inline-block;">
<img align="center" height="20px" width="90px" src="https://img.shields.io/badge/Maintained%3F-yes-green.svg"/> 
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

<p align="justify">
Dessa forma, o algoritimo inicia com uma função, (<i>Read</i>), para ler o arquivo de matrizes e armazená-las em um vector. As demais funções são chamadas dentro dessa função também, sendo elas:

| Função                 |  Funcionalidade                                                                                                                           |
| -----------------------| ----------------------------------------------------------------------------------------------------------------------------------------- |
|  `Moving`          | <p align="justify"> a função tem como objetivo caminhar nas matrizes coletando os valores das posições e somando-os trocando os valores por -1, sendo sempre a primeira posição escolhida a primeira posição da matriz ( matriz[0][0] ). O caminho é escolhido por uma ordem predefinida de condições, em que a prioridade é sempre pegar o maior valor. Em caso de valores iguais há sempre uma ordem de prioridade para caminhar, sendo: [Diagonal Direita -> Baixo -> Direita -> Diagonal Esquerda -> Esquerda] porém, caso esteja na ultima linha, ele apenas caminhará para a direita. Dentro da função também é somado o valor total percorrido de cada matriz e também o valor total da soma de todas as matrizes.                                        |
|  `Show`                | Mostrar a matriz na tela. É chamada antes de caminhar na matriz, e após caminhar para mostrar o caminho percorrido.                       |

  
  
</p>

<p align="justify">
<span color="red">Observação:</span> Note no código que o arquivo input.data está sendo direcionado para uma pasta chamada dataset. Ao clonar o repositório ou baixar o zip essa pasta pode não ser contemplada como parte da hierarquia da aplicação, então, não esqueça de criá-la antes de iniciar a execução. Caso contrário, um erro de arquivo não encontrado surgirá como retorno.
</p>


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
