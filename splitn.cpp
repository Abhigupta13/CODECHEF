Problem::

Kulyash is given an integer N. His task is to break NN into some number of (integer) powers of 2.

TO achieve this, he can perform the following operation several times (possibly, zero):

Choose an integer X which he already has, and break X into 22 integer parts (Y and Z) such that X = Y + Z.
Find the minimum number of operations required by Kulyash to accomplish his task.



Code::

#include <iostream>
#include <math.h>
using namespace std;
int h2(int n){
   
    int p=(int)log2(n);
    return (int)pow(2,p);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r;
	    cin>>r;
	    int count=0;
	    while(r!=0){
	        r=r-h2(r);
	        count++;
	    }
	    cout<<count-1<<endl;
	}
	return 0;
}
