# Resumo — Engenharia de Software (DGT2194)

> Baseado na leitura do conteúdo real (6 módulos), não só na ementa.

**Fundamentos de Software e Gerenciamento de Projetos**
Define engenharia de software via SWEBOK (camadas qualidade/processo/métodos/ferramentas), tipos de requisito (funcional, não funcional, domínio — base Sommerville), fases genéricas do processo e fluxos de processo (linear, iterativo, evolucionário, paralelo). A segunda metade é 100% PMI/PMBOK: 5 grupos de processos, 10 áreas de conhecimento, EAP/WBS, cronograma/rede de atividades, e um módulo inteiro de gerenciamento de risco (matriz probabilidade×impacto, exemplo numérico resolvido passo a passo).

**Fases do Desenvolvimento de Software**
Aprofunda projeto (design) e implementação: refinamento de modelo de classes, arquitetura em camadas, diagramas UML (casos de uso, classes, sequência), mapeamento objeto-relacional, padrões de projeto, tradução de modelo em código.

**Modelos de processos** (o mais "framework-denso")
Cascata, modelo em V, prototipação (4 etapas), RAD como prescritivos; RUP (fases concepção/elaboração/construção/transição e suas disciplinas); metodologias ágeis com foco pesado em XP (valores, 12 práticas, pair programming, TDD, planning game) e menção a Scrum.

**Qualidade de Software**
Atributos ISO/IEC 9126 (funcionalidade, confiabilidade, usabilidade, eficiência, manutenibilidade, portabilidade), SQA (equipe e plano de qualidade), revisões técnicas formais, CI/CD, smoke tests, métricas (complexidade ciclomática, LOC, Fan-in/Fan-out, Fog Index).

**Gerenciamento de Configurações**
Processo de Pressman (identificação de itens de configuração, controle de versão, controle de mudanças, auditoria, relato de status), Comitê de Controle de Mudanças, baseline, comparação SVN (centralizado) x Git (distribuído), comandos básicos (commit, push, pull, branch, merge) — em nível descritivo, não hands-on.

## Rigor
Puramente conceitual/comparativo. Cada módulo é texto corrido + "Verificando o aprendizado" com 2 questões de múltipla escolha (bancas reais: FCC, CESGRANRIO, COVEST), citando sempre Pressman e Sommerville. Não há exercício de montar um plano de teste do zero, escrever/alterar código, ou rodar comandos Git de fato.

## Leitura vs. fazer
~95% leitura/compreensão. O "fazer" se resume a contas simples (probabilidade × impacto de risco) ou identificar onde um processo se encaixa na matriz PMBOK numa questão de múltipla escolha. O "Praticando" não é laboratório — é revisão com cenários integrando os 5 módulos, ainda em múltipla escolha.

## Familiaridade provável (bagagem de Computação)
- **Já visto, provavelmente**: requisitos funcionais/não funcionais, UML, cascata/RUP/ágil, métricas de complexidade, controle de versão em geral.
- **Mais específico desta grade / possível lacuna**: o encaixe formal PMBOK (10 áreas × 5 grupos, nomenclatura completa) com peso forte de Gerência de Projetos dentro da própria disciplina, e Gerenciamento de Configurações como módulo dedicado — normalmente ocupam menos espaço em outras grades.
