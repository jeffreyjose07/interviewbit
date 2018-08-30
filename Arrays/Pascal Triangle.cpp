vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>pascal;
    for(int i=0;i<A;i++){
        vector<int>ar;
        for(int j=0;j<=i;j++){
            if((j==0)||(j==i)){
                ar.push_back(1);
            }
            else{
                ar.push_back(pascal[i-1][j]+pascal[i-1][j-1]);
            }
        }
        pascal.push_back(ar);
    }
    return pascal;
}
