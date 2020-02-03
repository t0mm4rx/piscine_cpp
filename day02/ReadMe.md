# Explications Fixed number

Plusieurs methodes pour representer un nombre avec un nombre de bits fixes.

## Integer

Methode la plus simple et classique, pur binaire.

Premier bit --> signe

Ensuite, bit de rang n represente 2^n.

## Floating point

Equivalent notation scientifique en puissance 2.

Premier bit --> signe

8 bits suivants --> puissance

23 derniers --> valeure

Ensuite, le nombre est : signe * valeur * 2 ^ puissance.

## Fixed point

Mix entre les deux.

Premier bit pour le signe.

L-N-1 suivants pour la partie entiere avec L le nombre de bits total.

N derniers pour la partie decimale, N le nombre de bits reserves pour la partie decimale, 8 dans le sujet.

Par exemple, pour 16 bits avec 7 bits pour la partie decimale (note Fixed<16, 7>) :

-5.625:

1       0 0 0 0 0 1 0 1   .  1 0 1 0 0 0 0

Signe - Partie entiere    -  Partie decimale

-      		5                625 (2^-1 + 2^-3)
