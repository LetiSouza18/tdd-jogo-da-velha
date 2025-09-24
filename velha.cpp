/**
 * \file  velha.cpp
 */

// Copyright 2025 Letícia Souza

#include "./velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaDiagonal(int a, int b, int c) {
  if (a == b && b == c) {
    return 1;
  }

  return 0;
}

int VerificaVelha(int velha[3][3]) {
  int somaLinhaX = 0;
  int somaColunaX = 0;
  int somaColunaO = 0;

  for (int i = 0; i < 3; i++) {
    somaColunaX = 0;
    somaLinhaX = 0;
    
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 1) {
        somaLinhaX++;
      }

      if (velha[j][i] == 1) {
        somaColunaX++;
      }

      if (velha[j][i] == 2) {
        somaColunaO++;
      }
    }

    if (somaLinhaX == 3 || somaColunaX == 3) {
      return 1;
    }

    if (somaColunaO == 3) {
      return 2;
    }
  }

  if (VerificaDiagonal(velha[0][0], velha[1][1], velha[2][2])) {
    return 1;
  }

  if (VerificaDiagonal(velha[0][2], velha[1][1], velha[2][0])) {
    return 1;
  }

  return 0;  // !< retorna zero para teste
}

