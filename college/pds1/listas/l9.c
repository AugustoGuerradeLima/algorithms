//Augusto Guerra de Lima 2022101086
//Como C nao possui encapsulamento precisa compilar com g++
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
struct Ponto {
	float x;
	float y;
	float distancia(Ponto& p);
	void atribuir(float a, float b);
};
typedef Ponto* ref_Ponto;
struct Triangulo {
	Ponto p1,p2,p3;
	float perimetro();
    float area();
	bool equilatero();
	bool semelhante(Triangulo& t);
};
typedef Triangulo* ref_Triangulo;
struct Retangulo{
    Ponto p1,p2,p3,p4;
    float perimetro();
    float area();
    bool quadrado();
};
typedef Retangulo* ref_Retangulo;
struct Ciriculo {
	Ponto centro;
	float raio;
	float perimetro();
    float area();
	bool contem(Ponto& p);
	bool contem(Triangulo& t);
	bool contem(Retangulo& r);
	bool pertence(Ponto& p);
	bool circunscrita(Triangulo& t);
	bool circunscrita(Retangulo& r);
};
typedef Ciriculo* ref_Ciriculo;
//----------------------------------------------------------------------questao2
float Ponto::distancia(Ponto& p){
	return(sqrt((this->x - p.x)*(this->x - p.x) + (this->y - p.y)*(this->y - p.y)));
}
//----------------------------------------------------------------------questao3
void Ponto::atribuir(float a, float b){
	this->x=a;
	this->y=b;
}
//----------------------------------------------------------------------questao5
float Triangulo::perimetro(){
	return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p1));
}
//----------------------------------------------------------------------questao6
float Triangulo::area(){
    return(sqrt((this->perimetro()/2)*(this->perimetro()/2 - this->p1.distancia(this->p2))*(this->perimetro()/2 - this->p2.distancia(this->p3))*(this->perimetro()/2 - this->p3.distancia(p1))));
}
//----------------------------------------------------------------------questao7
bool Triangulo::equilatero(){
	if(this->p1.distancia(this->p2)==this->p2.distancia(this->p3)&&this->p1.distancia(this->p2)==this->p1.distancia(this->p3))return(true);
	return(false);
}
//----------------------------------------------------------------------questao8
bool Triangulo::semelhante(Triangulo& t){
	float a = this->p1.distancia(this->p2)/t.p1.distancia(t.p2); 
	float b = this->p2.distancia(this->p3)/t.p2.distancia(t.p3);
	float c = this->p3.distancia(this->p1)/t.p3.distancia(t.p1);
	if(a==b&&a==c)return(true);
	return(false);
}
//----------------------------------------------------------------------questao10
float Retangulo::perimetro(){
    return(this->p1.distancia(this->p2)+this->p2.distancia(this->p3)+this->p3.distancia(this->p4)+this->p4.distancia(this->p1));
}
//----------------------------------------------------------------------questao11
float Retangulo::area(){
    return(this->p1.distancia(this->p2)*this->p2.distancia(this->p3));
}
//----------------------------------------------------------------------questao12
bool Retangulo::quadrado(){
    if(this->p1.distancia(this->p2)==this->p2.distancia(this->p3)&&this->p3.distancia(this->p4)==this->p4.distancia(this->p1))return(true);
    return(false);
}
//----------------------------------------------------------------------questao14
float Ciriculo::perimetro(){
	return(2*M_PI*this->raio);
}
//----------------------------------------------------------------------questao15
float Ciriculo::area(){
    return(M_PI*this->raio*this->raio);
}
//----------------------------------------------------------------------questao16
bool Ciriculo::contem(Ponto& p){
	if(this->raio >= p.distancia(this->centro))return(true);
	return(false);
}
//----------------------------------------------------------------------questao17
bool Ciriculo::contem(Triangulo& t){
	if(this->raio>=t.p1.distancia(this->centro)&&this->raio>=t.p2.distancia(this->centro)&&this->raio>=t.p3.distancia(this->centro))return(true);
	return(false);
}
//----------------------------------------------------------------------questao18
bool Ciriculo::contem(Retangulo& r){
	if(this->raio>=r.p1.distancia(this->centro)&&this->raio>=r.p2.distancia(this->centro)&&this->raio>=r.p3.distancia(this->centro)&&this->raio>=r.p4.distancia(this->centro))return(true);
	return(false);
}
//----------------------------------------------------------------------questao19
bool Ciriculo::pertence(Ponto& p){
	if(this->raio == p.distancia(this->centro))return(true);
	return(false);
}
//----------------------------------------------------------------------questao20
bool Ciriculo::circunscrita(Triangulo& t){
	if(t.p1.distancia(this->centro)==this->raio&&t.p2.distancia(this->centro)==this->raio&&t.p3.distancia(this->centro)==this->raio)return(true);
	return(false);
}
//----------------------------------------------------------------------questao21
bool Ciriculo::circunscrita(Retangulo& r){
	if(r.p1.distancia(this->centro)==this->raio&&r.p2.distancia(this->centro)==this->raio&&r.p3.distancia(this->centro)==this->raio&&r.p4.distancia(this->centro)==this->raio)return(true);
	return(false);
}
//main
int main()
{
return(0);
}
