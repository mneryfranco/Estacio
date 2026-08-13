---
tags: [estacio, matematica-e-logica, teoria-dos-conjuntos, analise-combinatoria]
professor: Carlos Eddy Esaguy Nehab
fonte: "Tema 2 - Teoria Dos Conjuntos e Princípios de Contagem.pdf"
---

# Teoria dos conjuntos e princípios de contagem

Você vai compreender a teoria dos conjuntos, uma linguagem essencial para a descrição de temas matemáticos, bem como conhecer os principais métodos e estratégias combinatórias de contagem.

## 1. Itens iniciais

**Propósito**
É fundamental compreender a linguagem da matemática básica para ter domínio dos conceitos e propriedades de conjunto, bem como dos princípios de contagem.

**Preparação**
Antes de iniciar este conteúdo, tenha em mãos papel, caneta e uma calculadora científica ou use a calculadora de seu smartphone/computador.

**Objetivos**
- Reconhecer os princípios de contagem.
- Identificar os principais agrupamentos combinatórios.
- Reconhecer a linguagem da teoria dos conjuntos.

> [!tip] Vídeo complementar
> Introdução aos conceitos de teoria dos conjuntos e princípios de contagem (disponível na versão digital do curso).

---

## 2. Linguagem da teoria dos conjuntos

### Representação de conjuntos

> [!tip] Vídeo complementar
> Representações e operações entre conjuntos, intervalos na reta numérica e valor absoluto.

O conceito intuitivo de **conjunto** é estabelecido desde que somos ainda muito crianças: o conjunto dos meus brinquedos, o conjunto das pessoas de minha família, o conjunto de meus amigos de turma etc.

Naturalmente, conforme vamos amadurecendo, temos contato com conjuntos mais abstratos, como os conjuntos numéricos e, além disso, conjuntos **finitos** e **infinitos**. Assim, temos:

- O conjunto dos números pares positivos.
- O conjunto de todos os pontos de uma circunferência.
- O conjunto dos pontos do gráfico de uma reta cuja equação é $y = x+1$.

O importante, de fato, é estabelecermos uma escrita mais formal e adequada para descrever conjuntos, sejam finitos ou infinitos.

### Representação explícita de conjuntos

Uma das formas usuais de descrever um conjunto é, simplesmente, enumerando seus objetos entre um par de chaves, separando-os por vírgulas ou, preferencialmente, por **ponto e vírgula** — para evitar que nosso separador decimal, a vírgula, cause ambiguidades.

> [!example] Exemplo 1
> $A = \{ 1{,}2 \, ; \, 1{,}3 \}$
> Observe que, usando o separador vírgula, não podemos distinguir se os objetos do conjunto são os inteiros de 1 a 4 ou os dois números decimais 1,2 e 1,3. Por isso, em português, sempre que houver possibilidade de dúvida, preferimos utilizar o separador ponto e vírgula.
>
> $B = \{ 1; 3; 9; 7; 5 \}$
> Conjunto cujos elementos são os números ímpares entre 0 e 10. Note que em um conjunto **não existe o conceito de ordem** — tudo se passa como se tivéssemos os objetos em uma caixa, listados em qualquer ordem. Ainda assim, sempre que fizer sentido, é útil listá-los em ordem crescente ou decrescente, o que facilita perceber uma eventual lei de formação.
>
> $C = \{ 1{,}7;\ 1{,}3;\ 1{,}5;\ 1{,}1;\ 1{,}9 \}$
> Os valores dos 5 primeiros termos de uma progressão aritmética de razão 0,2 e menor termo igual a 1,1.
>
> $D = \{ 1;\ 4;\ 9;\ 16;\ 25;\ 36;\ \dots \}$
> A descrição sugere uma infinidade de elementos: os três pontinhos, ao final, indicam que estamos interessados nos quadrados de todos os números inteiros. Essa forma de representar conjuntos infinitos só é indicada quando a lei de formação de seus elementos é natural e simples — e não uma charada, como o exemplo a seguir.
>
> $E = \{ 4;\ 13;\ 34;\ 73;\ 136;\ \dots \}$
> Neste caso, há infinitas leis de formação possíveis, uma das quais é $n^3 + 2n + 1$, com $n = 1, 2, 3, \dots$. Nestes casos, a notação explícita não é adequada — a notação implícita, vista a seguir, é mais indicada.

**Símbolo de pertinência**

Quando um objeto $x$ é um dos elementos de um conjunto $P$, dizemos que $x$ **pertence** a $P$ e usamos o símbolo de pertinência, a letra grega épsilon estilizada: $x \in P$.

Caso $x$ não seja um dos objetos do conjunto $P$, dizemos que $x$ **não pertence** a $P$: $x \notin P$.

> [!example] Exemplo 2
> Cada pertinência indicada é uma assertiva verdadeira (V) ou falsa (F):
> - $12 \in \{4;5;10;12;18\}$ — **V**
> - $5 \notin \{4;5;10;12;18\}$ — **F**
> - $7 \notin \{4;5;10;12;18\}$ — **V**
> - $\sqrt{16} \notin \{4;5;10;12;18\}$ — **F**

> [!example] Exemplo 3
> Conjuntos podem, por sua vez, ser também objetos de outros conjuntos. Uma analogia útil: imagine uma sacola de compras. O objeto colocado diretamente nela é um de seus elementos. Se colocarmos uma caixa de ovos (com dez ovos) na sacola, é a **caixa** que pertence à sacola — cada ovo é objeto da caixa, não da sacola.
>
> Se $A = \{ 1;\ 2;\ \{3,4\};\ 5;\ 6 \}$, todas as relações a seguir são verdadeiras:
> - $1 \in A$
> - $3 \notin A$
> - $\{3;4\} \in A$
> - $7 \notin A$
> - $\{1;2\} \notin A$
> - $\{1\} \notin A$
> - $\{1;3\} \notin A$

