#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;

    //precompute hash array
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]] += 1;
    }

    //fetching the hash values
    int q;
    cout<<"How many characters you want to fetch:";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the character:";
        cin>>c;
        cout<<hash[c]<<endl;
    }
 }
