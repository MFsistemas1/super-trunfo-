#include <stdio.h>

int main(){

//Declarando variaveis

char RJ,SP[10]; //siglas estados
char  A,B; // cod cartas
char Maje,Guarulhos[20];//cidades
int populaçao1=9000,populaçao2=8000;
float area1=1300.5,area2=1300.5;
float pib1=5000000.0,pib2=9000000.0;
int numero_pontos_turisticos1=10,numero_pontos_turisticos2=5;
int opçao;


// escolher atibutos a ser comparados

printf("Escolha o atributo a ser comparado:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de Pontos Turísticos\n");
printf("Digite a opção desejada: ");
scanf("%d", &opçao);


//comparar os atributos e determinar resultado 
if (opçao==1){
    if (populaçao1>populaçao2){
        printf ("Maje RJ venceu!\n");
    }else if (populaçao1<populaçao2){
        printf ("Guarulhos SP venceu!\n");
    }
}else if(opçao==2){
    if (area1>area2){                   //condiçao verdadeira

        printf ("Maje RJ venceu!\n");

    }else if (area1<area2){            //condiçao falsa

        printf ("Guarulhos SP venceu!");

    }else if(area1==area2){           //condiçao igual

    printf ("empate\n");
}   
}else if(opçao==3){
    if (pib1>pib2){                   //condiçao verdadeira

        printf ("Maje RJ venceu!\n");

    }else if (pib1<pib2){            //condiçao falsa

        printf ("Guarulhos SP venceu!");

    }else if(pib1==pib2){           //condiçao igual

    printf ("empate\n");
}   
}else if(opçao==4){
    if (numero_pontos_turisticos1>numero_pontos_turisticos2){                   //condiçao verdadeira

        printf ("Maje RJ venceu!\n");

    }else if (numero_pontos_turisticos1<numero_pontos_turisticos2){            //condiçao falsa

        printf ("Guarulhos SP venceu!");

    }else if(numero_pontos_turisticos1==numero_pontos_turisticos2){           //condiçao igual

    printf ("empate\n");
}   
}

}
