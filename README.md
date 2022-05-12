# The-coin-change-problem
Greedy and dynamic programming approach
This project compares two algorithms of the " the coin change" problem, the greedy algorithm( glouton) and the approach by dynamic programming.
This project answers the question of finding the minimum number of coins that add up to a given amount of money.


Compilation:gcc -Wall main.c projet.c -o main
Execution    : ./main 

Essai1:
entrer la valeur de taille
5
entrer la valeur des elements de la liste:
50
20
10
5
1
pour L: {50	 20	10	5	1}
entrer la somme que vous voulez:
25
Le glouton donne:
La solution optimale minimale est: 2
Les pieces sont:20 5 
L'approche dynamique donne :
La solution optimale minimale est : 2

On remarque pas de différence vu que le glouton et le dynamique donnent tous les deux une solution optimale.

Essai 2:
entrer la valeur de taille
4
entrer la valeur des elements de la liste:
9
6
5
1
pour L={9,6,5,1}
entrer la somme que vous voulez:
11
Le glouton donne:
La solution optimale minimale est: 3
Les pieces sont:9 1 1 
L'approche dynamique donne :
La solution optimale minimale est : 2

Ici par contre nous pouvons remarquer que seule l'algorithme dynamique donne la solution optimale.
