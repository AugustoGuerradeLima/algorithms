/*
Exemplo0511
783706_Augusto_Guerra_de_Lima
*/

//dependencias
#include "io.h";

/*
method00( ) - nao faz nada
*/
void method00( )
{
    //nada
}//fim method00( )

/*
mult7( ) - faz uma quantidade de multiplos de 7
@param x - numero de multiplos a se exibir
*/
int mult7(int x)
{
//dados locais
int count = 0;//controle contador
int result = 0;//resultado

//acoes
for(count = 1 ; count<=x ; count++)
{
    result = count*7;//multiplica o count por - funcao em si

    IO_printf("x = %d  y = %d\n",count , result);
}//fim enquanto

//valor a se retornar
return(result);

}//fim mult7

/*
method01( ) - executa a quantidade de numeros 7
*/
void method01( )
{ 
//dados
int x = 0;//numeros de multiplos

//identificar
IO_id("method01 - v.0.0");

//requisitar valores
printf("\ninsira quantos multiplos de 7 voce deseja: \n");
scanf("%d", &x);

//acoes
mult7(x);

//encerrar
IO_pause("Aperte ENTER para continuar");

}//fim method01( )

/*
main( ) - funcao principal
*/
int main( )
{
//dados
int escolha = 0;//switch case

//identificar
IO_id("Exemplo0511 - v.0.0");

//repeticao

do
{
    //escolher
    IO_println("Opcoes");
    IO_println("0 - parar");
    IO_println("1 - mostrar certa quantidade de multiplos de 7");

    escolha = IO_readint("Entrar com uma opcao\n");

    //testar valor
    switch(escolha)
 {
    case 0:
    method00( );
    break;

    case 1:
    method01( );
    break;

    default:
    IO_println("ERRO:Valor invalido");
 }//fim escolher
}
while(escolha != 0);

//finalizar
IO_pause("Aperte ENTER para continuar");
return(0);

}//fim main