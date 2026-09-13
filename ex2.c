#include <stdio.h>
    int main(){
        float salario;

        printf("Digite seu salario:\n");
        scanf("%f", &salario);

        if (salario < 500) {
            salario = salario * 1.30;
            printf("Salario reajustado = %.2f", salario);
        } else {
            printf("Funcionario nao tem direito ao aumento");
        }
    return 0;
    }