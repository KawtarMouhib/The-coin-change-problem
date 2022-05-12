#include "projet.h"
#include<stdio.h>
#include<stdlib.h>


int main(void){
	 int v,i;
	 //int tab[]={9, 6, 5, 1};
     int tab[max];
     int n;
     printf("entrer la valeur de taille\n");
     scanf("%d",&n);
     printf("entrer la valeur des elements de la liste:\n");
     
     for(i=0;i<n;i++){
       scanf("%d",&tab[i]);
     } 
      printf("pour L:\t");
     for(i=0;i<n;i++){
       printf("%d\t",tab[i]);
     }
     printf("\n");
     
	 printf("entrer la somme que vous voulez:\n");
	 scanf("%d",&v);
     int g = glouton(tab,n,v);
     int d=dynamique(tab,n,v);
     printf("Le glouton donne:\n");
     printf("La solution optimale minimale est: %d\n",g);
     printf("Les pieces sont:");
     for(i = 0; i < g; i++)
     printf("%d ", ans[i]);
     printf("\n");
     printf("L'approche dynamique donne :\n");
     printf("La solution optimale minimale est : %d\n",d );

	
	 
    return 0;
	
}
