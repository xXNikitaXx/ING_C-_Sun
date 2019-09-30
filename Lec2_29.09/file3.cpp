#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, email;
    int age;

    cout<<"Enter your name: ";
    cin >>name;

    cout<<"Enter your email: ";
    cin >>email;

    cout<<"Enter your age: ";
    cin >>age;

    if (age >= 18) {
        cout<<name << " "<<email<< " "<< "Welcome!"<<endl;
    }else{
        cout<<"U shall not pass!"<<endl;
    }

    
    return 0;
}