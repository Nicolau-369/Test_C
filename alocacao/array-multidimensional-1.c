#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    int i, j, Nlines = 2, Ncolumns = 2;
    p = (int *) malloc(Nlines * Ncolumns * sizeof(int));
    for (i = 0; i < Nlines; i++){
        for (j = 0; j < Ncolumns; j++){
            p[i * Ncolumns + j] = i+j;//CORRECT
            p[i][j] = i+j;//WRONG
        }
    }
    free(p);
    system("pause");
    return 0;
}
