#include "projet.h"

int glouton(int L[], int size,  int v)
{
    int i, cpt = 0;

    for(i = 0; i < size; i++)
    {
        
        while(v >= L[i])
        {
            //on decremente la valeur de v apres avoir pris la valeur L[i]
            v -= L[i];
            ans[cpt] = L[i];
            cpt++;
        }
        if(v == 0)
            break;

    }

    return cpt;
}
 
int dynamique( int  tab[], int taille,int s){
	int i,j,k;

    //initialisation da la matrice
	for ( i = 0; i < taille; i++) { 
    opt[i][0] = 0;// question a: v(i,0)=0;
  }

  for ( j = 1; j <=s ; j++) { 
    if(j%tab[0] == 0)
      opt[0][j] = j/tab[0];
    else
      opt[0][j] = INT_MAX; /* int_max qui est une valeur tres grande car il est impossible de trouver le resultat avec les pieces qu'on a*/
  }
  
  
  /* v(i,j)=min(v(i-1,j) , m+v(i-1,k))*/
	for ( i = 1; i < taille; i++) {
   	 for ( j = 1; j <= s; j++) {
      opt[i][j]= opt[i-1][j];
      for ( k = 0; k < j; k++) {
        if ( (j-k)%tab[i]==0 ) {
        	int m=(j-k)/tab[i];
        	if(opt[i-1][j]<=opt[i-1][k] + m)
		  		 opt[i][j] = opt[i-1][j];
		    else opt[i][j]=opt[i-1][k] + m;		 
        }
      }
    }
  }

	return opt[taille-1][s]; // la solution optimale d'apres la question a
	
}