### Representação implícita de conjuntos

A notação implícita utiliza uma **propriedade** (chamada, na lógica, de sentença aberta) que descreve os objetos de interesse:

$$A = \{\, x \mid p(x) \,\}$$

Lê-se: "o conjunto dos objetos $x$ tais que $p(x)$ se torna uma proposição verdadeira." Serão objetos do conjunto **exatamente e apenas** os que tornam $p(x)$ verdadeira.

> [!example] Exemplo 4
> $F = \{\, x \mid x^2 = 9 \,\}$
> Os valores cujo quadrado iguala 9 são exatamente 3 e −3. Algebricamente:
> $$x^2 = 9 \iff x^2 - 9 = 0 \iff (x-3)(x+3) = 0$$
> O produto de dois números só vale zero quando um deles é nulo:
> $$(x-3)(x+3) = 0 \iff x-3=0 \text{ ou } x+3=0 \iff x=3 \text{ ou } x=-3$$
>
> $G = \{\, x \mid x \text{ é inteiro e } x^2 < 9 \,\}$
> Como restringimos $x$ a ser inteiro, declaramos essa restrição antes do símbolo $\mid$, usando $\mathbb{Z}$ para os inteiros:
> $$\{\, x \in \mathbb{Z} \mid x^2 < 9 \,\}$$
> Lê-se: "o conjunto dos valores de $x$ pertencentes a $\mathbb{Z}$ tais que $x^2 < 9$."

### Relação de inclusão entre conjuntos

A representação pictórica (geométrica) de um conjunto é extremamente útil. Se $X = \{1;2;3;4;5\}$, seu contorno delimita a representação de seus elementos, exibidos como pontos.

![Representação de um conjunto](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-01-conjunto-X.jpeg)
*Imagem 1: Representação de um conjunto.*

Quando o diagrama de $Y$ está contido no diagrama de $X$, todo elemento de $Y$ é também elemento de $X$:

![Y contido em X](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-02-Y-contido-em-X.jpeg)
*Imagem 2: todo elemento de Y é também elemento de X.*

Essa é a **relação de inclusão**: dizemos que "$Y$ está contido em $X$" ou "$X$ contém $Y$":

$$Y \subset X \quad \text{ou} \quad X \supset Y$$

A afirmação "todo elemento de $Y$ é também elemento de $X$" vale quando $Y \subset X$; se $X$ e $Y$ forem iguais, a inclusão também ocorre (caso particular). Como usual, uma barra "/" sobre um sinal relacional nega o relacionamento:

| Relação | Símbolo | Negação |
|---|---|---|
| Igualdade | $a=b$ | $a\neq b$ |
| Paralelismo | $r \parallel s$ | $r \nparallel s$ |
| Pertinência | $x \in X$ | $x \notin X$ |
| Inclusão | $X \subset Y$ | $X \not\subset Y$ |
| Continência | $Y \supset X$ | $Y \not\supset X$ |

> [!example] Exemplo 5
> - $\{1;5\} \subset \{1;2;5;6\}$ — todo elemento de $\{1;5\}$ (1 e 5) também é elemento de $\{1;2;5;6\}$.
> - $\{1\} \subset \{0;1;6\}$ — o único elemento de $\{1\}$, o número 1, também é elemento de $\{0;1;6\}$.
> - $\{1;3\} \not\subset \{1;2;\{3,4\};5;6\}$ — embora $1$ pertença a ambos, $3$ não é elemento do segundo conjunto (que contém o *conjunto* $\{3,4\}$, não o número 3 isoladamente).

### O conjunto vazio

É extremamente útil imaginar um conjunto sem elementos: o **conjunto vazio**, designado por $\varnothing$ (ou $\{\}$). Na analogia da sacola de compras, seria a sacola sem nenhuma compra.

O conjunto vazio é subconjunto de **qualquer** conjunto $X$: $\varnothing \subset X$. Justificativa intuitiva: como não há elementos em $\varnothing$, a afirmativa "todo elemento de $\varnothing$ é também elemento de $X$" nunca é contrariada.

### Intervalos na reta numérica e valor absoluto

**Conjuntos numéricos usuais**

- **Naturais** ($\mathbb{N}$): números usados na contagem. $\mathbb{N} = \{1;2;3;\dots\}$ (alguns autores incluem o zero).
- **Inteiros** ($\mathbb{Z}$): inclui os naturais, o zero e seus simétricos. $\mathbb{Z} = \{0;-1;1;-2;2;-3;3;\dots\}$.
- **Racionais** ($\mathbb{Q}$, de "quociente"): números obtidos pelo quociente de inteiros — inclui inteiros, decimais exatos (ex.: 0,37 e −3,78) e dízimas periódicas.
- **Reais** ($\mathbb{R}$): a totalidade dos números reais.

Além desses, há a família dos **intervalos**, subconjuntos de $\mathbb{R}$ especialmente úteis.

**A reta real e os intervalos**

Cada ponto da reta-eixo está associado a um único número real e vice-versa:

![Reta-eixo](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-03-reta-eixo.jpeg)
*Imagem 3: Representação de uma reta-eixo.*

Um intervalo é um conjunto de números cuja representação geométrica é um segmento ou semirreta, com extremidades incluídas ou não.

