

#ifndef F_sequencia_h

#define F_sequencia_h

#endif


#include <stdio.h>



#define maxTamanho 501
typedef struct Pilha{
    
    dataType dados[maxTamanho];
    int qntElem;
    
}tipoPilha;

//Apagar a pilha inteira
tipoPilha apagarPilha( tipoPilha dadosPilha, int maxNum);

//Adicionar novo elemento na pilha
tipoPilha addPilha(tipoPilha dadosPilha, dataType eleNovo);

//Remover um elemento da pilha
tipoPilha removPilha(tipoPilha pilha, dataType rmvData);



