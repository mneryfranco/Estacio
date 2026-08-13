# Resumo — Arquitetura de Computadores (ARA1381)

> Baseado na leitura do conteúdo real (Temas 2–8), não só na ementa.

**Tema 2 — Base Computacional**
História/gerações dos computadores, hardware x software, componentes básicos (CPU, RAM, placa-mãe, periféricos, HD/SSD), sistema operacional (histórico, escalonador, BIOS) e redes (ARPANET, IP, roteadores, WWW, streaming). 100% conceitual/descritivo — nenhum cálculo.

**Tema 3 — Componentes de Hardware**
Aqui entra cálculo: largura de barramento de endereços via potências de 2 (ex.: "4 Mega endereços = 2²² = 22 bits"), organização de memória (2^E = N), registradores especializados (RDM, REM, CI, RI), memória cache e princípio de localidade, hierarquia de memória, DMA, transmissão serial/paralela, tipos de SO (monoprogramável, batch, tempo compartilhado/real, SMP). Contas simples de potência de 2 — nível "cálculo assistido", não pesado.

**Tema 4 — Representação de Dados** (o mais matemático)
Conversão bit↔byte e entre múltiplos (KB/MB/GB/TB, potência de 10 e de 2), conversão entre bases (decimal, binário, octal, hexadecimal) via divisão/multiplicação sucessiva, **operações aritméticas de adição e subtração em bases diferentes de 10** (com "vai 1"/"empresta 1" em binário, octal, hexadecimal), tabelas ASCII/Unicode. Exige cálculo ativo constante e repetitivo.

**Tema 5 — Lógica Digital** (maior exigência de "resolver na mão")
Álgebra booleana, todas as portas lógicas (AND, OR, NOT, NAND, NOR, XOR, XNOR) com tabelas-verdade, montagem/leitura de diagramas lógicos, avaliação de expressões respeitando precedência de operadores, e **simplificação de expressões booleanas** usando 12 regras (De Morgan, absorção, consenso etc.) passo a passo — inclusive operações bit a bit em palavras de 4 bits.

**Tema 6 — Processamento em Paralelo**
Pipeline/superescalar/superpipeline (com contagem de ciclos), taxonomia de Flynn (SISD/SIMD/MISD/MIMD), SMP, coerência de cache (UMA/NUMA/CC-NUMA), multicore, regra de Pollack, hyper-threading. Majoritariamente conceitual, com algumas contas simples de ciclos de pipeline.

**Tema 7 — RISC x CISC**
Conceitual/comparativo (endereçamento R-R/R-M/M-M, pipeline, unidade de controle), com analogia de hamburgueria pra didática. Sem cálculo.

**Tema 8 — Praticando**
20 questões de múltipla escolha revisando tudo, com gabarito comentado longo. Mais "ler e entender por que" do que resolver do zero.

## Leitura vs. exercício
Material intercala exemplos totalmente resolvidos ("Vamos praticar!") com poucas questões de fixação por módulo (2 cada); pouca lista extensa sem solução.

## Familiaridade provável (bagagem de Computação)
- **Já visto, provavelmente (praticamente tudo)**: Von Neumann, cache, RISC/CISC, pipeline, Flynn, bases numéricas, portas lógicas — conteúdo clássico de Organização/Arquitetura.
- **Menos comum**: a seção de redes/internet dentro dessa disciplina (normalmente é curso à parte) e o detalhamento manual de conversão de prefixos de unidades.
