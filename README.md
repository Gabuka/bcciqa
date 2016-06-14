# Software para Cálculo do Índice de Qualidade da Água

## Instalação do GTK no MAC OS X
Abra o terminal, copie e cole este comando:</br><pre>/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"</pre></br>Isso instalará o Homebrew em seu Mac, um facilitador de instalação de pacotes para OS X. Após a instalação deste, digite:</br><pre>brew install gtk+3</pre></br>Esse comando, então, instalará o GTK 3.
</br>
</br>
### Compilação
O programa para o cálculo do IQA possui 2 arquivos principais, o fonte e um cabeçalho.</br>
Para compilar o programa o usuário deve ter ambos os arquivos da mesma pasta, abrir o terminal de comandos do Linux e navegar até a pasta na qual se encontram estes arquivos e executar o seguinte comando: </br> <pre>gcc iqa.c -o iqa \`pkg-config --libs gtk+-3.0\` \`pkg-config --cflags gtk+-3.0\` -lm</pre></br>
Outro modo de compilar este programa é digitando o comando <pre>make</pre> no terminal que irá executar o comando supracitado evitando assim, erros de digitação.
</br>
</br>
### Execução
Após este comando o compilador irá gerar um executável, para executá-lo basta digitar na linha de comandos do terminal: </br>
<pre>./iqa</pre>

## Instalação do GTK no Windows 7


