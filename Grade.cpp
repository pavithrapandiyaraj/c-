#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	int mark;
	cin>> mark;
	if(mark>=90){
	    cout<< "Grade A";
	} 
	else if(mark>=80){
	    cout<< "Grade B";
	}
	else if(mark>=60){
	    cout<< "Grade C";
	}
	else if(mark>=35){
	    cout<< "Grade D";
	}
	else{
	    cout<< "Fail";
	}
    return 0;
}
