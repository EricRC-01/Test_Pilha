/************************************************************
*            Eric Rodrigues das Chagas                      *
*    [ICMC - Bacharelado em Ciências da Computação - 2021]  *
*    NºUSP: 12623971                                        *
* ||----------------------Contatos----------------------||  *
*            Telegram [ @EricRC_123 ]                       *
*            Email  [ eric.r.c@usp.br ]                     *
*************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include "Pilha_.h"
#include "Dados_.h"


tipoPilha apagarPilha( tipoPilha pilha, int maxNum)
{
    
    for(int i=0; i < pilha.qntElem; i++)
    {
        eraseData(pilha.dados[i]);
    } 
    pilha.qntElem = 0;
    return pilha;
}

tipoPilha addPilha(tipoPilha pilha, dataType eleNovo){

    //Verificar se a pilha esta cheia    
    if(pilha.qntElem == maxTamanho){
        printf("Pilha Cheia (não é possível adicionar mais itens)\n");
        return pilha;
    }
    //Inserção
    pilha.qntElem++;
    copyData(pilha.dados[pilha.qntElem],eleNovo);

    return pilha;
}

tipoPilha removPilha(tipoPilha pilha, dataType rmvData)
{
    
    //Verificar se a remoção está correta
    if(rmvData.ID != pilha.dados[pilha.qntElem].ID)
    {
        printf("Remoção invalida\n");
        return pilha;
    }
    
    
    
    //Verificar se a pilha está vazia
    if(pilha.qntElem == 0){
        printf("Pilha vazia (não é possível remover mais itens)\n");
    
        return pilha;
    }
    //Remoção
    eraseData(pilha.dados[pilha.qntElem]);
    pilha.qntElem--;



        
    return pilha;
}



