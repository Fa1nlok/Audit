#include <iostream>
#include <string>
#include <fstream>
#include "Kurs.h"
using namespace std;


int main(int argc, char **argv)
{	
		RemMedia(obj);
		try{obj.Search();
		string name;
		cout << "Enter Fleshcard name :"<< endl;
		getline (cin, name, '\n');
		obj.read(name);
		obj.output();
		}catch (const cipher_error& e){
			cerr << e.what() << endl;
			}
		return 0;
		}