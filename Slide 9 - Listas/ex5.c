struct Caixa* remove (struct Caixa* lista, int valor){
    if (lista != NULL){
        while (lista != NULL && lista->valor == valor){
            lista = lista->prox;
        }
    }
    if (lista == NULL) return NULL;
    struct Caixa *p = lista->prox, *pAnt = lista;
    while (p!= NULL){
        if (p->valor == valor){
            pAnt->prox = p->prox;
            p = pAnt->prox;            }
        else{
            pAnt = p;
            p = p->prox;
        }
    }
    return lista;
}
