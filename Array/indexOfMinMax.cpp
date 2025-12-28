#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int nums[size];
    int smallest = INT8_MAX;
    int largest = INT16_MIN;
    int idxOfSmallest;
    int idxOfLargest;

    cout << "Enter 5 values : " ;
    for(int i=0; i < size; i++){
        cin >>  nums[i];
    }

    for(int i=0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            idxOfSmallest = i;
        }
    }
    for(int j=0; j < size; j++){
        if(nums[j] > largest){
            largest = nums[j];
            idxOfLargest = j;
        }
    }
    cout << "The Smallest value is : " << smallest << endl;
    cout << "The index of the Smallest value is : " << idxOfSmallest << endl;
    cout << "The Largest value is : " << largest << endl;
    cout << "The index of Largest value is : " << idxOfLargest << endl;

    return 0;
}