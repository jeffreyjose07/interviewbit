int Solution::repeatedNumber(const vector<int> &A) {
    vector<char>table(A.size(),'0');
    for(int i=0;i<A.size();i++){
        table[A[i]]++;
        if(table[A[i]]>'1'){
            return A[i];
        }
    }
    return -1;
}
