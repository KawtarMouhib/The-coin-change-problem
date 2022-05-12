#ifndef PROJET_H
#define PROJET_H
#include<stdlib.h>
#include<stdio.h>
#define max  10000
#include <assert.h>
#include<limits.h>// j'inclue cette biblio pour utiliser INT_MAX qui sert de valeur infinie

int ans[max];
unsigned int opt[max][max];
unsigned int v[max][max];
int glouton(int coins[], int size,  int value);
int dynamique( int  tab[], int taille,int s);

#endif
