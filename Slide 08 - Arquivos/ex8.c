// A relação é que, mesmo que o nome de uma Pessoa seja curto, o campo nome[64] ocupa sempre 64 bytes, fazendo com que o arquivo gravado tenha um tamanho fixo de 72 bytes por registro (sizeof(Pessoa)). Isso causa desperdício de espaço no disco quando os nomes são pequenos.
void escreverPessoaCompacta(Pessoa *p, FILE *f) {
    int tamanhoNome = strlen(p->nome) + 1; // +1 para incluir o '\0'

    fwrite(&p->idade, sizeof(int), 1, f);
    fwrite(&tamanhoNome, sizeof(int), 1, f); // grava o tamanho do nome
    fwrite(p->nome, sizeof(char), tamanhoNome, f); // grava só o necessário
    fwrite(&p->peso, sizeof(int), 1, f);
}
void lerPessoaCompacta(Pessoa *p, FILE *f) {
    int tamanhoNome;

    fread(&p->idade, sizeof(int), 1, f);
    fread(&tamanhoNome, sizeof(int), 1, f);
    fread(p->nome, sizeof(char), tamanhoNome, f); // lê só o que foi gravado
    fread(&p->peso, sizeof(int), 1, f);
}
