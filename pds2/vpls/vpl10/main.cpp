#include <iostream>
#include <chrono>
#include <thread>

#include "jogo_da_vida.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;
using std::this_thread::sleep_for;
using namespace std::chrono_literals;

ostream & operator << (ostream &out, JogoDaVida &t) {
  out << "  "; 
  for (int i = 0; i < t.colunas(); ++i) {
    out << "X "; 
  }
  out << endl;
  for (int i = 0; i < t.linhas(); ++i) {
    out << "X ";
    for (int j = 0; j < t.colunas(); ++j) {
      if (t.viva(i, j)) {
        out << "o "; 
      } else {
        out << "  ";
      }
    }
    out << "X" << endl;
  }
  out << "  "; 
  for (int i = 0; i < t.colunas(); ++i) {
    out << "X "; 
  }
  out << endl;
  return out;
}

int main() {
  int numero_de_iteracoes;
  cin >> numero_de_iteracoes;    

  int numero_de_linhas;
  cin >> numero_de_linhas;
  int numero_de_colunas;
  cin >> numero_de_colunas;

  char continuar;

  JogoDaVida jogo(numero_de_linhas, numero_de_colunas);
  int linha, coluna;
  while (cin >> linha >> coluna) {

    try{
      jogo.Reviver(linha, coluna);
    } catch (ExcecaoCelulaInvalida &e){

      do{
      cout << e.what();
      cin >> continuar;

      } while(continuar != 's' && continuar != 'n');

      if(continuar == 'n')
        return 1;
    }
  }
  cout << jogo << endl;
  
  for (int i = 0; i < numero_de_iteracoes; i++) {
    jogo.ExecutarProximaIteracao();
    cout << jogo << endl;
    sleep_for(200ms);
  }
  return 0;
}