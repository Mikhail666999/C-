#include <iostream>
#include <string>
using namespace std;
int main()
{
  string consent;
  cout <<"Здравутвуйте вы хотите играть?\n"
  "a) Да\n"
  "b) Нет\n"
  "P.s вводите a или b(Английскими буквами)\n"
  "Вы решили: ";
  cin >> consent;
  if (consent == "b"){
  	cout <<"До свидания";
  }
  else{
  	cout <<"Добро пожаловать"<<endl;
  }
}
