#include <stdio.h>
#include <string.h>

    int main(){

        char senha[20];

        printf("Digite a senha:\n");
        scanf("%s", senha);

        if(strcmp(senha, "ASDFG") == 0) {
            printf("Permissao de acesso");
        }else{
            printf("Acesso negado");
        }
        return 0;
    }