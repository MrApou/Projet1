// Projet1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#define PI 3.14

/*

int somme()
{
	int nombre1 = 0, nombre2 = 0;
	std::cout << "Entrez le premier nombre entier : ";
	std::cin >> nombre1;
	std::cout << "Entrez le deuxieme nombre entier : ";
	std::cin >> nombre2;
	int somme = nombre1 + nombre2;
	std::cout << "la somme est " << somme;

	return 0;
}


int permutation()
{
	int a, b;
	std::cout << "Entrez la premiere valeur : ";
	std::cin >> a;
	std::cout << "Entrez la deuxieme valeur : ";
	std::cin >> b;
	std::cout << "Permutation : " << b << " " <<a;

	return 0;
}




  

int cube()
{
	int a;
	std::cout << "Entrez un nombre : ";
	std::cin >> a;
	int cube = a * a * a;
	std::cout << "Le cube du nombre est : " << cube;

	return 0;
}



float moyenne()
{
	float a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	int moyenne = (a + b + c + d + e) / 5;
	std::cout << moyenne;

	return 0;

}

void moyenne2()
{
	 float notes[5], moyenne2 = 0;

	 std::cout << "Entrez les notes " << std::end1;
	 for(int i = 0; 1 < 5; i++)
	 {
		std::cout << "Entrez la note " << i + 1 << " ";
		std::cin >> notes[i];
	 } 

	 for(int i = 0; i < 5; i++)
	 {
		moyenne2 = moyenne2 + notes[i];
	 }

	 std::cout << "la moyenne est : " << moyenne / 5;

}



float perimetre()
{
	float pi = 3.14;
	float rayon;
	std::cin >> rayon;
	float perimetre = 2 * pi * rayon;
	std::cout << perimetre;

	return 0;
	
}

*/

float rectangle()
{
	float a, b, c;
	std::cout << "Entrez l'hypotenuse : ";
	std::cin >> a;
	std::cout << "Entrez les deux cotes : ";
	std::cin >> b >> c;
	if (a * a == b * b + c * c)
	{
		std::cout << "rectangle";
	}
	else
	{
		std::cout << "pas rectangle";
	}

	return 0;

}


/*
int saisie_correcte()
{
	std::cout << "Saisie correcte" << std::endl;
	int nombre1 = 0;
	std::cout << "Entrez un nombre : ";
	std::cin >> nombre1;
	while (nombre1 < 10 || nombre1 > 20)
	{
		if (nombre1 < 10)
		{
			std::cout << "Plus grand !" << std::endl;
		}
		else
		{
			std::cout << "Plus petit !" << std::endl;
		}

		std::cout << "Entrez un nombre : ";
		std::cin >> nombre1;
	}

	return nombre1;
}

*/


int main()
{
	rectangle();

	return 0;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
