class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n  = (matrix[0].size());
                
        priority_queue<int,  vector<int>, greater<int>>pq;
        for(int i=0; i<n;i++)
        {
           for(int j =0; j<n; j++)
           {
               pq.push(matrix[i][j]);
           }
        }
        
        int temp;
        while(k--)
        {
            temp = pq.top();
            pq.pop();
            
        }
        
        return temp;
        
    }
};