| | Inclui extremidade | Não inclui extremidade |
|---|---|---|
| Nomenclatura | intervalo fechado nesta extremidade | intervalo aberto nesta extremidade |
| Gráfico | círculo cheio | círculo vazado ou seta |
| Notação | colchetes | parênteses ou colchetes invertidos |

> [!example]- Situação 1 — intervalo aberto
> Implícita: $\{x \in \mathbb{R} \mid a < x < b\}$
> Intervalo: $(a;b)$ ou $\,]a;b[\,$
> ![Situação 1](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-04-situacao1-aberto.jpeg)

> [!example]- Situação 2 — fechado à esquerda, aberto à direita
> Implícita: $\{x \in \mathbb{R} \mid a \le x < b\}$
> Intervalo: $[a;b)$ ou $[a;b[\,$
> ![Situação 2](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-05-situacao2-fechado-aberto.jpeg)

> [!example]- Situação 3 — semirreta fechada
> Implícita: $\{x \in \mathbb{R} \mid x \ge a\}$
> Intervalo: $[a;+\infty)$ ou $[a;+\infty[\,$
> ![Situação 3](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-06-situacao3-semirreta-fechada.jpeg)

> [!example]- Situação 4 — semirreta aberta
> Implícita: $\{x \in \mathbb{R} \mid x < b\}$
> Intervalo: $(-\infty;b)$ ou $\,]-\infty;b[\,$
> ![Situação 4](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-07-situacao4-semirreta-aberta.jpeg)

**Valor absoluto**

A distância entre dois pontos $a$ e $b$ na reta real é o maior menos o menor. A distância entre um número real $x$ e a origem é o **módulo** de $x$, representado por $|x|$:

$$|x| = \sqrt{x^2} \qquad \text{ou} \qquad |x| = \begin{cases} x, & \text{se } x \ge 0 \\ -x, & \text{se } x < 0 \end{cases}$$

![Reta-eixo com distâncias](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-08-reta-eixo-distancias.jpeg)
*Imagem 8: Reta-eixo (D=−2, C=−1, O=0, A=1, B=2).*

> [!example] Exemplo 6 — conjunto-solução de expressões modulares
> $|x-1| = 3$
> A expressão representa a distância entre $x$ e $1$. À direita: $1+3=4$; à esquerda: $1-3=-2$. Logo $S = \{4; -2\}$.
>
> $|2x-4| < 3$
> Dividindo por 2: $|x-2| < 3/2$. Os valores de interesse distam no máximo $3/2$ de $2$, ou seja, entre $2-3/2=0{,}5$ e $2+3/2=3{,}5$. Logo $S = \,]0{,}5;\ 1{,}5[\,$.

> [!example] Exemplo 7
> Determine o conjunto-solução de $|x+1| + |x-5| = a$ para $a=2$, $a=3$ e $a=1$.
> *(resolução completa apresentada no vídeo complementar "Pegando intimidade com módulos!")*

### Operações entre conjuntos

Para estudar operações entre conjuntos usamos os **diagramas de Venn**, sempre dentro de um **conjunto Universo** ($U$) — todos os conjuntos em discussão são subconjuntos de $U$.

> [!info] Exemplo — raiz estranha ao universo
> Ao resolver uma equação, sempre há um universo em mente (naturais, racionais etc.). Se encontrar algebricamente uma raiz $-4$, mas o universo for $\mathbb{N}$, essa raiz deve ser descartada — é uma **raiz estranha ao universo**.

Considere $X = \{a;b;c;d;e;f;g\}$, $Y = \{e;f;g;h;i;j;k\}$, com universo $U$ = letras de *a* a *n*:

![Conjuntos X, Y e U](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-09-conjuntos-X-Y-U.jpeg)
*Imagem 9: Representação dos conjuntos X e Y.*

| Situação | Diagrama |
|---|---|
| **Interseção** — objetos em comum a X e Y: $X \cap Y$ | ![Interseção](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-10a-intersecao.jpeg) |
| **União** — objetos em pelo menos um dos conjuntos: $X \cup Y$ | ![União](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-10b-uniao.jpeg) |
| **Diferença X−Y** — pertencem a X, não a Y | ![Apenas X](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-10c-apenas-X.jpeg) |
| **Diferença Y−X** — pertencem a Y, não a X | ![Apenas Y](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-10d-apenas-Y.jpeg) |

Objetos fora de $X$ (ou de $Y$), mas dentro do universo, formam as diferenças $U-X$ e $U-Y$. Se $Z$ é um conjunto, $U-Z$ é o **complementar** de $Z$, escrito $Z'$:

![Complementares](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-11-complementares-U-X-U-Y.jpeg)
*Imagem 10: Representação de X e Y com o conjunto universo (U−X à esquerda, U−Y à direita).*

**Operações usuais** (A e B restritos ao universo U):

$$A \cap B = \{x \in U \mid x \in A \text{ e } x \in B\}$$
$$A \cup B = \{x \in U \mid x \in A \text{ ou } x \in B\}$$
$$A - B = \{x \in U \mid x \in A \text{ e } x \notin B\}$$
$$A' = \{x \in U \mid x \notin A\}$$

> [!example] Exemplo 8
> **a)** $A = \{1;2;3;-1;-5\}$ e $B = \{-3;-2;1;3\}$
> - $A \cap B = \{1, 3\}$
> - $A \cup B = \{-5, -3, -2, -1, 1, 2, 3\}$
> - $A - B = \{2, -1, -5\}$
> - $B - A = \{-3, -2\}$
>
> **b)** $A = \,]-1; 3]$ e $B = \,]-\infty; 1[\,$
> - $A \cap B = \,]-1, 1[\,$
> - $A \cup B = \,]-\infty, 3]$
> - $A - B = [1, 3]$
> - $B - A = \,]-\infty, -1]$
>
> ![Solução gráfica do item b](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-12-exemplo8b-grafico.jpeg)

