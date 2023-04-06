#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Digite a operacao desejada (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da soma eh: %.2f", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtracao eh: %.2f", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicacao eh: %.2f", resultado);
            break;

        case '/':
            resultado = num1 / num2;
            printf("O resultado da divisao eh: %.2f", resultado);
            break;

        default:
            printf("Operacao invalida.");
            break;
    }

    return 0;
}
	
	

