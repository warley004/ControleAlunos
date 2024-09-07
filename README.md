# Controle de Alunos

Este projeto tem como objetivo implementar um sistema para controlar informações sobre alunos matriculados, incluindo o armazenamento e processamento de dados acadêmicos. O sistema é composto por um Tipo Abstrato de Dados (TAD) `Aluno` e um programa principal (`mainAluno.cpp`) que lê os dados dos alunos e gera um relatório.

## Funcionalidades

O sistema é dividido em duas partes principais:

### TAD Aluno

O TAD `Aluno` gerencia os dados de um aluno, incluindo o nome, número de matrícula e um vetor de notas. 

**Atributos:**
- `nome` (string): Nome do aluno.
- `matricula` (int): Número de matrícula do aluno.
- `notas` (vetor de inteiros): Lista de notas obtidas pelo aluno.

**Métodos:**
- **Construtor:** Inicializa o aluno com o nome, número de matrícula e um vetor vazio de notas.
- **AdicionarNota:** Adiciona uma nova nota ao vetor de notas.
- **CalcularMedia:** Calcula a média das notas do aluno, com duas casas decimais.
- **NotaMaxima:** Retorna a nota máxima do aluno.
- **NotaMinima:** Retorna a nota mínima do aluno.
- **ImprimirDados:** Exibe os dados do aluno, incluindo o nome e o vetor de notas.

### Programa Principal (`mainAluno.cpp`)

O programa principal gerencia a entrada e saída de dados, incluindo a leitura das informações dos alunos e a geração do relatório.

**Funcionalidades:**
- **Leitura de Dados:** Lê o nome, número de matrícula e notas de cada aluno. A entrada de notas termina com o valor `-1`. A entrada de alunos termina com o flag `"END"`.
- **Relatório:** Imprime um relatório para cada aluno, incluindo:
  - Número de matrícula, nome e vetor de notas.
  - Média das notas (com duas casas decimais), nota máxima e nota mínima.
- **Ordenação:** Os alunos são impressos em ordem alfabética pelo nome.


## Como Executar

1. Compile o código utilizando o arquivo Makefile fornecido:
   ```bash
   make

2. Execute o programa:
   ```bash:
   ./mainAluno

## Exemplo de uso:

- Entrada:
  ```bash:
  Luiz
  2021153
  60 75 90 80 75 -1
  Joao
  2022098
  85 95 90 -1
  Maria
  2022051
  90 100 100 90 -1
  END

- Saída:
  ```bash:
  2022098 Joao 85 95 90 
  90.00 95 85
  2021153 Luiz 60 75 90 80 75 
  76.00 90 75
  2022051 Maria 90 100 100 90 
  95.00 100 90

# Requisitos:

C++11 ou superior.

# Autor:

Warley Júnio Vieira Ribeiro Batista - (Desenvolvedor Principal).


