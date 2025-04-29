#include <stdio.h>
#include <stdlib.h>

int *uniao(int v1[], int n1, int v2[], int n2) {
    int i, j, position, *v3 = NULL, exist;

    v3 = malloc((n1 + n2) * sizeof(int));

    for (i = 0; i < n1; i++) {
        exist = 0;
        for (j = 0; j < i; j++) {
            if (v3[j] == v1[i]) {
                exist = 1;
                break;
            }
        }
        if (!exist) {
            v3[i] = v1[i];
        }
    }

    position = i;

    for (i = 0; i < n2; i++) {
        exist = 0;
        for (j = 0; j < position; j++) {
            if (v3[j] == v2[i]) {
                exist = 1;
                break;
            }
        }
        if (!exist) {
            v3[position++] = v2[i];
        }
    }

    int *vfinal = malloc(position * sizeof(int));

    for (int i = 0; i < position; i++) {
        vfinal[i] = v3[i];
    }

    printf("%d", sizeof(vfinal) / sizeof(int));

    free(v3);

    return vfinal;
}

int main(void) {
    int v1[] = {1, 2, 3, 4};
    int v2[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(v1) / sizeof(v1[0]);
    int n2 = sizeof(v2) / sizeof(v2[0]);

    int *final = uniao(v1, n1, v2, n2);
    int size = sizeof(final) / sizeof(int);

    printf("Novo Vetor: ");
    for (int i = 0; i < size; i ++) {
        if (i != size - 1) {
            printf("%d, ", final[i]);
        } else {
            printf("%d", final[i]);
        }
    }
    printf("\n");

    free(final);

    return 0;
}