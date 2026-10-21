# Resumo — Arquitetura de Computadores

> Revisão acumulativa dos conceitos estudados, com foco nas justificativas, dificuldades e pegadinhas de prova.

## Tema 5 — Lógica Digital

### Módulo de revisão — Álgebra booleana e simplificação

#### Lei do consenso (cobertura)

- **Forma:** `A·B + ¬A·C + B·C = A·B + ¬A·C`.
- **Significado:** o termo `B·C` é redundante: ele não acrescenta nenhum caso em que a expressão seja verdadeira.
- **Por quê:** se `B=C=1`, há duas possibilidades: com `A=1`, o termo `A·B` já vale 1; com `A=0`, `¬A·C` já vale 1. Se `B·C=0`, esse termo de qualquer modo não altera a soma lógica.
- **Demonstração algébrica:** `B·C = B·C·(A+¬A) = A·B·C + ¬A·B·C`. Portanto, `A·B + ¬A·C + B·C = A·B·(1+C) + ¬A·C·(1+B) = A·B + ¬A·C`.
- **Atalho de prova:** procure dois produtos com uma variável em formas opostas (`A` e `¬A`); o produto das partes restantes (`B·C`) é o possível consenso redundante.
- **Pegadinha:** não elimine um termo apenas porque contém variáveis que aparecem nos outros: a remoção depende da estrutura `XY + ¬X Z + YZ`. A lei também pode ser aplicada com outros nomes de variáveis ou em ordem diferente.
- **Dificuldade a revisar:** entender *por que* o termo consensual não acrescenta combinações, em vez de apenas memorizar a fórmula.

Fonte-base: [Tema 5 — Lógica Digital](5%20-%20L%C3%B3gica%20Digital.md), seção “Lei do consenso (Cobertura)”.

#### Reconhecimento de padrões — Prática 2

- Procure produtos quase idênticos, como `A·B·C + A·B·¬C`: fatorando `A·B`, obtém-se `A·B·(C+¬C)=A·B`.
- Outra dupla: `A·B·C + A·¬B·C=A·C·(B+¬B)=A·C`.
- No exemplo da Prática 2, as duas duplas permitem `X=A·B+A·C=A·(B+C)`. A apostila apresenta `A·B+A·C`; ambas as formas são equivalentes.
- **Atalho de prova:** dois produtos que só diferem por uma variável complementada permitem eliminar essa variável: `P·Y+P·¬Y=P`.
- **Dificuldade:** reconhecer o par antes de escolher a lei; busque a parte comum e o par `Y/¬Y`.

#### Reconhecimento de padrões — Prática 3

- **Expressão da imagem:** `X=A·B·C + A·¬C + A·¬B`. Primeiro identifique o fator comum `A` nos três produtos: `X=A·(B·C+¬C+¬B)`.
- **Pista para o próximo passo:** pela lei de De Morgan, `¬B+¬C=¬(B·C)`. Assim, os dois termos `B·C` e `¬(B·C)` são complementares, cuja soma OR é `1`. Portanto, `X=A·1=A`.
- **Atalho de prova:** se todos os termos têm um fator comum, tente fatorá-lo antes de distribuir. Dentro do parêntese, procure `Y+¬Y`, mesmo quando `¬Y` está disfarçado como soma de variáveis negadas (`¬B+¬C`).
- **Dificuldade a revisar:** o reconhecimento da negação de um produto pela lei de De Morgan, sem depender do gabarito.

## Tema 6 — Processamento em paralelo

### Módulo 2 — Tipos de organizações de processadores paralelos

#### Múltiplos processadores — taxonomia de Flynn

- **Ideia central:** paralelismo permite que partes de um trabalho avancem ao mesmo tempo, mas depende de operações independentes e coordenação; não implica que qualquer programa ficará proporcionalmente mais rápido.
- **Dois critérios da taxonomia de Flynn:** quantidade de **fluxos de instruções** (o que executar) e de **fluxos de dados** (sobre quais valores executar). *Single* = único; *Multiple* = múltiplos.
  - **SISD:** uma instrução sobre um fluxo de dados; organização sequencial clássica. Pode empregar pipeline e outras técnicas de paralelismo interno sem se tornar SIMD/MIMD por isso.
  - **SIMD:** uma instrução aplicada a múltiplos dados; exemplo: somar 1 simultaneamente aos elementos de um vetor.
  - **MISD:** múltiplos fluxos de instruções sobre um único fluxo de dados; o material trata como caso teórico/não usual.
    - **Exemplo apenas ilustrativo:** imagine o mesmo fluxo de leituras de um sensor sendo enviado a diferentes unidades, cada uma executando um algoritmo distinto sobre esses dados. Essa analogia ajuda a distinguir as letras, mas não é prova de uma implementação MISD real. **Pegadinha:** *pipeline* comum e execução sequencial de etapas não são, por si só, exemplos de MISD.
  - **MIMD:** múltiplos fluxos de instruções sobre múltiplos dados; diferentes processadores/núcleos podem executar tarefas distintas, com sincronização quando compartilham recursos.
- **Atalho de prova:** em **SIMD**, repete-se a **mesma operação em valores diferentes**; em **MIMD**, executam-se **operações diferentes sobre dados diferentes**. A primeira letra refere-se às instruções; a segunda, aos dados.
- **SMP (multiprocessamento simétrico):** dois ou mais processadores de funções equivalentes, sob um mesmo sistema operacional, compartilhando memória principal **e dispositivos de entrada/saída**.
  - **Contraste complementar — AMP (multiprocessamento assimétrico, não assíncrono):** processadores/núcleos podem assumir **funções ou papéis diferentes**, com atribuição específica de tarefas/recursos; no modelo clássico pode haver processador principal coordenando subordinados. Em implementações atuais, diferentes núcleos podem executar sistemas distintos (ex.: Linux e um SO de tempo real). **Pegadinha:** simétrico/assimétrico descreve a organização de papéis; síncrono/assíncrono se refere à coordenação temporal, outra distinção. O Tema 6 desenvolve SMP e não detalha AMP; complemento conforme documentação AMD/OpenAMP.
- **UMA x NUMA:** em UMA, o tempo de acesso à memória é aproximadamente uniforme entre processadores; em NUMA, a memória local ao processador/nó tende a ser mais rápida que memória remota. O barramento comum pode gerar gargalo no UMA; acessos remotos podem prejudicar o NUMA.
- **Coerência de cache:** evita que processadores trabalhem com cópias inconsistentes de um dado compartilhado. No UMA, o material exemplifica escuta do barramento; em CC-NUMA, há protocolo para coordenar nós e versões dos dados.
  - **Pegadinha:** coerência não é manter cada cache sempre idêntico à RAM. Se a CPU 1 altera `X=100` para `X=110` em sua cache, pode invalidar a cópia da CPU 2 antes de atualizar a RAM; uma nova leitura da CPU 2 deve receber a versão coerente. A coerência é entre as visões das CPUs, não uma cópia imediata da memória principal. Isso tampouco substitui sincronização de acessos concorrentes.
- **Pegadinhas:** SMP **não** significa periféricos de E/S exclusivos; SIMD **não** exige necessariamente vários processadores físicos; *pipeline* em processador SISD não o transforma automaticamente em MIMD.
- **Ponto para revisão:** primeiro identificar os eixos “instrução/dado”, depois distinguir organização do processamento (Flynn), dos processadores (SMP) e acesso à memória (UMA/NUMA).

Fonte-base: [Tema 6 — Processamento em paralelo](6%20-%20Processamento%20em%20Paralelo.md), seção “Múltiplos processadores”.
