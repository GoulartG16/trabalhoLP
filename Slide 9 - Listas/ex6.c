struct Caixa* insere (struct Caixa* lista, int valor){
    // Crie uma função que receba uma lista ordenada e um valor inteiro a ser inserido na lista. A função deve retornar a lista modificada que deve se manter ordenada:
    //struct Caixa* insere (struct Caixa* lista, int valor);
    struct Caixa caixanova; caixanova.valor = valor, caixanova.prox = NULL, ; 
    if (lista == NULL || lista->valor > valor ){
        caixanova.prox = lista;
        lista = &caixanova;
        return lista;
    }
    struct Caixa *p = lista, *pProx = lista->prox;
    while (pProx != NULL){
        if (pProx->valor > valor){
            caixanova.prox = pProx;
            p->prox = &caixanova;
            return lista;
        } else{
            p = pProx;
            pProx = pProx->prox;
        }
    }
    p->prox = &caixanova;
    return lista;
}
