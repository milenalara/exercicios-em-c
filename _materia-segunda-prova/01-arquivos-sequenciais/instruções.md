# Escrevendo no arquivo txt

OBS: Se houver conteúdo no arquivo, será apagado para que o novo conteúdo seja gravado.

- 1 - declarar variável do tipo __FILE *arquivo__
- 2 - utilizar a função **fopen()** e atribuir à variável do tipo FILE
    - Modos de abertura:
        - "r" read
        - "w" write
        - "a" append
    - Neste caso utilizaremos "w"
- 3 - declarar bloco **if/else** para tratamento de erros
- 4 - no else, imprimir informações dentro do arquivo com **fprintf()**
- 5 - fechar o arquivo com **fclose(arquivo)**

### código final

```c
FILE *arquivo;
char string[80];

gets(string);
arquivo = fopen("arquivo.txt", "w");

if ((arquivo  == NULL)
{
  printf("Erro de abertura! \n");
}
else
{
  fprintf(arquivo, "%s\n", string);
  fclose(arquivo);
}
```

# Lendo o arquivo txt em partes
Caso o arquivo seja muito grande, podemos fazer a leitura quebrando em linhas e delimitando a quantidade máxima de caracteres a serem lidos por linha.

- 1 - declarar string **buffer**
- 2 - declarar variável do tipo __FILE *arquivo__
- 3 - abrir o arquivo com **fopen()** no modo de leitura e atribuir à variável do tipo FILE
- 4 - declarar bloco **if/else** para tratamento de erros
- 5 - usar **fgets()** para delimitar quantos caracteres serão lidos por vez
    - fgets(varQueArmazenaCaracteres, quantidadeCaracteres, varArquivo);
- 6 - declarar bloco de **while** para imprimir o que foi salvo em buffer
    - feof(arquivo) delimita quando o arquivo acabou
    - usar **!feof(arquivo)** como flag
- 7 - fechar o arquivo com **fclose(arquivo)**

### código final

```c
char buffer[128];
FILE *arquivo;

arquivo = fopen("arquivo.txt", "r");

if (arquivo == NULL)
{
  printf("Erro de abertura\n");
}
else
{
  fgets(buffer, 80, arquivo);
  while(!feof(arquivo))
  {
    printf("%s", buffer);
    fgets(buffer, 80, arquivo);
  }
  fclose(arquivo);
}
```

# Escrevendo variáveis diferentes no arquivo txt
- Ao utilizar o __fprintf()__, separar os valores a serem salvos por um espaço em branco

```c
FILE *arquivo;
int a = 10;
float b=12.5;
char c[]="Algoritmos";

arquivo = fopen("arquivo.txt", "w");

if(arquivo == NULL)
{
    printf("Erro\n");
}
else
{
    fprintf(arquivo, "%i %f %s", a, b, c);
    fclose(arquivo);
}
```

# Lendo diferentes valores do arquivo txt
- No lugar de __fgets()__, usar __fscanf()__ para ler conjuntos de valores separados por espaços em branco e atribui-los a variáveis de diferentes tipos

```c
int a;
float b;
char c[100];
FILE *arquivo;

arquivo = fopen("arquivo.txt", "r");

if(arquivo == NULL)
{
    printf("Erro\n");
}
else
{
    fscanf(arquivo, "%i", &a);
    fscanf(arquivo, "%f", &b);
    fscanf(arquivo, "%s", &c);

    printf("a = %i\n", a);
    printf("b = %f\n", b);
    printf("c = %s\n", c);
    
    fclose(arquivo);
}
```