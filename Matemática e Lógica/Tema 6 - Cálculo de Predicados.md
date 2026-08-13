# Cálculo de predicados 

Você vai estudar ferramentas e conceitos fundamentais para o desenvolvimento de soluções eficientes e rigorosas, tanto na teoria quanto na prática, permitindo que você enfrente desafios complexos e contribua para avanços importantes em computação e sistemas de informação. 

Profa. Ana Lucia de Sousa 

1. Itens iniciais 

### Preparação 

Antes de iniciar este conteúdo, tenha em mãos papel e caneta. 

### Objetivos 

- Definir o conjunto universo e o conjunto verdade de sentenças abertas e predicados. 

- 

- Reconhecer os quantificadores universal e existencial. 

- 

- Identificar as variáveis livres e ligadas e a negação de proposições com quantificadores. 

- 

- Identificar aplicações do cálculo de predicados na computação. 

- 

### Introdução 

Neste conteúdo, vamos estudar os quantificadores, que são operadores importantes para criar novos enunciados. Os quantificadores são comuns no nosso dia a dia quando dizemos frases como "Todas as mulheres são boas professoras" ou "Nenhum homem é elegante". 

Além disso, vamos explorar outras ferramentas que ajudam a validar argumentos. Na matemática, essas ferramentas são essenciais nos métodos de demonstração, enquanto na computação, são fundamentais para entender algoritmos e programas. Essas ferramentas são parte do que chamamos de cálculo de predicados. 

Durante o estudo, vamos abordar alguns conceitos, como: sentença aberta, conjunto universo e conjunto verdade, predicados e operações lógicas. Vamos identificar os quantificadores universal e existencial, que podem envolver uma ou mais variáveis. Também vamos apresentar as variáveis livres e ligadas, técnicas para negar expressões quantificadas, e finalmente, explorar algumas aplicações do cálculo de predicados na computação. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0002-16.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

1. O conceito de sentença aberta simples e composta 

## Sentenças abertas 

O estudo de sentenças abertas é fundamental no cálculo dos predicados, pois permite a compreensão e a formalização de expressões lógicas que contêm variáveis. Essas sentenças se tornam proposições verdadeiras ou falsas quando suas variáveis são substituídas por elementos específicos de um conjunto universo. 

Compreender sentenças abertas e sua avaliação é o primeiro passo para dominar conceitos mais avançados, como quantificadores, predicados e a manipulação de expressões lógicas complexas, que são essenciais para a resolução de problemas e o desenvolvimento de soluções eficientes em diversas áreas do conhecimento. 

Para conferir alguns exemplos práticos de sentenças abertas, assista ao vídeo! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0003-05.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Considere a seguinte oração: “Alguém foi um craque do futebol na Argentina”. Você consegue dizer se essa oração é verdadeira ou falsa? A resposta é “certamente, não”. Veja que não é possível afirmar se essa oração é verdadeira ou falsa, pois o sujeito não está muito claro, uma vez que “Alguém” é um pronome indefinido. Portanto, não consideramos esse tipo de oração uma sentença ou proposição. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0003-09.png)


Diego Armando Maradona em um campo de futebol 

Agora suponhamos que o pronome “Alguém” 

seja substituído pelo nome do jogador Maradona: “Maradona foi um craque do futebol na Argentina”. 

Veja que a sentença é verdadeira. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0003-14.png)


Pelé segurando o troféu da Copa do Mundo posando para a imprensa 

Suponhamos que o pronome “Alguém” seja substituído pelo nome do jogador Pelé: “Pelé foi um craque do futebol na Argentina”. Essa sentença, então, nesse caso, torna-se uma proposição falsa. 

Ou seja, nessa oração, o pronome “Alguém” é variável, isto é, pode ser substituído por um nome que fará com que essa sentença tenha um valor verdadeiro ou falso. A partir disso, podemos dizer que temos uma sentença aberta ou uma proposição aberta. 

Agora vamos considerar a sentença . Quando substituímos a variável , por exemplo, pelo valor 4 , temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-00.png)


Veja que essa sentença se torna uma proposição verdadeira. 

Agora vamos substituir a variável pelo valor 2. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-03.png)


Essa sentença, para , é falsa. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-05.png)


Comentário 

A sentença é uma sentença aberta na variável . Podemos atribuir qualquer valor numérico para a variável e avaliar se o resultado se torna uma proposição verdadeira ou falsa. 

Agora podemos definir uma sentença aberta do seguinte modo, de forma mais precisa: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-09.png)


Vamos considerar um conjunto (não vazio) e " " um elemento desse conjunto. Ou seja, 

Definimos uma sentença aberta no conjunto ou uma sentença aberta com uma variável no conjunto como sendo uma expressão que chamamos de , tal que para todo elemento " " do conjunto pode assumir o valor lógico (verdadeiro) ou (falso). 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-12.png)


Em outras palavras, dizemos que é uma sentença aberta no conjunto se, e somente se, assumir o valor verdadeiro ou falso sempre que substituirmos a variável por qualquer elemento arbitrário do conjunto . 

Também podemos chamar a sentença aberta em A de função proposicional em A ou condição em A. 

Observação: lembre-se de que sentença ou proposição é uma oração declarativa verdadeira ou falsa. 

Considerando o conjunto dos números naturais N = {1, 2, 3, . . . }, temos os seguintes exemplos de sentenças abertas: 

x+2>10 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0004-18.png)


Para , por exemplo, temos que (falso). 

x2-5x+6=0 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0005-01.png)


Para , temos que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0005-03.png)


## Atividade 1 

Considere as sentenças a seguir. 

I. “Ela é uma boa professora” 

II. “2x − 3 = 5” 

Com base nas definições de sentenças abertas e proposições, analise as afirmações e escolha a opção correta. 

##### A 

A primeira sentença é uma proposição, pois pode ser verdadeira ou falsa independentemente do sujeito. 

##### B 

A primeira sentença é uma sentença aberta, pois a variável pode ser substituída para se tornar verdadeira ou falsa. 

##### C 

A segunda sentença não é uma sentença aberta, pois envolve uma expressão matemática. 

##### D 

A segunda sentença é uma proposição verdadeira, pois é verdadeira para qualquer valor de x. 

##### E 

A primeira sentença se torna uma proposição se substituirmos "Ela" por um nome específico. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0005-19.png)


#### A alternativa B está correta. 

A primeira sentença é uma sentença aberta, pois a palavra "Ela" funciona como uma variável que pode ser substituída por nomes específicos, transformando a sentença em uma proposição verdadeira ou falsa. Já a segunda sentença é uma sentença aberta na variável x, pois ao substituirmos x por valores específicos, a sentença pode se tornar verdadeira ou falsa. A primeira sentença não é uma proposição por si só, mas pode se tornar uma se o pronome indefinido for substituído. 

## Conjunto universo e sua relação com conjunto verdade 

O conhecimento teórico sobre conjuntos universo e sua relação com conjuntos verdade é fundamental para a compreensão das sentenças abertas e sua aplicação em problemas matemáticos. Entender esses conceitos permite a resolução de equações e desigualdades de forma precisa, identificando os valores que tornam as sentenças verdadeiras. Esse entendimento é essencial para avançar em tópicos mais complexos de matemática e lógica. 

Assista a este vídeo e entenda alguns contextos de aplicação prática. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0006-02.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Chamamos de conjunto universo ou domínio da sentença aberta (em geral, usamos a letra U), ou simplesmente universo, o conjunto formado por todos os elementos com os quais estamos verificando determinado assunto. 

### Exemplos 

Vejamos alguns exemplos! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0006-08.png)


Considere a expressão uma sentença aberta em (o conjunto dos números inteiros formado por números positivos e negativos). Nesse caso, . 

Resolvendo essa equação, encontramos o seguinte resultado: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0006-11.png)


Note que o valor encontrado é um elemento do conjunto universo . Portanto, -7 é o valor da variável que torna a sentença verdadeira. 

Uma aplicação relevante do conjunto universo relaciona-se ao conjunto verdade. 

Seja uma sentença aberta em um conjunto universo , chamamos de conjunto verdade de o conjunto formado por todos os elementos , tal que é uma proposição verdadeira. Assim, denotamos o conjunto verdade por: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0006-15.png)


Também podemos usar: <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mtable displaystyle="true" columnalign="right left" columnspacing="0em" rowspacing="3pt"> <mtr> 

<mtd> 

<mrow> 

<mrow> 

<maligngroup/> </mrow> <mrow> <maligngroup/> <msub> <mi>V</mi> <mi>p</mi> </msub> <mo>=</mo> <mo fence="false" stretchy="false">{</mo> <mi>x</mi> <mo>∣</mo> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo>∧</mo> <mi>p</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo fence="false" stretchy="false">}</mo> </mrow> </mrow> </mtd> </mtr> <mtr> <mtd> <mrow> <mrow> <maligngroup/> </mrow> <mrow> <maligngroup/> <msub> <mi>V</mi> <mi>p</mi> </msub> <mo>=</mo> <mo fence="false" stretchy="false">{</mo> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo>∣</mo> <mi>p</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo fence="false" stretchy="false">}</mo> </mrow> </mrow> </mtd> </mtr> </mtable> </math> 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0008-00.png)


Atenção 

Acompanhe mais alguns casos! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0008-03.png)


Considere a sentença aberta em . Vamos determinar o seu conjunto verdade resolvendo a equação do grau. 

Solução: 

2 x 2 + 5 x = 0 x × ( 2 x + 5 ) = 0 x = 0 2 x + 5 = 0 ⇒ 2 x = − 5 ⇒ x = − 5 ÷ 2 ∉ Z V p = x ∣ x ∈ Z ∧ 2 x 2 + 5 x = 0 V p = { 0 } 

Com relação às sentenças abertas, podemos considerar diferentes situações. Confira! 

1 p (x) manifesta uma condição universal no conjunto A Por exemplo: Seja " " uma sentença aberta em . Nessa sentença, todos os elementos de fazem parte do conjunto verdade. 

2 p(x) manifesta uma condição possível no conjunto A Por exemplo: Seja " " uma sentença aberta em . Nessa sentença, apenas alguns elementos de fazem parte do conjunto verdade. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0008-10.png)


3 p(x) manifesta uma condição impossível no conjunto A Por exemplo: Seja " " uma sentença aberta em . Nessa sentença, nenhum elemento de faz parte do conjunto verdade. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0008-12.png)


## Atividade 2 

Considere a sentença aberta <math xmlns="http://www.w3.org/1998/Math/MathML"> <mi>p</mi> 

<mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo>:</mo> <mn>2</mn> <mi>x</mi> <mo>+</mo> <mn>3</mn> <mo>></mo> <mn>5</mn> </math> no conjunto dos números naturais <math xmlns="http://www.w3.org/1998/Math/MathML"> <mi>N</mi> </math>. Qual é o conjunto verdade de <math xmlns="http://www.w3.org/1998/Math/MathML"> <msub> <mi>V</mi> <mi>p</mi> </msub> </math>? 

A B C D E 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0009-02.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0009-03.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0009-04.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0009-05.png)


A alternativa C está correta. A sentença é verdadeira para , então . 

## Sentença aberta com uma ou duas variáveis 

O conceito de conjunto verdade é fundamental para entender sentenças abertas. Para uma sentença aberta com uma variável em um conjunto universo , o conjunto verdade inclui todos os elementos que tornam verdadeira. Quando a sentença possui duas variáveis, consideramos dois conjuntos e e avaliamos em pares ordenados , formando o conjunto verdade com os pares que satisfazem a sentença, permitindo uma análise mais detalhada das relações entre os elementos. 

No vídeo a seguir, veja como exploramos o conceito de conjunto verdade no contexto de sentenças abertas. Iniciamos com uma definição clara, mostrando que o conjunto verdade de uma sentença aberta é o conjunto de todos os elementos do conjunto universo que tornam a sentença verdadeira. Também abordamos sentenças abertas com duas variáveis, explicando como determinar o conjunto verdade em produtos cartesianos de conjuntos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0010-01.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Em uma sentença aberta com duas variáveis, consideramos dois conjuntos, e . 

Seja " " um elemento do conjunto , ( e " " um elemento do conjunto , chamamos de sentença aberta em , uma expressão em que pode assumir o valor lógico falso ou verdadeiro para todo par ordenado . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0010-06.png)


#### Atenção 

Sejam dois conjuntos e , dizemos que o produto cartesiano de por é o conjunto de todos os pares ordenados , em que e . O produto cartesiano de por é indicado por (lê: A cartesiano B), assim: . 

O conjunto verdade de uma sentença aberta com duas variáveis é o conjunto de todos os elementos , tais que é uma proposição verdadeira. Entenda melhor! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0010-10.png)


Também podemos usar: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0010-12.png)


Observação: (o conjunto verdade de em é um subconjunto do conjunto ). 

Considere a sentença aberta em , em que é o conjunto dos números naturais. O conjunto verdade é: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0010-15.png)


Considere a sentença aberta em , em que e . O conjunto verdade é: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0011-00.png)


## Atividade 3 

Considere as seguintes sentenças abertas definidas no conjunto dos números naturais: 

I. "O dobro de um número mais três é maior que seis" 

II. "Um número mais dez é menor que três" 

Qual das seguintes opções descreve corretamente os conjuntos verdade dessas sentenças? 

##### A 

O conjunto verdade da primeira sentença inclui todos os números naturais e o conjunto verdade da segunda sentença é vazio. 

##### B 

O conjunto verdade da primeira sentença inclui todos os números naturais maiores ou iguais a dois e o conjunto verdade da segunda sentença é vazio. 

##### C 

O conjunto verdade da primeira sentença é vazio e o conjunto verdade da segunda sentença inclui todos os números naturais maiores ou iguais a dois. 

##### D 

O conjunto verdade da primeira sentença é vazio e o conjunto verdade da segunda sentença inclui todos os números naturais. 

##### E 

O conjunto verdade da primeira e da segunda sentenças incluem todos os números naturais. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0011-16.png)


#### A alternativa B está correta. 

A sentença "O dobro de um número mais três é maior que seis" é verdadeira para todos os números naturais maiores ou iguais a dois. A sentença "Um número mais dez é menor que três" é falsa para todos os números naturais, então seu conjunto verdade é vazio. 

## Predicados 

São expressões lógicas que atribuem propriedades ou características a variáveis, formando sentenças abertas que se tornam proposições verdadeiras ou falsas quando as variáveis são substituídas por elementos 

específicos. Na lógica dos predicados, essas expressões são representadas por símbolos predicativos, como , e variáveis, como . 

Assista ao vídeo e explore as características fundamentais do cálculo de predicados. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0012-02.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Vamos considerar inicialmente a seguinte expressão: “Paulo é inteligente”. 

Nessa expressão, temos: Sujeito: Paulo. Predicado: inteligente. Note que inteligente é uma propriedade ou característica de Paulo. 

Observe as seguintes expressões: “x é alto e elegante” e “x é professor de y”. 

Nessas expressões, agora temos a presença de variáveis. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0012-09.png)


#### Atenção 

Na afirmação “x é alto e elegante”, por exemplo, x é o sujeito e alto e elegante é o predicado. Veja que o predicado é utilizado para representar a propriedade de ser alto e elegante. Portanto, fica fácil compreender que o predicado atribui ao sujeito uma propriedade ou uma característica. 

Podemos representar um predicado por: p(x) ou p(x, y). 

Por exemplo: 

- p(x) denota a afirmação "x é alto e elegante". 

- 

- q(x,y) denota a afirmação "x é professor de y". 

- 

Na lógica dos predicados, eles são representados por meio dos símbolos predicativos: p, q, r etc. e variáveis: x, y, z etc. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0012-19.png)


Exemplo a) " " b) " " c) " " 

## Atividade 4 

Considere as seguintes sentenças abertas no conjunto dos números naturais: 

I. "O quadrado de um número menos seis vezes esse número mais cinco é igual a zero" 

II. "Cinco vezes um número menos dez é igual a zero" 

Qual das seguintes opções descreve corretamente os conjuntos verdade dessas sentenças? 

A 

O conjunto verdade da primeira sentença é {1, 5} e o conjunto verdade da segunda sentença é {2}. 

B 

O conjunto verdade da primeira sentença é {2, 3} e o conjunto verdade da segunda sentença é {5}. 

C 

O conjunto verdade da primeira sentença é {1, 6} e o conjunto verdade da segunda sentença é {10}. 

D 

O conjunto verdade da primeira sentença é {1, 4} e o conjunto verdade da segunda sentença é {2}. 

E 

O conjunto verdade da primeira sentença é {4, 6} e o conjunto verdade da segunda sentença é {3}. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0013-11.png)


A alternativa A está correta. 

Para a primeira sentença, "O quadrado de um número menos seis vezes esse número mais cinco é igual a zero": 

Resolvendo a equação quadrática: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0013-15.png)


Portanto, ou . Assim, o conjunto verdade é . 

Para a segunda sentença, "Cinco vezes um número menos dez é igual a zero": 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0013-18.png)


Resolvendo a equação linear: Assim, o conjunto verdade é . Portanto, a opção correta é A. 

Operações lógicas sobre sentenças abertas 

O conhecimento teórico sobre operações lógicas em sentenças abertas é importante para a manipulação de proposições complexas. Essas operações são fundamentais tanto na matemática quanto na computação, pois permitem a construção de argumentos rigorosos e a formulação de algoritmos eficientes. Entender como usar conectivos lógicos, como negação, conjunção, disjunção, condicional e bicondicional, é essencial para resolver problemas e criar soluções robustas. 

Assista a este vídeo para aprofundar seu entendimento sobre operações lógicas em sentenças abertas e veja como aplicar esses conceitos em diferentes contextos práticos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0014-02.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

As operações de sentenças abertas ocorrem por meio da utilização dos conectivos lógicos do cálculo proposicional. A partir da combinação de sentenças por meio dos conectivos, formamos novas sentenças abertas ou proposições. 

Veja alguns exemplos de conectivos lógicos! 

1 Negação <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mi mathvariant="normal">¬</mi> <mo stretchy="false">(</mo> <mi>não</mi> <mi</mi> <mrow data-mjx-texclass="ORD"> <mo stretchy="false"</mo> </mrow> <mi></mi> <mo stretchy="false">)</mo> </math> 

2 

Conjunção <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mi mathvariant="normal">Λ</mi> <mo stretchy="false">(</mo> <mi>e</mi> <mo stretchy="false">)</mo> </math> 

3 Disjunção <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mi>V</mi> <mo stretchy="false">(</mo> <mrow data-mjx-texclass="ORD"> <mi data-mjx-auto-op="false">ou</mi> </mrow> <mo stretchy="false">)</mo> </math> 

##### 4 

Condicional <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mo stretchy="false">→</mo> <mo stretchy="false">(</mo> <mtext>Se. . . então</mtext> <mo stretchy="false">)</mo> </math> 

##### 5 

Bicondicional <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mo stretchy="false">↔</mo> <mo stretchy="false">(</mo> <mrow data-mjx-texclass="ORD"> <mi data-mjx-auto-op="false">Se</mi> </mrow> <mo>,</mo> <mrow data-mjx-texclass="ORD"> <mi mathvariant="normal">e</mi> </mrow> <mtext>somente se</mtext> <mo stretchy="false">)</mo> </math> 

Com essas operações, obteremos um conjunto verdade para cada operação, como veremos a seguir. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0015-06.png)


Agora vamos analisar cada operação sobre as sentenças abertas e em , e um elemento seguida de um exemplo. Cada sentença aberta possui um conjunto verdade dado por e , respectivamente. 

### Negação 

A operação de negação da sentença aberta é a sentença em . 

Exemplo: considerando o conjunto universo (conjunto dos números naturais). 

Seja a sentença aberta , temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0016-00.png)


O conjunto verdade é: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0016-02.png)


Observação: é o complementar em relação a 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0016-04.png)


### Conjunção 

A operação de conjunção é a sentença aberta em , satisfeita por um elemento . Essa operação tem o valor lógico verdadeiro quando satisfaz e . 

Exemplo: considerando o conjunto universo (conjunto dos números inteiros). Sejam as sentenças e , temos: . A sentença aberta tem conjunto verdade . A sentença aberta tem conjunto verdade . Observe o conjunto verdade de ! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0016-08.png)


### Disjunção 

A operação de disjunção é a sentença em , satisfeita por um elemento . Essa operação tem o valor lógico verdadeiro quando satisfaz ou . 

Exemplo: considerando o conjunto universo (conjunto dos números inteiros). 

Sejam as sentenças e , temos: . 

A sentença aberta tem conjunto verdade . 

A sentença aberta tem conjunto verdade . Observe o conjunto verdade de ! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0016-15.png)


### Condicional 

A operação condicional é a sentença aberta em . A condicional tem o valor falso quando todo elemento satisfaz a sentença aberta e não satisfaz a sentença . 

Exemplo: considerando o conjunto universo (conjunto dos números naturais). 

Sejam as sentenças e é divisor de 10, temos: . A sentença aberta tem conjunto verdade . 

A sentença aberta tem conjunto verdade . 

Observação: usando equivalência estudada no cálculo proposicional, temos que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0017-03.png)


Com essa equivalência, garantimos que os conjuntos verdade coincidem. 

Logo, o conjunto verdade de é: 

V p → q = V ¬ p v q = V ¬ p ∪ V q = C N V p ∪ V q V p = { 1 , 2 , 3 , 4 } V ¬ p = C n V p = N − V p = N − { 1 , 2 , 3 , 4 } = { 5 , 6 , 7 , … } V q = { 1 , 2 , 5 , 10 } V p → q = V ¬ p ∪ V q = { 5 , 6 , 7 , … } ∪ { 1 , 2 , 5 , 10 } = N − { 3 , 4 } 

### Bicondicional 

A operação bicondicional é a sentença aberta em . A bicondicional tem o valor lógico verdadeiro quando os valores do elemento satisfazem e ou quando satisfazem e . 

Exemplo: considerando o conjunto universo (conjunto dos números naturais). 

Sejam as sentenças e é divisor de 10, temos: . 

A sentença aberta tem conjunto verdade . A sentença aberta tem conjunto verdade . Conjunto verdade da bicondicional: . 

Vamos determinar! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0017-13.png)


Confira o conjunto verdade da bicondicional! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0018-00.png)


Os exemplos anteriores sugerem que podemos gerar novas sentenças abertas compostas, que obtemos por meio dos conectivos lógicos. Entendido? 

## Atividade 5 

Considere as seguintes afirmações e selecione a opção que descreve corretamente o uso dos conectivos lógicos. 

1. Não é verdade que João é alto. 

2. Maria é inteligente e trabalhadora. 

3. Pedro é estudante ou Pedro é professor. 

4. Se Ana estuda, então ela passa no exame. 

5. Carlos é engenheiro se, e somente se, ele tem diploma. 

Qual das seguintes opções associa corretamente os conectivos lógicos às afirmações anteriores? 

A 

- 1 - Conjunção, 2 - Disjunção, 3 - Negação, 4 - Bicondicional, 5 - Condicional 

   - B 

- 1 - Negação, 2 - Conjunção, 3 - Disjunção, 4 - Condicional, 5 - Bicondicional 

   - C 

- 1 - Disjunção, 2 - Bicondicional, 3 - Negação, 4 - Conjunção, 5 - Condicional D 

- 1 - Bicondicional, 2 - Condicional, 3 - Conjunção, 4 - Disjunção, 5 - Negação 

   - E 

- 1 - Condicional, 2 - Bidimensional, 3 - Conjunção, 4 - Disjunção, 5 - Negação 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0018-19.png)


#### A alternativa B está correta. 

A negação é usada em "Não é verdade que João é alto" , indicando que a afirmação é negada. A conjunção aparece em "Maria é inteligente e trabalhadora" ( ), conectando duas proposições com "e". A disjunção está presente em "Pedro é estudante ou Pedro é professor" ( ), unindo duas proposições com "ou". A condicional é usada em "Se Ana estuda, então ela passa no exame" , estabelecendo uma relação de causa e efeito. bicondicional é encontrado em "Carlos é engenheiro se, e somente se, ele 

tem diploma" , mostrando que ambas as proposições são verdadeiras ao mesmo tempo ou falsas ao mesmo tempo. 

2. Quantificadores universal e existencial 

## Proposições quantificadas 

Vamos estudar o quantificador universal e as sentenças abertas. Você vai entender como esse quantificador transforma sentenças abertas em proposições verdadeiras ou falsas, e vai acompanhar a notação simbólica e a aplicação desses conceitos em diferentes conjuntos universo. 

Assista ao vídeo e confira exemplos práticos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0020-04.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Vamos começar pensando nas seguintes expressões: 

- “para todo” 

- 

- “qualquer que seja” 

- 

- “existe pelo menos um” 

- 

Essas expressões, entre outras, são usadas em frases muito comuns no nosso cotidiano. Por exemplo, quando falamos “Todos os homens são elegantes”. Veja que temos um conjunto formado por homens elegantes. Ser elegante é a propriedade desse conjunto. Assim, todos os homens estão atendendo a essa propriedade, que é ser elegante. 

