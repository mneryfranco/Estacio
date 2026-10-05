# Resumo — Probabilidade/Estatística + Python (DGT1344)

> Baseado na leitura do conteúdo real (6 módulos), não só na ementa.

**Análise de Dados Quantitativos com Python**
Classificação de variáveis, distribuição de frequência (classes, Fac, Xi), medidas de posição para dados agrupados/não agrupados (média, mediana, moda — incluindo fórmula de Czuber), separatrizes (quartis, decis, percentis), variância/desvio-padrão/coeficiente de variação. Python só entra no fim, de forma superficial.

**Probabilidades**
Espaço amostral, partição, Laplace vs. frequentista, princípios de contagem e análise combinatória completa (arranjo, permutação simples/repetição/circular, combinação simples/repetição), regra da adição e multiplicação/independência. Sem Python.

**Probabilidade Condicional e Independência**
Prova formal dos três axiomas para probabilidade condicional, independência estatística, teorema do produto, probabilidade total, teorema de Bayes — com várias questões reais de concurso (ANPEC). Sem Python.

**Variáveis Aleatórias Discretas**
Bernoulli, Binomial, Geométrica, Hipergeométrica, Poisson — cada uma com **dedução completa** de E(X) e Var(X) via somatórios, progressão geométrica e binômio de Newton.

**Variáveis Aleatórias Contínuas**
fdp/fda via integral, esperança/variância por integração, Uniforme, Exponencial (prova da propriedade "sem memória"), Normal (padronização Z, tabelas Z e t de Student, combinação linear de normais, Teorema Central do Limite).

**Python Aplicado**
matplotlib (barras, pizza, histograma, boxplot) com código real de dataframes/subplots/cores; depois `scipy.stats` aplicado às mesmas distribuições discretas e contínuas dos módulos anteriores (pmf, cdf, mean, var).

## Profundidade
A matemática é rigorosa — há deduções passo a passo (não só fórmula pronta), incomum em cursos aplicados. Já o Python é sempre trivial: chamadas de funções prontas de biblioteca (`scipy.stats.binom.pmf`, `norm.cdf`, `plt.hist`), sem loops, condicionais ou algoritmos escritos do zero — é "usar API", não "programar".

## Leitura vs. calcular
Os módulos de estatística/probabilidade são fortemente "mão na massa" — dezenas de questões resolvidas na régua, exigindo cálculo manual com calculadora científica. O módulo de Python é mais "ler e replicar código" — pouca produção autônoma de lógica.

## Familiaridade provável (bagagem de Computação)
- **Já visto, provavelmente**: análise combinatória, probabilidade clássica, distribuições discretas/contínuas padrão, Bayes e independência — conteúdo comum de qualquer disciplina de Probabilidade e Estatística de curso de exatas.
- **Novidade real, mesmo pra quem já programou**: distribuição t de Student, separatrizes detalhadas e principalmente a API específica (`pandas`, `matplotlib`, `scipy.stats`) — é sintaxe/biblioteca nova, não lógica nova.
