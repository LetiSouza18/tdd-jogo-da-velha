
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Vitória x na terceira coluna da vertical", "[vitória][X]" ) {
    int teste1[3][3]= {   { 2, 0, 1 }, 
                          { 2, 0, 1 },
                          { 0, 2, 1 }
                      };
    REQUIRE( VerificaVelha(teste1) == 1 );
} 

TEST_CASE("Vitória x na primeira coluna da vertical", "[vitória][X]" ) {
    int teste1[3][3]= {   { 1, 0, 2 }, 
                          { 1, 2, 0 },
                          { 1, 0, 0 }
                      };
    REQUIRE( VerificaVelha(teste1) == 1 );
} 
 
TEST_CASE("Vitória x na segunda coluna da vertical", "[vitória][X]" ) {
    int teste1[3][3]= {   { 1, 1, 0 }, 
                          { 2, 1, 0 },
                          { 2, 1, 2 }
                      };
    REQUIRE( VerificaVelha(teste1) == 1 );
} 