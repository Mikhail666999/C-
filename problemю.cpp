#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
int main(void)
{
	int w;
	string q;

	cout <<"Если вы хотите выйди введите '1'\n"
	"или если хотите остаться введите '2' : ";
	cin >> w;
	if ( w == 1){
		cout <<"До свидания\n";
		system("ls");
		system("exit");
	}

	else if ( w == 2){
		cout <<"Хорошо\n";
	}
	return 0;
}
