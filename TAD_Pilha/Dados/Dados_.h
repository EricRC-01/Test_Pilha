



typedef struct data{

    int ID;
    char *string;
    float numero;

}dataType;


//Criar (alocar) um novo conjunto de dados
dataType *creatData(int newID);

/*
    Copiar (sobrepor) um conjunto de dados para outro
    @param dadosDest dados destino (sera sobreposto)
    @param dadosOrigm dados originais que serão copiados
*/
dataType copyData(dataType dadosDest, dataType dadosOrigm);


//Apagar um conjunto de dados
void eraseData(dataType dados);