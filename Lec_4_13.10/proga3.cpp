#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    cout << nums[0] <<endl;
    cout << nums[10]<<endl;

    cout<<"ADDED PART"<< endl;

    while(true){
        int temp;
        cin >> temp;
        if (temp == 888888){
            break;
        }
        nums.push_back(temp);

    }

    cout<< "This is loop "<<endl;

    for(int i = 0; i < nums.size(); i++){
        cout<<"Current values: "<< nums[i] <<endl;
    }
    cout<<"Finita"<<endl;

    return 0;
}