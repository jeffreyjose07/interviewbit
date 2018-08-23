#include<bits/stdc++.h>
using namespace std;
int binarysearch(const vector<int> &A, int B,bool searchbeg){
    int low=0;
    int high=A.size()-1;
    int mid;
    int result=-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==B){
            result=mid;
            if(searchbeg){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(A[mid]<B){
            low=mid+1;
        }
        if(A[mid]>B){
            high=mid-1;
        }
    }
    return result;
}
vector<int> Solution(const vector<int> &A, int B) {
   vector<int>sol={-1,-1};
   sol[0]=binarysearch(A,B,true);
   sol[1]=binarysearch(A,B,false);
   return sol;
}

int main(){
    const vector<int> A={1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    int B=10;
    vector<int>sol=Solution(A,B);
    cout<<sol[0]<<endl;
    cout<<sol[1];
    return 0;
}
