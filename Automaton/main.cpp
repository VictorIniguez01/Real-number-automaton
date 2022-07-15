#include "Automata.hpp"

int main() {

    Automata a;
	string w = "";

	cout << "Introduzca un numero real: "; cin >> w;
	
	if (a.test(w)) cout << "accepted\n";
		else cout << "rejected\n";
  
  return 0;
}