#include <iostream>

using namespace std;

int main()
{   
    string name, surname, email;
    int age;
    while (true) {
        cin >> name >> surname ;
        cout<< "Enter email: ";
        cin >> email;
        cout<<"Enter your age: ";
        cin >> age;

        if (name == "Bob"){
            cout<<"Break here!"<<endl;
            continue;
            break;
        }

    }
    cout << "Outside while loop!"<<endl;
    return 0;
}