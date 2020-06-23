#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <clocale>

using namespace std;

void robota() {
    string name;
    cout << "Здравствуйте Вы зашли в программу расчетов доходов\n";
    cout << "Для начала назовите себя : " << name;
    cin >> name;
    cout << "Вас зовут : " << name << " Правильно?\n";
}
int main(){
    setlocale(0, "");
    robota();
    system("pause");
    return 0;
}
