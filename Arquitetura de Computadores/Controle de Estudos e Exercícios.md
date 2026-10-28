# Controle de Estudos e Exercícios — Arquitetura de Computadores

> Disciplina: ARA1381 · Início do acompanhamento: 28/10/2026 · Fonte: [Ementa](Ementa.md), Temas 2–8 e respostas do simulado conversacional.
>
> **Objetivo:** exercitar os tópicos até que **todos os temas** atinjam desempenho satisfatório. Atualizar este controle após novos blocos de questões, registrando justificativas, dúvidas e próximos testes.

## Critérios de avaliação

- **Não avaliado:** sem questão específica respondida.
- **Em desenvolvimento:** erro, chute, insegurança, ou resolução com ajuda; requer retomada sem dicas.
- **Bom desempenho:** resposta correta com raciocínio apropriado, porém cobertura ou variedade ainda insuficiente.
- **Satisfatório:** acertos independentes e justificados em questões variadas, incluindo aplicação; todos os tópicos relevantes do tema cobertos.
- **Regra:** um acerto isolado não eleva o tema inteiro a satisfatório; distinguir reconhecimento de domínio demonstrado.

## Painel por tema

| Tema | Situação geral | Evidências | Pendências prioritárias |
|---|---|---|---|
| **2 — Base Computacional** | **Em desenvolvimento (cobertura incompleta)** | Q12: SO correto, justificado sem eliminação; Q13: BIOS/UEFI correta por reconhecimento; Q14: gerações incorreta, confundiu transistores com circuitos integrados | BIOS/UEFI em situação prática; gerações (revisar sequência), hardware × software, redes/Internet, escalonamento |
| **3 — Componentes de Hardware** | **Em desenvolvimento (cobertura incompleta)** | Q1 endereços correto após ajuste; cache e Von Neumann corretos; Q8 sequência CI–REM–RDM–RI acertada inicialmente por chute e duas fixações corretas; Q15 hierarquia correta; Q16 DMA ainda não conhecido | Revisar registradores sem dicas; DMA (conceito inicialmente desconhecido), barramentos, E/S, transmissão serial/paralela, tipos de SO |
| **4 — Representação de Dados** | **Bom desempenho parcial** | Q3 binário→decimal correto e explicado; Q9 binário→hexadecimal por grupos correto e explicado | Conversões em outros sentidos, octal, aritmética em bases, unidades/prefixos, ASCII/Unicode |
| **5 — Lógica Digital** | **Em desenvolvimento** | Q2 simplificação precisou de explicação; distributiva direta correta; XOR correto; Q11 fatoração e complemento concluídos com perguntas guiadas | Resolver simplificações *sozinho*; De Morgan, absorção/consenso, NAND/NOR/XNOR, tabelas-verdade, precedência, bit a bit |
| **6 — Processamento em Paralelo** | **Bom desempenho parcial** | SMT reconhecido sem lembrar conceito; Flynn/SIMD correto com sigla; NUMA correto com justificativa; IPC/CPI inversos correto | SMT sem pistas; SMP/AMP, UMA/CC-NUMA, coerência, pipeline/superescalar, ciclos, Pollack |
| **7 — RISC × CISC** | **Bom desempenho parcial** | Q7 RISC e pipeline correto | Endereçamento R-R/R-M/M-M, controle, comparações conceituais mais difíceis |
| **8 — Praticando** | **Não avaliado sistematicamente** | Simulado conversacional misto em andamento | Resolver itens integradores da lista do Tema 8 e revisar erros |

## Registro de exercícios

| Questão | Tópico | Resultado | Observação diagnóstica |
|---|---|---|---|
| Q1 | Largura de barramento / 4 Mi posições | Correta: 22 bits | Confundiu inicialmente bits de endereço com bits de dados; corrigido |
| Q2 | Simplificação `A + (¬A·B)` | Precisou de explicação | Rever distributiva do OU sobre E |
| Fixação | `A·(B+C)` | Correta: `AB+AC` | Distributiva direta reconhecida |
| Q3 | `101101₂` em decimal | Correta: 45 | Método por potências de 2 explicado |
| Q4 | SMT 2 vias, 4 núcleos | Correta: 4 físicos / 8 lógicos | Não recordava o conceito de SMT |
| Q5 | Memória cache | Correta: localidade | Temporal e espacial explicadas |
| Q6 | Von Neumann | Correta: gargalo | Reconheceu disputa por caminho compartilhado |
| Q7 | RISC × CISC | Correta: instruções regulares facilitam pipeline | Teste ainda apenas de reconhecimento |
| Revisão | IPC × CPI | Correta: inversamente proporcionais | Falta cálculo aplicado |
| Q8 | CI, REM, RDM, RI | Correta por chute | Fixações REM e RDM corretas; retestar sequência integral |
| Q9 | `11010110₂` em hexadecimal | Correta: D6 | Agrupamento em nibbles explicado |
| Q10 | XOR(1,1) | Correta: 0 | Sem dúvida relatada |
| Q11 | `AB + A¬B` | Correta com ajuda: A | Fatoração e complemento compreendidos verbalmente; precisa autonomia |
| Flynn | GPU / SIMD | Correta: SIMD | Expandiu *Single Instruction Multiple Data* |
| NUMA | Latência não uniforme | Correta: B | Justificou pela localidade da memória |
| Q12 | Papel do sistema operacional | Correta: E | Justificou por conhecimento da função |
| Q13 | BIOS/UEFI e boot | Correta: C | Conhece a função básica; falta aplicação prática |
| Q14 | Gerações dos computadores | Incorreta: B; correta C | Recordou válvulas como lâmpadas, mas atribuiu circuitos integrados à segunda geração; fixação posterior: 3ª geração = circuitos integrados correta |
| Q15 | Hierarquia de memória | Correta: B | Cache menor e mais rápida que RAM; reconhecimento rápido; falta aplicação |
| Q16 | DMA | Não respondeu; desconhecia conceito | Foi explicado o acesso direto à memória; retestar sem pista |

## Dificuldades, pegadinhas e atalhos

- **Endereçamento:** quantidade de endereços determina largura do barramento de endereços; bits armazenados por posição dizem respeito à largura de dados. Para `2^n` posições, são necessários `n` bits de endereço.
- **Booleana:** identificar o operador externo antes de distribuir; `X+YZ=(X+Y)(X+Z)` e `X(Y+Z)=XY+XZ`. Em `AB+A¬B=A(B+¬B)=A`, o fator comum fica fora.
- **Registradores:** `CI → REM → memória → RDM → RI` é o modelo didático da busca; distinguir endereço de conteúdo.
- **SMT:** processadores lógicos não são núcleos físicos independentes; compartilham recursos.
- **DMA:** controlador transfere dados entre dispositivo e RAM sem a CPU mover cada unidade; CPU pode configurar e receber interrupção. Conceito não reconhecido na Q16.
- **Gerações:** 1ª válvulas → 2ª transistores → 3ª circuitos integrados → 4ª microprocessadores. Confusão observada entre 2ª e 3ª.
- **Avaliação:** acertos guiados e chutes não equivalem a domínio autônomo.

## Próximas ações

1. Testar BIOS/UEFI em cenário prático, gerações, redes e hardware/software no Tema 2.
2. Intercalar tópicos ainda não testados com retomadas **sem ajuda** de booleana, registradores e SMT.
3. Aplicar cálculos de bases/unidades, pipeline e exercícios integradores do Tema 8.
4. Atualizar tabela, registro e dificuldades após novos exercícios; não apagar histórico, registrar evolução.