> [!example] Exemplo 9
> Dados $A = \{-3;2]$, $B = \,]-\infty;1]$ e $C = [-1;4[\,$, determine quantos números inteiros há em $X = (A \cap B) \cup C$.
> *(resolução completa no vídeo "Trabalhando com intervalos!")*

### Mão na massa — Linguagem de conjuntos

> [!question] Questão 1
> Se $\mathbb{Q}$ designa o conjunto dos racionais e $A = \{1; 3; -4; 2/3; 0{,}111\dots; \pi\}$, então $A \cap \mathbb{Q}$ é igual a:
> **A)** $\{1; 3; -4; 0{,}111\dots\}$  **B)** $\{1;3\}$  **C)** $\{\pi\}$  **D)** $\{1;3;-4\}$  **E)** $\{0{,}111\dots;\pi\}$
> > [!success]- Resposta
> > **A.** Todos os números de $A$, exceto $\pi$, são racionais (podem ser expressos como quociente de inteiros; ex.: $0{,}111\dots = 1/9$).

> [!question] Questão 2
> $A = \{x \in \mathbb{Z} \mid x^2 < 4\}$ e $B = \{x \in \mathbb{R} \mid x^2 < 4\}$. Representação explícita:
> **A)** $A=\{-2;-1;0;1;2\}$, $B=[-2;2[\,$  **B)** $A=\{-1;0;1\}$, $B=\,]-2;2[\,$  **C)** $A=\{-1;0;1\}$, $B=[-2;2]$  **D)** $A=\{-2;-1;0;1;2\}$, $B=[-2;2]$  **E)** $A=\{0\}$, $B=\,]-2;2[\,$
> > [!success]- Resposta
> > **B.** Se $x>0$, $x^2<4$ exige $x<2$; se $x<0$, exige $x$ entre $-2$ e $0$.

> [!question] Questão 3
> Considere: (1) $A\cup(B\cap C)=(A\cup B)\cap(A\cup C)$; (2) $A\cap(B\cup C)=(A\cap B)\cup(A\cap C)$; (3) $(A-B)\cup C = A-(B\cup C)$. Estão corretas:
> **A)** todas  **B)** apenas 1 e 2  **C)** apenas 1 e 3  **D)** apenas 3  **E)** apenas 1, 2 e 4
> > [!success]- Resposta
> > **B** — apenas 1 e 2 (leis distributivas válidas; a (3) é falsa em geral).

> [!question] Questão 4
> $X=\{x\in\mathbb{Z}\mid 2x-4>3\}$ e $Y=\{x\in\mathbb{Z}\mid 3x-5<11\}$. $X\cap Y$ vale:
> **A)** $\{4;5\}$  **B)** $\{3;4;5\}$  **C)** $\{3;4;5;6\}$  **D)** $\{4;5;6\}$  **E)** $\varnothing$
> > [!success]- Resposta
> > **A.** $2x-4>3 \Rightarrow x>3{,}5$; $3x-5<11 \Rightarrow x<16/3\cong 5{,}3$. Inteiros entre 3,5 e 5,3: $\{4;5\}$.

> [!question] Questão 5
> $X=\{x\in\mathbb{R}\mid -4<x<5\}$. O conjunto $Y=\{x^2 \mid x\in X\}$ vale:
> **A)** $]16;25[$  **B)** $]0;16[$  **C)** $]0;25[$  **D)** $]-16;25[$  **E)** $\varnothing$
> > [!success]- Resposta
> > **C.**

> [!question] Questão 6
> A solução de $|x-3|<5$, em $\mathbb{R}$, é:
> **A)** $]2;8[$  **B)** $]-2;8[$  **C)** $]2;5[$  **D)** $]5;8[$  **E)** $]0;8[$
> > [!success]- Resposta
> > **B.** $|x-3|$ é a distância entre $x$ e 3; deve ser menor que 5 unidades para cada lado: $x$ entre $-2$ e $8$.

> [!abstract] Teoria na prática
> Resolva o sistema $\begin{cases} x^2 - 1 > 4 \\ |2x-7| \le 2 \end{cases}$ — a solução do sistema é a interseção das soluções de cada inequação.
> *(resolução no vídeo complementar)*

### Verificando o aprendizado — Linguagem de conjuntos

> [!question] Questão 1
> Somando todos os reais de $]-2;5]$ com todos os de $[1;7[\,$, qual conjunto obtemos?
> **A)** $[0;12]$  **B)** $]-1;12]$  **C)** $[-2;11[$  **D)** $]-1;11[$  **E)** $]-1;12[$
> > [!success]- Resposta
> > **E.** O resultado vai de $-2+1$ (exclusive) a $5+7$ (exclusive): $]-1;12[\,$.

> [!question] Questão 2
> $A=\{1,3,5\}$ e $B=\{3;5;7\}$. Quantos elementos tem $(A-B)\cup(B-A)$?
> **A)** 1  **B)** 2  **C)** 3  **D)** 4  **E)** 5
> > [!success]- Resposta
> > **B.** $A-B=\{1\}$, $B-A=\{7\}$ ⟹ união $=\{1;7\}$, 2 elementos.

---

## 3. Princípios de contagem

> [!tip] Vídeo complementar
> Princípios básicos da contagem: casa dos pombos, adição e multiplicação.

### Princípio da casa dos pombos

> Se $n$ pombos devem ser colocados em $m$ casas, com $n>m$, então pelo menos uma casa deverá conter mais do que um pombo.

