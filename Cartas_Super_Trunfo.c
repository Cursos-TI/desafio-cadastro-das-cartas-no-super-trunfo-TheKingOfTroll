#include <stdio.h>
//desafio - Super trunfo   
//cadastro das cartas super trunfo

    int main() {
   
        //carta 1
      char estado1[20];
      char codigo1[4];
      char cidade1[20];
      int população1;
      float area1;
      float Pib1;
      int pontos_turisticos1;
    
      
//carta 1

printf("informe o estado: \n");
scanf ("%s", &estado1);

printf("informe o código da carta: \n");
 scanf ("%s", &codigo1);

printf("informe a cidade: \n");
scanf("%s", &cidade1);
       
printf("informe a população: \n");
scanf("%d", &população1);

printf("informe a area(Km²): \n");
scanf("%f", &area1); 

printf("informe o pib: \n");
scanf("%f", &Pib1);

printf("informe a quantidade de pontos turisticos: \n");
scanf("%d", &pontos_turisticos1) ;

          printf("\n \n");

          //exibição da carta 1
              printf ("carta 1\n");     
       printf("o estado é: %c \n", estado1);       

       printf("o codigo é: %s \n", codigo1);

       printf("a cidade é: %s \n", cidade1);

       printf("a população é: %d \n", população1);

       printf("a area é: %f km²\n", area1);

       printf("o Pib é: %f bilhões de reais\n", Pib1);

       printf("numero de pontos turisticos: %d \n", pontos_turisticos1);

}
