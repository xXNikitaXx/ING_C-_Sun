//WIFI
//NMKN-RoC
//emtc100200300

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char c;
    cout<< "Hey, enter your name: ";
    cin >> name;
    if (name == "Snake"){
        cout<<"Press F to pay respect"<<endl;
        cin >> c;
        if (c == 'F'){
            cout<<"RESPECT!"<<endl;
        }
    } else if (name == "Mario") {
        cout<<"Ola, Mario!!!"<<endl;
    }else {
        cout<<"Your name is "<<name<<endl;
    }

    return 0;

}

