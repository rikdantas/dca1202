#include <stdio.h>
#include <stdlib.h>

int main(){
    int ***x;
    int nl, nc, np, qp, i, j, k;

    printf("digite número de planos: ");
    scanf("%d", &np);
    printf("digite número de linhas: ");
    scanf("%d", &nl);
    printf("digite número de colunas: ");
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

    //Printando o plano selecionado pelo usuário
    printf("digite qual plano mostrar: ");
    scanf("%d", &qp);

    //Lembrar que os planos começam a contar do 0, então por isso os planos vão de 0 até np-1.
    if(qp >= np){
        //Liberando a memória, caso o plano que o usuário queira mostrar seja inválido.
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

    //Liberando a memória, ou tentando ...
    for (j = 0; j < nl; ++j) {
        for (k = 0; k < nc; ++k) {
            free(x[j][k]);
        }
		free(x[j]);
    }
    free(x);

    return 0;
}
