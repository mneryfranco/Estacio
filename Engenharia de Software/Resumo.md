# Resumo — Engenharia de Software (DGT2194)

> Material de revisão construído ao longo dos estudos, com conceitos essenciais, dúvidas e pegadinhas encontradas nos exercícios.

# Revisão acumulativa — pontos estudados

## Tema 4 — Modelos de processos de desenvolvimento de software

### Base: processo, método, ferramenta e modelagem
- A Engenharia de Software é apresentada em camadas: **qualidade, processo, métodos e ferramentas**. A camada de processo é a base e determina as etapas do desenvolvimento.
- As atividades genéricas de um processo são **comunicação, planejamento, modelagem, construção e entrega**. Os modelos diferem principalmente na ênfase e no encadeamento dessas atividades.
- **UML não é processo nem ferramenta**: é uma linguagem visual de modelagem, independente de linguagem de programação e de processo.
- **CASE (Computer-Aided Software Engineering)** é ferramenta de apoio. Pode auxiliar na criação de diagramas/artefatos, rastreabilidade e, dependendo da ferramenta, geração de código.

### Modelos prescritivos e evolucionários
- **Cascata**: fluxo sequencial. Adequado quando os requisitos são estáveis e bem conhecidos. Problemas: pouca flexibilidade, dificuldade diante da volatilidade dos requisitos e software utilizável normalmente apenas ao final.
- **Incremental**: entrega primeiro um produto essencial e acrescenta funcionalidades em incrementos posteriores já relativamente bem definidos.
- **Evolucionário**: parte de requisitos apenas parcialmente compreendidos; cada ciclo melhora o entendimento do problema, surgem novos requisitos e novas versões.
- **Prototipação**: usada principalmente para compreender/validar requisitos ou tecnologias incertas. O protótipo pode ser descartado ou, em alguns casos, refinado e incorporado ao produto.
- **Espiral**: modelo evolucionário proposto por Barry Boehm. Palavra-chave para prova: **RISCO**. Cada volta envolve objetivos/alternativas/restrições, avaliação e tratamento de riscos, desenvolvimento e planejamento do próximo ciclo. Combina a natureza iterativa da prototipação com aspectos sistemáticos do cascata.
- **RAD (Rapid Application Development)**: desenvolvimento incremental de alta velocidade, com ciclos curtos e construção/reutilização baseada em componentes. Na formulação clássica de Pressman usada no material, é tratado como adaptação de alta velocidade do cascata. **RAD não é uma variação do RUP.**

### Processo Unificado / RUP
- Processo **iterativo e incremental**, associado à modelagem orientada a objetos/UML.
- Quatro fases: **Concepção → Elaboração → Construção → Transição**.
- Os fluxos/disciplinas atravessam as fases, mas com intensidades diferentes. Uma disciplina não pertence exclusivamente a uma fase.
- Imagem mental: fases no eixo do tempo e “ondas” representando a intensidade de cada fluxo.

### Agilidade
- O Manifesto Ágil reage ao excesso de formalismo dos processos prescritivos. Entre as ideias centrais: valorizar indivíduos e interações, software funcionando, colaboração com o cliente e resposta a mudanças.
- Métodos ágeis trabalham com entregas frequentes, feedback e adaptação a requisitos voláteis.

### Extreme Programming (XP)
- XP enfatiza práticas técnicas e feedback rápido.
- Entre as práticas cobradas no material: **Planning Game, pequenas releases, metáfora, projeto simples, testes, refatoração, programação em pares, propriedade coletiva, integração contínua, semana de 40 horas, cliente presente e padrões de codificação**.
- **Story Card**: cartão que representa uma história de usuário; é deliberadamente enxuto e serve de base para conversa, priorização e planejamento.
- **Coach**: orienta a equipe na aplicação do XP; não funciona como gerente distribuindo tarefas.

#### Planning Game — distinção que caiu nos exercícios
- **Release Planning = histórias (Story Cards)**. Desenvolvedores estimam o esforço; o cliente prioriza/escolhe o que tem mais valor dentro da capacidade disponível.
- **Iteration Planning = tarefas**. As histórias selecionadas são detalhadas em tarefas e os programadores estimam o tempo/esforço das tarefas.
- Regra de memória: **Release → histórias; Iteration → tarefas.**
- Outra regra: **cliente → prioridade/escopo; desenvolvedores → estimativa/viabilidade**.
- No XP, testes unitários são escritos antes da codificação (**test first / TDD**).

### Scrum
- Framework/metodologia ágil baseado em **Sprints**, iterações que geram incrementos utilizáveis.
- Três pilares destacados no material: **transparência, inspeção e adaptação**.
- Papéis: **Product Owner** (produto, requisitos/prioridades e Product Backlog), **Scrum Master** (garante/facilita o Scrum e remove impedimentos) e **Scrum Team** (equipe multidisciplinar).
- Artefatos: **Product Backlog** (lista dinâmica do produto) e **Sprint Backlog** (itens selecionados e plano de trabalho da Sprint).
- Eventos: **Sprint Planning → Daily Scrum → Sprint Review → Sprint Retrospective**.
- Sprint Planning responde essencialmente: **o que será entregue?** e **como o trabalho será realizado?**
- Daily Scrum: reunião diária curta para inspecionar o andamento e ajustar o plano.
- Sprint Review: inspeciona o incremento e ajuda a adaptar o Product Backlog.
- Sprint Retrospective: olha para a forma de trabalhar e define melhorias para a próxima Sprint.

### AUP — Agile Unified Process
- **AUP é uma simplificação ágil do RUP**.
- Mantém as quatro fases do RUP: **Concepção, Elaboração, Construção e Transição**.
- Simplifica o trabalho iterativo e reduz formalismo, com atividades como modelagem, implementação, testes, implantação, gerenciamento de configuração, gestão de projetos e ambiente.
- Atenção à confusão: **AUP deriva/simplifica o RUP; RAD não.**

### Pegadinha de exercício
- **Definição do XP**: apareceu uma questão em que tanto “padrões de codificação + integração contínua + testes” quanto “pequenos releases + cliente envolvido na especificação/priorização” descrevem características reais do XP, embora o gabarito tenha aceitado apenas a primeira. **Não tratar a segunda como falsa conceitualmente.**

### Atalhos para lembrar antes da prova
- **Cascata = sequência.**
- **Incremental = acrescentar funcionalidades planejadas.**
- **Evolucionário = aprender e evoluir requisitos.**
- **Prototipação = esclarecer/validar.**
- **Espiral = risco.**
- **RAD = rapidez + componentes.**
- **RUP = 4 fases + disciplinas em intensidades diferentes.**
- **XP = práticas técnicas + histórias + feedback rápido.**
- **Scrum = Sprint + backlog + inspeção/adaptação.**
- **AUP = RUP simplificado/agilizado.**
