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

    cout << "��������� ������� ����� �� 1 �� 7 �������� ��� \n";
    cin >> user_input;

    if (user_input == rand_digit){
        cout << "�����";
    } else {
        cout << "�� ������ \n";
        cout << "���� �������� ����� " << rand_digit;
    }

    return 0;
}