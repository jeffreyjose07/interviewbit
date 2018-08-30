vector<int> Solution::maxset(vector<int> &A) {
    vector<int> subarray;
    long int maxsum=0,sum=0,start=0,end=-1,cstart=0,cend=-1;
    for(int i=0;i<A.size();i++){
        while((A[i]>=0)&&(i<A.size())){
            sum+=A[i];
            cend++;
            i++;
        }
        if(sum>=maxsum && cend>-1){
            if(sum==maxsum){
                if((end-start)<(cend-cstart)){
                    maxsum=sum;
                    start=cstart;
                    end=cend;    
                }
            }
            else{
                maxsum=sum;
                start=cstart;
                end=cend;
            }
        }
        cstart=i+1;
        cend=i;
        sum=0;
    }
    if(end >-1){
            for(int i=start;i<=end;i++){
                subarray.push_back(A[i]);
        }    
    }
    
    return subarray;
}
