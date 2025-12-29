#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int sum = 0;
    long long product = 1 ;
    for(int i=0; i<size; i++){
        sum +=arr[i];
        product *= arr[i];
    }

    cout << "Sum of the numbers is : " << sum << endl;
    cout << "Product of numbers is : " << product << endl;

    return 0;
}