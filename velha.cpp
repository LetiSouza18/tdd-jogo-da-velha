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
  int soma = 0;

  for (int coluna = 0; coluna < 3; coluna++) {
    for (int linha = 0; linha < 3; linha++) {
      if (velha[linha][coluna] == 1) {
        soma += 1;
      }
    }

    if (soma == 3) {
      return 1;
    }

    soma = 0;
  }

  for (int linha = 0; linha < 3; linha++) {
    for (int coluna = 0; coluna < 3; coluna++) {
      if (velha[linha][coluna] == 1) {
        soma += 1;
      }
    }

    if (soma == 3) {
      return 1;
    }

    soma = 0;
  }

  return 0;  // !< retorna zero para teste
}
