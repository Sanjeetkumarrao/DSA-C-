#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,1,2,1,2};
    int size = 5;
    int sum = 0;
    for(int i=0; i<size; i++){
        sum ^= arr[i];
    }
    cout << sum << endl;
}