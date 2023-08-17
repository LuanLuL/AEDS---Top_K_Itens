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
        Para que o programa de computador apresente uma conduta uniforme para todos os usuarios, foi estabelecido regras para organizar a entrada de dados. Por conseguinte, todos os arquivos tem de ser .txt, ou seja, arquivos de texto que não contém formatação. Além disso, os arquivos devem possuir a nomeclartura especifica, na qual seus nome precisam ser definidos como “input<i>N<i>”, em que <i>N<i> é a ordem de entrada. Observe a Figura 1 para melhor entendimento.
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