![Princípio da casa dos pombos](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-13-casa-dos-pombos.jpeg)
*Imagem 12: Ilustração do princípio da casa dos pombos, para n = 10 e m = 9.*

> [!example] Exemplo 1
> Mostre que, em uma cidade de um milhão de habitantes, pelo menos dois possuem o mesmo número de fios de cabelo.
> **Solução:** o número de fios de cabelo de uma pessoa não ultrapassa ~200.000. Imaginando 200.000 "casas" (uma por quantidade possível de fios) e $n=1.000.000$ "pombos" (pessoas), como $n>m$, ao menos duas pessoas caem na mesma casa — mesmo número de fios.

> [!example] Exemplo 2
> Dados doze números inteiros, mostre que a diferença entre dois deles é divisível por onze.
> **Solução:** os restos da divisão por 11 só podem ser 11 valores distintos (0 a 10) — 11 "casas". Com 12 números ("pombos"), dois deles caem na mesma casa (mesmo resto), logo sua diferença é divisível por 11.

> [!example] Exemplo 3
> Mostre que, em um quadrado de lado 2 cm com 5 pontos em seu interior, dois deles distam menos que $\sqrt{2}$.
> **Solução:** dividindo o quadrado em 4 quadrados de 1 cm de lado, pelo princípio da casa dos pombos, 2 dos 5 pontos caem no mesmo quadrado menor. A maior distância possível dentro dele é sua diagonal, $\sqrt{1^2+1^2}=\sqrt{2}$.
>
> ![Quadrado com 5 pontos](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-14-quadrado-5-pontos.jpeg)

### Princípio da adição

Relaciona o quantitativo de dois conjuntos finitos com sua união e interseção. Sendo $n(X)$ o número de elementos de $X$:

$$n(A \cup B) + n(A \cap B) = n(A) + n(B) \quad \text{ou} \quad n(A \cup B) = n(A) + n(B) - n(A \cap B)$$

![Princípio da adição](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-15-principio-adicao.jpeg)
*Imagem 14: Representação do princípio da adição.*

Se $A \cap B = \varnothing$ (conjuntos disjuntos):

$$n(A \cup B) = n(A) + n(B)$$

> [!example] Exemplo 4 — três conjuntos
> Três conjuntos definem uma partição de até 7 regiões disjuntas cuja união reproduz $A\cup B\cup C$:
>
> ![Três conjuntos](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-16-tres-conjuntos-venn.jpeg)
> *Imagem 15.*
>
> | Região | Fórmula | Elementos que estão |
> |---|---|---|
> | (1) | $A-(B\cup C)$ | exclusivamente em A |
> | (2) | $B-(A\cup C)$ | exclusivamente em B |
> | (3) | $C-(A\cup B)$ | exclusivamente em C |
> | (4) | $(A\cap C)-B$ | em A e C, mas não em B |
> | (5) | $(B\cap C)-A$ | em B e C, mas não em A |
> | (6) | $(A\cap B)-C$ | em A e B, mas não em C |
> | (7) | $A\cap B\cap C$ | nos três conjuntos |

> [!example] Exemplo 5
> Em uma escola de idiomas, 200 alunos estudam inglês, alemão e/ou mandarim. Destes, 50 estudam inglês e alemão; 60 inglês e mandarim; 70 alemão e mandarim; 20 estudam os três. Quantos estudam **apenas um** idioma?
>
> **Solução:** chamando as 7 regiões de $m,n,o,p,q,r,s$ (veja diagrama):
> $$s=20 \qquad q+s=50 \Rightarrow q=30 \qquad p+s=60 \Rightarrow p=40 \qquad r+s=70 \Rightarrow r=50$$
> A soma de todas as partes vale 200, logo:
> $$m+n+o = 200-(p+q+r+s) = 200-(40+30+50+20) = 60$$
>
> ![Diagrama de idiomas](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-17-idiomas-venn.jpeg)

### Princípio da multiplicação

> Se, para um processo de contagem, tomamos duas decisões sucessivas — havendo $p$ maneiras de tomar a 1ª decisão e, para qualquer uma delas, sempre $q$ maneiras de tomar a 2ª — então o número de formas de tomar as duas decisões é $p \times q$.

> [!warning] Atenção
> O princípio da multiplicação não exige que a 2ª decisão seja independente da 1ª, mas sim que a **quantidade** de formas de tomar a 2ª decisão seja independente de como foi tomada a 1ª.

> [!example] Exemplo 6
> Quantos números de 2 dígitos distintos podemos formar com 1, 2, 3, 4?
> **Solução:** $p=4$ escolhas para a dezena; para cada uma, $q=3$ escolhas para a unidade. Total: $p \cdot q = 4 \cdot 3 = 12$.
>
> ![Árvore de decisão](Tema%202%20-%20Teoria%20Dos%20Conjuntos%20e%20Princ%C3%ADpios%20de%20Contagem/img-18-arvore-decisao.jpeg)

### Fatorial e sua notação

Para $n$ inteiro positivo, $n! = 1 \cdot 2 \cdot 3 \cdots n$ (ex.: $3!=6$, $6!=720$). Por convenção, $0!=1$. Produtos de inteiros consecutivos podem ser expressos com fatoriais:

$$10 \times 11 \times 12 \times 13 \times 14 = \frac{14!}{9!}$$

