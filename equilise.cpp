Problem
Chef has two numbers A and B.

In one operation, Chef can choose either A or B and multiply it by 2.

Determine whether he can make both A and B equal after any number (possibly, zero) of moves.
  
  
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p,r;
	    cin>>p>>r;
	   if(p==r){
	    	     cout<<"YES"<<endl;
	   }
	   else{
	        while(p!=r){
	        if(p>r){
	            r*=2;
	             if(p==r){
	    	     cout<<"YES"<<endl;
	   }
	            if(r>p){
	                cout<<"NO"<<endl;
	                break;
	            }
	            
	        }
	        else if(p<r){
	            p*=2;
	             if(p==r){
	    	     cout<<"YES"<<endl;
	   }
	            if(p>r){
	                cout<<"NO"<<endl;
	                break;
	            }
	            
	        }
	       
	    }
	   }
	}
	return 0;
}
