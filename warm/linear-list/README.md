Listas
-------

[Aula Base](https://www.youtube.com/watch?v=g_nbG7L5ou0&list=PLxI8Can9yAHf8k8LrUePyj0y3lLpigGcl&index=3) 

## Listas Lineares

> Uma estrutura onde cada elemento é precedido por um elemento, e sucedido por outro. Com exceção do primeiro que não possui um predecessor, e o último, que não possui um sucessor. Os elementos estão dispostos em uma dada ordem(por exemplo, a ordem de inclusão ou ordenados por uma chave)

## Listas Lineares Sequenciais

> É uma Lista Linear na qual a ordem lógica dos elementos(a ordem "vista" pelo usuário) é a mesma ordem física(em memória principal) dos elementos. Isto é, elementos vizinhos na lista estarão em posições vizinhas de memória.

## Modelagem

Modelaremos usando:
 
    - Um arranjo de registros;
    - Registros conterão as informações de interesse do usuário;
    - O arranjo terá tamanho fixo e controlaremos o número de elementos com uma variável condicional;

## Funções de gerenciamento

Implementaremos funções para:

    - Inicializar a estrutura;
    - Retornar a quantidade de elementos válidos;
    - Exibir os elementos;
    - Buscar por um elemento;
    - Inserir elementos na estrutura;
    - Excluir elementos da estrutura;
    - Reinicializar a estrutura;

### Inicialização

Para inicializar essa lista sequencial, só é necessário atribuir o valor `0` no número de elementos válidos

```c
    void initList (LIST* l) {
        l->nroElem = 0;
    }
```