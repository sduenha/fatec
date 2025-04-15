#include <stdio.h>

void frequencias(int v[], int n, int *f1, int *f2) {

    int maior_f = -1, menor_f = n + 1;
    int el_maior_f = -1, el_menor_f = -1;
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j]) count++;
        }

        if (count > maior_f) {
            maior_f = count;
            el_maior_f = v[i];
        } 
        
        if (count < menor_f) {
            menor_f = count;
            el_menor_f = v[i];
        }
    }

    *f1 = el_menor_f;
    *f2 = el_maior_f;
}

int main() {

    int n = 18;
    int vet[18] = {1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    int f1, f2;

    frequencias(vet, n, &f1, &f2);

    printf("Elemento com menos aparição: %d\n", f1);
    printf("Elemento com mais aparição: %d\n", f2);
}