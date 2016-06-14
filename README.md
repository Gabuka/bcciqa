# Cálculo do Índice de Qualidade da Água

O programa para o cálculo do IQA possui 2 arquivos principais, o fonte e um cabeçalho.</br>
Para compilar o programa o usuário deve ter ambos os arquivos da mesma pasta, abrir o terminal de comandos do Linux e navergar até a pasta na qual se encontram estes arquivos e executar o seguinte comando: </br> <pre>gcc iqa.c -o iqa \`pkg-config --libs gtk+-3.0\` \`pkg-config --cflags gtk+-3.0\` -lm</pre></br>
Outro modo de compilar este programa é digitando o comando make no terminal que irá executar o comando supracitado evitando assim, erros de digitação.</br>
Após este comando o comiplador irá gerar um executável, para executá-lo basta digitar na linha de comandos do terminal: </br>
<pre>./iqa</pre>


