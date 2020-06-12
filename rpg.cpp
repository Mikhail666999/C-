#include <iostream>
#include <cstdlib>
#include <string>
#include "rpgRoom1.cpp"
#include "rpgDead.cpp"
#include "rpgFrist.cpp"
#include "rpgKomands.cpp"

using namespace std;
//  /attack = нападение на монстра; /defend = закрыться щитом; /kill = убить себя;"

int main(){

	int xp = 100;
	int xpMon = 80;
	string option;

	system("reset");
	Frist();
	cin.get();
	system("reset");

	room1();
	cin.get();
	system("reset");

	room1Mon1();
	komanda1();
	cout <<  xp << endl;
	cout <<  xpMon << endl;
	cout << "Команда: \n" 
	cin >> option;
	system("reset");

	if (option = "/attack" ){
		room1Mon1Attack();

		int xpMon = xpMon - 50;
		int xp = xp - 40;

		cout << xp << endl;
		cout << xpMon << endl;
		cin.get();
		system("reset");
	}

	if (option = "/defend"){
		room1Mon1Shit();

		int xp = xp - 10;

		cout << "xp Тебя : " << xp << endl;
		cout << "xp Монстра : " << xpMon << endl;
		cin.get();
		system("reset");
	}

	if (option = "/kill"){
		int xp = 0;
	}

	if (int xp = 0){
		Dead();
		cin.get();
		system("reset");
	}

	return 0;
}
