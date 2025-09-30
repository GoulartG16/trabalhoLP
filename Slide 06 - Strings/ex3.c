int palavras(char* str){
    int qtd = 0, i = 0;
    while (str[i] != '\0'){
        if (str[i] == ' ') qtd++;
        i++;
    }
    return qtd;
}
