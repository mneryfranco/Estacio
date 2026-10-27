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

#### Esquemas de interconexão — complementos ao vídeo

- **Limite da fonte-base:** a seção “Esquemas de interconexão de processadores” remete a vídeo interativo; seu conteúdo exato não está transcrito no repositório. Os conceitos abaixo são complementares, baseados em referências externas, e não uma reconstrução confirmada da fala do professor.
- **Crossbar (matriz de comutação):** uma matriz de conexões entre processadores e módulos de memória. Cada cruzamento pode estabelecer uma rota entre uma CPU e um banco de RAM. CPUs diferentes podem acessar bancos distintos ao mesmo tempo, mas o mesmo banco pode gerar disputa. O número de conexões/custo cresce com o tamanho da matriz.
- **Malha (mesh):** nós de processamento organizados em grade; cada nó comunica-se diretamente com seus vizinhos na grade.
- **Toro (torus):** parecido com uma malha, com ligações adicionais entre bordas opostas, criando caminhos de retorno (*wraparound*). Não exige que o hardware tenha forma física de rosquinha.
- **Hipercubo (hypercube):** nós conectados segundo as arestas de um cubo generalizado a várias dimensões; uma rede com d dimensões possui 2^d nós e d vizinhos diretos por nó.
  - **Como os dados circulam:** cada nó pode ter CPU, memória local e interface de comunicação. A rede transporta mensagens/pacotes entre nós vizinhos; destinos não adjacentes exigem saltos por nós ou roteadores intermediários (ex.: em três dimensões, `000 → 001 → 011 → 111`). Isso **não significa que a topologia seja uma transferência direta cache→cache**. Em sistemas de memória distribuída, são enviados dados/mensagens; em arquiteturas com memória compartilhada coerente, a rede também pode transportar requisições e dados de coerência entre caches. **Dificuldade recorrente:** distinguir topologia de interconexão de protocolo de coerência.
- **Distinção para prova:** SMP/AMP descrevem a **atribuição de papéis aos processadores**; UMA/NUMA descrevem **características do tempo de acesso à memória**; crossbar/malha/toro/hipercubo descrevem **topologias de interconexão**. Não são classes mutuamente exclusivas na mesma dimensão de análise.
- **Pegadinha:** “matricial” pode referir-se a conexão CPU–memória por crossbar ou a uma malha de nós; a lembrança de cruzamentos entre processadores e RAM favorece a primeira hipótese, sem permitir afirmar o conteúdo exato do vídeo.

