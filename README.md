# Une solution que je pense élégante pour le Kata Diamond.
Pour rappel ce Kata affiche un diamant à l'écran en commençant par une lettre et en l'augmentant suivant la position dans le diamant.

Par exemple voici le diamant avec la lettre 'A'.
```
  A
 B B
C   C
 B B
  A
```
 
 Il est aussi possible de faire une version remplie du diamant :
```
  A
 BBB
CCCCC
 BBB
  A
```

Ou encore une version simplifiée ne changeant pas de lettre :
```
  A
 A A
A   A
 A A
  A
```
## Pour le moment cette version implémente :
La principale astuce de ce code, se situe dans l'utilisation de deux boucles imbriquées un peu spéciales. Il s'agit de boucles POUR dans le pas est variable.
En effet, le motif à afficher étant symétrique verticalement et horizontalement, l'algorithme est le même pour les 4 parties du motif. En utilisant des boucles POUR dont le pas est de 1 au début et passe à -1 une fois la moitié du motif passée, on s'évite de nombreuses conditions à implémenter.
Pour faire plus simple, les boucles effectuent le parcours suivant pour une taille de 5 : 0, 1, 2, 1, 0.
Il suffit ensuite de vérifier si la somme des 2 variables des POUR est égale à la taille du diamant est le tour est joué.

## Pour le moment cette version implémente :
* la version simplifiée
* la version simplifiée remplie
* la version avec taille paramétrable

## Utilisation :
* Pour afficher un diamant de taille 7 vide :
```C
printDiamond ('A', 7, 0);
```
```
   A
  A A
 A   A
A     A
 A   A
  A A
   A
```
* Pour afficher un diamant de taille 7 rempli :
```C
printDiamond ('A', 7, 1);
```
```
   A
  AAA
 AAAAA
AAAAAAA
 AAAAA
  AAA
   A
```
