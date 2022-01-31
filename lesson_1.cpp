#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    
    srand(time(NULL));
    int rand_digit = 1 + rand() % 7;
    int user_input = 0;

    cout << "Компьютер загадал число от 1 до 7 угадайте его \n";
    cin >> user_input;

    if (user_input == rand_digit){
        cout << "Верно";
    } else {
        cout << "Не угадал \n";
        cout << "Было загадано число " << rand_digit;
    }

    return 0;
}