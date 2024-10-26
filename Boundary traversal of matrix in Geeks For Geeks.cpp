//Boundary traversal of matrix
#include <bits/stdc++.h> 
using namespace std; 
class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> v;
        if(n==1 || m==1)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                     v.push_back(matrix[i][j]);
                    
                }
            }
        }
        else
        {
        for(int i=0;i<m;i++)
        {
            v.push_back(matrix[0][i]);
        }
        for(int j=1;j<n-1;j++)
        {
            v.push_back(matrix[j][m-1]);
            
        }
        for(int i=m-1;i>=0;i--)
        {
            v.push_back(matrix[n-1][i]);
        }
        for(int i=n-2;i>=1;i--)
        {
            v.push_back(matrix[i][0]);
        }
        }
        return v;
        
        
    }
};
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends
