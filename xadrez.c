#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

/* ========== FUNCOES RECURSIVAS ========== */

/*
 * Funcao: mover_torre_recursivo
 * Descricao: Simula o movimento da Torre usando recursividade
 *            SUBSTITUI o loop FOR do nivel novato
 * Parametros: casas_restantes - numero de casas que ainda faltam mover
 * Retorno: void
 * Caso base: quando casas_restantes chega a 0, a recursao termina
 */
void mover_torre_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Direita\n");
    mover_torre_recursivo(casas_restantes - 1);
}

/*
 * Funcao: mover_bispo_recursivo
 * Descricao: Simula o movimento diagonal do Bispo usando recursividade
 *            SUBSTITUI o loop WHILE do nivel novato
 * Parametros: casas_restantes - numero de casas que ainda faltam mover
 * Retorno: void
 * Caso base: quando casas_restantes chega a 0, a recursao termina
 */
void mover_bispo_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Cima Direita\n");
    mover_bispo_recursivo(casas_restantes - 1);
}

/*
 * Funcao: mover_rainha_recursivo
 * Descricao: Simula o movimento da Rainha usando recursividade
 *            SUBSTITUI o loop DO-WHILE do nivel novato
 * Parametros: casas_restantes - numero de casas que ainda faltam mover
 * Retorno: void
 * Caso base: quando casas_restantes chega a 0, a recursao termina
 */
void mover_rainha_recursivo(int casas_restantes) {
    if (casas_restantes == 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(casas_restantes - 1);
}

/* ========== PROGRAMA PRINCIPAL ========== */

int main() {
    /* Declaracao de variaveis */
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    int casas_verticais = 2;
    int casas_horizontais = 1;
    int i, j;
    int movimento_completo;
    
    /* ========== TORRE COM RECURSIVIDADE ========== */
    printf("=== MOVIMENTO DA TORRE (RECURSIVO) ===\n");
    printf("Movendo 5 casas para a direita:\n\n");
    
    mover_torre_recursivo(casas_torre);
    
    printf("\n");
    
    /* ========== BISPO COM RECURSIVIDADE ========== */
    printf("=== MOVIMENTO DO BISPO (RECURSIVO) ===\n");
    printf("Movendo 5 casas na diagonal superior direita:\n\n");
    
    mover_bispo_recursivo(casas_bispo);
    
    printf("\n");
    
    /* ========== BISPO COM LOOPS ANINHADOS ========== */
    printf("=== MOVIMENTO DO BISPO (LOOPS ANINHADOS) ===\n");
    printf("Movendo 5 casas na diagonal (loop externo: vertical, interno: horizontal):\n\n");
    
    /*
     * Loop externo: controla o movimento vertical (para cima)
     * Loop interno: controla o movimento horizontal (para direita)
     * Ambos executam juntos para criar o movimento diagonal
     */
    for (i = 1; i <= casas_bispo; i++) {
        for (j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }
    
    printf("\n");
    
    /* ========== RAINHA COM RECURSIVIDADE ========== */
    printf("=== MOVIMENTO DA RAINHA (RECURSIVO) ===\n");
    printf("Movendo 8 casas para a esquerda:\n\n");
    
    mover_rainha_recursivo(casas_rainha);
    
    printf("\n");
    
    /* ========== CAVALO COM LOOPS COMPLEXOS (APRIMORADO) ========== */
    printf("=== MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ===\n");
    printf("Movendo em 'L': 2 casas para cima e 1 casa para direita:\n\n");
    
    /*
     * LOOPS COMPLEXOS COM MULTIPLAS VARIAVEIS E CONDICOES
     * 
     * Estrategia: Usamos loops aninhados onde:
     * - Loop externo: controla o tipo de movimento (vertical ou horizontal)
     * - Loop interno: controla quantas casas mover em cada direcao
     * - Variaveis multiplas: i (tipo de movimento), j (contador de casas)
     * - Condicoes: verificamos se completamos cada fase do movimento
     * - break/continue: controlamos o fluxo de forma precisa
     * 
     * SUBSTITUI a versao simples do nivel aventureiro
     */
    
    movimento_completo = 0;
    
    for (i = 1; i <= 2 && !movimento_completo; i++) {
        
        /* FASE 1: Movimento Vertical (2 casas para cima) */
        if (i == 1) {
            for (j = 1; j <= casas_verticais; j++) {
                printf("Cima\n");
                
                if (j == casas_verticais) {
                    continue;
                }
            }
        }
        
        /* FASE 2: Movimento Horizontal (1 casa para direita) */
        else if (i == 2) {
            for (j = 1; j <= casas_horizontais; j++) {
                printf("Direita\n");
                
                if (j == casas_horizontais) {
                    movimento_completo = 1;
                    break;
                }
            }
        }
    }
    
    printf("\n");
    printf("=== FIM DA SIMULACAO ===\n");
    
    

    return 0;
}
