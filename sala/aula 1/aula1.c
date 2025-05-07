/// sufixo: extensao (.c , .py, .java)

#include <stdio.h>

int main(){
    int a = 10;
    int b = 9;
    int x = a + b;

    char word[] = "Hello world!\n";
    printf(word);             /// problema 1 Hello world 
    printf("%d", x);          /// problema 2 soma de duas variaveis

    return 0;
}