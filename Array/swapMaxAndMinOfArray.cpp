#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int min = INT16_MAX;
    int max = INT16_MIN;
    int minIdx;
    int maxIdx;
    for(int i=0; i < size; i++){
        if(arr[i]< min){
            min = arr[i];
            minIdx = i;
        }
    }
    for(int i=0; i < size; i++){
        if(arr[i]> max){
            max = arr[i];
            maxIdx = i;
        }
    }

    for(int i=0; i<size; i++){
        cout << arr[i];
    }
    
    cout <<"\n"<< min << endl;
    cout << minIdx << endl;
    cout << max << endl;
    cout << maxIdx << endl;

    swap(arr[minIdx],arr[maxIdx]);
    for(int i=0; i<size; i++){
        cout << arr[i];
    }
}