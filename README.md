# Une solution, que je pense élégante, pour le Kata Diamond.
Pour rappel ce Kata affiche un diamant à l'écran en commençant par une lettre et en l'augmentant suivant la position dans le diamant.

#### Par exemple voici le diamant avec la lettre 'A' :
-------------------------------------------------
```
  A
 B B
C   C
 B B
  A
```
 
#### Il est aussi possible de faire une version remplie du diamant :
-------------------------------------------------
```
  A
 BBB
CCCCC
 BBB
  A
```

#### Ou encore une version simplifiée ne changeant pas de lettre :
-------------------------------------------------
```
  A
 A A
A   A
 A A
  A
```
## Explication de l'algorithme :
La principale astuce de ce code, se situe dans l'utilisation de deux boucles imbriquées un peu spéciales. Il s'agit de boucles `for` dont le pas (`i++`) est variable (`i += stepI`).
<br/>En algo cela donne :
<br/>*L'utilisation de boucle `POUR`, de `PAS` variable ne serait pas possible ici en algo. Je les ai donc remplacées par des boucles `TANT QUE`.*
```
DECLARATION
|   TAILLE  EST UNE CONSTANTE = 5
|   i       EST UN ENTIER
|   pasDeI  EST UN ENTIER
|   j       EST UN ENTIER
|   pasDeJ  EST UN ENTIER
FIN DECLARATION

DEBUT
|   i <- 0
|   pasDeI <- 1
|   TANT QUE i >= 0 FAIRE
|   |   SI i >= TAILLE / 2 ALORS
|   |   |   pasDeI <- -1
|   |   FIN SI
|   |
|   |   j <- 0
|   |   TANT QUE j >= 0 FAIRE
|   |   |   SI j >= TAILLE / 2 ALORS
|   |   |   |   pasDeJ <- -1
|   |   |   FIN SI
|   |   |
|   |   |   SI i + j = 2 ALORS
|   |   |   |   AFFICHER 'A'
|   |   |   SINON
|   |   |   |   AFFICHER ' '
|   |   |   FIN SI
|   |   |
|   |   |   j <- j + pasDeJ
|   |   FIN TANT QUE
|   |
|   |   AFFICHER RETOUR CHARRIOT
|   |   i <- i + pasDeI
|   FIN TANT QUE
FIN 
```
<br/>En effet, le motif à afficher étant symétrique verticalement et horizontalement, l'algorithme est le même pour les 4 parties du motif. En utilisant des boucles POUR dont le pas est de 1 au début et passe à -1 une fois la moitié du motif passée, on se facilite la tâche.
<br/>*Exemple ici avec un diamant de taille 5 :*
<br/>
| |**0**|**1**|**2**|**1**|**0**|
|-|-|-|-|-|-|
|**0**| | |A| | |
|**1**| |B| |B| |
|**2**|C| | | |C|
|**1**| |B| |B| |
|**0**| | |A| | |

<br/>On s'apercoit que les caractères sont affichés lorsque la somme des coordonnées est égale à la moitié de la taille du diamant (5/2 = 2).
<br/>Pour faire plus simple, les boucles effectuent, pour une taille de 5, le parcours suivant  : 0, 1, 2, 1, 0.
<br/>Il suffit ensuite de vérifier si la somme des 2 variables des POUR est égale à la taille du diamant est le tour est joué.
<br/>


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
