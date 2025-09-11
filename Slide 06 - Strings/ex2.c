void concatena (char* d, char* o1, char* o2) {
    int tamanhoo1 = tamanho(o1), tamanhoo2 = tamanho(o2); 
    for (int i = 0; i < tamanhoo1; i++){
        d[i] = o1[i];
    }
    for (int i = 0; i < tamanhoo2; i++) {
        d[i+tamanhoo1] = o2[i];
    }
    d[tamanhoo2+tamanhoo1] = '\0';
}
