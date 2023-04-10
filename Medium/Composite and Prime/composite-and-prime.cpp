//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int Count(int L, int R){
		         int count = R-L+1;

     for (int i=L ; i<=R; i++){

       

         int prime = 0;

         if(i == 1){

             count--;

             continue;

         }

         for(int j=2; j*j<=i; j++){

             if(int(i%j) == 0){

                 prime=1;

             }

         }

         if(prime == 0)

             count = count -2;

     }

     return(count);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends