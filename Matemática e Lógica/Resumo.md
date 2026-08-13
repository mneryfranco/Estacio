---
tags: [estacio, matematica-e-logica, revisao, resumo]
---
# Resumo — Matemática e Lógica (revisão final)

Cheat-sheet condensado dos Temas 2 a 8. Definições curtas, fórmulas e exemplos mínimos — sem prosa longa.

**Índice:** [[#Tema 2 — Teoria dos Conjuntos e Princípios de Contagem]] · [[#Tema 3 — Gráficos e Interpretações Gráficas]] · [[#Tema 4 — Aprofundamento de Funções]] · [[#Tema 5 — Cálculo Proposicional]] · [[#Tema 6 — Cálculo de Predicados]] · [[#Tema 7 — Métodos de Demonstração]] · [[#Tema 8 — Praticando (dicas e pegadinhas de revisão)]]

---

## Tema 2 — Teoria dos Conjuntos e Princípios de Contagem

### Notação de conjuntos
- **Explícita**: enumera elementos entre chaves, separados por `;` (evita ambiguidade com decimais). Ex.: $B=\{1;3;5;7;9\}$.
- **Implícita**: $A=\{x \mid p(x)\}$ — "conjunto dos $x$ tais que $p(x)$ é verdadeira". Ex.: $\{x\in\mathbb{Z}\mid x^2<9\}=\{-2;-1;0;1;2\}$.
- **Pertinência**: $x\in P$ (pertence) / $x\notin P$ (não pertence). Um conjunto pode ser elemento de outro: se $A=\{1;2;\{3,4\};5\}$, então $\{3;4\}\in A$ mas $3\notin A$.
- **Inclusão**: $Y\subset X$ ("Y contido em X") ⟺ todo elemento de Y é elemento de X. Negação: $\not\subset$.
- **Conjunto vazio** $\varnothing$: subconjunto de qualquer conjunto ($\varnothing\subset X$ sempre).

### Conjuntos numéricos
| Símbolo | Conjunto |
|---|---|
| $\mathbb{N}$ | Naturais: $\{1,2,3,\dots\}$ |
| $\mathbb{Z}$ | Inteiros (naturais + 0 + negativos) |
| $\mathbb{Q}$ | Racionais (quociente de inteiros; inclui decimais exatos e dízimas periódicas) |
| $\mathbb{R}$ | Reais |

### Intervalos
| Notação implícita | Intervalo |
|---|---|
| $a<x<b$ | $(a;b)$ — aberto |
| $a\le x<b$ | $[a;b)$ |
| $x\ge a$ | $[a;+\infty)$ |
| $x<b$ | $(-\infty;b)$ |

### Valor absoluto (módulo)
$$|x|=\sqrt{x^2}=\begin{cases}x,&x\ge0\\-x,&x<0\end{cases}$$
$|x-a|$ = distância entre $x$ e $a$.
Ex.: $|x-1|=3 \Rightarrow S=\{4;-2\}$ (1±3). $|2x-4|<3 \Rightarrow |x-2|<1{,}5 \Rightarrow S=]0{,}5;3{,}5[$.

### Operações entre conjuntos (universo $U$)
$$A\cap B=\{x\mid x\in A \text{ e } x\in B\} \qquad A\cup B=\{x\mid x\in A \text{ ou } x\in B\}$$
$$A-B=\{x\mid x\in A \text{ e } x\notin B\} \qquad A'=U-A$$
Ex.: $A=\{1;2;3;-1;-5\}$, $B=\{-3;-2;1;3\}$: $A\cap B=\{1;3\}$; $A\cup B=\{-5;-3;-2;-1;1;2;3\}$; $A-B=\{2;-1;-5\}$.

**Leis distributivas** (válidas): $A\cup(B\cap C)=(A\cup B)\cap(A\cup C)$; $A\cap(B\cup C)=(A\cap B)\cup(A\cap C)$.

### Princípios de contagem

**Casa dos pombos**: se $n$ pombos em $m$ casas e $n>m$, alguma casa tem ≥2 pombos.
Ex.: entre 12 inteiros, dois têm diferença divisível por 11 (só há 11 restos possíveis na divisão por 11).

**Princípio da adição**: $$n(A\cup B)=n(A)+n(B)-n(A\cap B)$$ Se disjuntos: $n(A\cup B)=n(A)+n(B)$.

3 conjuntos — regiões do diagrama de Venn:
| Região | Fórmula |
|---|---|
| só A | $A-(B\cup C)$ |
| A∩C só | $(A\cap C)-B$ |
| todos | $A\cap B\cap C$ |

Ex.: 200 alunos (inglês/alemão/mandarim); 50 ing+alem, 60 ing+mand, 70 alem+mand, 20 nos três. Só um idioma: $200-(40+30+50+20)=60$.

**Princípio da multiplicação**: decisões sucessivas, $p$ formas na 1ª e $q$ formas na 2ª (quantidade independente da 1ª escolha) → total $p\times q$.
Ex.: números de 2 dígitos distintos com {1,2,3,4}: $4\times3=12$.
Ex.: 4 dígitos distintos com $\{0,4,5,6,7,8\}$ (milhar ≠0): $5\times5\times4\times3=300$.

**Fatorial**: $n!=1\cdot2\cdots n$; $0!=1$. $$10\times11\times\dots\times14=\frac{14!}{9!}$$

### Agrupamentos simples

| Tipo | Ordem importa? | Repetição? | Fórmula |
|---|---|---|---|
| Arranjo simples | Sim | Não | $A_p^n=\dfrac{n!}{(n-p)!}$ |
| Permutação simples | Sim (todos) | Não | $P_n=n!=A_n^n$ |
| Combinação simples | Não | Não | $C_p^n=\dfrac{n!}{(n-p)!\,p!}$ |

Ex. arranjo: filas de 5 alunos dentre 12 → $A_5^{12}=12\times11\times10\times9\times8=\frac{12!}{7!}$.
Ex. permutação: anagramas de "trapo" (5 letras distintas) → $5!=120$.
Ex. combinação: subconjuntos de 3 elementos de um conjunto de 7 → $C_3^7=\frac{7!}{4!\,3!}=35$ (= filas $A_3^7=210$ dividido por $3!$, pois cada trio é contado 6× em ordens diferentes).

### Agrupamentos com repetição

| Tipo | Fórmula | Uso típico |
|---|---|---|
| Arranjo c/ repetição | $AR_p^n=n^p$ | senhas (posições livres) |
| Permutação c/ repetição | $P^n_{p,q,\dots}=\dfrac{n!}{p!\,q!\cdots}$ | anagramas com letras repetidas |
| Permutação circular | $PC_n=(n-1)!$ | disposição em roda/mesa |
| Combinação c/ repetição | $CR_p^n$ | escolher $p$ itens de $n$ tipos, repetindo, sem ordem |

Ex. arranjo c/ repetição: senha de 6 caracteres (62 símbolos) → $62^6$.
Ex. permutação c/ repetição: anagramas de "arranjo" (7 letras, 2 A's + 2 R's) → $\frac{7!}{2!\,2!}=1260$.
Ex. permutação circular: 4 amigos ao redor de uma mesa → $PC_4=3!=6$.

> **Nota**: só permutação simples e combinação simples são realmente indispensáveis — princípios da adição e multiplicação resolvem quase tudo.

**Pegadinhas frequentes**
- Subconjuntos de um conjunto de $n$ elementos: $2^n$ (cada elemento entra ou não).
- Blocos que devem ficar juntos (ex.: livros por assunto): permutar os $k$ blocos ($k!$) × permutar dentro de cada bloco.
- Cargo/posição restrita (ex.: tesoureiro deve ser 1 de 4 pessoas): preencher a posição restrita primeiro, depois as livres em sequência decrescente.

---

## Tema 3 — Gráficos e Interpretações Gráficas

### 1. Intervalos reais

| Símbolo | Notação | Extremo... |
|---|---|---|
| $\geq$, $\leq$ | colchete $[\,]$ (bola fechada) | ...pertence ao conjunto |
| $>$, $<$ | parêntese $(\,)$ ou colchete invertido $]\,[$ (bola aberta) | ...não pertence ao conjunto |

- **Fechado**: $[-4,2] = \{x \in \mathbb{R}; -4 \leq x \leq 2\}$
- **Aberto**: $(-4,2) = \{x \in \mathbb{R}; -4 < x < 2\}$
- **Semirreta**: só uma extremidade (ex.: $x \geq 6 \Rightarrow [6,+\infty)$; $x<6 \Rightarrow (-\infty,6)$). Amplitude sempre infinita.

**Amplitude**: $$\text{Amplitude} = LS - LI$$ (limite superior − limite inferior; vale igual para aberto ou fechado).
Ex.: 2º trimestre do ano (abr, mai, jun) → intervalo $[4,6]$.

### 2. Plano cartesiano
- Eixos: **abscissa** (x, horizontal) e **ordenada** (y, vertical). Origem = $(0,0)$.
- **Par ordenado** $(x,y)$ — abscissa sempre primeiro. Cuidado: notação igual à de intervalo aberto — atenção ao contexto.

Ex.: ponto $(4,2)$ → +2 em y → $(4,4)$ → −3 em x e −2 em y → $(1,0)$.

### 3. Função
**Definição**: para cada valor da 1ª variável (domínio), existe **um único** valor da 2ª. Se $(x,y)$ e $(x,b)$ pertencem à função, então $b=y$.

**Domínio**: conjunto de todos os $x$ para os quais existe $y$ com $(x,y)$ na função.

**Teste da reta vertical**: se toca o gráfico em mais de um ponto → **não é função**.

| Situação | É função? |
|---|---|
| Reta vertical toca em 1 único ponto | Sim |
| Reta vertical toca em 2+ pontos (ex.: $y^2=x$, círculo) | Não |

Exemplos: $y=x^2$ é função. $y=\sqrt{x}$ é função, domínio $x\geq0$. $y^2=x$ **não é função** (cada $x>0$ dá $\pm\sqrt{x}$).
Aplicação: azulejamento — parede de lado $x$ → $C(x)=32x^2$ reais.

### 4. Raízes (zeros) de uma função
Valores de $x$ tais que $f(x)=0$ — pontos $(x,0)$ sobre o eixo OX.

| Caso | Raízes |
|---|---|
| Gráfico nunca toca OX | conjunto vazio |
| Toca em 1 ponto | 1 raiz única |
| Coincide com OX num trecho | infinitas raízes (intervalo) |

### 5. Máximos e mínimos
Ponto de máximo/mínimo = par ordenado $(x_0,f(x_0))$.
- **Máximo global**: $f(x_0)\geq f(x)\ \forall x$.
- **Mínimo global**: $f(x_0)\leq f(x)\ \forall x$.

### 6. Leitura de gráficos — dicas de prova
- "Maior/menor índice", "pico" → localizar ponto mais alto/baixo (máx./mín.).
- Comparar distâncias em grades → **contar unidades**, não "aparência" visual.
- Gráficos com múltiplos cenários → checar **todos** antes de validar uma afirmação.
- Função pode representar fenômeno real sem fórmula explícita — o que importa é a relação sem ambiguidade.

---

## Tema 4 — Aprofundamento de Funções

### Domínio, Contradomínio e Imagem
- **Domínio (D)**: valores válidos de $x$. **Contradomínio (CD)**: conjunto de chegada. **Imagem (Im)**: parte do CD efetivamente atingida. Sempre $\text{Im}\subseteq CD$.

| Tipo de expressão | Restrição | Domínio |
|---|---|---|
| Fração $\frac{1}{x}$ | denominador ≠ 0 | $D=\mathbb{R}^*$ |
| Raiz par $\sqrt{x}$ | radicando ≥ 0 | $D=\{x\mid x\geq0\}$ |
| Polinomial | nenhuma | $D=\mathbb{R}$ |

Ex.: $f(x)=\frac{1}{\sqrt{x}}$ → precisa $x>0$ → $D=\{x\in\mathbb{R}\mid x>0\}$.

Domínio/imagem por gráfico: projeção no eixo $Ox$ = domínio; projeção no eixo $Oy$ = imagem.

**Imagem via função inversa**: trocar $f(x)$ por $y$ → trocar $x\leftrightarrow y$ → isolar $y=f^{-1}(x)$. **Domínio de $f^{-1}$ = imagem de $f$**.

| $f(x)$ | $f^{-1}(x)$ | Domínio de $f$ | Imagem de $f$ |
|---|---|---|---|
| $2x+1$ | $\frac{x-1}{2}$ | $\mathbb{R}$ | $\mathbb{R}$ |
| $\frac{1}{x}$ | $\frac{1}{x}$ | $\mathbb{R}^*$ | $\mathbb{R}^*$ |
| $\lvert x\rvert$ | não bijetora | $\mathbb{R}$ | $[0,+\infty)$ |

### Injetora, Sobrejetora, Bijetora

| Tipo | Condição | Teste |
|---|---|---|
| Injetora | $x_1\neq x_2\Rightarrow f(x_1)\neq f(x_2)$ | reta horizontal corta no máx. 1 vez |
| Sobrejetora | $\forall y\in CD,\exists x\mid f(x)=y$ | $\text{Im}=CD$ |
| Bijetora | injetora + sobrejetora | ambos |

- $f(x)=ax+b,\ a\neq0$ (em $\mathbb{R}\to\mathbb{R}$) → **sempre bijetora**.
- $f(x)=2^x$ → injetora. $f(x)=x^2$ (em $\mathbb{R}$) → nem injetora nem sobrejetora.

### Crescente / Decrescente
- **Crescente**: $x_1<x_2\Rightarrow f(x_1)<f(x_2)$. **Decrescente**: $x_1<x_2\Rightarrow f(x_1)>f(x_2)$.
- Toda função estritamente crescente/decrescente é **injetora**.

| Crescentes | Decrescentes |
|---|---|
| $e^{4x}$, $x$, $x^3$ | $2-e^x$, $-x$, $-\sqrt{x}$ |

### Funções periódicas
$f(x+T)=f(x)\ \forall x$; o **menor** $T>0$ é o período.
- $g(x)=f(kx)$ → período $T/k$. $h(x)=f(x/k)$ → período $Tk$. $h(x)=f(x+q)$ → mesmo período $T$.

Ex.: $f(x)=(-1)^x$, período 2. $\text{sen}(t)$, período $2\pi$.

Ex. numérico: $f:[4,+\infty)\to[-3,7]$, período $T=6$, crescente em $[4,10]$: $f(28)=f(4)=-3$ (subtrai períodos até cair em x conhecido).

### Tabela-resumo geral
| Conceito | Pergunta-chave | Como verificar |
|---|---|---|
| Domínio | Que $x$ fazem sentido? | evitar div/0, raiz par de negativo |
| Imagem | Que valores $f(x)$ atinge? | domínio da inversa ou projeção em $Oy$ |
| Injetora | Cada saída de uma única entrada? | reta horizontal; monotonicidade estrita |
| Sobrejetora | Todo o CD é atingido? | $\text{Im}=CD$ |
| Periódica | Repete em intervalos regulares? | $f(x+T)=f(x)$, achar menor $T$ |

---

## Tema 5 — Cálculo Proposicional

### 1. Proposições
Sentença declarativa de sentido completo, classificável como V ou F (não interrogativa/exclamativa/imperativa).

| Princípio | Significado |
|---|---|
| 3º excluído | Toda proposição é V ou F |
| Não contradição | Nenhuma é V e F ao mesmo tempo |
| Identidade | Uma proposição é igual a si mesma |

- **Simples** (letra minúscula: p, q, r): um só fato. **Composta** (letra maiúscula: P, Q): ligadas por conectivo.

### 2. Conectivos

| Conectivo | Símbolo | Lê-se |
|---|---|---|
| Negação | ¬ | não p |
| Conjunção | ∧ | p e q |
| Disjunção inclusiva | ∨ | p ou q |
| Disjunção exclusiva | ⊕ | ou p, ou q |
| Condicional | → | se p então q |
| Bicondicional | ↔ | p se e somente se q |
| NAND | ↑ | não (p e q) |
| NOR | ↓ | não (p ou q) |

Em p→q: **p = antecedente** (condição suficiente), **q = consequente** (condição necessária).

**Tabela-verdade compacta**

| p | q | ¬p | p∧q | p∨q | p⊕q | p→q | p↔q |
|---|---|---|---|---|---|---|---|
| V | V | F | V | V | F | V | V |
| V | F | F | F | V | V | F | F |
| F | V | V | F | V | V | V | F |
| F | F | V | F | F | F | V | V |

Regras: ∧ só V se ambas V · ∨ só F se ambas F · ⊕ V se diferentes · → só F se p=V e q=F · ↔ V se iguais.

### 3. Construção da tabela-verdade
Linhas = $2^n$ ($n$ = nº de proposições simples). Última coluna alterna V/F de 1 em 1; penúltima de 2 em 2; etc.

**Precedência**: parênteses → negação → ∧/∨ (ordem de aparição) → → → ↔ (mais fraco).

### 4. Tautologia, Contradição, Contingência

| Tipo | Última coluna | Exemplo |
|---|---|---|
| Tautologia | só V | $p\vee\neg p$ |
| Contradição | só F | $p\wedge\neg p$ |
| Contingência | mistura | $p\to q$ |

### 5. Álgebra booleana
1 = V, 0 = F. OR = $A+B$, AND = $A\cdot B$, NOT = $\bar{A}$.
**Precedência**: parênteses → negação → multiplicação ($A\cdot B$) → soma ($A+B$).

### 6. Implicação lógica ($p\Rightarrow q$)
Em toda linha onde p é V, q também é V (olha só linhas com p=V). Ex.: $(p\wedge q)\Rightarrow(p\vee q)$ — sempre verdadeiro.

### 7. Equivalência lógica ($p\Leftrightarrow q$, i.e. $p\leftrightarrow q$ é tautologia)

| Lei | Forma |
|---|---|
| Comutativa | $p\wedge q\equiv q\wedge p$ / $p\vee q\equiv q\vee p$ |
| Associativa | $(p\wedge q)\wedge r\equiv p\wedge(q\wedge r)$ |
| Idempotente | $p\wedge p\equiv p$ / $p\vee p\equiv p$ |
| Absorção | $p\wedge(p\vee q)\equiv p$ |
| Distributiva | $p\wedge(q\vee r)\equiv(p\wedge q)\vee(p\wedge r)$ |
| **De Morgan** | $\neg(p\wedge q)\equiv\neg p\vee\neg q$ / $\neg(p\vee q)\equiv\neg p\wedge\neg q$ |
| Definição de → | $p\to q\equiv\neg p\vee q$ |
| **Negação da condicional** | $\neg(p\to q)\equiv p\wedge\neg q$ |
| Definição de ↔ | $p\leftrightarrow q\equiv(p\to q)\wedge(q\to p)$ |
| Negação da bicondicional | $\neg(p\leftrightarrow q)\equiv p\oplus q$ |
| Dupla negação | $\neg\neg p\equiv p$ |
| **Contrapositiva** | $p\to q\equiv\neg q\to\neg p$ |

**Proposições associadas a $p\to q$:**
| Nome | Forma | Equivalente? |
|---|---|---|
| Recíproca | $q\to p$ | Não |
| Contrária | $\neg p\to\neg q$ | Não |
| Contrapositiva | $\neg q\to\neg p$ | **Sim** (a única) |

Ex. De Morgan: "Não é verdade que Marcela não é bonita ou Maria não é organizada" ≡ "Marcela é bonita **e** Maria é organizada."

### 8. Regras de inferência

| Regra | Sigla | Forma |
|---|---|---|
| Adição | AD | $p\vdash p\vee q$ |
| Simplificação | SIMP | $p\wedge q\vdash p$ |
| **Modus Ponens** | MP | $p\to q,\ p\vdash q$ |
| **Modus Tollens** | MT | $p\to q,\ \neg q\vdash\neg p$ |
| Silogismo Hipotético | SH | $p\to q,\ q\to r\vdash p\to r$ |
| Silogismo Disjuntivo | SD | $p\vee q,\ \neg p\vdash q$ |
| Conjunção | CONJ | $p,\ q\vdash p\wedge q$ |

Ex. MT: "Se Maria estuda, passa" (p→q), "Maria não passou" (¬q) ⊢ "Maria não estudou" (¬p).

### 9. Argumentos
$P_1,\dots,P_n\vdash Q$. **Válido**: premissas V ⟹ conclusão necessariamente V. **Inválido** = sofisma/falácia.
Verificação: tabela-verdade (premissas∧...→conclusão deve ser tautologia) ou regras de inferência em cadeia (mais rápido).

---

## Tema 6 — Cálculo de Predicados

### 1. Sentença aberta
$p(x)$: expressão com variável $x$ que vira V/F ao substituir $x$ por elemento do conjunto universo $A$. Não é proposição por si só.

### 2. Conjunto universo e conjunto verdade
$$V_p=\{x\in A\mid p(x)\}$$

| Situação | Significado |
|---|---|
| Condição universal | $V_p=A$ |
| Condição possível | $V_p\subset A$ |
| Condição impossível | $V_p=\varnothing$ |

Duas variáveis: $V_p=\{(x,y)\in A\times B\mid p(x,y)\}$.

### 3. Operações lógicas sobre sentenças abertas

| Operação | Conjunto verdade resultante |
|---|---|
| $\neg p(x)$ | $A-V_p$ |
| $p(x)\wedge q(x)$ | $V_p\cap V_q$ |
| $p(x)\vee q(x)$ | $V_p\cup V_q$ |
| $p(x)\to q(x)$ | $(A-V_p)\cup V_q$ |
| $p(x)\leftrightarrow q(x)$ | $(V_p\cap V_q)\cup((A-V_p)\cap(A-V_q))$ |

### 4. Quantificadores

| Símbolo | Lê-se | Verdadeiro quando |
|---|---|---|
| $\forall$ | para todo | $V_p=A$ |
| $\exists$ | existe (pelo menos um) | $V_p\neq\varnothing$ |
| $\exists!$ | existe um único | exatamente 1 elemento satisfaz |

Ex.: $p(x): x>4$ em $\mathbb{R}$ → $\exists x, p(x)$ é **V** (x=5). $p(x): x^2=x$ em $\mathbb{R}$ → $\forall x, p(x)$ é **F** (falha em x=-1).

**Múltiplas variáveis — a ordem importa** quando os quantificadores são de tipos diferentes:
$U=\mathbb{Z}$, $p(x,y): x<y$: $\forall x\exists y\,(x<y)$ é **V** (sempre há um maior); $\exists y\forall x\,(x<y)$ é **F** (não existe máximo).

**Variável livre vs. ligada**: ligada = sob escopo de quantificador; livre = fora — sentença continua "aberta".

### 5. Negação de quantificadores

| Original | Negação |
|---|---|
| $\forall x, p(x)$ | $\exists x, \neg p(x)$ |
| $\exists x, p(x)$ | $\forall x, \neg p(x)$ |
| $\forall x\exists y, p(x,y)$ | $\exists x\forall y, \neg p(x,y)$ |

| Termo | Negação |
|---|---|
| Todo/Todos | Algum...não / Nem todo |
| Algum | Nenhum |
| Nenhum | Algum / Pelo menos um |

Ex.: "Todo flamenguista é boa gente" → ¬: "Existe um flamenguista que não é boa gente".

### 6. Aplicações (Prolog / sistemas especialistas)
Prolog: linguagem declarativa (fatos, regras `:-`, perguntas), predicado(objeto1, objeto2,...) — ordem dos objetos importa.
Sistemas especialistas: interpretação, predição, diagnóstico, planejamento, monitoramento, depuração, controle.
Prova de correção ≠ validação ≠ testes.

---

## Tema 7 — Métodos de Demonstração

Base: tabela-verdade de $p\to q$ (só F quando p=V e q=F). **Modus ponens** = base da direta. **Contrapositiva**: $p\to q\equiv\neg q\to\neg p$.

| Método | Ideia central | Melhor quando... |
|---|---|---|
| **Trivial** | Q é sempre verdadeira, independe de P | conclusão não depende da hipótese |
| **Vacuidade** | P é sempre falsa | hipótese nunca se satisfaz no domínio |
| **Direta** | P verdadeira ⟹ ... ⟹ Q verdadeira | há caminho algébrico claro |
| **Contrapositiva** | ¬Q ⟹ ... ⟹ ¬P | negar a conclusão é mais simples |
| **Contradição/absurdo** | ¬P leva a contradição | provar existência/irracionalidade/impossibilidade |
| **Indução matemática** | Base + [P(k)⟹P(k+1)] | proposições sobre inteiros positivos, depende só do caso anterior |
| **Indução forte** | Base + [P(n₀)∧...∧P(k)]⟹P(k+1) | próximo caso depende de vários anteriores (recorrências) |

**Exemplos rápidos**
- *Trivial*: se n é ímpar, $n^2-n$ é par — vale sempre ($n(n-1)$ = produto de consecutivos).
- *Vacuidade*: se $x^2<0$ então $x>8$ — hipótese impossível ($x^2\geq0$ sempre) → V por vacuidade.
- *Direta*: n ímpar ($n=2k+1$) ⟹ $n^2=2(2k^2+2k)+1$ ⟹ ímpar.
- *Contrapositiva*: $n^2$ par ⟹ n par. Prova: supõe n ímpar (¬P) ⟹ $n^2$ ímpar (¬Q) ⟹ contrapositiva válida.
- *Contradição*: racional + irracional = irracional. Supõe soma racional ⟹ isola o irracional como razão de inteiros ⟹ contradição.
- *Indução simples*: $1+2+\dots+n=\frac{n(n+1)}{2}$. Base n=1 ✓; passo: soma até k+1 = $\frac{k(k+1)}{2}+(k+1)=\frac{(k+1)(k+2)}{2}$ ✓.
- *Indução forte*: $a_n=a_{n-1}+a_{n-2}$ (tipo Fibonacci), provar $a_n\leq2^n$ — precisa dos **dois** termos anteriores, não só do imediato.

**Quantificadores (apoio):** $\neg(\forall x, P(x))\equiv\exists x,\neg P(x)$; $\neg(\exists x, P(x))\equiv\forall x,\neg P(x)$.

---

## Tema 8 — Praticando (dicas e pegadinhas de revisão)

Revisão integrada — questões "estudo de caso" com contexto longo, mas o cerne é sempre um conceito pontual. **Ignore a narrativa, identifique o conceito.**

### Contagem: Combinação × Arranjo
| Pista no enunciado | Técnica |
|---|---|
| "ordem não importa", "escolher subconjunto/grupo" | Combinação $C_p^n$ |
| "ordem importa", "senha/fila/código" | Arranjo $A_p^n$ |
| "**deve conter obrigatoriamente** certos elementos" | Total − casos que excluem esses elementos (ex.: $A_4^9-A_4^7$) |
| Dois grupos independentes | Combine cada grupo separado e **multiplique** |

Pegadinha: alternativas trocam C por A, ou usam PR/AR quando não há repetição — releia se o problema permite repetir.

### Conjuntos / Intervalos
Ao somar dois intervalos elemento a elemento, combine os **extremos** (min+min, min+max, max+min, max+max) — o resultado pode ser **união de intervalos disjuntos**. Ex.: $X=[0,2]$, $Y=[1,2]$ → $X+Y=[1,2]\cup[3,4]$ (não $[1,4]$).

### Gráficos / Funções
- "É função?" → cada entrada tem saída única. Duas saídas para a mesma entrada → não é função.
- Cuidado com alternativas absolutas ("todas diferentes", "a mesma é a mais cara e a mais barata") — geralmente a certa é a mais moderada.
- Periódica: $f(\text{valor grande})$ → **subtraia períodos** até cair num $x$ conhecido: $f(6)=f(6-T)$.
- Função afim $f(x)=ax+b,\ a\neq0$, $\mathbb{R}\to\mathbb{R}$ → **sempre bijetora** (padrão recorrente).

### Cálculo Proposicional
- Precedência: parênteses → negação → ∧ → ∨ → → → ↔.
- **Negação do condicional** (pegadinha mais recorrente): $\neg(p\to q)\equiv p\wedge\neg q$ — mantém p, nega só q. NÃO inverta o "se...então".
  Ex.: negação de "se chove, levo guarda-chuva" = "está chovendo **e** eu não levo".
- Silogismos com condicionais + disjunção: parta do fato certo (premissa categórica) e aplique MP/MT em cadeia.

### Cálculo de Predicados
- "Todo x≠0 tem inverso" → $\forall x(x\neq0\to\exists y, xy=1)$. Erros comuns: usar ↔ em vez de →; esquecer o $\exists y$; trocar $\forall$ por $\exists$ em x.
- $\neg\forall x\,P(x)\equiv\exists x\,\neg P(x)$ — dupla negação em cascata colapsa para existencial simples (não vira "nenhum").

### Métodos de Demonstração
| Método | Estrutura cobrada |
|---|---|
| Absurdo | Supor P e ¬Q, chegar a contradição |
| Direta | Forma algébrica da hipótese (n=2k) → tese decorre |
| Contraexemplo | Padrão válido em casos pequenos **não prova geral** — ex.: $2^{2^n}+1$ é primo p/ n=1..4, falha em n=5 |

### Padrão geral
Alternativas erradas costumam trocar: combinação↔arranjo, ∀↔∃, →↔↔, ou negar só metade de uma proposição composta.
