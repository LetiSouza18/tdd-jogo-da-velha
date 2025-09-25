/**
 * \file  velha.cpp
 */

// Copyright 2025 Letícia Souza

#include "./velha.hpp"
#include <cmath>

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaDiagonal(int a, int b, int c) {
  if (a == b && b == c) {
    return a;
  }

  return 0;
}

int VerificaVelha(int velha[3][3]) {
  int quantidadeX = 0;
  int quantidadeO = 0;

  // o loop vai iterar por todos os elementos da matriz

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 1) {
        quantidadeX++;
      }

      if (velha[i][j] == 2) {
        quantidadeO++;
      }
    }
  }

  if (abs(quantidadeX - quantidadeO) > 1) {
    return -2;
  }
  
  // o loop vai acontecer três vezes para verificar as três linhas e as três colunas

  for (int i = 0; i < 3; i++) {

    // verifica se os três dígitos na linha i são iguais

    if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {

      // retorna 1 se for 'x' e 2 se for 'o'

      return velha[i][0];
    }

    // verifica se os três dígitos na coluna i são iguais

    if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i]) {

      // retorna 1 se for 'x' e 2 se for 'o'

      return velha[0][i];
    }
  }

  // verifica se os três dígitos na primeira diagonal são iguais

  int primeiraDiagonal = VerificaDiagonal(velha[0][0], velha[1][1], velha[2][2]);

  if (primeiraDiagonal) return primeiraDiagonal;

  // verifica se os três dígitos na segunda diagonal são iguais
    
  int segundaDiagonal = VerificaDiagonal(velha[0][2], velha[1][1], velha[2][0]);

  if (segundaDiagonal) return segundaDiagonal;

  return 0;  // !< retorna zero para teste
}