Alternativamente, podemos dizer que: “Existe pelo menos um homem que não é elegante”. Ou seja, no conjunto formado por homens elegantes, existe um desses homens que não é elegante. 

Agora considere a seguinte sentença matemática: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0020-17.png)


Veja que essa sentença tem o predicado “x < 2”, que apresenta a propriedade da variável x que é “ser menor do que 2”. Acompanhando esse predicado, temos a expressão “para todo”. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0020-19.png)


#### Atenção 

A palavra “todos” e as expressões “existe pelo menos um” e “para todos” são chamadas de quantificadores. 

Utilizamos, então, dois quantificadores que serão objeto do nosso estudo: o quantificador universal e o quantificador existencial. Veremos que também podem ser utilizados quantificadores para transformar sentenças abertas em sentenças fechadas. 

## Atividade 1 

Considere as seguintes afirmações sobre quantificadores: 

1. "Todos os gatos são mamíferos" 

2. "Existe pelo menos um número que é maior do que 5" 

3. "Para todo número natural, o quadrado desse número é não negativo" 

4. "Existe pelo menos um estudante que adora matemática" 

Qual das seguintes opções associa corretamente os quantificadores usados nas afirmações anteriores? 

##### A 

1 - Quantificador existencial, 2 - Quantificador universal, 3 - Quantificador universal, 4 - Quantificador universal. 

##### B 

1 - Quantificador universal, 2 - Quantificador existencial, 3 - Quantificador universal, 4 - Quantificador existencial. 

##### C 

1 - Quantificador existencial, 2 - Quantificador existencial, 3 - Quantificador universal, 4 - Quantificador existencial. 

##### D 

1 - Quantificador universal, 2 - Quantificador universal, 3 - Quantificador existencial, 4 - Quantificador existencial. 

##### E 

1 - Quantificador existencial, 2 - Quantificador universal, 3 - Quantificador existencial, 4 - Quantificador existencial. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0021-16.png)


#### A alternativa B está correta. 

A frase "Todos os gatos são mamíferos" usa o quantificador universal , indicando que a afirmação é válida para todos os elementos do conjunto considerado (todos os gatos). A frase "Existe pelo menos um número que é maior do que 5" usa o quantificador existencial ( ), indicando que há pelo menos um elemento no conjunto que satisfaz a condição. A frase "Para todo número natural, o quadrado desse número é não negativo" também usa o quantificador universal , afirmando que a condição é verdadeira para todos os números naturais. Por fim, a frase "Existe pelo menos um estudante que adora matemática" utiliza o quantificador existencial ( ), indicando que há pelo menos um estudante que satisfaz essa condição. Compreender a diferença entre quantificadores universal e existencial é importante para a lógica matemática e a formulação precisa de enunciados. 

Quantificador universal 

O quantificador universal é uma ferramenta fundamental na lógica matemática, usada para expressar que determinada propriedade ou condição é verdadeira para todos os elementos de um conjunto. Representado pelo símbolo , o quantificador universal transforma uma sentença aberta, como " ", em uma proposição verdadeira ou falsa ao considerar todos os valores de em um conjunto universo definido. 

Assista ao vídeo e entenda melhor o conceito de quantificador universal. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0022-02.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Vamos analisar, inicialmente, duas sentenças abertas: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0022-06.png)


Essa sentença é aberta no conjunto dos números naturais , ou seja, o conjunto universo ou o domínio é , em que: . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0022-08.png)


#### Comentário 

Lembre-se sempre de definir o conjunto universo, pois é nesse conjunto que analisaremos os valores para atribuirmos à variável x. 

Agora devemos verificar se o valor atribuído a torna a sentença aberta uma proposição verdadeira. No conjunto dos números naturais, vamos considerar e . 

- Para x = 1, temos “1 + 2 > 1” verdadeira. 

- 

- Para x = 2, temos “2 + 2 > 2” verdadeira. 

- 

- Para x = 3, temos “3 + 2 > 3” verdadeira. 

- 

Podemos observar que P(x) = "x + 2 > x" é, na verdade, uma proposição verdadeira para todos os valores de x no conjunto dos números naturais. 

Com relação ao conjunto verdade, dizemos que ele é o próprio conjunto dos números naturais. Entenda melhor! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0022-20.png)


Lembrando que estamos usando Vp como notação para o conjunto verdade, temos o seguinte: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0022-22.png)


Agora vamos considerar a sentença aberta " " no conjunto dos números reais , ou seja, o conjunto universo é . 

Observe que essa sentença não é verdadeira para todos os números reais . 

- Para x = 1, temos "(1)² = 1" verdadeira. 

- 

- Para x = −1, temos "(−1)² = −1" falsa, pois (−1)² = 1 e 1 ≠ −1. 

- 

- Logo, P(−1) é falsa. 

- 

Nesse caso, dizemos que encontramos um contraexemplo. 

Agora podemos compreender o quantificador universal a partir da análise dos exemplos anteriores. 

Dada uma proposição ou sentença aberta em , em que é o conjunto universo ou domínio e o conjunto verdade . Veja que, quando todos os elementos do conjunto universo A satisfazem , podemos dizer que torna-se uma proposição verdadeira para todos os valores de em A. O conjunto verdade é . 

O quantificador universal é representado pelo símbolo . 

Usaremos o quantificador universal quando nos referirmos a todos os elementos do conjunto universo, tudo bem? 

Agora, você sabe como escrever "Para todo em " com a simbologia da lógica matemática? 

É simples, veja: 

Para representarmos as expressões "para todos" e "qualquer que seja", devemos colocar o símbolo seguido do antes de . Podemos dizer que representa uma operação lógica que tem por finalidade transformar uma sentença aberta em , que não tem nenhum valor lógico, em uma sentença verdadeira ou falsa. Essa operação é denominada quantificação universal. Observe! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0023-16.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0023-17.png)


(Lê-se: para todo ou qualquer que seja ). Também podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0023-19.png)


### Exemplos 

Veja como fica a sentença aberta dada em (I): 

Com relação à sentença aberta p(x), dada por “x + 2 > x” em N, podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0023-23.png)


É uma sentença ou proposição verdadeira. Nesse caso, temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0024-00.png)


Veja como fica a sentença aberta dada em (II): 

Com relação à sentença aberta p(x) representada por “x² = x” no conjunto dos números reais (R), podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0024-03.png)


É uma sentença ou proposição falsa. Nesse caso, temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0024-05.png)


Quando o conjunto universo é finito, dizemos que a proposição é equivalente à conjunção. Por exemplo: vamos considerar a sentença aberta " é par" em . 

Então, temos que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0024-08.png)


## Atividade 2 

Considere as seguintes afirmações no conjunto dos números naturais <math xmlns="http://www.w3.org/1998/ Math/MathML" "> <mi>N</mi> </math>: 

Para todo número natural x,x+5>x. 

Para todo número natural x,x2=x. 

Assinale a alternativa correta. 

A 

Ambas as afirmações são verdadeiras. 

B 

A primeira afirmação é verdadeira e a segunda afirmação é falsa. 

C 

A primeira afirmação é falsa e a segunda afirmação é verdadeira. 

##### D 

Ambas as afirmações são verdadeiras dependendo do contexto. 

E 

Ambas as afirmações são falsas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0025-06.png)


A alternativa B está correta. 

A primeira afirmação "Para todo número natural " é verdadeira, pois adicionar 5 a qualquer número natural resulta em um número maior. A segunda afirmação "Para todo número natural " é falsa, pois essa condição só é satisfeita para e , mas não para todos os números naturais. 

## Quantificador existencial 

É um conceito imprescindível na lógica matemática, utilizado para afirmar que existe pelo menos um elemento em um conjunto que satisfaz determinada condição. Representado pelo símbolo , o quantificador existencial transforma sentenças abertas em proposições verdadeiras ou falsas, dependendo se ao menos um valor da variável cumpre a condição especificada. 

Assista ao vídeo e entenda melhor o quantificador existencial. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0025-12.png)


Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Observe o seguinte: 

(I) A sentença aberta  p ( x )  dada por "  x > 4  " 

Vamos analisar, inicialmente, duas sentenças: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0025-18.png)


Essa sentença é aberta no conjunto dos números reais 

Veja que, para todos os números reais, essa sentença não é verificada; ela é falsa. Veja! 

- Para x = 1, temos “1 > 4” falsa. 

- 

- Para x = 5, temos “5 > 4” verdadeira. 

- 

Note que, no conjunto dos números reais, existe pelo menos um elemento que satisfaz a propriedade 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0025-26.png)


Portanto, " " é verdadeira e o conjunto verdade é . Entenda melhor! 

(II) a sentença aberta  p ( x )  dada por "  x = x + 2  " 

Agora vamos considerar a sentença aberta dada por " " no conjunto dos números reais ( ), ou seja, o conjunto universo é . 

Observe que essa sentença é falsa para todos os números reais . Veja! 

- Para x = 1, temos “1 = 1 + 2” falsa. 

- 

- Para x = −1, temos “−1 = −1 + 2” falsa. 

- 

- Para x = 2, temos “2 = 2 + 2” falsa. 

- Logo, é falsa e o conjunto verdade é . 

Agora podemos definir o quantificador existencial. 

Dada uma proposição ou sentença aberta em , em que é o conjunto universo ou domínio e o conjunto verdade . Quando existe pelo menos um elemento do conjunto universo que satisfaz , podemos dizer que torna-se verdadeira. Ou seja, o conjunto verdade é não vazio: . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0026-11.png)


Comentário 

Com relação ao quantificador existencial temos, por exemplo, as expressões: “existe pelo menos um”, “existe algum”, “algum” e “existe”. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0026-14.png)


O quantificador existencial é representado pelo símbolo 

Como escrever "Existe em ", "Para algum " ou "Existe pelo menos um em , tal que " com a simbologia da lógica matemática? 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0026-17.png)


Para representarmos as expressões "Para algum", "Existe" e "Existe pelo menos um", usaremos o símbolo seguido do antes de . Veja! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0026-19.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0026-20.png)


(Lê-se: Existe ou existe pelo menos um ou existe algum ) 

O quantificador existencial também é um operador lógico que tem por finalidade transformar uma sentença aberta em , que não tem nenhum valor lógico, em uma sentença verdadeira ou falsa. A operação é denominada quantificação existencial. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-00.png)


#### Comentário 

Podemos usar também as seguintes notações: ou : ou . 

### Exemplo 

Veja como fica a sentença aberta dada em (I): 

Com relação à sentença aberta dada por " " no conjunto dos números reais , podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-06.png)


É uma sentença ou proposição verdadeira. Nesse caso, temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-08.png)


Veja como fica a sentença aberta dada em (II): 

Com relação à sentença aberta dada por " " no conjunto dos números reais , podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-11.png)


É uma sentença ou proposição falsa. Nesse caso, temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-13.png)


Quando o conjunto universo é finito, dizemos que a proposição é equivalente à disjunção. Por exemplo: vamos considerar a sentença aberta " é ímpar" em . Então, temos que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0027-15.png)


Considerando a expressão do tipo: ( é elegante) "Existe pelo menos um ou existe algum , tal que é elegante", ela é falsa se considerarmos o conjunto universo A das pessoas que não são elegantes. 

Você deve ter observado que para alguns problemas a existência da solução ocorre, mas é única, ou seja, para algumas sentenças abertas a solução existe e é única. 

Vamos considerar uma sentença aberta em (conjunto dos números naturais). 

Ao resolvermos essa equação, encontramos duas raízes: 5 e -5 . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0028-04.png)


#### Atenção 

Como o conjunto universo que estamos considerando é , não consideramos o valor negativo -5. Dessa forma, temos apenas um único valor , no conjunto dos números naturais, que confirma a existência da sentença aberta e faz com que seu valor lógico seja verdadeiro. 

Quando temos situações como essa em que existe "um e um só tal que " ou "existe um único " que satisfaz a sentença aberta em , então estamos falando do quantificador de existência e unicidade. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0028-08.png)


Notação: 

Chamamos o símbolo ! de quantificador existencial de unicidade. 

Lê-se: "Existe um e apenas um". 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0028-12.png)


#### Exemplo 

Considere o conjunto universo e a sentença aberta em dada por : " é par".Veja que existe apenas um elemento de que satisfaz a propriedade de ser par, que é 4 .Portanto, é o único valor que torna essa sentença aberta em fechada. é par. 

## Atividade 3 

Considere as seguintes sentenças abertas no conjunto dos números reais: 

"Existe um número real x tal que x + 3 = 10" 

"Existe um número real x tal que x = x + 5" 

Assinale a alternativa correta. 

A 

Ambas as sentenças são verdadeiras. 

B 

A primeira sentença é verdadeira e a segunda sentença é falsa. 

C 

A primeira sentença é falsa e a segunda sentença é verdadeira. 

D 

Ambas as sentenças são verdadeiras dependendo do contexto. 

E 

Ambas as sentenças são falsas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0029-08.png)


#### A alternativa B está correta. 

A primeira sentença "Existe um número real x tal que x + 3 = 10" é verdadeira, pois x = 7 satisfaz a essa condição. A segunda sentença "Existe um número real x tal que x = x + 5" é falsa, pois não existe nenhum número real que satisfaça essa condição. 

## Quantificação sobre sentenças abertas com mais de uma variável 

É muito comum nos depararmos com sentenças abertas que apresentam mais de uma variável. Usamos os quantificadores (universal e existencial) sobre elas e elas se transformam em outra sentença aberta com menos variáveis livres. 

Assista ao vídeo para entender como as sentenças abertas funcionam e como as variáveis livres influenciam a determinação do valor lógico das expressões. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0029-14.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Vamos iniciar com o seguinte exemplo: 

Considere uma expressão do tipo: , em que é o conjunto universo definido por 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0029-19.png)


Note que não conhecemos o valor lógico dessa expressão – que é uma sentença aberta na variável ) –, pois temos duas variáveis: e . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0030-00.png)


#### Comentário 

A variável x está definida no conjunto A, mas desconhecemos os valores de y. Isso faz com que y assuma qualquer valor, e por esse motivo, chamamos y de variável livre. 

Também podemos ter expressões do tipo: , em que é o conjunto universo definido por . Veja que nessa expressão a variável está definida no conjunto , mas nada sabemos sobre a variável . 

Para determinarmos o valor lógico da expressão dada, dependemos da variável . Como pode assumir qualquer valor do conjunto universo escolhido, dizemos que é uma variável livre. 

### Exemplos 

Vejamos alguns exemplos! 

Determine o conjunto verdade das sentenças abertas, em que o conjunto universo das variáveis e é . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0030-08.png)


Resolução: veja que o conjunto verdade é vazio, pois considerando x = 6, a propriedade não é verificada. 

2 x (6) + y < 11 é falso para qualquer valor y de A. 

Acompanhe mais uma vez: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0030-12.png)


O conjunto verdade é . A propriedade é verificada, pois, para qualquer em , a sentença aberta torna-se uma proposição verdadeira. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0030-14.png)


Atenção 

Sentenças abertas podem conter quantificadores diferentes para cada variável. 

Veja o exemplo: 

Considerando os conjuntos A, B e C, temos: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0031-00.png)


Lê-se: para todo em e todo em , tem-se que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0031-02.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0031-03.png)


Lê-se: para todo em existe um em , tal que: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0031-05.png)



![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0031-06.png)


Lê-se: existe em tal que para todo em e em , tem-se que: . 

Verifique o valor lógico das sentenças abertas indicadas. Considere o conjunto universo (conjunto dos números inteiros) e a proposição . 

Observe que, para cada inteiro , existe um inteiro ainda maior. Logo, o valor lógico dessa proposição é verdadeiro. 

Trocando a ordem dos quantificadores , obtemos uma sentença diferente. Nesse caso, o valor lógico da proposição é falso. 

## Atividade 4 

Considere as seguintes sentenças abertas no conjunto dos números inteiros: 

∀x∈Z,∃y∈Z(x<y) 

∃y∈Z,∀x∈Z(x<y) 

Assinale a alternativa correta. 

A 

Ambas as sentenças são verdadeiras. 

B 

A primeira sentença é verdadeira e a segunda sentença é falsa. 

C 

A primeira sentença é falsa e a segunda sentença é verdadeira. 

D 

Ambas as sentenças são verdadeiras dependendo do contexto. 

E 

Ambas as sentenças são falsas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0032-05.png)


A alternativa B está correta. 

A primeira sentença "Para todo número inteiro x, existe um número inteiro y tal que x é menor que y" é verdadeira, pois para qualquer número inteiro x, sempre podemos encontrar um número y maior que x. A segunda sentença "Existe um número inteiro y tal que, para todo número inteiro x, x é menor que y" é falsa, pois não existe um número inteiro que seja maior que todos os outros números inteiros. 

