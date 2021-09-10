#include <iostream>

using namespace std;

int main() {
	//je declare la variable a
	int a;
	//j'initialise et je declare la variable res
	int res = 0;
	//je demande a l'utilisateur d'initialiser la variable a
	cin >> a;
	//je fait une boucle qui vas nous faire le cube
	for (int i = 0; i <= 3; i++) {
		res = res + a;
	}
	//j'affiche le resultat
	cout <<"le cube de "<< a << " est: " << res << endl;
}