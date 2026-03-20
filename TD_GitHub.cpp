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










//Fonctions réalisées par l'étudiant 3 :
