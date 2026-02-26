//
// Created by aluno on 26/02/2026.
//

#include "interface.h"
#include <stdio.h>


int exibir_menu() {
    int opcao= 9;
    printf("\n===== AGENDA DE CONTATOS =====\n\n");
    printf("    1 - Adicionar contatos\n");
    printf("    2 - Listar contatos\n");
    printf("    3 - Buscar contatos\n");
    printf("    0 -      Sair\n\n");
    printf("    Escolha uma opção: ");
    scanf("%d", &opcao);
    return opcao;
}