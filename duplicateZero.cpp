/* problem statement : https://leetcode.com/problems/duplicate-zeros/ */

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        queue<int>q;
        for(int i=0; i<n; i++)
          q.push(arr[i]);

        arr.clear();

        for(int i=0; i<n; i++)
        {
           arr.push_back(q.front());
            if(q.front()==0)
            {
                if(i != n-1)
                  arr.push_back(0);    
                i++;
            }      
            q.pop();
        }
    }
};
