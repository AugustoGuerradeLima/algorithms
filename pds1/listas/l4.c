#include <stdio.h>
#include <math.h>
//--------------------------------------------questao1a
int fat(int n)
{
	if(n==0)return(1);
	else return(n*fat(n-1));
}
void f1()
{
	int n = 0 ;
	scanf("%d",&n);
	printf("\no fatorial de %d e %d\n",n,fat(n));
}
//--------------------------------------------questao1b
int mdc(int a, int b)
{
	if(a<b)return(mdc(b,a));
	if(b==0)return(a);
	return(mdc(b,a%b));
}
void f2()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\no mdc e: %d\n",mdc(a,b));
}
//--------------------------------------------questao1c
int mdc3(int a,int b,int c)
{
	return(mdc(a,mdc(b,c)));
}
void f3()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("\no mdc e: %d\n",mdc3(a,b,c));
}
//--------------------------------------------questao1d
int fib(int n)
{
	if(n<2)return(1);
	return(fib(n-1)+fib(n-2));
}
void f4()
{
	int n = 0;
	scanf("%d",&n);
	printf("\no fibonacci de %d e %d\n",n,fib(n));
}
//--------------------------------------------questao1e
int primo(int n, int d)
{
	if(d==1)return(1);
	if(n%d==0)return(0);
	return(primo(n,d-1));
}
void f5()
{
	int n = 0;
	scanf ("%d",&n);
	printf("\ne primo ?: %d\n",primo(n,sqrt(n)));
}
//--------------------------------------------questao1f
void decrescente(int n)
{
	if(n==1){printf("%d\n",n);}
	else
	{
	printf("\t%d\n",n);
	decrescente(n-1);
	}
}
void f6()
{
	int n;
	scanf("%d",&n);
	decrescente(n);
}
//--------------------------------------------questao1g
int res(int a,int b)
{
	if(a-b<0)return(a);
	return(res(a-b,b));
}
void f7()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\nresto: %d\n",res(a,b));
}
//--------------------------------------------questao1h
int form(int n)
{
	if(n==1)return(1);
	return(n*n+form(n-1));
}
void f8()
{
	int n;
	scanf("%d",&n);
	printf("\nsomatorio: %d\n",form(n));
}
//--------------------------------------------questao1i
int mmc(int a, int b)
{
//mmc(a,b)= a * b/mdc(a,b)
return(a*(b/mdc(a,b)));
}
void f9()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\no mmc e: %d\n",mmc(a,b));
}
//--------------------------------------------questao1j
int div(int a, int b)
{
	if(a<b)return(0);
	/*if(a-b<b)return(1);*/
	return(1+div(a-b,b));
}
void f10()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\na divisao inteira e: %d\n",div(a,b));
}
//--------------------------------------------questao1l
float raiz(float n, float chute)
{
	if(chute*chute >= n-0.001 && chute*chute <= n+0.001)return(chute);
	if(chute*chute>n)return(raiz(n,chute*0.5));
	if(chute*chute<n)return(raiz(n,chute*1.5));
}
void f11()
{
	float n,chute;
	scanf("%f%f",&n,&chute);
	printf("\na raiz quadrada de %f e %3f\n",n,raiz(n,chute));
}
//--------------------------------------------questao1m
int dig(int n)
{
	if(n%10==n)return(n);
	return(n%10+dig(n/10));
}
void f12()
{
	int n;
	scanf("%d",&n);
	printf("\na soma dos digitos de %d e %d\n",n,dig(n));
}
//--------------------------------------------questao1n
int expoente(int k,int n)
{
	if(n==0)return(1);
	return(k*(expoente(k,n-1)));
}
void f13()
{
	int k,n;
	scanf("%d%d",&k,&n);
	printf("\nk^n e: %d\n",expoente(k,n));
}
//--------------------------------------------questao1o
void crescente(int n)
{
	if(n==0){printf("%d\n",n);}
	else
	{
	crescente(n-1);
	printf("\t%d\n",n);
	}
}
void f14()
{
	int n;
	scanf("%d",&n);
	crescente(n);
}
//--------------------------------------------questao2(main)
int main()
{
int c = 0;
do
{
printf("\n0 - parar");
printf("\n1 - fatorial");
printf("\n2 - mdc");
printf("\n3 - mdc3");
printf("\n4 - fibonacci");
printf("\n5 - primo");
printf("\n6 - decrescente");
printf("\n7 - resto");
printf("\n8 - somatorio dos quadrados");
printf("\n9 - mmc");
printf("\n10 - divisao");
printf("\n11 - raiz quadrada");
printf("\n12 - soma dos digitos");
printf("\n13 - exponecial");
printf("\n14 - crescente\n");
scanf("%d",&c);
switch(c)
{
	case 0:
	printf("\ntchauzinho :)\n");
	break;
	case 1:
	f1();
	break;
	case 2:
	f2();
	break;
	case 3:
	f3();
	break;
	case 4:
	f4();
	break;
	case 5:
	f5();
	break;
	case 6:
	f6();
	break;
	case 7:
	f7();
	break;
	case 8:
	f8();
	break;
	case 9:
	f9();
	break;
	case 10:
	f10();
	break;
	case 11:
	f11();
	break;
	case 12:
	f12();
	break;
	case 13:
	f13();
	break;
	case 14:
	f14();
	break;
	default:
	printf("\nvalor invalido\n");
	break;
}
}
while(c!=0);
return(0);
}
