class Solution {
public:
    void recursivefunction(int i,int n,vector<int> &ans)
    {
        if(i>n)
        return;
        ans.push_back(i);
        for(int j=0;j<10;j++)
        {
            recursivefunction(i*10+j,n,ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<10;i++)
        {
            recursivefunction(i,n,ans);
        }
        return ans;
    }
};