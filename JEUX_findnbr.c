#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int nombreMystere = 0, nombreEntre = 0, rq  , cpt = 0;
  const int MAX = 100, MIN = 1;
  // Generation du nombre aleatoire
  srand(time(NULL));
  nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

  do
  {
    // compteur calcul
    cpt = cpt + 1 ;
    // On demande le nombre
    printf("Quel est le nombre ? ");
    scanf("%d", &nombreEntre);
    // On compare le nombre entre  avec le nombre mystere
    if (nombreMystere > nombreEntre)
    printf("C'est plus !\n\n");


    else if (nombreMystere < nombreEntre)
    printf("C'est moins !\n\n");


    else
    printf ("Bravo, vous avez trouve le nombre mystere!!! et les coups est :  %d   \n\n", cpt++);


  } while (nombreEntre != nombreMystere);


  printf("si tu veux rejouer entree 1 si tu veux quitte entree 0 \n\n ");
  scanf("%d",&rq);
  if(rq==1){
    nombreMystere = 0 ;
    nombreEntre = 0 ;
    cpt = 0;;
    // Generation du nombre aleatoire
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;


    do
    {
    // compteur calcul
    cpt = cpt + 1 ;
    // On demande le nombre
    printf("Quel est le nombre ? ");
    scanf("%d", &nombreEntre);
    // On compare le nombre entre  avec le nombre mystere
    if (nombreMystere > nombreEntre)
    printf("C'est plus !\n\n");

    else if (nombreMystere < nombreEntre)
    printf("C'est moins !\n\n");


    else
    printf ("Bravo, vous avez trouve le nombre mystere!!! et les coups est :  %d   \n\n", cpt++);

    } while (nombreEntre != nombreMystere);

    printf("si tu veux rejouer entree 1 si tu veux quitte entree 0 \n\n ");
    scanf("%d",&rq);
    if(rq==1){

    }
    else
    printf("bye");
  }
  else
  printf("bye");
  return 0;



}
