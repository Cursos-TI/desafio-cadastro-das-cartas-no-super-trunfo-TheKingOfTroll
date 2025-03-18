#include <stdio.h>
   
    int main(){
   
        //carta 1
      char estado1[20];
      char codigo1[4];
      char cidade1[20];
      char estado2[20];
      char codigo2[4];
      char cidade2[20];
      int populacao1, populacao2;
      int pontos_turisticos1, pontos_turisticos2;
      float area1, area2;
      float Pib1, Pib2;
      float densidade_populacional;
      float Pib_percapita;
      
    
      
//carta 1

printf("informe o estado: \n");
scanf ("%s", &estado1);

printf("informe o código da carta: \n");
 scanf ("%s", &codigo1);

printf("informe a cidade: \n");
scanf("%s", &cidade1);
       
printf("informe a população: \n");
scanf("%i", &populacao1);

printf("informe a area: \n");
scanf("%f", &area1); 

printf("informe o pib: \n");
scanf("%f", &Pib1);

printf("informe a quantidade de pontos turisticos: \n");
scanf("%d", &pontos_turisticos1) ;

densidade_populacional = populacao1/area1;

Pib_percapita = Pib1/populacao1;


          printf("\n \n \n ");

          //exibição da carta 1
              printf ("carta 1\n");     
       printf("o estado é: %s \n", estado1);       

       printf("o codigo é: %s \n", codigo1);

       printf("a cidade é: %s \n", cidade1);

       printf("a população é: %d \n", populacao1);

       printf("a area é: %.2f km²\n", area1);

       printf("o Pib é: %.2f bilhões de reais\n", Pib1);

       printf("numero de pontos turisticos: %d \n", pontos_turisticos1);

       printf("a densidade populacional é: %.2f hab/km² \n", densidade_populacional);

       printf("PIB per capita: %.2f reais\n", Pib_percapita);

            //carta 2

            printf("informe o estado: \n");
            scanf ("%s", &estado2);

            printf("informe o código da carta: \n");
             scanf ("%s", &codigo2);

            printf("informe a cidade: \n");
            scanf("%s", &cidade2);
       
            printf("informe a população: \n");
            scanf("%i", &populacao2);

            printf("informe a area: \n");
            scanf("%f", &area2); 

            printf("informe o pib: \n");
            scanf("%f", &Pib2);

            printf("informe a quantidade de pontos turisticos: \n");
            scanf("%d", &pontos_turisticos2) ;

            densidade_populacional = populacao2/area2;

            Pib_percapita = Pib2/populacao2;


                    //exibição da carta 2
              printf ("carta 2\n");     
              printf("o estado é: %s \n", estado2);       
       
              printf("o codigo é: %s \n", codigo2);
       
              printf("a cidade é: %s \n", cidade2);
       
              printf("a população é: %d \n", populacao2);
       
              printf("a area é: %.2f km²\n", area2);
       
              printf("o Pib é: %.2f bilhões de reais\n", Pib2);
       
              printf("numero de pontos turisticos: %d \n", pontos_turisticos2);

              printf("a densidade populacional é: %.2f hab/km² \n", densidade_populacional);

            printf("PIB per capita: %.2f reais\n", Pib_percapita);

}
