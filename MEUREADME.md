# Meu README - Batalha Naval (por Roberto)

Esse projeto aqui faz parte do desafio da estacio, que era pra criar um sistema simples de batalha naval em 3 niveis: novato, aventureiro e mestre. A ideia era ir usando matriz e vetor pra representar os navios e tambem umas habilidades no final.

Fiz tudo no vscode, usando o compilador gcc (mingw no meu caso). Fui testando cada etapa, e aos poucos entendi como a logica funciona com essas matrizes. No começo achei meio confuso, mas depois que fui vendo o resultado rodando no terminal, deu pra pegar bem.

## Niveis implementados:

### 🟢 Nivel Novato
- Tabuleiro 5x5
- Coloquei dois navios, um na vertical e outro na horizontal
- So exibe as coordenadas das partes do navio no terminal mesmo

### 🟡 Nivel Aventureiro
- Tabuleiro 10x10
- Foram 4 navios: 2 em linha (vertical e horizontal) e 2 na diagonal
- Exibe o tabuleiro todo com 0 e 3 (3 onde tem navio)

### 🔴 Nivel Mestre
- Criei 3 matrizes 5x5 com padroes de habilidades:
  - cone
  - cruz
  - octaedro
- As habilidades mostram as áreas afetadas com 1, e o resto fica 0

## Como rodar

Se vc tiver o gcc instalado no windows, vai funcionar de boa. Usei esses comandos no terminal:

gcc batalha_naval_novato.c -o batalha_naval_novato.exe
./batalha_naval_novato.exe

gcc batalha_naval_aventureiro.c -o batalha_naval_aventureiro.exe
./batalha_naval_aventureiro.exe

gcc batalha_naval_mestre.c -o batalha_naval_mestre.exe
./batalha_naval_mestre.exe


## Observações

- Os arquivos .exe sao criados so pra rodar local mesmo, nao subi pro github
- Os comentarios nos codigos foram escritos do meu jeito, pra facilitar o entendimento.

---

Análise e Desenvolvimento de Sistemas (primeiro semestre).

