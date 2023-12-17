# MD_Fractal
Este projeto prático foi feito utilizando a linguagem de programação C, complementada por Python e sua biblioteca gráfica, Turtle. O foco principal do trabalho é a geração de fractais, padrões geométricos que exibem auto-semelhança em várias escalas. O projeto exigiu a implementação de três programas distintos, cada um para um fractal específico: a Ilha de Koch, o preenchimento de espaço de Hilbert e um fractal personalizado que produz uma sequência de polígonos simples seguindo pelo menos duas regras. A representação gráfica dos fractais, gerados pelo L-System em C, foi realizada utilizando a biblioteca Turtle do Python.

## Como utilizar
Primeiramente, clone este repositório ou faça download do mesmo em sua máquina local. É importante notar que a explicação para o uso do repositório espera que o projeto seja executado em um ambiente Linux. Caso seja no Windows, o mesmo deve possuir WSL com algum sistema Linux. A estrutura deste trabalho foi dividida em três pastas dentro da pasta do trabalho, da seguinte maneira:

![image](https://github.com/Lucas-Rezende/MD_Fractal/assets/66080424/f1624f3d-de54-4e46-b519-ee02a94ff6cc)

Tendo acesso a esses arquivos, abra a pasta em algum editor de código ou via terminal. Com a pasta do repositório aberta, navegue até a pasta específica do fractal que deseja testar. Tendo isso feito, digite os comandos abaixo via terminal:

```shell
gcc -o nomedofracta/ nomedofracta/.c
./nomedofractal
python3 nomedofractal.py
```

O último deve ser utilizado caso queira ver a criação gráfica do fractal e, para isso, será necessário ter o ambiente Python instalado na máquina. Abaixo, segue um exemplo de como realizar o uso do código, os dois primeiros comandos consistem em navegar até a pasta do projeto, em seguida o gcc compila o código, o ./ executa o mesmo e daí em diante basta entrar com as informações do fractal. Finalmente, no arquivo 'output.txt, estarão disponíveis os estágios do fractal.

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
