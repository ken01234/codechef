#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >>T;
	while(T--){
	    int W,X,Y,Z;
	    cin >>W>>X>>Y>>Z;
	    if(((X+Y)==W)||((Y+Z)==W)||((X+Z)==W)||((X+Y+Z)==W)){
	        cout<<"YES"<<endl;
	    }else if((X==W)||(Y==W)||(Z==W)){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
