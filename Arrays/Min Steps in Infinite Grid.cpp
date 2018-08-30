int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    for(int i=0;i<A.size()-1;i++){
        int X,Y;
        X=abs(A[i]-A[i+1]);
        Y=abs(B[i]-B[i+1]);
        ans+=max(X,Y);
    }
    return ans;
}
