# MD_Fractal
Esse trabalho prático foi desenvolvido com a linguagem de programação C com auxílio de Python e sua biblioteca gráfica turtle. O Trabalho aborda, em suma, de fractais, esses que são uma forma ou padrão geométrico que exibe auto-semelhança, ou seja, padrões, em diferentes escalas ou ampliações. Para esse projeto, foram exigidos a criação de três programas, um para cada fractal. Seguindo as orientações, os programas para os fractais os quais eu fiquei com a responsabilidade de p10duzir foram, respectivamente, a Ilha de Koch, o reenchimento de espaço de Hilbert e mais um fractal definido por mim que gera uma cadeia de polígonos simples que possui pelo menos duas regras.
A ferramenta escolhida para gerar o fractal graficamente através do L-System gerado pelo código em C, foi a biblioteca turtle, em Python. Ao optar pela biblioteca turtle, houve a oportunidade de aliar a simplicidade de criação de interface gráfica, com a simplicidade de descrever algoritmicamente como deveriam ser tratados cada simbolo do L-System.

## Como utilizar
Primeiramente, clone este repositório em sua máquina local. Relevante afirmar que a explicação para o uso do repositório espera que o projeto seja executado em um ambiente Linux. Caso seja no Windows, o mesmo deve possuir WSL com algum sistema Linux. A estrutura deste trabalho foi dividida em três pastas dentro da pasta do trabalho, da seguinte maneira:

![image](https://github.com/Lucas-Rezende/MD_Fractal/assets/66080424/f1624f3d-de54-4e46-b519-ee02a94ff6cc)

Tendo acesso a esses arquivos, é simples fazer uso dos mesmos. Primeiramente, abra a pasta em algum editor de código ou via terminal. É recomendado usar o terminal ou o Visual Studio code, pois esses ambientes foram testados. Com a pasta do trabalho aberta, navegue até a pasta específica do fractal que deseja testar. Tendo isso feito, digite os comandos abaixo via terminal:

```shell
gcc -o nomedofracta/ nomedofracta/.c
./nomedofractal
python3 nomedofractal.py
```

O último deve ser utilizado apenas caso haja necessidade de testar a criação gráfica do fractal, e para isso será necessário ter o ambiente Python instalado na máquina. Abaixo, segue um exemplo de como realizar o uso do código, os dois primeiros comandos consistem em navegar até a pasta do projeto, em seguida o gcc compila o código, o ./ executa o mesmo e daí em diante basta entrar com as informações do fractal. Finalmente, no arquivo 'output.txt, estarão disponíveis os estágios do fractal.

![image](https://github.com/Lucas-Rezende/MD_Fractal/assets/66080424/0c57f318-2682-4270-91a8-c6e55bc49245)

Os comandos para gerar, respectivamente, os fractais de Hilbert, Koch e meu fractal são:
```shell
gcc -o hilbert hilbert.c
./hilbert

gcc -o koch koch.c
./koch

gcc -o meufractal meufractal.c
./meufractal
```
