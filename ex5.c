#include <stdio.h>
    int main(){
        float salario;

        printf("Digite seu salario: ");
        scanf("%f", &salario);

        if (salario <= 300) {
            salario = salario * 1.50;
        }else{
            salario = salario * 1.30;
        }

        printf("Salario reajustado = %.2f", salario);
        return 0;
    }