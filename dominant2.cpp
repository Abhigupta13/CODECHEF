
Problem
You are given an array A of length N. An element X is said to be dominant if the frequency of X in A is strictly greater than the frequency of any other element in the A.

For example, if A = [2, 1, 4, 4, 4] then 4 is a dominant element since its frequency is higher than the frequency of any other element in A.

Find if there exists any dominant element in A.
  
  
  
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    cin>>p;
	    int as[p];
	    int m[p];
	    for(int i=0;i<p;i++){
	        cin>>as[i];
	        m[i]=-1;
	    }
	    int c;
	    for(int i=0;i<p;i++){
	        c=1;
	        for(int j=i+1;j<p;j++){
	            if(as[i]==as[j]){
	                c++;
	                m[j]=0;
	            }
	        }
	        if(m[i]!=0){
	            m[i]=c;
	        }
	    }
	    int max=m[0];
	    for(int i=0;i<p;i++){
	        if(max<m[i]){
	            max=m[i];
	        }
	    }
	    int c1=0;
	     for(int i=0;i<p;i++){
	         if(max==m[i]){
	             c1++;
	         }
	     }
	     if(c1==1){
	         cout<<"YES"<<"\n";
	     }
	     else{
	        cout<<"NO"<<"\n"; 
	     }
	}
	return 0;
}
