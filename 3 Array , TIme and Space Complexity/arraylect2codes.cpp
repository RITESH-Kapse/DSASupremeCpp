#include <iostream>
#include <limits.h>

using namespace std;

//find unique elements -- Use XOR operation
void unique(int arr[], int size){

    int ans=0;

    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }

    cout << ans ;

}

// print all pairs
void Pair(int brr[], int mize){

    for(int i=0; i<mize; i++){

        for(int j=0; j<mize;j++){
            cout << brr[i] << brr[j] << endl;
        }

    }

}

int main(){

    int arr[7] = {11,2,11,2,7,22,22,};

    int brr[3]={10,20,30};
    int mize = 3;

    int size = 7;

    //
    unique(arr,size);
    Pair(brr,mize);


    return 0;
}