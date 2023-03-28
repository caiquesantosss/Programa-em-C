#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
	int comb, grandeza;
	float V, I, P, R;

	while (comb <= 0 || comb >=6){
		printf("Quais informacoes voce tem?(Digite o numero relacionado as informacoes que voce tem)\n 1-Tensao e Corrente \n 2-Tensao e Potencia \n 3-Tensao e Resistencia \n 4-Corrente e Potencia \n 5-Corrente e Resistencia \n");
		scanf("%d", &comb);
		system("cls");
	}
	
	switch(comb){
		case 1:
			printf("Digite a Tensao: ");
			scanf("%f", &V);
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voce deseja descobrir? \n 1-Potencia \n 2-Resistencia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um numero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					P = V * I;
					printf("Potencia: %fW", P);
					break;
				case 2:
					R = V/I;
					printf("Resistencia: %fOhw", R);
					break;	
			}
			
			break;
		case 2:
			printf("Digite a Tensao: ");
			scanf("%f", &V);
			printf("Digite a Potencia: ");
			scanf("%f", &P);
			
			while(grandeza < 1 || grandeza > 2){
				printf("O que voce deseja descobrir? \n 1-Corrente \n 2-Resistencia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um numero correto!");
					break;
				}
					 
			}

			switch (grandeza){
				case 1:
					I = P/V;
					printf("Corrente: %fA", I);
					break;
				case 2:
					R = (P/V)*V;
					printf("Resistencia: %fOhw", R);
					break;	
			}
			break;
		case 3:
			printf("Digite a Tensao: ");
			scanf("%f", &V);
			printf("Digite a Resistencia: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voce deseja descobrir? \n 1-Corrente \n 2-Potencia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um numero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					I = V/R;
					printf("Corrente: %fA", I);
					break;
				case 2:
					P = V*(V/R);
					printf("Potencia: %fW", P);
					break;	
			}
			break;
		case 4:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Potencia: ");
			scanf("%f", &P);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voce deseja descobrir? \n 1-Tensao \n 2-Resistencia\n");
				scanf("%d", &grandeza);
				if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um numero correto!");
					break;
				}
			}

			switch (grandeza){
				case 1:
					V = P/I;
					printf("Tensao: %fV", V);
					break;
				case 2:
					R = (P/I)*I;
					printf("Resistencia: %fOhw", R);
					break;	
			}
			break;
		case 5:
			printf("Digite a Corrente: ");
			scanf("%f", &I);
			printf("Digite a Resistencia: ");
			scanf("%f", &R);
			
			while(grandeza != 1 || grandeza != 2){
				printf("O que voce deseja descobrir? \n 1-Tensao \n 2-Potencia\n");
				scanf("%d", &grandeza);
			if(grandeza >= 1 && grandeza <= 2) {
					 printf("Digite um numero correto!");
					break;
					
				}
			}
			
			switch (grandeza){
				case 1:
					V = R*I;
					printf("Tensao: %fV", V);
					break;
				case 2:
					P = (I*R)*I;
					printf("Potencia: %fW", P);
					break;	
			}
			break;
	}
	
	return 0;
} 
