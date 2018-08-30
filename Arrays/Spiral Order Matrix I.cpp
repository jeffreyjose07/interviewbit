vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
vector<int> spiral;
int dir=0,tr=0,lc=0,br=A.size()-1,rc=A[0].size()-1;
while((tr<=br)&&(lc<=rc)){
    if(dir==0){
        for(int i=lc;i<=rc;i++){
            spiral.push_back(A[tr][i]);
        }
        tr++;
        dir=1;
    }
    else if(dir==1){
        for(int i=tr;i<=br;i++){
            spiral.push_back(A[i][rc]);
        }
        rc--;
        dir=2;
    }
    else if(dir==2){
        for(int i=rc;i>=lc;i--){
            spiral.push_back(A[br][i]);
        }
        br--;
        dir=3;
    }
    else if(dir==3){
        for(int i=br;i>=tr;i--){
            spiral.push_back(A[i][lc]);
        }
        lc++;
        dir=0;
    }
}
return spiral;
}
