float media (int arr[L][C], int l, int c){
    int soma = 0;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            soma += arr[i][j];
        }
    }
    float media = (float)soma/(l*c);
    return media;
}
