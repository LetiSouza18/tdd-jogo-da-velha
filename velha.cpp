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
    return a;
  }

  return 0;
}

int VerificaVelha(int velha[3][3]) {
  for (int i = 0; i < 3; i++) {
    if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
      return velha[i][0];
    }

    if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i]) {
      return velha[0][i];
    }
  }

  int primeiraDiagonal = VerificaDiagonal(velha[0][0], velha[1][1], velha[2][2]);

  if (primeiraDiagonal) return primeiraDiagonal;
    
  int segundaDiagonal = VerificaDiagonal(velha[0][2], velha[1][1], velha[2][0]);

  if (segundaDiagonal) return segundaDiagonal;

  return 0;  // !< retorna zero para teste
}