Referências complementares: [Emory — Crossbar Switch](https://www.cs.emory.edu/~cheung/Courses/355/Syllabus/90-parallel/CrossBar.html); [Computer Architecture — Interconnection Networks](https://caaqa.bmukou.org/appendix-f.html); [IEEE — Hypercubes](https://technav.ieee.org/topic/hypercubes/).


## Tema 7 — Arquiteturas RISC x CISC

### Conjunto de instruções e motivações

#### Conceitos e comparações

- **ISA (Instruction Set Architecture)** define instruções, registradores, formatos e endereçamento visíveis ao software. Distinguir ISA de **microarquitetura**, a implementação interna do chip.
- **CISC (Complex Instruction Set Computer):** instruções e modos de endereçamento mais variados; algumas instruções combinam acesso à memória e operação aritmética. Exemplos: VAX e família x86. **Complexa** não significa necessariamente maior em bits, mais lenta, nem executada em um ciclo.
- **RISC (Reduced Instruction Set Computer):** tende a operações regulares entre registradores e ao modelo **load/store**: carregar dados da memória, operar nos registradores e armazenar de volta. Exemplos: ARM e RISC-V.
- **Exemplo conceitual:** uma soma envolvendo valor na memória pode aparecer como uma instrução arquitetural CISC; numa ISA RISC load/store pode exigir a sequência carregar → somar → armazenar. A quantidade exata varia conforme a ISA, os dados e os registradores disponíveis.
- **R-R, R-M e M-M:** indicam operandos registrador–registrador, registrador–memória e memória–memória; não são categorias de paralelismo.
- **Motivação histórica do CISC:** memória cara e limitada, código compacto, instruções especializadas e tentativa de aproximar as operações de máquina às linguagens de alto nível. A compatibilidade com programas legados explica parte da permanência do x86.
- **Motivação histórica do RISC:** operações simples e frequentes, uso intensivo de registradores e regularidade de instruções favorecendo decodificação e pipeline; avanços dos compiladores fortaleceram essa proposta.
- **Vantagens e limites:** CISC pode proporcionar densidade de código e compatibilidade; RISC pode facilitar certos projetos e otimizações. **Nenhum dos dois garante maior velocidade ou menor consumo por definição.**
- **Hoje:** chips x86 frequentemente decodificam instruções complexas em micro-operações internas e usam pipeline, execução superescalar e especulação. Chips ARM também podem ser internamente sofisticados. RISC/CISC não são uma divisão simples entre “moderno” e “antigo”.
- **Apple ARM versus PCs x86:** eficiência, compatibilidade, integração, escolhas de projeto, fabricação, cache, software e frequência importam. Não atribuir automaticamente a eficiência de um chip Apple apenas à ISA RISC.

### Tempo de execução, GHz, CPI e IPC

#### Fórmulas e exercícios resolvidos

- **Clock:** 1 Hz = um ciclo por segundo; 1 GHz = um bilhão de ciclos por segundo. Assim, 4 GHz = quatro bilhões de ciclos por segundo, ou 0,25 nanossegundo por ciclo. **Ciclo não equivale necessariamente a instrução concluída.**
- **CPI (Cycles Per Instruction):** ciclos totais ÷ instruções concluídas; **IPC (Instructions Per Cycle):** instruções concluídas ÷ ciclos totais. Medidos no mesmo intervalo, são inversos: IPC = 1/CPI.
- Exemplo: 20 ciclos para 10 instruções → CPI 2, IPC 0,5. Já 20 ciclos para 40 instruções → CPI 0,5, IPC 2. **CPI 0,5 é uma média de vazão**, não latência de meia oscilação para uma instrução individual.
- **Tempo de CPU (modelo didático):** quantidade de instruções × CPI ÷ frequência. A ISA e o compilador afetam a contagem; programa e microarquitetura afetam o CPI. Não comparar máquinas apenas por GHz ou número de instruções.
- **Exercício A/B:** A executa 1 milhão de instruções com CPI 2 → 2 milhões de ciclos. B executa 1,5 milhão com CPI 1 → 1,5 milhão de ciclos. Na mesma frequência, B termina primeiro. A 4 GHz e B a 2 GHz: A leva 0,5 ms e B leva 0,75 ms. Nesse cenário A é **50% mais rápido** em desempenho relativo, embora seu **tempo seja 33,3% menor** que o de B.
- **Compensação:** A com 2 GHz e CPI 1; B com 4 GHz e CPI 2; mesma contagem de instruções → ambos concluem em média 2 bilhões de instruções por segundo, empatando no modelo.
- **Porcentagens de prova:** reduzir CPI de 2 para 1 com frequência e instruções constantes reduz o tempo em 50% e dobra o desempenho (aumento de 100%).

### Pipeline, superescalar e obstáculos

#### Vazão versus latência e riscos

- **Pipeline:** sobrepõe etapas de várias instruções, como linha de montagem. A **vazão** (quantas se concluem por tempo) melhora, mesmo que a **latência** individual (tempo para uma instrução percorrer as etapas) não diminua. Um pipeline simples de uma via pode concluir aproximadamente uma instrução por ciclo depois de cheio, em condições ideais.
- **Superescalar:** permite processar múltiplas instruções em paralelo dentro de um núcleo. Duas vias podem alcançar até duas instruções por ciclo em condições ideais, mas **não garantem IPC 2**.
- **Dependência de dados:** uma operação depende do resultado de outra; por exemplo, somar 5 ao registrador A e depois multiplicar A por 3. A segunda precisa aguardar o resultado relevante. Duas somas independentes podem aproveitar paralelismo se houver hardware.
- **Conflito estrutural:** duas operações independentes disputam um único recurso. Com uma unidade multiplicadora capaz de iniciar uma operação por ciclo, duas multiplicações independentes não podem ser iniciadas juntas.
- **Risco de controle:** um desvio condicional torna incerta a próxima instrução. A CPU pode esperar ou usar **predição de desvios** e execução especulativa. Se prever errado, descarta as instruções especulativas no caminho incorreto (limpeza do pipeline, *flush*) e redireciona a busca, desperdiçando ciclos — sem recomeçar o programa inteiro.
- **Exemplo de previsão:** em 100 desvios, 95% de acerto → 5 erros; 70% → 30 erros. Se cada erro custar hipoteticamente 10 ciclos, perdem-se 50 versus 300 ciclos. Menos erros geralmente reduzem CPI e tempo, mantidas as demais condições.

#### Pegadinhas

- RISC **não é necessariamente mais rápido**; CISC **pode usar pipeline**.
- Menos instruções **não garantem** menor tempo: considerar contagem × CPI ÷ frequência.
- Mais GHz **não garante** maior desempenho.
- CPI é uma **média**, distinta da latência de cada instrução.
- Pipeline, superescalar e SMT não são sinônimos; dependências, recursos e desvios impedem vazão ideal.

Fonte-base: [Tema 7 — Arquitetura RISC x CISC](7%20-%20Arquitetura%20Risc%20X%20Cisc.md). Exemplos, fórmulas e ressalvas complementares consolidados da revisão dialogada.
