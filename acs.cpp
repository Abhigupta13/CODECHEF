
Problem
There are 10 problems in a contest. You know that the score of each problem is either 1 or 100 points.

Chef came to know the total score of a participant and he is wondering how many problems were actually solved by that participant.

Given the total score P of the participant, determine the number of problems solved by the participant. Print -1 in case the score is invalid.
  
  
  
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int r=m%100;
	    if((m/100)+r>10){
	        cout<<-1<<endl;
	    }
	    else
	    cout<<(m/100)+r<<endl;
	}
	return 0;
}
