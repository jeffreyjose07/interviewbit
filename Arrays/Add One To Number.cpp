vector<int> Solution::plusOne(vector<int> &A) {
    vector<int>num;
    bool beg0=1,endcarry=1;
    if(A[A.size()-1]<9){
        A[A.size()-1]++;
        for(int i=0;i<A.size();i++){
            if((A[i]==0)&&(beg0==1)){
                continue;
            }
            else{
                num.push_back(A[i]);
                beg0=0;
            }
                
        }
    return num;
    }
    else{
        i=A.size()-1;
        A[i]=0;
        if(i==0)
            A.insert(A.begin(),1);
        else{
            A[--i]++;
        }
        while(A[i]==10){
            A[i]=0;
            if(i==0)
                A.insert(A.begin(),1);
            else{
                A[--i]++;
            }
        }
        while(*A.begin()==0){
            A.erase(A.begin());
        }
        return A;
    }
    
}
