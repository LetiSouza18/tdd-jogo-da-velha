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

int VerificaIgualdade(int a, int b, int c) {
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
  // valida que o jogo é possível

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 1) {
        quantidadeX++;
      } else if (velha[i][j] == 2) {
          quantidadeO++;
      } else if (velha[i][j] != 0) {
          // aceita somente os valores 1 (x), 2 (o) e 0 (vazio)
          return -2;
      }
    }
  }

  // garante que um jogador não tenha duas ou mais jogadas do que o outro

  if (abs(quantidadeX - quantidadeO) > 1) {
    return -2;
  }

  // o loop vai acontecer três vezes para verificar todas as linhas e colunas

  int resultadoLinha = 0;
  int resultadoColuna = 0;

  for (int i = 0; i < 3; i++) {
    // verifica se os três dígitos na linha i são iguais

    resultadoLinha = VerificaIgualdade(velha[i][0], velha[i][1], velha[i][2]);

    // vitória na linha

    if (resultadoLinha != 0) {
      return resultadoLinha;
    }

    // verifica se os três dígitos na coluna i são iguais

    resultadoColuna = VerificaIgualdade(velha[0][i], velha[1][i], velha[2][i]);

    // vitória na coluna

    if (resultadoColuna != 0) {
      return resultadoColuna;
    }
  }

  // verifica se os três dígitos na primeira diagonal são iguais

  int resultadoDiagonal = 0;

  resultadoDiagonal = VerificaIgualdade(velha[0][0], velha[1][1], velha[2][2]);

  // vitória na diagonal

  if (resultadoDiagonal != 0) {
    return resultadoDiagonal;
  }

  // verifica se os três dígitos na segunda diagonal são iguais

  resultadoDiagonal = VerificaIgualdade(velha[0][2], velha[1][1], velha[2][0]);

  // vitória na diagonal

  if (resultadoDiagonal != 0) {
    return resultadoDiagonal;
  }

  // não teve nenhuma vitória e todos as posições estão completas, então empate

  if (quantidadeO + quantidadeX == 9) {
    return 0;
  }

  return -1;  // !< retorna zero para teste
}

