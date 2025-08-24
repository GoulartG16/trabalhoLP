#include <stdio.h>

int main(){
    int n1, n2; 

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    if (n1 < n2) {
        while (n1 != n2) {
            printf("%d ", n1);
            n1++;
        }
        printf("%d", n1);
    }
    else if (n2 < n1) {
        while (n2 != n1) {
            printf("%d ", n2);
            n2++;
        }
        printf("%d", n1);
    }
    else {
        printf("%d", n1);
    }
    return 0;
}
