#include "Automata.hpp"

Automata::Automata(){
	
	init = 0;
	
	final.insert(1);
	final.insert(2);
	final.insert(4);
	final.insert(7);
	
	delta[0]['0'] = 1;
	delta[0]['1'] = 2;
	delta[0]['2'] = 2;
	delta[0]['3'] = 2;
	delta[0]['4'] = 2;
	delta[0]['5'] = 2;
	delta[0]['6'] = 2;
	delta[0]['7'] = 2;
	delta[0]['8'] = 2;
	delta[0]['9'] = 2;

	delta[1]['.'] = 3;

	delta[2]['0'] = 2;
	delta[2]['1'] = 2;
	delta[2]['2'] = 2;
	delta[2]['3'] = 2;
	delta[2]['4'] = 2;
	delta[2]['5'] = 2;
	delta[2]['6'] = 2;
	delta[2]['7'] = 2;
	delta[2]['8'] = 2;
	delta[2]['9'] = 2;
	delta[2]['.'] = 3;
	delta[2]['e'] = 5;
	delta[2]['E'] = 5;

	delta[3]['0'] = 4;
	delta[3]['1'] = 4;
	delta[3]['2'] = 4;
	delta[3]['3'] = 4;
	delta[3]['4'] = 4;
	delta[3]['5'] = 4;
	delta[3]['6'] = 4;
	delta[3]['7'] = 4;
	delta[3]['8'] = 4;
	delta[3]['9'] = 4;

	delta[4]['0'] = 4;
	delta[4]['1'] = 4;
	delta[4]['2'] = 4;
	delta[4]['3'] = 4;
	delta[4]['4'] = 4;
	delta[4]['5'] = 4;
	delta[4]['6'] = 4;
	delta[4]['7'] = 4;
	delta[4]['8'] = 4;
	delta[4]['9'] = 4;
	delta[4]['e'] = 5;
	delta[4]['E'] = 5;
	
	delta[5]['0'] = 7;
	delta[5]['1'] = 7;
	delta[5]['2'] = 7;
	delta[5]['3'] = 7;
	delta[5]['4'] = 7;
	delta[5]['5'] = 7;
	delta[5]['6'] = 7;
	delta[5]['7'] = 7;
	delta[5]['8'] = 7;
	delta[5]['9'] = 7;
	delta[5]['+'] = 6;
	delta[5]['-'] = 6;

	delta[6]['0'] = 7;
	delta[6]['1'] = 7;
	delta[6]['2'] = 7;
	delta[6]['3'] = 7;
	delta[6]['4'] = 7;
	delta[6]['5'] = 7;
	delta[6]['6'] = 7;
	delta[6]['7'] = 7;
	delta[6]['8'] = 7;
	delta[6]['9'] = 7;

	delta[7]['0'] = 7;
	delta[7]['1'] = 7;
	delta[7]['2'] = 7;
	delta[7]['3'] = 7;
	delta[7]['4'] = 7;
	delta[7]['5'] = 7;
	delta[7]['6'] = 7;
	delta[7]['7'] = 7;
	delta[7]['8'] = 7;
	delta[7]['9'] = 7;
}

bool Automata::test(string palabra) {

	unsigned state = init;
	map<char, unsigned>::iterator it;
	
	for(int i = 0; i < palabra.length(); i++){
		
		it = delta[state].find(palabra[i]);
		if (it != delta[state].end()) state = delta[state][palabra[i]];
			else return false;
	}
	
	if(final.find(state) != final.end()) return true;
		else return false;
}