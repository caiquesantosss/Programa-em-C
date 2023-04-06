#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("1. Qual é o fundador da Microsoft?\n");
    printf("a) Steve Jobs\n");
    printf("b) Bill Gates\n");
    printf("c) Jeff Bezos\n");
    scanf(" %c", &answer);
    if (answer == 'b') {
        score++;
    }

    printf("2. Qual é o nome do sistema operacional da Apple?\n");
    printf("a) iOS\n");
    printf("b) MacOS\n");
    printf("c) Windows\n");
    scanf(" %c", &answer);
    if (answer == 'b') {
        score++;
    }
    
    printf("3. Qual foi o primeiro smartphone lançado?\n");
    printf("a) iPhone\n");
    printf("b) BlackBerry\n");
    printf("c) Nokia Communicator\n");
    scanf(" %c", &answer);
    if (answer == 'c') {
        score++;
    }

    printf("4. O que significa a sigla 'HTML'?\n");
    printf("a) Hyper Text Markup Language\n");
    printf("b) High Tech Manufacturing Language\n");
    printf("c) Human Translated Markup Language\n");
    scanf(" %c", &answer);
    if (answer == 'a') {
        score++;
    }

    printf("5. Qual é o nome da assistente virtual da Amazon?\n");
    printf("a) Siri\n");
    printf("b) Alexa\n");
    printf("c) Google Assistant\n");
    scanf(" %c", &answer);
    if (answer == 'b') {
        score++;
    }

    printf("6. Qual é o nome do cofundador da Apple?\n");
    printf("a) Steve Jobs\n");
    printf("b) Tim Cook\n");
    printf("c) Steve Wozniak\n");
    scanf(" %c", &answer);
    if (answer == 'c') {
        score++;
    }

    printf("7. Qual é a linguagem de programação mais popular no mundo?\n");
    printf("a) Python\n");
    printf("b) C++\n");
    printf("c) Java\n");
    scanf(" %c", &answer);
    if (answer == 'a') {
        score++;
    }

    printf("8. Qual é o nome da criptomoeda mais valiosa do mundo?\n");
    printf("a) Bitcoin\n");
    printf("b) Ethereum\n");
    printf("c) Dogecoin\n");
    scanf(" %c", &answer);
    if (answer == 'a') {
        score++;
    }
    
     printf("9. Qual é o nome do fundador do Facebook?\n");
    printf("a) Bill Gates\n");
    printf("b) Jeff Bezos\n");
    printf("c) Mark Zuckerberg\n");
    scanf(" %c", &answer);
    if (answer == 'c') {
        score++;
    }

    printf("10. Qual é o nome do sistema de gerenciamento de banco de dados mais popular no mundo?\n");
    printf("a) Oracle\n");
    printf("b) MySQL\n");
    printf("c) SQL Server\n");
    scanf(" %c", &answer);
    if (answer == 'b') {
        score++;
    }

    printf("Você acertou %d de 10 perguntas.\n", score);
    return 0;
}
