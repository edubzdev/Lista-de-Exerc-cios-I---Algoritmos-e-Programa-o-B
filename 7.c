#include <stdio.h>

struct hora{

    int h;
    int min;
    int seg;

};

int main(){

    char stringhora[9];
    struct hora horario;
    char aux[3];

    printf("digite um horario hh:mm:ss: ");
    scanf("%s", stringhora);

    aux[0] = stringhora[0];
    aux[1] = stringhora[1];
    aux[2] = '\0';
    horario.h = atoi(aux);

    aux[0] = stringhora[3];
    aux[1] = stringhora[4];
    horario.min = atoi(aux);

    aux[0] = stringhora[6];
    aux[1] = stringhora[7];
    horario.seg = atoi(aux);

    printf("%d horas %d minutos %d segundos\n", horario.h, horario.min, horario.seg);



    return 0;
}
