#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	string firstname;
	string secondname;
	int n;
	cin>> firstname>> secondname>> n;
	string fullname= firstname+ secondname;
	for(int i=0; i<n; i++){
	    cout<< fullname<< endl;
	}
	

    return 0;
}
