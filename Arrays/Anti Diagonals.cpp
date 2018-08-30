vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>>sol;
    for(int sum=0;sum<=2*(A.size()-1);sum++){
        vector<int>sub;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[0].size();j++){
                if(i+j==sum){
                    sub.push_back(A[i][j]);
                }
            }
        }
        sol.push_back(sub);
    }
    return sol;
}
