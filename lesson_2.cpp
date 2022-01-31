#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

void task_1()
{
    
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE ; i++){
        arr[i] = 7 + rand() % 7;
    }

    for(int i = 0; i < SIZE; i++){
        if (arr[i] > 10){
            arr[i] -= 10;
        }
    }
    
    for(int i = 0; i < SIZE; i++){
        cout << arr[i] << endl;
    }
}


void task_2()
{
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++){
        int rnd = 0;
        while (rnd % 2 == 0){
            rnd = 1 + rand() % 98;
        }
        arr[i] = rnd;
    }

    for (int i = 0; i < SIZE; i++){
        cout << i << "   " << arr[i] << endl;
    }
} 


void task_3()
{
    int arr_1[SIZE] = {};
    int arr_2[SIZE] = {};
    int arr_3[SIZE] = {};

    for (int i = 0; i < SIZE; i++){
        arr_1[i] = 10 + rand() % 21; 
        arr_2[i] = 10 + rand() % 21;
        arr_3[i] = arr_1[i] + arr_2[i];
    }

    int sum = 0;
    int min = arr_3[0];
    int max = arr_3[0];
    for (int i = 0; i < SIZE; i++){
        sum += arr_3[i];
        if (arr_3[i] < min) {
            min = arr_3[i];
        }
        if (arr_3[i] > max) {
            max = arr_3[i];
        }
    }
    for (int i = 0; i < SIZE; i++){
        cout << arr_3[i] << "  ";
    }
    cout << "\nСреднее арифметическое: " << sum / SIZE << endl;
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;

}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    
    // task_1();
    // task_2();
    task_3();
    return 0;
}