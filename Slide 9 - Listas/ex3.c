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
// 1 -> 3 -> 9 -> 7 -> 5
int main(){
    struct Caixa c1, c2, c3, c4, c5;
    c1.valor = 1; c2.valor = 3; c3.valor = 9; c4.valor = 7; c5.valor = 5;
    c1.prox = &c2; c2.prox = &c3; c3.prox = &c4; c4.prox = &c5; c5.prox = NULL;
    struct Caixa *cabeca = &c1, *p = &c3, *pAnt = &c2;
    pAnt->prox = p->prox;
    exibe(cabeca);
    p->prox = &c1;
    cabeca = p;
    exibe(cabeca);
    return 0;
}