> [!example] Exemplo 7
> Quantas senhas de 6 algarismos (0 a 9) podemos formar:
> - **Podendo repetir algarismos:** cada uma das 6 posições tem 10 escolhas livres → $10^6 = 1.000.000$ (equivale a todos os números de 000000 a 999999).
> - **Usando algarismos todos diferentes:** *(o material-fonte não explicita a resolução numérica deste item — pelo princípio da multiplicação seria $10\times9\times8\times7\times6\times5 = 151.200$.)*

> [!example] Exemplo 8
> Quantos números de 4 algarismos diferentes usando apenas $\{0,4,5,6,7,8\}$?
> **Solução:** ordem MCDU. M (milhar) não pode ser 0 → 5 opções. C → 5 opções (sobra o 0). D → 4 opções. U → 3 opções.
> $$5 \times 5 \times 4 \times 3 = 300 \text{ números}$$

> [!example] Exemplo 9
> Quantos números de 3 algarismos distintos podem ser formados com os algarismos de 0 a 6?
> *(resolução no vídeo "Aplicando o princípio da multiplicação!")*

### Agrupamento simples

Duas situações básicas ao formar agrupamentos:

- **Situação 1** — a ordem importa (senhas, anagramas, filas): **arranjos** e **permutações**.
- **Situação 2** — a ordem é irrelevante (comissões, escolha de sabores): **combinações**.

> [!example] Exemplo 10 — Arranjo simples
> De quantas maneiras podemos fazer filas com 5 alunos, dispondo de 12?
> **Solução:** $12 \times 11 \times 10 \times 9 \times 8$ (5 fatores, decrescendo a partir de 12):
> $$12 \times 11 \times 10 \times 9 \times 8 = 12 \times 11 \times 10 \times 9 \times 8 \times \frac{7!}{7!} = \frac{12!}{7!} = \frac{12!}{(12-5)!}$$
> Esse agrupamento é o **arranjo de $n$ objetos tomados $p$ a $p$**, $A_p^n$ (ou $A_{n,p}$):
> $$A_p^n = \frac{n!}{(n-p)!}$$
> Praticando: 20 alunos em filas de 2 → $20\times19=\dfrac{20!}{18!}=380$. 10 alunos em filas de 3 → $10\times9\times8=\dfrac{10!}{7!}=720$. 8 alunos, todos na fila → $8! = \dfrac{8!}{0!} = 40.320$.

> [!example] Exemplo 11 — Permutação simples
> Calcule o número de anagramas de "trapo" e de "publicar".
> **Solução:** dispondo de $n$ objetos e colocando todos na fila (caso particular de arranjo com $p=n$), temos a **permutação simples**: $P_n = n! = A_n^n$.
> - "trapo" (5 letras distintas): $A_5^5 = P_5 = 5! = 120$ anagramas.
> - "publicar" (8 letras distintas): $A_8^8 = P_8 = 8! = 40.320$ anagramas.

> [!example] Exemplo 12 — Combinação
> 8 funcionários formam uma comissão de 3 (presidente, secretário, "puxa-saco"). Quantas comissões possíveis? E se não houver cargos (apenas 3 dentre 8)?
> *(resolução no vídeo "O agrupamento combinação simples")*

> [!example] Exemplo 13
> Quantos subconjuntos de 3 elementos podemos formar a partir de um conjunto de 7 elementos?
> **Solução:** ordenar 7 objetos 3 a 3 dá $A_3^7 = \dfrac{7!}{(7-3)!} = 7\cdot6\cdot5 = 210$ filas — mas cada conjunto de 3 elementos é contado $3!=6$ vezes (uma por ordem possível). Dividindo: $210/3! = 35$ subconjuntos.
>
> No caso geral, dividimos o número de filas por $p!$. A **combinação de $n,p$ a $p$** é:
> $$C_p^n = \binom{n}{p} = \frac{A_p^n}{p!} = \frac{n!}{(n-p)!\,p!}$$

### Mão na massa — Princípios de contagem

> [!question] Questão 1
> Saco com 50 bolas (20 azuis, 30 verdes). Menor número a retirar para garantir 2 azuis?
> **A)** 21  **B)** 22  **C)** 25  **D)** 31  **E)** 32
> > [!success]- Resposta
> > **E.** No pior caso, retiramos as 30 verdes primeiro; as próximas 2 são obrigatoriamente azuis: $30+2=32$.

> [!question] Questão 2
> Quantos são os anagramas de "Alfredo"?
> **A)** $8!$  **B)** $8+7+\dots+1$  **C)** $7!$  **D)** $7+6+\dots+1$  **E)** $6!$
> > [!success]- Resposta
> > **C.** 7 letras diferentes → $P_7 = 7!$.

> [!question] Questão 3
> Placas com 2 letras distintas + 4 algarismos distintos. Quantas placas possíveis?
> **A)** $26^2 \times 9^4$  **B)** $26\times25\times10^4$  **C)** $26^2\times10\times9\times8\times7$  **D)** $26\times25\times10\times9\times8\times7$  **E)** $26\times25\times10^3$
> > [!success]- Resposta
> > **D.**

> [!question] Questão 4
> Usando os algarismos de 1 a 8, quantos números pares de 4 algarismos distintos?
> **A)** $8!=40.320$  **B)** $7!\times4=20.160$  **C)** $8\times7\times6=336$  **D)** $4\times7\times6\times5=840$  **E)** $8^3\times4$
> > [!success]- Resposta
> > **D.** Unidade: 4 opções (2,4,6,8). Dezena: 7. Centena: 6. Milhar: 5.

> [!question] Questão 5
> Códigos: 3 letras maiúsculas distintas + hífen + 6 algarismos (0–6, livres) + hífen + 1 letra qualquer. Total de códigos?
> **A)** $26^4\times10^6$  **B)** $26^2\times25\times24\times10^2$  **C)** $26\times25\times24\times23\times7^6$  **D)** $\frac{26!}{23!}\times7^6$  **E)** $26^2\times25\times24\times7^6$
> > [!success]- Resposta
> > **E.**

