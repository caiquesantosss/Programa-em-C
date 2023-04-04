#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool validar_cpf(char* cpf) {
    int i, j, soma, resto;
    char digito1, digito2;
    char cpf_sem_pontos[11];
    
    // Remove pontos e hífen do CPF
    for (i = 0, j = 0; i < strlen(cpf); i++) {
        if (isdigit(cpf[i])) {
            cpf_sem_pontos[j++] = cpf[i];
        }
    }
    cpf_sem_pontos[j] = '\0';
    
    if (strlen(cpf_sem_pontos) != 11) {
        return false;
    }
    
    for (i = 1; i < 11; i++) {
        if (cpf_sem_pontos[i] != cpf_sem_pontos[0]) {
            break;
        }
    }
    if (i == 11) {
        return false;
    }
    
    soma = 0;
    for (i = 0, j = 10; i < 9; i++, j--) {
        soma += (cpf_sem_pontos[i] - '0') * j;
    }
    resto = soma % 11;
    if (resto < 2) {
        digito1 = '0';
    } else {
        digito1 = (11 - resto) + '0';
    }
    

    if (cpf_sem_pontos[9] != digito1) {
        return false;
    }
    

    soma = 0;
    for (i = 0, j = 11; i < 10; i++, j--) {
        soma += (cpf_sem_pontos[i] - '0') * j;
    }
    resto = soma % 11;
    if (resto < 2) {
        digito2 = '0';
    } else {
        digito2 = (11 - resto) + '0';
    }
    
    if (cpf_sem_pontos[10] != digito2) {
        return false;
    }
    
    // Se chegou até aqui, o CPF é válido
    return true;
}

int main() {
    char cpf[15];
    
    printf("Digite um CPF: ");
    scanf("%s", cpf);
    
    if (validar_cpf(cpf)) {
        printf("CPF valido\n");
    } else {
        printf("CPF invalido\n");
    }
    
        return 0;
}
    

