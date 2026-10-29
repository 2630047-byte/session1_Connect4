#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::cin;
using std::string;
bool Gameloop = true;
void main()
{
	cout << "puissance 4:" << endl;
	cout << "les regles sont simple pour gagner tu dois connecter 4 X ou O de gauche a droit, de haut en bas ou en diagonal:" << endl;

    char tab2d[6][7];
	for (int ligne = 0; ligne < 6; ligne++) { // afficher les points comme case 
		for (int col = 0; col < 7; col++) {
			tab2d[ligne][col] = '.';
		}
	}    
	for (int ligne = 0; ligne < 6; ligne++) { //afficher le board 
		for (int col = 0; col < 7; col++) {
			cout << tab2d[ligne][col] << " ";
		}
		cout << endl;
	} 
	cout << endl;
	
}
void playerOne(char tab2d[6][7]) // player one 
{
		int choixj;
	cout << "choisi une colone de 1 a 7";
	cin >> choixj; 
	int col = choixj - 1; 
	for (int ligne = 5; ligne >= 0; ligne--) {
		if (tab2d[ligne][col] == '.') {
			tab2d[ligne][col] = 'X';
			break;
				
		}
	}
}