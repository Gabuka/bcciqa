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

Primeiramente crie uma pasta chamada Desenv no Disco local (:C) da sua máquina. Dentro deste, crie uma outra chamada dlls.

### Configurações Iniciais
Após feito esse processo, abra o Painel de Controle, clique em Sistema, depois em Configurações Avançadas do Sistema. Ao clicar, abrirá uma janela em que deve-se clicar em Variáveis de Ambiente. Na listagem de variáveis do ambiente, procure uma chamada "Path" e edite-a colocando ";C:\Desenv\dlls"(sem as aspas).

Em seguida, faça download do MinGW, um compilador GNU para compilar o seu programa, baixe-o do site oficial http://www.mingw.org
Coloque na sua pasta \Desenv que foi criada anteriormente, execute-o e certifique-se que  as opções MinGW base tools, g++ compiler e MinGW Make estejam marcadas e aplique as atualizações.

Para facilitar o processo de codagem, baixe o Code::Blocks, uma plataforma para compilações open source. Faça download dos 3 arquivos presentes neste site http://forums.codeblocks.org/index.php/topic,21228.0.html e também os coloque na pasta Desenv. Os arquivos virão compactados, caso não tenha o WinRar, faça download da sua última versão no site oficial http://www.win-rar.com/download.html?&L=0

Para utilizar o GTK, faça download deste também na pasta Desenv, pelo site https://sourceforge.net/projects/gladewin32/files/gtk%2B-win32-devel/2.10.11/gtk-dev-2.10.11-win32-1.exe/download?use_mirror=pilotfiber&download=&failedmirror=ufpr.dl.sourceforge.net
No processo de instalação do GTK ao escolher a pasta de instalação insira a pasta de densenvovimento (No nosso caso C:\Desenv\GTK). E bom seguir esse metodo para que fique tudo organizado.

### Configurações Code::Blocks
Abra o Code::Blocks e siga os passos dados a seguir.
1. Crie um novo projeto: File->New->Project…
2. Escolhendo o wizard “GTK+ project”
3. Continue o procedimento
4. Insira as informações do seu projeto e escolha a pasta para adicionar-lo (No nosso caso C:\Desenv\Projetos\).
5. Será pedido o caminho onde o GTK foi instalado, prescione “Next”, pois será na proxima tela a configuração necessária.
6. Na tela adicione os seguintes caminhos e flags.

base – C:\Desenv\GTK
include – C:\Desenv\GTK\include
lib – C:\Desenv\GTK\lib
obj – C:\Desenv\GTK\bin
cflags – pkg-config –cflags gtk+-2.0
lflags – pkg-config –libs gtk+-2.0

7. Finalize a configuração e pronto. OBS: A configuração de caminho e flags só será necessário efetuar um vez.
8. Prescione F9 para compilar o projeto criado e pronto.

