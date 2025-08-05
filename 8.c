#include <stdio.h>

struct dia{

    int dd;
    int mm;
    int aaa;

};

int main(){

    int i=0;
    char stringdata[11];
    struct dia data[2];
    char aux[5];

    for(i=0; i<2; i++){

        printf("digite uma data dd/mm/aaa: ");
        scanf("%s", stringdata);

        aux[0] = stringdata[0];
        aux[1] = stringdata[1];
        aux[2] = '\0';
        data[i].dd = atoi(aux);

        aux[0] = stringdata[3];
        aux[1] = stringdata[4];
        data[i].mm = atoi(aux);

        aux[0] = stringdata[6];
        aux[1] = stringdata[7];
        aux[2] = stringdata[8];
        aux[3] = stringdata[9];
        data[i].aaa = atoi(aux);

    }

    for(i=0; i<2; i++){

        printf("dia %d do %d do %d \n", data[i].dd, data[i].mm, data[i].aaa);
        }


        if(data[0].aaa > data[1].aaa){

            printf("a data %d do %d de %d ocorreu primeiro", data[1].dd, data[1].mm, data[1].aaa);

        }else if(data[0].aaa < data[1].aaa){

            printf("a data %d do %d de %d ocorreu primeiro", data[0].dd, data[0].mm, data[0].aaa);

        }else if(data[0].aaa = data[1].aaa){

            if(data[0].mm > data[1].mm){

                 printf("a data %d do %d de %d ocorreu primeiro", data[1].dd, data[1].mm, data[1].aaa);

            }else if(data[0].mm < data[1].mm){

                printf("a data %d do %d de %d ocorreu primeiro", data[0].dd, data[0].mm, data[0].aaa);

            }else if(data[0].mm = data[1].mm){

                if(data[0].dd > data[1].dd){

                    printf("a data %d do %d de %d ocorreu primeiro", data[1].dd, data[1].mm, data[1].aaa);

                }else if(data[0].dd < data[1].dd){

                    printf("a data %d do %d de %d ocorreu primeiro", data[0].dd, data[0].mm, data[0].aaa);

                }else{

                    printf("As datas são iguais.");

                }

            }

        }

    return 0;
}
