/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 

int VerificaVelha( int velha[3][3] )
{
	int soma = 0;

	for (int i = 0; i < 3; i++) {
		if (velha[i][2] == 1) {
			soma += 1;
		}
	}

	if (soma == 3) {
		return 1;
	}

	return 0; /*!< retorna zero para teste */ 
}