3. Variáveis livres e ligadas e a negação de proposições com quantificadores 

## Variáveis livres e variáveis ligadas 

Compreender a diferença entre variáveis livres e variáveis ligadas no cálculo de predicados é essencial para a análise lógica de sentenças abertas. Esse conhecimento permite que os estudantes identifiquem corretamente o escopo dos quantificadores e a forma como as variáveis interagem dentro de uma proposição. 

Assista a este vídeo para aprofundar seu entendimento sobre essas variáveis e entenda como aplicar esses conceitos em diferentes contextos práticos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0033-04.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Consideremos a expressão do tipo: , em que é o conjunto universo definido por 

. Note que não conhecemos o valor lógico dessa expressão, pois temos duas variáveis: e . A variável está definida no conjunto A e podemos dizer que é uma variável ligada ao quantificador existencial, pois os seus valores estão definidos em . 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0033-09.png)


#### Atenção 

Não conhecemos a variável y, então dizemos que y é uma variável livre. Ela não possui nenhum valor fixo ou particular. Na verdade, a expressão dada é uma sentença aberta, e não uma proposição! 

Vamos aprofundar o conceito de variáveis livres e ligadas com outro exemplo. 

Considere a expressão: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0033-14.png)


A é o conjunto universo definido por A = {1, 2, 3, 4, 5}. 

Aqui, é uma variável ligada ao quantificador universal , significando que, para cada valor de em , a sentença deve ser avaliada. A variável , por sua vez, está ligada ao quantificador existencial ( ), significando que, para cada valor de , existe pelo menos um valor de y que torna a expressão verdadeira. Vamos analisar! 

- Se x = 1, então procuramos um y em A tal que 1 + y = 5. Aqui, y = 4. 

- 

- Se x = 2, então procuramos um y em A tal que 2 + y = 5. Aqui, y = 3. 

- 

- Se x = 3, então procuramos um y em A tal que 3 + y = 5. Aqui, y = 2. 

- 

- Se x = 4, então procuramos um y em A tal que 4 + y = 5. Aqui, y = 1. 

- 

- Se x = 5, então procuramos um y em A tal que 5 + y = 5. Aqui, y = 0 (mas 0 não está em A). 

- 

Nesse exemplo, para , não existe um y em A que satisfaça a expressão , então a sentença não é verdadeira para todos os em . Portanto, a expressão é falsa quando o conjunto é . 

Esse exemplo ilustra como variáveis livres e ligadas funcionam dentro de sentenças abertas, destacando a importância de entender seu escopo para a avaliação lógica correta. 

## Atividade 1 

Considere a seguinte expressão no conjunto dos números naturais N={1,2,3,4,…}: 

(∃x)(x+y<5) 

Qual das seguintes opções descreve corretamente as variáveis livres e ligadas nessa expressão? 

A 

x é uma variável livre e y é uma variável ligada. 

B 

x é uma variável ligada e y é uma variável livre. 

C 

Tanto x quanto y são variáveis livres. 

D 

Tanto x quanto y são variáveis ligadas. 

E 

Tanto x quanto y são variáveis ligadas dependendo do contexto. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0034-16.png)


A alternativa B está correta. 

Na expressão , a variável está ligada ao quantificador existencial , portanto, é uma variável ligada. A variável y não está ligada a nenhum quantificador, portanto, é uma variável livre. 

## Negação de proposições quantificadas 

É um aspecto essencial no estudo da lógica matemática e do cálculo de predicados. Quando lidamos com proposições envolvendo quantificadores universais e existenciais , entender como negar essas proposições corretamente é fundamental para a análise lógica. 

Assista ao vídeo e entenda melhor o conceito de negação de proposições quantificadas. 

#### Conteúdo interativo 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0035-01.png)


Acesse a versão digital para assistir ao vídeo. 

Vamos acompanhar agora alguns exemplos de negação quantificadas que estão em nosso cotidiano. 

Observe a seguinte proposição: 

p: Todo flamenquista é boa gente. 

A negação dessa proposição é: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0035-07.png)


: Existe algum flamenguista que não é boa gente. 

Em matemática, considere a proposição: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0035-10.png)


A proposição ) afirma que para todo no conjunto dos números reais ( ), o quadrado de é maior ou igual a zero. Isso é verdadeiro para todos os números reais, pois o quadrado de qualquer número real nunca é negativo. 

A negação dessa proposição é: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0035-13.png)


## Atividade 2 

Assinale a alternativa que apresenta corretamente a negação de “À noite, todos os gatos são pardos”. 

A 

De dia, todos os gatos são pardos. 

B 

De dia, nenhum gato é pardo. 

C 

De dia, existe pelo menos um gato que não é pardo. 

D 

À noite, existe pelo menos um gato que não é pardo. 

E 

À noite, nenhum gato é pardo. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0036-04.png)


A alternativa D está correta. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0036-06.png)


A negação é equivalente à sim; 

Portanto, sua negação é a proposição: À noite, existe pelo menos um gato que não é pardo. 

## Negação de sentenças abertas com o quantificador universal 

Entender a negação de sentenças abertas com quantificadores universais é uma habilidade fundamental em lógica matemática. Essa compreensão ajuda a manipular proposições complexas e a formular argumentos precisos. Saber como negar corretamente uma expressão com quantificador universal é fundamental tanto para a matemática quanto para a linguística formal, facilitando a análise e a construção de declarações lógicas. 

Assista a este vídeo para aprofundar seu entendimento sobre a negação de sentenças abertas com quantificadores universais e veja como aplicar esses conceitos em diferentes contextos práticos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0036-12.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Considere a expressão a seguir e o conjunto universo H de todos os homens. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0036-16.png)


Nessa expressão, temos que: para todos as pessoas de H, tais pessoas, os homens, são bons motoristas. Para negar essa expressão com a presença do quantificador universal, basta colocar a negação antes do quantificador. Veja! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0036-18.png)


Quando colocamos a negação na frente do quantificador universal, dizemos que: não é verdade que todos os homens são bons motoristas. Portanto, a negação de proposição com quantificador universal é equivalente a: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-00.png)


Alternativamente, podemos escrever: 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-02.png)


Na linguagem corrente, temos que: existe pelo menos um homem que não é bom motorista. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-04.png)


#### Atenção 

Na linguagem corrente, temos algumas expressões que podemos usar para negar o quantificador universal: “Pelo menos um”, “ao menos um”, “existe um”, “algum” ou “existe pelo menos um”. Todos seguidos do “não”. 

Na linguagem corrente, temos algumas expressões que podemos usar para negar o quantificador existencial. Veja algumas dessas expressões! 

#### Negação do "Algum" 

Podemos usar: nenhum, todo, seguido de não.Exemplo: alguns homens são bons motoristas.Negação: nenhum homem é bom motorista.Todo homem não é bom motorista. 

#### Negação do "Nenhum" 

Podemos usar: algum, pelo menos um.Exemplo: nenhum homem é elegante.Negação: algum homem é elegante.Pelo menos um homem é elegante. 

### Exemplos 

Observe alguns exemplos! 

1 

Dê a negação da sentença: (∀x)(x−3≥4) 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-16.png)


A negação é equivalente a 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-18.png)


2 

Dê a negação da sentença: (∃x)(x+3=x) A negação é equivalente a 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0037-21.png)


- 3 Dê a negação da sentença:(∀x∈A)(p(x))∧(∃x∈A)(q(x)) Nessa sentença, vamos aplicar a regra de negação da conjunção. 

<math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mo>∼</mo> <mo stretchy="false">(</mo> <mi>p</mi> <mo>∧</mo> <mi>q</mi> <mo stretchy="false">)</mo> <mo>=∼</mo> <mi>p</mi> <mo>∨</mo> <mo>∼</mo> <mi>q</mi> </math> 

