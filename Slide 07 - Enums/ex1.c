typedef enum {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado} Dia;
char *nome (Dia d) {
    char *dia;
    switch (d) {
        case Domingo:
            dia = "Domingo";
            break;
        case Segunda:
            dia = "Segunda";
            break;
        case Terca:
            dia = "Terça";
            break;
        case Quarta:
            dia = "Quarta";
            break;
        case Quinta:
            dia = "Quinta";
            break;
        case Sexta:
            dia = "Sexta";
            break;
        case Sabado:
            dia = "Sábado";
            break;
    }
    return dia;
}