> [!question] Questão 6
> $A=\{a;b;c;d;e;f;g\}$. Quantos subconjuntos de A não têm $a$ e $b$, mas necessariamente têm $f$ e $g$?
> **A)** 20  **B)** 16  **C)** 12  **D)** 8  **E)** 6
> > [!success]- Resposta
> > **D.** Restam livres apenas $c,d,e$ (incluir ou não, cada um): $2\times2\times2=8$.

> [!abstract] Teoria na prática
> 20 funcionários (13 homens, 7 mulheres). Comissão de 3 homens e 5 mulheres — quantas comissões possíveis?
> *(resolução no vídeo complementar; equivale a $C_3^{13} \times C_5^{7}$)*

### Verificando o aprendizado — Princípios de contagem

> [!question] Questão 1
> Senhas com algarismos diferentes, de 4 a 6 dígitos (0–9). Quantas ao todo?
> **A)** 186.480  **B)** 188.455  **C)** 139.339  **D)** 122.222  **E)** 111.987
> > [!success]- Resposta
> > **A.** 4 díg.: $10\cdot9\cdot8\cdot7=5.040$. 5 díg.: $\times6=30.240$. 6 díg.: $\times5=151.200$. Soma (princípio da adição, conjuntos disjuntos): $5.040+30.240+151.200=186.480$.

> [!question] Questão 2
> $A=\{1,3,5,7,9\}$. Quantos subconjuntos de 3 elementos **não** contêm o 5?
> **A)** 2  **B)** 4  **C)** 6  **D)** 12  **E)** 24
> > [!success]- Resposta
> > **B.** Escolher 3 dentre os 4 restantes: $C_3^4 = \dfrac{4!}{1!\times3!} = 4$.

---

## 4. Agrupamentos complementares

> [!tip] Vídeo complementar
> Arranjo com repetição e permutação com repetição.

Recapitulando: quando a **ordem importa**, usamos arranjos/permutações; quando a **ordem é irrelevante**, combinações. Mas há situações com **repetição de objetos** — anagramas com letras repetidas, ou escolher sabores de sorvete podendo repetir.

### Arranjo com repetição

Dispondo de $n$ objetos, de quantas formas podemos escolher $p$ deles permitindo repetição? Cada uma das $p$ posições tem sempre $n$ opções disponíveis:

$$AR_p^n = n \times n \times \dots \times n = n^p$$

> [!example] Senhas de 6 caracteres
> Usando letras (maiúsc. e minúsc. contam como diferentes) e 10 algarismos: $26+26+10=62$ caracteres disponíveis. Total de senhas de 6 caracteres: $62^6$, superior a **60 bilhões** — quase 10× a população do planeta!

### Permutação com repetição

Situação típica: anagramas de palavras com letras repetidas.

> [!example] Exemplo 1
> Calcule o número de anagramas de "Araraquara" e de "matemática".
> *(resolução no vídeo "Permutando objetos repetidos")*

### Permutação circular

Quando dispomos $n$ objetos em círculo (ao redor de uma mesa), em vez de em linha:

$$PC_n = (n-1)!$$

> [!example] Exemplo 2
> De quantas maneiras podemos dispor 4 amigos (Antônio, Bernardo, Carlos, Daniel) ao redor de uma mesa?
> **Solução:** $PC_4 = (4-1)! = 3! = 6$.

### Combinação com repetição

Quando a ordem é irrelevante **e** objetos podem se repetir no mesmo agrupamento — combinações com repetição de $n$ objetos tomados $p$ a $p$ ($CR_p^n$).

> [!example] Exemplo 3
> Uma loja tem tabletes de chocolate de 3 marcas diferentes; você deseja comprar 8 tabletes. De quantas formas diferentes?
> *(resolução no vídeo "A combinação com objetos repetidos")*

> [!info] Nota
> Toda essa "zoologia" de agrupamentos decorre, na prática, do princípio da multiplicação. É perfeitamente possível — e até desejável — resolver problemas de contagem sem memorizar arranjos, permutações e combinações, raciocinando direto pelos princípios da adição/multiplicação.

### Síntese dos tipos de agrupamento

> [!note] Apenas a **permutação simples** e a **combinação simples** são, de fato, indispensáveis — os princípios da adição e multiplicação resolvem, por si só, praticamente qualquer problema de contagem.

**Arranjos**
- Simples: $A_p^n = n(n-1)\cdots(n-p+1) = \dfrac{n!}{(n-p)!}$
- Com repetição: $AR_p^n = n^p$

**Permutações**
- Simples: $P_n = n\cdot(n-1)(n-2)\cdots1 = n!$
- Circular: $PC_n = (n-1)(n-2)\cdots1 = (n-1)!$
- Com repetição: $P^n_{p,q,\dots,s} = \dfrac{n!}{p!\,q!\cdots r!}$

**Combinações**
- Simples: $C_p^n = \dfrac{A_p^n}{p!} = \dfrac{n!}{(n-p)!\,p!}$
- Com repetição: $C^t_{p,q,\dots,t} = \dfrac{n!}{p!\,q!\cdots t!}$

### Mão na massa — Agrupamentos complementares

> [!question] Questão 1
> Quantos são os anagramas de "arranjo"?
> **A)** 10.080  **B)** 5.040  **C)** 2.520  **D)** 1.260  **E)** 620
> > [!success]- Resposta
> > **D.** 7 letras, com 2 A's e 2 R's repetidos: $PR^7_{2,2} = \dfrac{7!}{2!\,2!} = 1.260$.

