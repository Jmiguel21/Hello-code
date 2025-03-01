#include <stdio.h>

// Función para sumar los polinomios
void sumar_polinomios(int polinomios[][100], int num_polinomios, int max_grado, int resultado[]) {
    for (int i = 0; i <= max_grado; i++) {
        resultado[i] = 0;
        for (int j = 0; j < num_polinomios; j++) {
            resultado[i] += polinomios[j][i];
        }
    }
}

int main() {
    int num_polinomios, max_grado;
    
    // Leer el número de polinomios y el grado máximo
    printf("Ingrese el número de polinomios: ");
    scanf("%d", &num_polinomios);
    printf("Ingrese el grado máximo aceptado: ");
    scanf("%d", &max_grado);
    
    int polinomios[num_polinomios][100] = {0}; // Matriz de coeficientes inicializada en 0
    int resultado[100] = {0};
    
    // Leer los coeficientes de cada polinomio
    for (int i = 0; i < num_polinomios; i++) {
        printf("Ingrese los coeficientes del polinomio %d (desde el término de grado 0 hasta %d):\n", i + 1, max_grado);
        for (int j = 0; j <= max_grado; j++) {
            printf("Coeficiente de x^%d: ", j);
            scanf("%d", &polinomios[i][j]);
        }
    }
    
    // Sumar los polinomios
    sumar_polinomios(polinomios, num_polinomios, max_grado, resultado);
    
    // Imprimir el resultado
    printf("La suma de los polinomios es: ");
    for (int i = max_grado; i >= 0; i--) {
        if (resultado[i] != 0) {
            if (i == 0)
                printf("%d ", resultado[i]);
            else if (i == 1)
                printf("%dx ", resultado[i]);
            else
                printf("%dx^%d ", resultado[i], i);
        }
    }
    printf("\n");
    
    return 0;
}
