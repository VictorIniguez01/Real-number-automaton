#ifndef Automata_hpp
#define Automata_hpp

#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

typedef map<char, unsigned> event;
typedef map<unsigned, event> transition;
typedef set<unsigned> estados_finales;

class Automata{
	
	unsigned init;
	transition delta;
	estados_finales final;
	
	public:
	
	Automata();
	bool test(string);
};

#endif