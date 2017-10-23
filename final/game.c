/* DA COSTA MOCRET */
#include <graph.h>
#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

void rejouer(int **tab, int n){
  free(tab);
  dessinemenu();
}

/*************************************************************************/

void finjeu (int **tab,int i, int ii,int i2, int ii2, char *file, int n) {
  int a,b;
  char *fin="FIN DE LA PARTIE", *joueur="Le gagnant est: ";
  char *rejoue="rejouer", *sortie1="Se mettre en", *sortie2="PLS";

    if(tab[i-1][ii-1]==1 && tab[i][ii-1]==1 && tab[i+1][ii-1]==1 ) {
      if(tab[i-1][ii]==1 && tab[i+1][ii]==1) {
	if(tab[i-1][ii+1]==1 && tab[i][ii+1]==1 && tab[i+1][ii+1]==1) {
	  for(a=0;a<n+2;a++) {
	    for(b=0;b<n+2;b++) {
	      tab[a][b]=1;
	    }
	  }
	  ChargerImageFond("fond.jpg");
	  EcrireTexte(325, 80, fin, 2);
	  EcrireTexte(550,680, sortie1, 2);
	  EcrireTexte(625,705, sortie2, 2);
	  EcrireTexte(325,380, joueur, 2);
	  ChargerImage(file,400,400,0,0,100,100);
	  DessinerRectangle(225,600,250,150);
	  DessinerRectangle(525,600,250,150);
	  EcrireTexte(235,690,rejoue, 2);

	  while(!SourisCliquee()){}
	  if(_X>=325 && _X<=575 && _Y>=600 && _Y<=750) {
	    ChargerImageFond("fond.jpg");
	    rejouer(tab,n);
	  }
	  else if(_X>=525 && _X<=775 && _Y>=600 && _Y<=750) {
	    FermerGraphique();
	    exit(0);
	  }
	}
      }
    }
     if(tab[i2-1][ii2-1]==1 && tab[i2][ii2-1]==1 && tab[i2+1][ii2-1]==1 ) {
      if(tab[i2-1][ii2]==1 && tab[i2+1][ii2]==1) {
	if(tab[i2-1][ii2+1]==1 && tab[i2][ii2+1]==1 && tab[i2+1][ii2+1]==1) {
	  for(a=0;a<n+2;a++) {
	    for(b=0;b<n+2;b++) {
	      tab[a][b]=1;
	    }
	  }
	  ChargerImageFond("fond.jpg");
	  EcrireTexte(325, 80, fin, 2);
	  EcrireTexte(550,680, sortie1, 2);
	  EcrireTexte(625,705, sortie2, 2);
	  EcrireTexte(325,380, joueur, 2);
	  ChargerImage(file,400,400,0,0,100,100);
	  DessinerRectangle(225,600,250,150);
	  DessinerRectangle(525,600,250,150);
	  EcrireTexte(235,690,rejoue, 2);

	  while(!SourisCliquee()){}
	  if(_X>=325 && _X<=575 && _Y>=600 && _Y<=750) {
	    ChargerImageFond("fond.jpg");
	    rejouer(tab,n);
	  }
	  else if(_X>=525 && _X<=775 && _Y>=600 && _Y<=750) {
	    FermerGraphique();
	    exit(0);
	  }
	}
      }
    }


}
