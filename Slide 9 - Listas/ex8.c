struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2){
    // vou usar a função contem do ex4!
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    struct Caixa *p = l1, *pAnt;
    while (p->prox != NULL){
        p = p->prox;
    }
    p->prox = l2;
    pAnt = p;
    p = p->prox;
    while (p != NULL){
        if (contem(l1, p->valor) == 1){
            pAnt->prox = p->prox;
            p = pAnt->prox;
        }
        else{
            pAnt = p;
            p = p->prox;
        }
    }
    return l1;
}
