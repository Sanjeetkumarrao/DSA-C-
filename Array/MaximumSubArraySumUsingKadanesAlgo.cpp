#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int currSum = 0, maxSum = INT_MIN;

    for(int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << maxSum;
    return 0;
}
