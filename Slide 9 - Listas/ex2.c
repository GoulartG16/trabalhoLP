struct Caixa {
    int valor;
    struct Caixa* prox;
};
void exibe (struct Caixa* caixa){
    struct Caixa *p = caixa;
    while (p!= NULL){
        printf("%d ", p->valor);
        p = p->prox;
    }
}
