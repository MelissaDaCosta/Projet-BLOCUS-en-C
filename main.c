/* DA COSTA MOCRET*/
#include <graph.h>
#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

int main (void) {
  int fin;
  dessinemenu();
  
  while(Touche()!=XK_space) {
    fin=0; 
  }
  if(fin!=0){
    FermerGraphique();
  }

  return EXIT_SUCCESS;

}
  
