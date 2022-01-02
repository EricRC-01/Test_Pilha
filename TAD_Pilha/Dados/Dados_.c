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
#include "Dados_.h"




/*
    Copiar (sobrepor) um conjunto de dados para outro
    @param dadosDest dados destino (sera sobreposto)
    @param dadosOrigm dados originais que serão copiados
*/
dataType copyData(dataType dadosDest, dataType dadosOrigm)
{
    dadosDest.ID = dadosOrigm.ID;


}

//Apagar um conjunto de dados
void eraseData(dataType dados)
{
    dados.ID = -1;
    dados.numero = -1;
    if(dados.string != NULL) free(dados.string);
}

//Criar (alocar) um novo conjunto de dados
dataType *creatData(int newID)
{
    dataType *novos_dados = malloc(sizeof(dataType));
    novos_dados->ID = newID;

    return novos_dados;
}
