#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     //precomputing the hash array
    int hash[100]={0};
    for(int i=0; i<n;i++){
        hash[arr[i]] += 1;
    }

    //fetching the hash values
    int q;
    cout<<"Enter how many values you want to know they are repeated:";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter a number to find how many times it is being repeated:";
        cin>>number;
        cout<<hash[number]<<endl;
        
    }
    return 0;
}
