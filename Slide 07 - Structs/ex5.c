#include <stdio.h>
#include <stdlib.h>
struct ponto {
    int x;
    int y;
    int z;
};
void main (void) {
    struct ponto v1 = {1, 0, 5}, v2 = {3, 3, 3}, v3 = {0, 10, 0};
    printf("v1: %d, v2: %d, v3: %d\n", v1.y, v2.y, v3.y);
    v1.z +=10; v2.z +=10; v3.z +=10;
    printf("x: %d, y: %d, z: %d\n", v2.x, v2.y, v2.z);
}
