#include <stdio.h>
#include <stdlib.h>

void imprime _ matriz(int *m, int n){
    int i;
    for (i=0; i<n;i++)
        printf(“%d \n”, m[i]);
}

int main(){
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprime _ matriz(&mat[0][0],6);
    system(“pause”);
    return 0;
}