/* DA COSTA MOCRET*/
#include <graph.h>
#include <stdlib.h>
#include <stdio.h>
#include "jouer.h"
#include "jouersolo.h"

void grille(int n, int t) {  /* n est la taille grille t verifie le mode de jeu*/
  int i, ii, x=0, y=0;
  int **tab;  /* cree tableau double dimensions */

  printf("enter grille \n");
  for(i=0; i<n; i++) {
    x=0;
    for(ii=0; ii<n-1; ii++) {
      DessinerRectangle(x, y, 100, 100);
      x=x+100;
    }
    DessinerRectangle(x, y, 100, 100);
    y=y+100;
  }
  tab=(int**)malloc((n+2)*(sizeof(int*))); /* creation tableau en fonction taille grille */
  for(i=0;i<n+2;i++) {
    tab[i]=(int*)malloc((n+2)*(sizeof(int)));
  }
  
  printf("crée le tableau\n");
  
  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {
      tab[i][ii]=1;      /* initialisation tableau */
      printf("%d", tab[i][ii]);
    }
    putchar('\n');
  }
  putchar('\n');
  printf("encadre le tableau de 1\n");

  for(i=1; i<n+1; i++) {
    for(ii=1;ii<n+1;ii++) {
      tab[i][ii]=0;     

    }
  }
  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {   
      printf("%d", tab[i][ii]);
    }
    putchar('\n'); 
  }
      
      
  printf("\n");
  if (t==2){
    jouer(n, tab);
  }
  else if(t==1){
    jouers(n,tab);
  }
}

/**********************************************************************************************/
void menu(void){
  int a=0;
  

  while(a==0){
    while(!SourisCliquee()){}

    /* grille 3 */

    if(_X>=100 && _X<=200 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(3,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(3,2);   
      }
      a=1;
    }
    

   
  
    /* grille 4 */
  
    else if(_X>=200 && _X<=300 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(4,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(4,2);
      }
      a=1;
    }

    /* grille 5 */
    else if(_X>=300 && _X<=400 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(5,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(5,2);
      }
    }

    /* grille 6 */
    else if(_X>=400 && _X<=500 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(6,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(6,2);
      }
      a=1;
    }

    /* grille 7 */
    else if(_X>=500 && _X<=600 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(7,1);
      
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(7,2);
      }
      a=1;
    
    }

    /* grille 8 */
    else if(_X>=600 && _X<=700 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(8,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(8,2);
      }
      a=1;
    }

    /* grille 9 */
    else if(_X>=700 && _X<=800 && _Y>=100 && _Y<=200) {
      while(!SourisCliquee()){}
      if(_X>=100 && _X<=350 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(9,1);
      }
      else if(_X>=550 && _X<=800 && _Y>=300 && _Y<=450) {
	ChargerImageFond("fond.jpg");
	grille(9,2);
      }
      a=1;
    }
  }
}


/************************************************************************************************/

void dessinemenu(void) {
  int i,x=100;
  
  char *grille1="3", *grille2="4", *grille3="5", *grille4="6", *grille5="7", *grille6="8";
  char *grille7="9";
  char *solo="Solo",*multi="2 Joueurs", *taille="Taille de la grille :";
  char *mod="Mode de jeu :", *sous1="___________", *sous="______________";

  printf("entrer Menu\n");
 
  
  InitialiserGraphique();
  ChoisirEcran(0);
  CreerFenetre(0,0,900,900);

  EcrireTexte(325,75,taille , 2);
  EcrireTexte(325,80,sous , 2);
  
  EcrireTexte(350,275, mod, 2);
  EcrireTexte(350,280, sous1, 2);

  
  for(i=0;i<7;i++) {
    DessinerRectangle(x,100,100,100);
    x=x+100;
  }
  
  EcrireTexte(140,160, grille1, 2); /* taille */
  EcrireTexte(240,160, grille2, 2);
  EcrireTexte(340,160, grille3, 2);
  EcrireTexte(440,160, grille4, 2);
  EcrireTexte(540,160, grille5, 2);
  EcrireTexte(640,160, grille6, 2);
  EcrireTexte(740,160, grille7, 2);

  
  DessinerRectangle(100,300,250,150);  /* mode */
  DessinerRectangle(550,300,250,150);
  EcrireTexte(190,390, solo , 2);
  EcrireTexte(600,390, multi, 2);

  menu();
}
