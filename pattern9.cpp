#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n-i+1;j++){
            cout<<count<<" ";
            
        }
    count++;    
    cout<<" " <<endl;   
    }
}
