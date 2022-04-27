#include <stdio.h>
#include <stdlib.h>

int main(){
    int ***x;
    int nl, nc, np, qp, i, j, k;

    printf("digite n�mero de planos: ");
    scanf("%d", &np);
    printf("digite n�mero de linhas: ");
    scanf("%d", &nl);
    printf("digite n�mero de colunas: ");
    scanf("%d", &nc);

    //Alocando a matriz
    x = (int***)malloc(np * sizeof(int**));
    for (i = 0; i < np; ++i) {
		x[i] = (int**)malloc(nl * sizeof(int*));
	}

    for (i = 0; i < np; ++i) {
		for (j = 0; j < nl; ++j) {
			x[i][j] = (int*)malloc(nc * sizeof(int));
		}
	}

    //Preenchendo a matriz com valores 0 ou 1
    for (i = 0; i < np; ++i) {
		for (j = 0; j < nl; ++j) {
			for (k = 0; k < nc; ++k) {
                x[i][j][k] = rand()%2;
			}
		}
	}

    //Printando o plano selecionado pelo usu�rio
    printf("digite qual plano mostrar: ");
    scanf("%d", &qp);

    //Lembrar que os planos come�am a contar do 0, ent�o por isso os planos v�o de 0 at� np-1.
    if(qp >= np){
        //Liberando a mem�ria, caso o plano que o usu�rio queira mostrar seja inv�lido.
        for (j = 0; j < nl; ++j) {
            for (k = 0; k < nc; ++k) {
                free(x[j][k]);
            }
            free(x[j]);
        }
        free(x);

        return 0;
    }

    for (j = 0; j < nl; ++j) {
        for (k = 0; k < nc; ++k) {
            printf("%d ", x[qp][j][k]);
        }
        printf("\n");
    }

    //Liberando a mem�ria, ou tentando ...
    for (j = 0; j < nl; ++j) {
        for (k = 0; k < nc; ++k) {
            free(x[j][k]);
        }
		free(x[j]);
    }
    free(x);

    return 0;
}
