/* DA COSTA MOCRET */
#include <graph.h>
#include <stdlib.h>
#include <stdio.h>
#include "game.h"


void jouer(int n, int **tab) {
  int i,ii, z,iii,i2,iii2, x, y=0,xx,yy=100; /* x et xx y et yy coordonnées case J1*/
  int J1x=0, J1xx=0, J1y=0, J1yy=0; /* coordonées pion joueur 1*/
  int J2x=0, J2xx=0, J2y=0, J2yy=0,l,k,l1,k1;/* coordonées pion joueur 2 */
  char *file="magicarpe.png";/* pion j1*/
  char *file2="chrysacier.png";/* pion j2*/
  int a=0,b=0,u=0, e=1, d=1, d1=1, e1=1; /* d et e sont les positions dans la grille de j1 et e1 et d1 sont pareil pour j2*/ 
  int y1=0, yy1=100,  x1=0, xx1=0;/* coordonnées case J2*/
  int yy2, x2, xx2, y2,tour=0;

  printf("enter dans jouer\n");
  printf("Le premier joueur place son pion\n");

  while(u==0){
    while(!SourisCliquee()){}
    

    for(z=1; z<n+1; z++) {

      x=0;     /* 1ere colonne */
      xx=100;
      for(ii=1; ii<n+1; ii++) {
	if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
	  if(_X>=x  && _X<=xx && _Y>=y && _Y<=yy) {
	    ChargerImage(file,x+20,y+10, 0,0, 100, 86);
	    u=1;
	    tab[z][ii]=1;
	    l=z;
	    k=ii;

	    J1x=x;
	    J1xx=xx;
	    J1y=y;
	    J1yy=yy;

	    y2=J1y-100;
	    yy2=J1yy-100;
	    x2=J1x-100;
	    xx2=J1xx-100;
	  
	  }
	}
	  
	x=x+100;  /* change de colonne */
	xx=xx+100;
      }
      y=y+100;     /* change de ligne */
      yy=yy+100;
      
      
    }
    y=0;
    yy=100;
  }

  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {
      printf("%d", tab[i][ii]);
    }
    putchar('\n');
  }
  printf("\n");

  printf("Le deuxième joueur place son pion\n");

  while(u==1){

    while(!SourisCliquee()){}   /* change joueur */
    

    for(z=1; z<n+1; z++) {

      x=0;     /* 1ere colonne */
      xx=100;
      for(ii=1; ii<n+1; ii++) {
	if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
	  if(_X>=x  && _X<=xx && _Y>=y && _Y<=yy) {
	    if(tab[z][ii]==0){
	      ChargerImage(file2,x+20,y+10, 0,0, 100, 86);
	      u=2;
	      tab[z][ii]=1;
	      l1=z;
	      k1=ii;
	
	      J2x=x;
	      J2xx=xx;
	      J2y=y;
	      J2yy=yy;
	    }}}
	x=x+100;  /* change de colonne */
	xx=xx+100;
      }
      y=y+100;     /* change de ligne */
      yy=yy+100;
      
      
    }
  
    y=0;
    yy=100;
  }

  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {
      printf("%d", tab[i][ii]);
    }
    putchar('\n');
  }
  printf("\n");




  /***********************1er deplacement***********************************/
  
  while(a==0) {
     
    while(SourisCliquee()){

      if(b==0) {
	/****************************deplacement zone reduite**************************/
	tab[d][e]=0;
	for(z=0; z<3; z++) {
	

	  x2=J1x-100;     /* 1ere colonne */
	  xx2=J1xx-100;
	  
	  for(ii=0; ii<3; ii++) {
	    if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2) {
	     
	      /*****************************placement du 1******************************/
	      for(i=1; i<n+1; i++) {

		x1=0;     /* 1ere colonne */
		xx1=100;
		for(iii=1; iii<n+1; iii++) {
		  if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
		    if(_X>=x1  && _X<=xx1 && _Y>=y1 && _Y<=yy1) {
		      if(tab[i][iii]==0){
			ChargerImage("fond.jpg",J1x+5,J1y+10,0,0,90,80);
			ChargerImage(file,x1+20,y1+10, 0,0, 100, 86);
			if(tour==0) {
			  tab[l][k]=0;
			  tour=1;
			}
			tab[i][iii]=1;
			d=i;
			e=iii;
			b=1;
			finjeu(tab,i,iii,d1,e1,file, n);
			for(i=0; i<n+2; i++) {
			  for(ii=0;ii<n+2;ii++) {
			    printf("%d", tab[i][ii]);
			  }
			  putchar('\n');
			}
			printf("\n");
			/****************************efaccement du vieux 1********************/
		      }
		    }
		  }
		  x1=x1+100;  /* change de colonne */
		  xx1=xx1+100;
		}
		y1=y1+100;
		yy1=yy1+100;
	      }
	   
	      y1=0;
	      yy1=100;
	    
	      J1x=x2;
	      J1xx=xx2;
	      J1y=y2;
	      J1yy=yy2;	  
	    }
	    x2=x2+100;  /* change de colonne */
	    xx2=xx2+100;
	  }
	  y2=y2+100;     /* change de ligne */
	  yy2=yy2+100;
      
      
	}
	y2=0;
	yy2=100;
      }
      /******************************croix j1*********************************/

    
    
      else if(b==1) {

	for(z=1; z<n+1; z++) {

	  x2=0;     /* 1ere colonne */
	  xx2=100;
	  for(ii=1; ii<n+1; ii++) {
	    if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
	      if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2){
		if(tab[z][ii]==0) {
		ChargerImage("pokeball1.png",x2+10,y2+12, 0,0, 90, 86);
		tab[z][ii]=1;
		b=2;
		finjeu(tab,d,e,d1,e1,file, n); 
	      }
	    }
	    }
	  
	    x2=x2+100;  /* change de colonne */
	    xx2=xx2+100;
	  }
	  y2=y2+100;     /* change de ligne */
	  yy2=yy2+100;
	}
	y2=0;
	yy2=100;

	for(i=0; i<n+2; i++) {
	  for(ii=0;ii<n+2;ii++) {
	    printf("%d", tab[i][ii]);
	  }
	  putchar('\n');
	}
	printf("\n");
      }
     
    
      /*****************************deplacement j2***************************/
     
      else if(b==2) {

	y2=J2y-100;
	yy2=J2yy-100;
	tab[l1][k1]=0;
	tab[d1][e1]=0;
	
	for(z=0;z<3; z++) {
	  
	  x2=J2x-100;     
	  xx2=J2xx-100;
	  for(ii=0;ii<3; ii++) {
	   
	    if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2) {
	      

	      for(i2=1; i2<n+1; i2++) {
		x1=0;     
		xx1=100;
		for(iii2=1; iii2<n+1; iii2++) {
		  if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
		    if(_X>=x1  && _X<=xx1 && _Y>=y1 && _Y<=yy1) {
		      if(tab[i2][iii2]==0) {
			ChargerImage("fond.jpg",J2x+5,J2y+10,0,0,90,80);
			ChargerImage(file2,x2+20,y2+10, 0,0, 100, 86);
			tab[i2][iii2]=1;
			d1=i2;
			e1=iii2;
			b=3;
			finjeu(tab,i2,iii2,d,e,file2, n); /* appel fin */
			for(i=0; i<n+2; i++) {
			  for(ii=0;ii<n+2;ii++) {
			    printf("%d", tab[i][ii]);
			  }
			  putchar('\n');
			}
			printf("\n");
   
		      }}
		  }
		    
		  x1=x1+100;  /* change de colonne */
		  xx1=xx1+100;
		}
		y1=y1+100;
		yy1=yy1+100;
	      }
	      y1=0;
	      yy1=100;
	     
	      J2x=x2;
	      J2xx=xx2;
	      J2y=y2;
	      J2yy=yy2;  
	    }
	    x2=x2+100;  /* change de colonne */
	    xx2=xx2+100;
	  }
	  y2=y2+100;     /* change de ligne */
	  yy2=yy2+100;
      
      
	}
	y2=0;
	yy2=100;
      }
       
      
      /**************************croix J2*****************************************/
      
      else if(b==3) {
	  
	  
	for(z=1; z<n+1; z++) {

	  x2=0;     /* 1ere colonne */
	  xx2=100;
	  for(ii=1; ii<n+1; ii++) {
	    if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
	      if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2) {
		if(tab[z][ii]==0) {
		  ChargerImage("pokeball.png",x2+10,y2+12, 0,0, 90, 86);
		  tab[z][ii]=1;
		  b=0;
		  finjeu(tab,d1,e1,d,e,file2, n); 
		}
	      }
	    }
	  
	    x2=x2+100;  /* change de colonne */
	    xx2=xx2+100;
	  }
	  
	  y2=y2+100;     /* change de ligne */
	  yy2=yy2+100;
	}
	y2=0;
	yy2=100;

	for(i=0; i<n+2; i++) {
	  for(ii=0;ii<n+2;ii++) {
	    printf("%d", tab[i][ii]);
	  }
	  putchar('\n');
	}
	printf("\n");
      }
    
   
    }
  }
}
