#include <iostream>
#include <string>
using namespace std;

int main()
{
// 1 Переменные
// Переменная - это минимальная ячейка памяти, способная хранить
// информацию
// 2 Базовые типы данных
// 2.1 Целые числа (INTEGER, int)
    int a = 10;
    int b;
    b = 20;
// 2.3 Арифметика
    int c = a + b;
    int d = a - b;
    int e = a / b;
    int f = a * b;

//    cout<< c <<"   " <<"   " <<d <<"   " << e <<"   " << f<<endl;
// 2.4 Вещественные числа (Числа с плавающе точкой)
    double d1 = 20.55;
    float f1 = 23.55;
    cout << d1 + f1 <<endl;

// 2.5 Жирность

    int a2,b2;
    float c2,d2;
    double q2,e2;

    cout << sizeof(a2) <<" "<< sizeof(b2)<<endl;
    cout << sizeof(c2) <<" "<< sizeof(d2)<<endl;
    cout << sizeof(q2) <<" "<< sizeof(e2) <<endl;

// 2.6 Строки и символы
    char my_symbol = '@';
    string my_string = "Hello World!";
    cout<<my_symbol<<endl;
    cout<<my_string<<endl;

// 2.7 Логический тип
    bool my_true = true;
    bool my_false = false;
    //true || true 
    //true && true
    //25 == 25 --- >true
    //25 != 26 ---> true
    // 25 >= 24 -- > true
    // 24 <= 25 -- > true
    
    return 0;
}