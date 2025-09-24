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

int VerificaVelha(int velha[3][3]) {
  int somaLinha = 0;
  int somaColuna = 0;

  for (int i = 0; i < 3; i++) {
    somaColuna = 0;
    somaLinha = 0;
    
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 1) {
        somaLinha++;
      }

      if (velha[j][i] == 1) {
        somaColuna++;
      }
    }

    if (somaLinha == 3 || somaColuna == 3) {
      return 1;
    }
  }

  if (velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) {
    return 1;
  }


  return 0;  // !< retorna zero para teste
}
