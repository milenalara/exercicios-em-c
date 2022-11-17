# Bibliotecas

Servem para criarmos módulos reutilizáveis em diversos programas.

## No CodeBlocks
1 - File > New >  File

2 - Escolher o arquivo de tipo __C/C++ header__

3 - Escolher local para salvar o arquivo (por enquanto na pasta do projeto)

4 - Aparece um arquivo com extensão .h salvo na pasta Headers, com o código:
```c
#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

#endif // CALCULADORA_H_INCLUDED
```

5 - Declarar a biblioteca no arquivo principal (main.c) usando #include "nome"
```c
#include "calculadora.h"
```
OBS: <> é para as bibliotecas padrão da linguagem

6 - Criar arquivo .c para salvar os métodos da biblioteca com o mesmo nome do arquivo .h, na pasta Source, deixando neste último apenas os cabeçalhos:
  1 - File > New > File
  2 - Selecionar o arquivo tipo __C/C++ source__
  3 - Surgirá um arquivo de extensão .c onde os métodos  da biblioteca devem ser colados

7 - Declarar a chamada dos métodos no cabeçalho do arquivo .h
```c
#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

void metodo1();

#endif // CALCULADORA_H_INCLUDED
```