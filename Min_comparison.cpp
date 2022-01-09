//https://practice.geeksforgeeks.org/problems/middle-of-three2926/1

#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int middle(int A, int B, int C){
       if((A-B>0 && A-C<0) || (A-B<0 && A-C>0))
       return A;
      
      else if ((B-A >0 && B-C<0) || (B-A<0 && B-C>0)) 
      return B;
      
      else return C;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 