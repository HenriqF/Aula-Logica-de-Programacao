#include <stdio.h>
// henrique de figueiredo reinaldi 22501841
int main(){
    char nomePacientes[1000][1000];
    int idadePaciente[1000];
    int minutosPaciente[1000];


    float tempoMedio = 0;

    int indexMaiorTempo = 0;
    int tempoGrande = -1;

    int pacientesRapidos = 0;

    int pacientesSeniors = 0;

    int pacientes;
    printf("Quantia de pacientes -->");
    scanf("%d", &pacientes);
    if (pacientes<1){
        printf("Numero indevido de pacientes....");
    }
    else{

        for(int j =0; j < pacientes; j++){

            printf("Nome paciente --->");
            scanf("%s", nomePacientes[j]);
            printf("Idade paciente --->");
            scanf("%d", &idadePaciente[j]);
            printf("Minutos de atendimento --->");
            scanf("%d", &minutosPaciente[j]);

            if(nomePacientes[j] != "" && idadePaciente[j] > 0 && minutosPaciente[j] > 0){
                if(minutosPaciente[j] > tempoGrande){
                tempoGrande = minutosPaciente[j];
                indexMaiorTempo = j;
                }
                if(minutosPaciente[j] < 10){
                    pacientesRapidos++;
                }

                if(idadePaciente[j] >= 60){
                    pacientesSeniors++;
                }

                tempoMedio += minutosPaciente[j];
                printf("\n");
            }
            else{
                printf("Dados inválidos..\n");
                j--;
            }
            
        }
        printf("Tempo médio de atendimento: %.2fminutos\n", (float)tempoMedio/(float)pacientes);
        printf("Paciente com maior tempo de atendimento : %s\n", nomePacientes[indexMaiorTempo]);
        printf("Quantia de pacientes atendidos rapidamente: %d\n", pacientesRapidos);
        printf("Porcentagem de pacientes com 60+ anos; %.2f%%\n", (float)pacientesSeniors/(float)pacientes*100);
    }
    return 0;
}