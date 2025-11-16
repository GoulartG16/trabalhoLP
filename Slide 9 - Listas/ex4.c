int contem (struct Caixa* lista, int valor){
    int contem = 0;
    struct Caixa *p = lista;
    while (p!= NULL){
        if (p->valor == valor){
            contem = 1;
            break;
        }
    }
    return contem;
}
