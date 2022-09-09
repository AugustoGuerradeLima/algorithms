/*
    Exemplo0201 - v0.0.-01/04/2022
    Author:783706_Augusto Guerra de Lima
*/

//dependencias
#include "io.h"

int main ( )
{
    //dados
    int x=0; //variavel com valor inicial

    //identificar
    IO_id ("EXEMPLO0201 - Programa -v0.0");

    //ler do teclado
    x = IO_readint("Entrar com um valor inteiro:");

    //testar valor
    if(x==0)
    {
        IO_printf("%s(%d)\n", "Valor igual a zero", x);

    }   

    if(x!=0)
    {
        IO_printf("%s(%d)\n", "Valor diferente de zero", x);
    }//fim do se

    //encerrar
    IO_pause("Apertar ENTER para terminar");

    return ( 0 );
}//fim do main
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
a.) 0
b.) 1
c.) 10
d.) -1
e.) 100
---------------------------------------------- historico
Versao Data Modificacao
 0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
 0.1 01. ( OK ) identificacao de programa
*/