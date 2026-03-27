//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
    if(age >= 18)
    {
        return true;
    }
    else
    { 
        return false;
    }
}

//Calcul du nombre exp 
int exposant(int nombre, int exp)
{
    int resultat = 1;
    for(int i = 0; i < exp; i++)
    {
        resultat = resultat * nombre;
    }
    return resultat;
}

// Calcul pour la TVA
float TVA(int prix)
{
    if(prix >= 1000)
    {
        return prix * 1.196; //TVA à 19.6%
    }
    else
    {
        return prix * 1.055; //TVA de 5.5%
    }
}

// Plus grand des 3 nombres
int plusGrand(int a, int b, int c)
{
    int max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    return max;
}


//Fonctions réalisées par l'étudiant 2 :

// Yassine

#include <iostream>
using namespace std;

// Fonction estPair
bool estPair(int n) {
    return n % 2 == 0;
}

// Fonction sommeNombre
int sommeNombre(int n) {
    int somme = 0;
    for (int i = 1; i <= n; i++) {
        somme += i;
    }
    return somme;
}

// Fonction salaireNet
double salaireNet(double brut) {
    double net = brut * (1 - 0.23);
    double prime = net * 0.12;
    return net + prime;
}

// Fonction plusPetit
int plusPetit(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}


//MODIFICATIONS

// Modification de estMajeur (étudiant 1)
bool estMajeur(int age) {
    return (age < 0 || age >= 18);
}

// Modification de nombreMedian (étudiant 3)
int nombreMedian(int a, int b, int c) {
    if (a == b || a == c || b == c)
        return 999;

    if ((a > b && a < c) || (a < b && a > c))
        return a;
    else if ((b > a && b < c) || (b < a && b > c))
        return b;
    else
        return c;
}

// Modification de moyenne (étudiant 3)
double moyenne(double a, double b, double c) {
    double res = (a + b + c) / 3;

    if (res < 0)
        return -1;

    return res;
}


//MAIN
int main() {
    cout << "estPair(4): " << estPair(4) << endl;
    cout << "sommeNombre(5): " << sommeNombre(5) << endl;
    cout << "salaireNet(2000): " << salaireNet(2000) << endl;
    cout << "plusPetit(3,1,2): " << plusPetit(3,1,2) << endl;

    cout << "estMajeur(-5): " << estMajeur(-5) << endl;
    cout << "nombreMedian(2,2,3): " << nombreMedian(2,2,3) << endl;
    cout << "moyenne(-5,-5,-5): " << moyenne(-5,-5,-5) << endl;

    return 0;
}


//Fonctions réalisées par l'étudiant 3 :
