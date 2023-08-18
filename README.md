 <section>   
    <h1>📢 AEDS: Top K itens</h1>   
    <p>
        Criado em Agosto de 2023, o projeto <strong>Top K itens</strong> foi desenvolvido em virtude de atender as demandas do curso de Algoritimo e Estrutura de Dados II, ministrado pelo professor <a href="https://www.linkedin.com/in/michelpiressilva/?originalSubdomain=br" target="_blank">Michel Pires Da Silva</a> no Centro Federal de Educação Tecnológica de Minas Gerais (<a href="https://www.divinopolis.cefetmg.br/" target="_blank">CEFET-MG</a>).
    </p>
</section>
<section>
    <h2>🛠 Problemática</h2>
    <p>
        O problema dos top <i>K</i> itens consite em descobrir os elemtentos mais valiosos de uma coleção de dados. Nesse projeto, essa discução é empregada com o objetivo de encontrar as <i>K</i> palavras mais significativas em um conjunto de textos, sendo <i>K</i> número de palavras a serem consideradas. Assim dizendo, a relevânvia de cada elemento é avaliada de acordo com a quantidade de vezes em que aparece nos dados.  
    </p>
    <p>
            É importante ressaltar que a coleção de arquivos passada como entrada devem conter textos sem nenhuma formatação ("arquivo ASCII") onde cada palavra é vista como uma sequência de letras delimitada por espaço em branco, “coluna da esquerda”, “coluna da direita” e símbolos de pontuação (".","?", "!", etc).
    </p>
<section>
<section>
    <h2>📩 Arquivos</h2>
    <p>
        Para que o programa de computador apresente uma conduta uniforme para todos os usuarios, foi estabelecido regras para organizar a entrada de dados. Por conseguinte, todos os arquivos tem de ser .txt, ou seja, arquivos de texto que não contém formatação. Além disso, os arquivos devem possuir a nomeclartura especifica, na qual seus nome precisam ser definidos como “input<i>N</i>”, em que <i>N</i> é a ordem de entrada. Observe a Figura 1 para melhor entendimento.
    </p>
    <p align="center">
        <img src="img/img1.png">
        <br><br><strong>Figura 2:</strong> Exemplo de como inserir arquivos de entrada
    </p>
    <br>
    <p>
        Ademais, é necessário que todos os arquivos sejam armazenados dentro da pasta <i>./dataset</i>. Por ultimo, para realizar a inserção de dados é necessario modificar a constante <i>FILES</i>, definida na linha 8 do <a href="https://github.com/LuanLuL/AEDS---Top_K_Itens/blob/main/src/main.cpp" target="_blank">main.cpp</a>; o valor de <i>FILES</i> deve ser igual a quantidade de inputs presentes. 
    </p>
    <b>OBSERVAÇÃO:</B> Não exlua ou altere o nome do arquivo "stopwords.txt".