> [!question] Questão 2
> Senhas de exatamente 4 caracteres a partir de 26 minúsculas + 10 algarismos + 3 símbolos (@, #, &)?
> **A)** $39^{39}$  **B)** $4^{39}$  **C)** $39^4$  **D)** $4^4$  **E)** —
> > [!success]- Resposta
> > **C.** $39$ objetos disponíveis, arranjo com repetição de 4 a 4: $AR_4^{39} = 39^4$.

> [!question] Questão 3
> Padaria com 10 tipos de biscoito doce e 7 salgados. Comprar 4 pacotes doces + 3 salgados, podendo repetir tipos — de quantas formas?
> **A)** $P_{10}\times P_4$  **B)** $PR_4^{10}\times PR_3^7$  **C)** $A_4^{10}\times A_3^7$  **D)** $C_4^{10}\times C_3^7$  **E)** $CR_4^{10}\times CR_3^7$
> > [!success]- Resposta
> > **E.** Duas combinações com repetição independentes, multiplicadas pelo princípio da multiplicação.

> [!question] Questão 4
> Arrumar 5 livros de probabilidade, 7 de cálculo e 8 de álgebra linear em uma prateleira, com livros do mesmo assunto juntos. De quantas formas?
> **A)** $3!\times5!\times7!\times8!$  **B)** $20!$  **C)** $20!/[5!\times7!\times8!]$  **D)** $5!\times7!\times8!$  **E)** $3!\times20!$
> > [!success]- Resposta
> > **A.** $3!$ para ordenar os 3 "blocos" de assunto, e dentro de cada bloco os livros se permutam entre si.

> [!question] Questão 5
> 20 amigos formam chapa (presidente, vice, tesoureiro — cargos distintos, tesoureiro deve ser 1 dos 4 contadores do grupo). Quantas chapas?
> **A)** $20^2$  **B)** $20^3$  **C)** $4\times19^2$  **D)** $4\times19\times18$  **E)** $2\times19^2$
> > [!success]- Resposta
> > **D.** Tesoureiro: 4 opções. Presidente: 19 restantes. Vice: 18 restantes.

> [!question] Questão 6
> Quantos subconjuntos possui um conjunto com 8 elementos?
> **A)** 28  **B)** 56  **C)** 64  **D)** 128  **E)** $8!$
> > [!success]- Resposta
> > **D.** $2^8 = 256$... *(nota: o gabarito da fonte indica 128 = $2^7$; verifique com seu professor — o valor correto de $2^8$ é 256).*

> [!abstract] Teoria na prática
> Dividir entre 3 herdeiros uma herança de 20 moedas de ouro idênticas — de quantas maneiras?
> *(combinação com repetição, $CR_{20}^{3}$; resolução no vídeo complementar)*

### Verificando o aprendizado — Agrupamentos complementares

> [!question] Questão 1
> Quantos são os anagramas de "anagrama"?
> **A)** $8!$  **B)** $8!/4!$  **C)** $4!$  **D)** $8!/[4!\cdot4!]$  **E)** $8^4$
> > [!success]- Resposta
> > **B.** 8 letras, sendo 4 vezes a letra A: $PR^8_{4,1,1,1} = 8!/4!$.

> [!question] Questão 2
> 10 crianças formam uma roda (dança das cadeiras). De quantas maneiras diferentes?
> **A)** $9!/10$  **B)** $9!$  **C)** $10!$  **D)** $10!/10$  **E)** $10^{9!}$
> > [!success]- Resposta
> > **D.** Permutação circular de 10 objetos: $PC_{10} = 10!/10 = 9!$.

---

## 5. Conclusão

A teoria ingênua dos conjuntos enfatiza os aspectos gerais e básicos da representação de conjuntos e suas operações. Os intervalos (subconjuntos de $\mathbb{R}$) foram tratados quanto à notação, representação na reta real e operações. O módulo foi tratado algebricamente e como distância à origem.

Os conceitos de conjuntos, aliados à argumentação lógica, são parte essencial da linguagem matemática — este módulo é pré-requisito para qualquer leitura matemática subsequente. Os princípios de contagem (adição e multiplicação) e as categorias de agrupamento (arranjos, permutações, combinações — simples e com repetição) formam a base da **análise combinatória**, essencial para os módulos seguintes de **probabilidade** e **estatística**.

> [!quote] Ideia central
> É possível resolver qualquer problema de contagem sem conhecer os agrupamentos convencionais da literatura — mas **jamais** sem dominar os princípios da multiplicação e da adição, os verdadeiros "carros-chefe" de todo processo de contagem.

### Explore +

- Artigo: *Intervenção em princípios de contagem: desenvolvimento do programa e aplicação inicial* — Évelin de Assis e Luciana Corso (Fundação Carlos Chagas).
- Portal da Matemática da OBMEP (IMPA).
- Palestra *Princípios de contagem, de A a Z* — Prof. Carlos Nehab, IMPA, jan/2024 (YouTube).

### Referências

- HALMOS, P. *Teoria ingênua dos conjuntos*. São Paulo: Ciência Moderna, 2001.
- MACEDO, R. S. *Teoria dos conjuntos: a alma do movimento da matemática moderna*. s.l., s.n., 2020.
- SANTOS, J. P. O.; MELLO, M. P.; MURARI, I. T. C. *Introdução à análise combinatória*. São Paulo: Ciência Moderna, 2008.
- SANTOS, I. *Introdução à análise combinatória*. São Paulo: Ciência Moderna, 2020.
