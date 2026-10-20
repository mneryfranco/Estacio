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
