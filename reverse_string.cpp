//program to reverse the string of words
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string &A) {
    vector<string>bag;
    string sol;
    int wb=0,we=0,bit=0;
    for(int i=0;i<A.size();i++){
        if((A[i]==' ')&&(bit==1)){
            string str1(A.begin()+wb,A.begin()+we+1);
            cout<<str1<<"\n";
            bag.push_back(str1);
            bit=0;
        }
        else {
            if((A[i]!=' ')&&(bit==0)){
                bit=1;
                wb=i;
                we=i;
            }
            else{
                we=i;
            }
        }
    }
    if(bit==1){
        string str1(A.begin()+wb,A.begin()+we+1);
        cout<<str1<<"\n";
        bag.push_back(str1);
    }
    sol.append(bag[bag.size()-1]);
    for(int i=bag.size()-2;i>=0;i--){
        sol.append(" ");
        sol.append(bag[i]);
    }
    return sol;
}

int main(){
    string A ="k";
    string B = reverseWords(A);
    cout<<B;
    return 0;
}

