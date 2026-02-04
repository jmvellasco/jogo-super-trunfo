# Super Trunfo – Países (Cadastro de Cartas)

Projeto desenvolvido em linguagem C com foco em lógica de programação, entrada e saída de dados e manipulação de atributos.

O sistema simula a etapa inicial do jogo Super Trunfo com o tema **Países**, permitindo o cadastro de cartas representando cidades e seus respectivos atributos.

## Descrição do Projeto
Neste projeto, o usuário cadastra cartas de cidades via terminal e visualiza seus dados de forma organizada.  
A implementação evolui progressivamente, adicionando cálculos derivados e lógica de comparação entre cartas.

O objetivo principal é reforçar conceitos fundamentais de programação em C, aplicados em um contexto de jogo.

## Funcionalidades Implementadas

### Cadastro de Cartas
Cada carta possui os seguintes atributos:
- População (`int` / `unsigned long int`)
- Área (`float`)
- PIB (`float`)
- Número de pontos turísticos (`int`)

O cadastro é feito manualmente pelo usuário via terminal, com exibição estruturada dos dados após a entrada.

### Cálculo de Atributos Derivados
Além dos atributos básicos, o sistema calcula automaticamente:
- **Densidade Populacional** (População / Área)
- **PIB per Capita** (PIB / População)

Esses valores são exibidos junto aos demais dados da carta.

### Comparação de Cartas
O sistema permite a comparação entre duas cartas, atributo por atributo:
- Para a densidade populacional, vence a carta com **menor valor**
- Para os demais atributos, vence a carta com **maior valor**

O resultado da comparação é exibido diretamente no terminal.

### Super Poder
É calculado um valor chamado **Super Poder**, definido como a soma de todos os atributos da carta, incluindo os calculados.  
A densidade populacional é invertida (1/densidade) antes de entrar na soma.

## Tecnologias Utilizadas
- Linguagem C
- Compilador GCC
- Git e GitHub para versionamento

## Estrutura do Projeto
O projeto está organizado em duas partes principais:

- **Cadastro das Cartas**  
  Responsável pela leitura, armazenamento e exibição dos dados das cartas.  

- **Lógica do Jogo**  
  Responsável pelos cálculos, comparações entre cartas e definição de resultados.  
  
  ## Como Executar
  1. Compile o código: gcc main.c -o supertrunfo
  2. Execute no terminal: ./supertrunfo
     
  ## Objetivo
  Projeto desenvolvido para fins de aprendizado e portfólio, com foco em:
  - Lógica de programação
  - Manipulação de dados
  - Cálculos matemáticos
  - Organização de código em C
  - Raciocínio aplicado a jogos


## Como Executar
1. Compile o código:

