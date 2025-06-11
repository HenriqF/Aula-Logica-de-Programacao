#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//henrique de figueiredo reinaldi 22501841
int main(){

    time_t tempo;
    tempo = time(NULL);
    tempo = (long)tempo;
    char tempostr[100];
    sprintf(tempostr, "%d", tempo);

    memmove(tempostr, tempostr + strlen(tempostr) - 2, 2); // Shift the last two characters to the start
    tempostr[2] = '\0';

    tempo = atoi(tempostr);


    int alpha = tempo;
    int guess = alpha+1;
    while (guess != alpha){
        scanf("%d", &guess);
        if (guess > alpha){
            printf("menor\n");
        }
        else if (guess < alpha){
            printf("maior\n");
        }
        else{
            printf("acertou!\n");
        }
    }
    
    return 0;
}