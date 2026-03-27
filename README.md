# Projet TD GitHub en C++

## Description

Dans ce projet, nous devons réaliser plusieurs fonctions en C++ et travailler en collaboration via GitHub.
Les fonctions sont déclarées dans `TD_GitHub.h` et implémentées dans `TD_GitHub.cpp`.

Chaque étudiant développe ses propres fonctions et doit également modifier certaines fonctions réalisées par les autres.

---

### Étudiant 1

Fonctions réalisées :

* estMajeur : vérifie si une personne est majeure
* exposant : calcule une puissance sans utiliser la fonction pow
* TVA : applique une TVA selon le prix
* plusGrand : retourne le plus grand de trois nombres

Modifications à effectuer :

* modifier estPair pour inclure les nombres divisibles par 7
* modifier reduction pour ajouter la TVA en paramètre
* modifier sommeNombre pour ajouter le nombre à la fin du calcul

---

### Étudiant 2

Fonctions réalisées :

* estPair : vérifie si un nombre est pair
* sommeNombre : calcule la somme des entiers de 1 jusqu’à un nombre donné
* salaireNet : calcule un salaire net avec charges et prime
* plusPetit : retourne le plus petit de trois nombres

Modifications effectuées :

* estMajeur : retourne vrai si l’âge est négatif ou supérieur ou égal à 18
* nombreMedian : retourne 999 si au moins deux nombres sont égaux
* moyenne : retourne -1 si le résultat est négatif

---

### Étudiant 3

Fonctions réalisées :

* estImpair : vérifie si un nombre est impair ou divisible par 8
* moyenne : calcule la moyenne de trois nombres
* reduction : applique une réduction puis une TVA
* nombreMedian : retourne le nombre médian

Modifications à effectuer :

* modifier salaireNet pour passer les charges et la prime en paramètres
* modifier plusGrand pour retourner le plus petit si deux nombres sont égaux
* modifier exposant pour retourner -1 si l’exposant est supérieur à 99

---

## Organisation du projet

Le projet contient :

* un fichier `TD_GitHub.h` pour les déclarations
* un fichier `TD_GitHub.cpp` pour les implémentations
