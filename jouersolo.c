/* Mélissa Da costa et Killian Mocret*/
#include <stdio.h>
#include <graph.h>
#include <stdlib.h>
#include "game.h"

void jouers(int n, int **tab) {
  int i,ii, z,iii, x, y=0,xx,yy=100,g=(n*100)-100; /* x et xx y et yy coordonnées case J1*/
  int J1x, J1xx, J1y, J1yy;/* coordonées pion joueur 1*/
  int J2x, J2xx, J2y, J2yy,l,k,l1,k1;/* coordonnées case J2*/
  char *file="magicarpe.png";
  char *file2="chrysacier.png";
  int y1=0, yy1=100,  x1=0, xx1=0;
  int y2,a=0,b=0, e=1, d=1, d1=1, e1=1;
  int yy2, x2, xx2,p2,pp2, p3;/* coordonées cases*/

  printf("enter dans jouer\n");
  while(!SourisCliquee()){}
    

  for(z=1; z<n+1; z++) {

    x=0;     /* 1ere colonne */
    xx=100;
    for(ii=1; ii<n+1; ii++) {
      if(_X>=x  && _X<=xx && _Y>=y && _Y<=yy) {
	ChargerImage(file,x+20,y+10, 0,0, 100, 86);
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
	  
      x=x+100;  /* change de colonne */
      xx=xx+100;
    }
    y=y+100;     /* change de ligne */
    yy=yy+100;
      
      
  }
  y=0;
  yy=100;

  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {
      printf("%d", tab[i][ii]);
    }
    putchar('\n');
  }
  printf("\n");
  /* change joueur */
    
  if(_Y<g && _X<g ){
    _X=_X+100;
    _Y=_Y+100;
  }
  else if(_Y<g && _X>g){
    _X=_X-100;
    _Y=_Y+100;
  }
  else if(_Y>g && _X<g ){
    _X=_X+100;
    _Y=_Y-100;
  }
  else if(_Y>g && _X>g ){
    _X=_X-100;
    _Y=_Y-100;
  }
  for(z=1; z<n+1; z++) {

    x=0;     /* 1ere colonne */
    xx=100;
    for(ii=1; ii<n+1; ii++) {
      if(_X>=x  && _X<=xx && _Y>=y && _Y<=yy && tab[z][ii]==0) {
	ChargerImage(file2,x+20,y+10, 0,0, 100, 86);
	tab[z][ii]=1;
	l1=z;
	k1=ii;
	
	J2x=x;
	J2xx=xx;
	J2y=y;
	J2yy=yy;
	p2=_X;
	pp2=_Y;
      }
      x=x+100;  /* change de colonne */
      xx=xx+100;
    }
    y=y+100;     /* change de ligne */
    yy=yy+100;
      
      
  }
  g=1;
  y=0;
  yy=100;

  for(i=0; i<n+2; i++) {
    for(ii=0;ii<n+2;ii++) {
      printf("%d", tab[i][ii]);
    }
    putchar('\n');
  }
  printf("\n");
  a=1;
  b=0;


  /***********************1er deplacement***********************************/

  while(a==1) { /*Probleme de boucle inifinie lors du 2ème tour*/
    
    if(SourisCliquee()){
      

      if(b==0) {
	/****************************deplacement zone reduite**************************/
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
		  if(_X>=x1  && _X<=xx1 && _Y>=y1 && _Y<=yy1) {
		    if(tab[i][iii]==0){
		      ChargerImage("fond.jpg",J1x+5,J1y+10,0,0,90,80);
		      ChargerImage(file,x1+20,y1+10, 0,0, 100, 86);
		      tab[d][e]=0;
		      tab[l][k]=0;
		      tab[i][iii]=1;
		      d=i;
		      e=iii;
		      b=1;
		      finjeu(tab,i,iii,d1,e1,file,n);
		     
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

    

      if(b==1) {

	for(z=1; z<n+1; z++) {

	  x2=0;     /* 1ere colonne */
	  xx2=100;
	  for(ii=1; ii<n+1; ii++) {
	    if(_X<=n*100 && _X>=0 && _Y>=0 && _Y<=n*100) {
	      if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2){
		if(tab[z][ii]==0){
		  ChargerImage("pokeball1.png",x2+10,y2+12, 0,0, 90, 86);
		  tab[z][ii]=1;
		  b=2;
		  printf("test\n");
		  finjeu(tab,d,e,d1,e1,file,n);
		 
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
     
    
    /*****************************deplacement j2***************************/
     
    if(b==2) {

      y2=J2y-100;
      yy2=J2yy-100;
      p2=p2-100;
      pp2=pp2-100;
      p3=p2;
      

	for(z=0;z<3; z++) {
	  
	  x2=J2x-100;     
	  xx2=J2xx-100;
	  p2=p3;
	  
	  for(ii=0;ii<3; ii++) {
	   
	    
	     if(_X>=x2  && _X<=xx2 && _Y>=y2 && _Y<=yy2) {
	     

	      for(i=1; i<n+1; i++) {
		x1=0;     
		xx1=100;
		for(iii=1; iii<n+1; iii++) {
		  if(_X>=x1  && _X<=xx1 && _Y>=y1 && _Y<=yy1) {
		    if(tab[i][iii]==0) {
		       
		      ChargerImage("fond.jpg",J2x+5,J2y+10,0,0,90,80);
		      ChargerImage(file2,x2+20,y2+10, 0,0, 100, 86);
		      tab[l1][k1]=0;
		      tab[d1][e1]=0;
		      tab[i][iii]=1;
		      p2=_X;
		      pp2=_Y;
		      d1=i;
		      e1=iii;
		      b=3;
		      finjeu(tab,d,e,d1,e1,file,n); /* appel fin */
		     
		      for(i=0; i<n+2; i++) {
			for(ii=0;ii<n+2;ii++) {
			  printf("%d", tab[i][ii]);
			}
			putchar('\n');
		      }
		      printf("\n");
   
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
	     
	      J2x=x2;
	      J2xx=xx2;
	      J2y=y2;
	      J2yy=yy2;  
	    }
	     _X=p2+100;
	    x2=x2+100;  /* change de colonne */
	    xx2=xx2+100;
	  }
	  _Y=pp2+100;
	  y2=y2+100;     /* change de ligne */
	  yy2=yy2+100;
      
      
	}
	y2=0;
	yy2=100;
      
    }
       
      
       
      
    /**************************croix J2*****************************************/
     
    if(b==3) {
    
      printf("pokeball2\n");
      
      for(z=1; z<n+1; z++) {
	

	x2=0;     /* 1ere colonne */
	xx2=100;
	for(ii=1; ii<n+1; ii++) {
	  if(b==3){
	    if(tab[z][ii]==0) {
	      ChargerImage("pokeball.png",x2+10,y2+12, 0,0, 90, 86);
	      tab[z][ii]=1;
	      b=0;
	      finjeu(tab,d,e,d1,e1,file2,n);
	      
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
      b=0;
    

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
