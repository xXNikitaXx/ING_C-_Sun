#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, surname;
    int age;

    cin >> name >> surname;
    cin >> age;

    cout<<"Hi! "<<name<<" "<<surname<<"How r u?"<<endl;
    cout<<"Your age is "<<age<<endl;

    return 0;
}