</section>
<section>
    <h2>♟ Implementação</h2>
    <p>
        A questão apresentada nesse repositório é um exemplo clássico que pode ser solucionado utilizando-se hash e heap. Nesse sentido, utiliza-se o hash para contar a frequência de todos os itens, enquanto o heap se aplica na manutenção de uma lista dos <i>K</i> itens de maior valor.
        </p>
        <ul>
            <li>
                <div>
                    <h3>Hash</h3>
                    <p>
                        As tabelas de dispersão ou tabelas hash, são estruturas projetadas para otimizar operações de busca por meio de indexação. Nessas tabelas, uma função de transformação é empregada para processar cada elemento de entrada, gerando assim uma chave correspondente. Essa chave é então usada para determinar a posição onde o elemento será armazenado na tabela.
                    </p>
                    <p>
                        De forma geral, essa função hash é representada como <i>f( xy ) = [1, . . ., T]</i>, em que um subconjunto do conjunto de entrada, com tamanho <i>T</i>, é mapeado para a posição <i>xy</i> na tabela. É importante notar que existem várias maneiras de implementar essa função, tais como o método do resto da divisão, método do meio do quadrado, e entre outros.
                    </p>
                    <p>
                        Neste projeto, a estutura de tabela hash escolhida foi a classe <a href="https://cplusplus.com/reference/unordered_map/unordered_map/" target="_blank"> std::unordered_map</a> da biblioteca padrão C++, a qual é uma boa opção para grandes conjuntos de dados em que a ordem de inserção não faz diferença. Apensar de ser uma estrtura simples de usar, suas funções podem variar de acordo com o compilador utilizado.
                    </p>
                    <p>
                        No caso do GCC (compilador empregado nesse sistema), o unordered_map é considerado uma hash aberta, cuja a função de transformação é uma técnica chamada "hash combinado" que envolve a aplicação de uma série de operações de mistura (bitwise XOR, shift e multiplicação) para espalhar bem os bits da chave original e minimizar as chances de colisões.
                    </p>
                    <p>
                        Enfim, com as condições adequadas ao conjunto de dados, o custo de uma tabela hash pode alcançar tempos de <b><i>θ( 1 )</i></b>, o qual se refere ao melhor tempo de execução / melhor caso. Em um caso médio teremos algo próximo de <b><i>θ( 1+N / T )</i></b> e no pior caso <b><i>θ( n )</i></b>.
                    </p>
                </div>
            </li>
            <li>
                <div>
                    <h3>Heap</h3>
                    <p>
                        A heap é um tipo abstrato de dados conhecido como fila de prioridades que armazena os elementos, cada um associado a uma determinada precedência. Esse modelo torna-se interessante para o projeto por possuir a particularidade de prover um acesso rápido ao elemento com a maior (ou menor) prioridade.
                    </p>
                    <p>
                        Uma heap é frequentemente representada por um vetor (ou array) que simula uma árvore binária completa e ordenada. Dessa maneira, o primeiro elemento no vetor é sempre a raiz da árvore e cada nó pai tem dois nós filhos. Por exemplo, se o nó pai está no índice i, seus filhos estão nos índices <i>2 * i + 1</i> (filho esquerdo) e <i>2 * i + 2</i> (filho direito).
                    </p>
                    <p>
                        Existem dois tipos principais de heaps: 
                        <ol>
                            <li>
                                Max Heap (Heap Máximo): Neste tipo de heap, o valor de cada nó é maior ou igual ao valor de seus filhos. Isso significa que o elemento de maior prioridade está no topo da heap.
                            </li>
                            <li>
                                Min Heap (Heap Mínimo): Neste tipo de heap, o valor de cada nó é menor ou igual ao valor de seus filhos. Isso significa que o elemento de menor prioridade está no topo da heap.
                            </li>
                        </ol>
                    </p>
                    <p>
                        Em ultima análise, a propriedade fundamental de uma heap é que ela mantém essa ordenação parcial durante todas as operações de inserção e remoção. Isso permite que as operações de sejam eficientes, geralmente executadas em tempo <b><i>θ(log n)</i></b>, onde n é o número de elementos na heap.
                    </p>
                </div>
            </li>
        </ul>
        <!-- • Crie uma tabela de dispersão (hash) para contar a frequência de cada elemento tokenizado da coleção de dados de entrada.
        • Crie uma árvore de prioridades (heap) de tamanho k e insira os primeiros k elementos do
        hash nela.
        1. Para cada elemento restante na hash, compare a contagem com o menor valor do
        heap.
        2. Se a contagem for maior do que o menor valor da heap, remova o menor valor, insira
        o novo elemento e refaça a estrutura.
        3. Caso contrário, ignore o elemento e vá para o próximo.
        • No final, a heap conterá os k elementos com maiores valores (frequências) da coleção
        de dados. Então, imprima-os em ordem crescente.
        Esse algoritmo é uma combinação eficiente do uso de hash para contar a frequência dos
        elementos e heap para manter a lista dos k elementos com maiores valores. Sua complexidade,
        caso implementado adequadamente, é de O(nlogk), onde n é o tamanho da coleção de dados
        e k o número de itens mais relevantes. -->
        <p>
            Depois de conhecer as estruturas utilizadas nesse projeto
        </p>
        <p align="center">
        <img src="img/img2.png">
        <br><br><strong>Figura 2:</strong> Exemplo de como inserir arquivos de entrada
    </p>
</section>
<section>
    <h2>🎞 Processamento</h2>
     <p>
        Durante o deselvovimento do algoritimo apresentado nesse repositório, foi-se utilizado de duas principais tecnologias: Visual Studio Code e WSL:Ubunto.
    </p>
    <ul>
        <li>    
            <p>
                O Visual Studio Code é um editor de texto multiplataforma disponibilizado pela Microsoft para o desenvolvimento de aplicações, Conhecer essa ferramenta é importante para os desenvolvedores que pretendem trabalhar em ambientes multiplataforma, por exemplo,  podendo operar o desenvolvimento em ambiente Mac e Linux, ao mesmo tempo em que mantém o projeto compatível com Windows. Segue em anexo o link para o site da plataforma — <a href="https://code.visualstudio.com/" target="_blank">Visual Studio Code</a>.
            </p>
        </li>
        <li>
            <p>O WSL é um método para se executar o Sistema Operaciona Linux dentro do Windows de forma muito facil. Essa platoforma se torna essencial para o desenvovimento em ambiente GNU Linux, evitando tarefas como a intalação de maquinas vituais, criação de dual booting no computador pessoal e entre outras coisas. Além disso, existem diversas vantagens como rodar programas em conjunto e compartihamento de localhost. Segue em anexo um  tutorial de download do WSL2 — <a href="https://youtu.be/hd6lxt5iVsg" target="_blank">Tutorial WSL2</a>.</p>
        </li>
    </ul>
    <p>
        O programa ainda possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:
    </p>
    <div align="center">
        <table>
            <thead>
                <tr>
                    <th>Comando</th>
                    <th>Função</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td><code>make clean</code></td>
                    <td>Apaga a última compilação realizada contida na pasta build</td>
                </tr>
                <tr>
                    <td><code>make</code></td>
                    <td>Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build</td>
                </tr>
                <tr>
                    <td><code>make run</code></td>
                    <td>Executa o programa da pasta build após a realização da compilação</td>
                </tr>
            </tbody>
        </table>
        <p align="center">
            <b>Tabela 1:</b> Comandos úteis para compilar e executar o programa de computador
        </p>
    </div>
    <p>
</section>
<section>
    <h2>🙌 Resultado Final</h2>

</section>
<section>
    <hr size="0.5">
    <div>
          <p>
           Feito por <strong>Luan Gonçalves Santos</strong>     
         </p>
         <p align="right">
          <a href="https://www.linkedin.com/in/luan-santos-9bb01920b/" taget="_blank"><img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white"></a>
        <a href="https://www.instagram.com/luann_gsantos/" taget="_blank"><img src="https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white"></a>
        <p>
    </div>
</section>