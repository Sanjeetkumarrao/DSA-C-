#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int nums[size];
    int smallest = INT8_MAX;
    int largest = INT16_MIN;

    cout << "Enter 5 values : " ;
    for(int i=0; i < size; i++){
        cin >>  nums[i];
    }

    for(int i=0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    for(int i=0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "The Smallest value is : " << smallest << endl;
    cout << "The Largest value is : " << largest << endl;

    return 0;
}