Temos, então: <math xmlns="http://www.w3.org/1998/Math/MathML" display="block"> <mtable displaystyle="true" columnspacing="1em" rowspacing="3pt"> <mtr> <mtd> <mo>∼</mo> <mo stretchy="false">[</mo> <mo stretchy="false">(</mo> <mi mathvariant="normal">∀</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> <mi>p</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> <mo>∨</mo> <mo stretchy="false">(</mo> <mi mathvariant="normal">∃</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> <mi>q</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> <mo stretchy="false">]</mo> </mtd> </mtr> <mtr> 

<mtd> <mo>∼</mo> <mo stretchy="false">(</mo> <mi mathvariant="normal">∀</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> <mi>p</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> <mo>∨</mo> <mo>∼</mo> <mo stretchy="false">(</mo> <mi mathvariant="normal">∃</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> <mi>q</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> </mtd> </mtr> <mtr> <mtd> <mo stretchy="false">(</mo> <mi mathvariant="normal">∃</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> <mo>∼</mo> <mi>p</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> <mo>∨</mo> <mo stretchy="false">(</mo> <mi mathvariant="normal">∀</mi> <mi>x</mi> <mo>∈</mo> <mi>A</mi> <mo stretchy="false">)</mo> <mo stretchy="false">(</mo> 

<mo>∼</mo> <mi>q</mi> <mo stretchy="false">(</mo> <mi>x</mi> <mo stretchy="false">)</mo> <mo stretchy="false">)</mo> </mtd> 

</mtr> 

</mtable> 

</math> 

## Atividade 3 

(UNIRIO - 2014) Com relação à fórmula ∀y((p(x)∧∃x((p(y)∨q(x))) da lógica dos predicados, em que x e y são variáveis e que p e q são predicados unários, pode-se afirmar o seguinte: 

##### A 

Tanto a primeira quanto a segunda ocorrência da variável são ligadas, já que elas pertencem ao escopo do quantificador existencial. 

B 

A variável é livre, já que ela pertence, apenas, ao escopo do quantificador existencial. 

C 

A primeira ocorrência da variável é livre, já que ela não é quantificada. 

##### D 

O quantificador existencial pode ser movido para imediatamente depois do quantificador universal, já que o significado da fórmula não se alteraria. 

E 

O quantificador existencial não pode ser movido para imediatamente antes da subfórmula , pois o significado da fórmula seria alterado. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0041-12.png)


A alternativa C está correta. 

A primeira ocorrência da variável é livre, já que ela não é quantificada, e a variável não está ligada a nenhum quantificador. Portanto, letra C está correta. 

4. Aplicações do cálculo de predicados na computação 

## Cálculo dos predicados na computação 

Vamos conhecer algumas das utilidades práticas do cálculo de predicados na área de computação e suas características. 

Assista ao vídeo e explore mais detalhes! 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0042-04.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

Ao utilizar o conhecimento do cálculo proposicional, analisamos a validade de um argumento a partir da análise das premissas ou hipóteses. Para isso, usamos as regras de inferência. Esse processo também ocorre com o cálculo de predicados. 

Considerando que as premissas são verdadeiras, concluímos que o resultado (conclusão) também é verdadeiro. 

Na computação, uma das primeiras linguagens concebidas para implementar tais procedimentos foi a linguagem de programação Prolog, do inglês, Programming in logic. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0042-10.png)


#### Curiosidade 

A linguagem Prolog foi desenvolvida em 1972 por Alain Colmerauer e seus associados na Universidade de Marseille, na França, com o propósito inicial de traduzir linguagens naturais, e tem uma importância considerável na área de inteligência artificial (IA). 

Uma das características da Prolog é o fato de ser uma linguagem declarativa, também chamada de linguagem descritiva. Isso significa que, dado o problema, ela faz uso do cálculo proposicional e do cálculo de predicados para indicar como o problema deve ser resolvido. Isso é feito por meio da interpretação de quais hipóteses são verdadeiras. 

A linguagem Prolog é formada basicamente de fatos ou informações sobre objetos que desejamos analisar; regras de inferência e perguntas que podemos fazer sobre os objetos dados. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0042-15.png)


#### Atenção 

Para resolver determinado problema, o programa Prolog recorre a uma base de dados formada por fatos e regras. A partir dessa base de dados, é determinado se uma conclusão tem valor lógico verdadeiro ou falso. 

Agora vamos entender o que é um fato! 

Pois bem, é a partir dos fatos que os predicados são definidos, uma vez que a estrutura de um fato é formada por um predicado e seus objetos ou argumentos. Veja! 

#### predicado (objeto 1, objeto 2, ...). 

Acompanhe os seguintes exemplos: 

- amigo(paulo, carlos) – observe que definimos uma relação entre dois objetos, "paulo e carlos". "Paulo é amigo de Carlos". 

- mãe(maria, pedro) – "Maria é mãe de Pedro". 

- 

- gosta(paula, pedro) – "Paula gosta de Pedro". 

- 

Note: o predicado representa uma característica do objeto quando temos apenas 1 objeto. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0043-09.png)


Exemplo 

estudiosa(maria)“Maria é estudiosa” 

Atenção: usamos letras minúsculas para escrever os nomes dos predicados e dos objetos. Como podemos observar nos exemplos anteriores, o predicado vem na frente dos objetos, que são separados por vírgula. 

Por convenção, temos o predicado , que indica " predicado ". Assim, em come(gato, peixe), temos: "Gato come peixe". 

Veja que trocar a ordem dos objetos pode alterar o valor lógico. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0043-15.png)


#### Exemplo 

- come(gato, peixe), temos: “Gato come peixe” – valor lógico verdadeiro. • come(peixe, gato), temos: “Peixe come gato” – valor lógico falso. 

Também podemos fazer perguntas. Na programação Prolog, uma pergunta tem a seguinte estrutura: 

- ? - possui(carlos, computador). Estamos perguntando se " Carlos possui um computador". 

O programa Prolog responde “sim” ou “não”. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0044-00.png)


#### Atenção 

A linguagem Prolog não responde simplesmente “sim” ou “não”; ela vai muito além disso, pois, utilizando regras, unifica informações, analisa os fatos, encontra valores para as variáveis em questão que podem indicar o valor lógico da conclusão. 

A resposta “não” no Prolog indica que não foi possível chegar à conclusão ou provar o fato dado a partir das informações encontradas no banco de dados. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0044-04.png)


#### Exemplo 

Vamos considerar o seguinte banco de dados: engenheiro(luis). Significa: Luis é engenheiro.engenheiro(carlos). Significa: Carlos é engenheiro.carioca(luis). Significa: Luis é carioca. Vamos fazer a seguinte pergunta:? – carioca(carlos).Significa: Carlos é carioca?Note que não é possível afirmar que Carlos é carioca se considerarmos os fatos dados. 

Na pergunta, também podemos fazer uso de variáveis que são denotadas por letras maiúsculas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0044-08.png)


#### Exemplo 

Luiza gosta de todas as pessoas que gostam de corrida.Podemos escrever:Luiza gosta de X se X gosta de corrida. 

As regras, na linguagem Prolog, possuem duas partes e elas são conectadas pelo símbolo “: -“ que representa o “se”. 

A linguagem de programação Prolog, bem como as linguagens da família Lisp, foram as primeiras linguagens de programação concebidas para a definição de sistemas lógicos. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0044-13.png)


#### Saiba mais 

Lisp (do inglês list processing) é uma família de linguagens formais matemáticas, concebida por John McCarthy em 1958. Sua estrutura de dados básica é a lista, que representa tanto os dados quanto os programas, sendo conhecida como uma linguagem funcional por ser um mecanismo formal para manipular funções matemáticas. Lisp possui várias implementações, como Common Lisp, Scheme, Clojure, e se tornou, juntamente com o Prolog, nos anos 1970 e 1980, uma das principais linguagens da comunidade de IA. 

A linguagem Prolog possui diversas aplicações, sendo as principais na área de computação simbólica: 

- Prova automática de teoremas e semântica. 

- 

- Solução de equações simbólicas. 

- 

- Bancos de dados relacionais; semântica. 

- 

- Processamento de linguagem natural. 

- 

- Sistemas especialistas. 

- 

- Planejamento automático de atividades. 

- 

- Aplicação em jogos (xadrez, damas, jogo da velha etc). 

- 

- Compiladores. 

- 

## Atividade 1 

Com relação à linguagem de programação Prolog, marque a alternativa que indica a estrutura de um fato: 

A 

pai(Carlos, Mario) 

B pai(Carlos, mario) C Pai(Carlos, mario) D pai(carlos, Mario) E 

pai(carlos, mario) 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0045-23.png)


A alternativa E está correta. Analisando as alternativas dadas: A) pai(Carlos, Mario). Incorreta, pois os objetos carlos e mario estão com letras maiúsculas. B) pai(Carlos, mario). Incorreta, pois o objeto carlos está com letra maiúscula. C) Pai(Carlos, mario). Incorreta, pois o predicado pai e o objeto carlos estão com letras maiúsculas. 

D) pai(carlos, Mario). Incorreta, pois o objeto mario está com letra maiúscula. 

E) pai(carlos, mario). Correta, pois o predicado e os objetos estão com letras minúsculas. 

