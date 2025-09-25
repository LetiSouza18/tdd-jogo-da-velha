/**
 * \file  velha.cpp
 */

// Copyright 2025 Letícia Souza

#include "./velha.hpp"
#include <cmath>

/**
 * @brief Verifica se três posições da matriz são iguais e não vazias.
 * @param a A primeira posição a ser verificada.
 * @param b A segunda posição a ser verificada.
 * @param c A terceira posição a ser verificada.
 * @return Retorna o valor do jogador (1 ou 2) se houver vitória, ou 0 caso contrário.
 */

int VerificaDiagonal(int a, int b, int c) {
  if (a == b && b == c) {
    return a;
  }

  return 0;
}

/** 
 * @brief Verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha A matriz 3x3 que representa o estado do jogo.
 * @return Retorna 1 se o jogador 'X' venceu, 2 se 'O' venceu, -2 se o estado do jogo for inválido,
 * ou 0 se o jogo não terminou.
 */ 

int VerificaVelha(int velha[3][3]) {
  int quantidadeX = 0;
  int quantidadeO = 0;

  // o loop vai iterar por todos os elementos da matriz
  // garante que o número de jogadas seja válido, de forma que é impossível um jogador ter duas ou mais jogadas a mais do que o outro

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
  
  // o loop vai acontecer três vezes para verificar todas as linhas e colunas

  for (int i = 0; i < 3; i++) {

    // verifica se os três dígitos na linha i são iguais

    if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
      return velha[i][0];
    }

    // verifica se os três dígitos na coluna i são iguais

    if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i]) {
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

