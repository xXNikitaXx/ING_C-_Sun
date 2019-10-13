#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int N, temp;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    cout << max(nums) + min(nums) << endl;


    return 0;
}