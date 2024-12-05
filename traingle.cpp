#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	int angle1;
	int angle2;
	int angle3;
	int sum;
	cin>> angle1 >> angle2 >> angle3;
	sum= angle1+angle2+angle3;
	if(sum == 180){
	    cout<< "Triangle can be formed";
	}
   else{
       cout<< "Triangle cannot be formed";
   }
    return 0;
}