## Sistemas especialistas 

São uma aplicação importante do cálculo dos predicados, tendo sido criados por pesquisadores da área de IA, com o objetivo de simular o raciocínio de um profissional especialista em alguma área de conhecimento para uma tomada de decisão específica. 

Assista ao vídeo e entenda a importância dos sistemas especialistas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0046-05.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

A base de dados do sistema especialista é formada por fatos e regras capazes de ajudar de forma eficiente o usuário na tomada de decisão e dar sugestões aos usuários. Isso ocorre por meio de regras que analisam informações e simulações do raciocínio do homem em determinada área de estudo. Com as simulações, surgem questionamentos com relação à tomada de decisão. 

Esse tipo de sistema foi desenvolvido, por exemplo, com a finalidade de: 

- Simular diagnósticos na área médica, uma vez que se tem as informações fornecidas pelos pacientes. 

- 

- Tomada de decisões gerenciais em fábricas. 

- 

- Decisões baseadas em pesquisa de mercado. 

- 

- Declaração de imposto de renda. 

- 

Note que, nesse sistema, as informações não são quantitativas, e sim qualitativas. É importante extrair o máximo de informações possíveis do especialista humano. Assim, temos tomadas de decisão mais eficientes. 

Com relação a regras, elas podem ser simples ou complexas, em que o número de operadores lógicos é maior. Por exemplo: 

#### Regra: " Se Carla não estudar, então ela não será aprovada na disciplina" 

O sistema especialista possui fatos referentes ao problema estudado. Os usuários fornecem as informações e, a partir disso, o sistema procura por regras para unir as premissas às informações dadas. 

Segundo Hayes-Roth (1983), os sistemas especialistas podem ser classificados nas seguintes categorias: 

#### Interpretação 

Inferem descrições de situações a partir da observação de fatos. 

#### Predição 

Deduzem consequências prováveis de determinadas situações. 

#### Diagnóstico 

Deduzem conclusões a partir de fatos observados. 

#### Projeto 

Configuram objetos sob dadas restrições. 

#### Planejamento 

Criam iniciativas para se atingir metas. 

#### Monitoramento 

Comparam fatos observados para detectar vulnerabilidades. 

#### Depuração 

Fornecem soluções incrementais para problemas complexos. 

#### Conserto 

Executam um plano para administrar uma solução prescrita. 

#### Instrução 

Diagnosticam, avaliam e reparam o comportamento do aluno. 

#### Controle 

Interpretam, preveem, reparam e monitoram comportamentos do sistema. 

## Atividade 2 

Segundo Hayes-Roth (1983), qual das seguintes categorias de sistemas especialistas se refere à atividade de deduzir conclusões a partir de fatos observados? 

A 

Interpretação 

B 

Diagnóstico 

C 

Predição 

D 

Monitoramento 

##### E 

Conserto 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0048-12.png)


#### A alternativa D está correta. 

Sistemas especialistas de diagnóstico são projetados para deduzir conclusões a partir de fatos observados, como identificar a causa de uma falha em um sistema ou diagnosticar uma doença com base nos sintomas apresentados. 

## Prova de correção 

Outra utilização do cálculo de predicados diz respeito à correção de programas desenvolvidos com linguagens de programação tradicionais. A verificação do programa tem por finalidade garantir que o programa está correto, atendendo às especificações dadas pelo usuário. 

Assista ao vídeo e entenda a importância da prova de correção. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0048-18.png)


#### Conteúdo interativo 

Acesse a versão digital para assistir ao vídeo. 

A verificação é diferente da validação, que busca garantir que os requisitos do cliente sejam atendidos e, portanto, vai além da correção de programas. 

A verificação é realizada por meio da prova de correção, em que se usa a lógica formal com o intuito de provar que quaisquer variáveis de entrada que atendem às especificações de predicados e as variáveis de saída produzidas pela execução do programa satisfazem outras propriedades específicas. 

Tal prova é baseada na verificação da correção de trechos de programa que incluam comandos presentes em toda linguagem de programação, tais como: 

- Comandos de atribuição de valores a variáveis. 

- 

- Comandos condicionais (IF THEN ELSE). 

- 

- Comandos com laços de repetição (LOOP, FOR, REPEAT UNTLL, WHILE etc.). 

- 

Além da prova de correção, os testes de programas envolvem conjuntos de dados para testes. Eles mostram que os valores de saída são bons à medida que os valores de entrada são aceitáveis. 

## Atividade 3 

Julgue as afirmações a seguir e marque a alternativa correta. 

I. Um programa provavelmente correto sempre dá as respostas certas a dado problema. 

II. A prova de correção envolve o desenvolvimento cuidadoso de conjuntos de dados para testes. 

III. Prova de correção usa a lógica formal. 

A 

Apenas a afirmação I está correta. 

B 

Apenas a afirmação II está correta. 

C 

Apenas a afirmação III está correta. 

D 

Apenas as afirmações II e III estão corretas. 

E 

Apenas as afirmações I e III estão corretas. 


![](Tema%206%20-%20C%C3%A1lculo%20de%20Predicados/input.pdf-0049-23.png)


A alternativa C está correta. Analisando as afirmações, temos que: 

I) Incorreta. Só podemos garantir que a saída satisfaz certas condições se a entrada também satisfaz certas condições. II) Incorreta. São os testes de programas que envolvem conjuntos de dados para testes. 

III) Correta. A prova de correção usa técnicas da lógica formal. 

5. Conclusão 

## Considerações finais 

### O que você aprendeu neste conteúdo? 

- Quantificadores e suas aplicações. 

- 

- O que é uma sentença aberta e como determinar seu conjunto verdade de acordo com o conjunto universo dado. 

- Os predicados e as operações lógicas utilizando o conhecimento adquirido no cálculo proposicional. 

- 

- Trabalhar com os quantificadores e realizar operações lógicas com eles. 

- 

- Breve estudo dos predicados, destacando sua importância na lógica. 

- 

- A relevância dos predicados para estudantes de computação e matemática. 

- 

- Como linguagens de programação utilizam a lógica dos predicados, os conectivos lógicos e as regras de inferência. 

- Algumas aplicações do cálculo de predicados na computação. 

- 

- A importância do conhecimento da lógica e do cálculo de predicados para o desenvolvimento acadêmico e a compreensão de situações cotidianas. 

### Explore + 

Para saber mais sobre os assuntos tratados neste conteúdo: 

##### Leia os artigos: 

Há uma definição absoluta de quantificadores?, de Ângela Pereira. Nesse artigo, a autora fala sobre a contribuição de diversos pensadores no estudo dos quantificadores. 

Um breve histórico do desenvolvimento da lógica matemática e o surgimento da teoria da computação, de Paulo Marcelo Tasinaffo, e entenda o desenvolvimento histórico da lógica matemática e suas contribuições para o surgimento da teoria da computação. 

Assista ao vídeo: 

O que é o tal do algoritmo? ‒ Lógica e programação. Nesse vídeo, a influência da lógica na computação é apresentada de maneira informal, por meio do conceito de algoritmo. 

### Referências 

ALENCAR FILHO, E. Iniciação à lógica ,atemática. 18. ed. São Paulo: Nobel, 2002. 

BARBOSA, M. A. Introdução à lógica matemática para acadêmicos. Curitiba: InterSaberes, 2017. (Série Matemática em Sala de Aula). 

BARROS, D. M. Raciocínio lógico, matemático e quantitativo. São Paulo: Novas Conquistas São Paulo, 2001. (Série Concursos Públicos). 

DAGHLIAN, J. Lógica e álgebra de Boole. 4. ed. 16. reimpr. São Paulo: Atlas, 2012. 

FERNANDES, D. C. R. Lógica matemática. Rio de Janeiro: Seses, 2016. 

GERSTING, J. L. Fundamentos matemáticos para a ciência da computação. 7. ed. Rio de Janeiro: LTC, 2016. 

HAYES-ROTH, F. et al. Building expert systems. Boston: Addison-Wesley, 1983. 

HEGENBERG, L. Lógica: o cálculo de predicados. Rio de Janeiro: Forense Universitária, 2012. 

LEITE, A. E.; CASTANHEIRA, N. P. Raciocínio lógico e lógica quantitativa. Curitiba: InterSaberes, 2017. (Coleção Desmistificando a Matemática). 

MACHADO, N. J.; CUNHA, M. O. Lógica e linguagem cotidiana – verdade, coerência, comunicação, argumentação. 2. ed. Belo Horizonte: Autêntica, 2008. 

