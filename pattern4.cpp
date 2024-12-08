#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
       for(int i=1; i<=n; i++){
           for(int j=6; j>=n-i+1; j--){
               cout<< j <<" ";
           }
         cout<<" "<<endl;  
       }
}
