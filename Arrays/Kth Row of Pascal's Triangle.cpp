vector<int> Solution::getRow(int A) {
    vector<vector<int>> tri;
    for(int i=0;i<A;i++){
        vector<int>tup;
        for(int j=0;j<=i;j++){
            if((i==0)||(i==j)){
                tup.push_back(1);
            }
            else{
                tup.push_back(tri[i-1][j]+tri[i-1][j-1]);
            }
        }
        tri.push_back(tup);
    }
    return tri[A-1];
}
