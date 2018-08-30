vector<vector<int> > Solution::generateMatrix(int A){
    vector<vector<int>>sol(A,vector<int>(A,0));
    int ur,lr,lc,rc;
    int turn=0,iter=1;
    ur=0;lr=A-1;lc=0;rc=A-1;
    while((ur<=lr)&&(lc<=rc)){
        if(turn==0){
            for(int i=lc;i<=rc;i++){
                sol[ur][i]=iter;
                iter++;
            }
            ur++;
        }
        if(turn==1){
            for(int i=ur;i<=lr;i++){
                sol[i][rc]=iter;
                iter++;
            }
            rc--;
        }
        if(turn==2){
            for(int i=rc;i>=lc;i--){
                sol[lr][i]=iter;
                iter++;
            }
            lr--;
        }
        if(turn==3){
            for(int i=lr;i>=ur;i--){
                sol[i][lc]=iter;
                iter++;
            }
            lc++;
        }
    }
    return sol;
}
