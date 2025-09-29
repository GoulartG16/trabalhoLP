float determinante(int arr[L][C], int lc){
float det;
if (lc == 1) return det = arr[0][0];
if (lc == 0) return det = 0;

det = 0;      
int matriznova[lc-1][lc-1];  
for (int i = 0; i < lc; i++){  
    for (int j = 1; j< lc; j++){  
        int colunaNova = 0;  
        for (int k = 0; k < lc; k++){  
            if (k != i){  
                matriznova[j-1][colunaNova] = arr[j][k];  
                colunaNova++;  
            }  
        }  
    }  
    int sinal;  
    if (i%2 == 0) {sinal = 1;} else {sinal = -1;}  
    det += arr[0][i]* sinal * determinante(matriznova, lc-1);  
    }  
}  
return det;

}
