#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=4;
       for(int i=1; i<=n; i++){
           for(int j=4; j>=n-i+1; j--){
               cout<< j <<" ";
           }
         cout<<" "<<endl;  
       }
}
