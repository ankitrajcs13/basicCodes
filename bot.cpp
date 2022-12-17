#include <bits/stdc++.h>
using namespace std;


int getSize(string S, int ind){
        
        unordered_set<char> st;
        
        
        for(int i = 0; i< ind; i++){
            st.insert(S[i]);
        }
    return st.size();
    
}

int checkPrimeRec(int n){


    // base case
    if(n == 1)
        return 1;

    // Recursive Relation
    // Changes

    // Hello
    

    return checkPrimeRec(n-1);
}


int main(){
    int cnt = 0;
        
    string S = "ggamziugpa";
    int N = 10;    
    
    /*
    for(int i = 1; S[i]!='\0'; i++){
        
        int sz = getSize(S,i);
        cout<<" size of" << i << "is"<< sz<< endl;
        if(checkPrimeRec(sz) == 1){
            if(i% 2 == 0)
            cnt++;
        }
    }
    cout<< cnt;
    */
   cout<<checkPrimeRec(2);

return 0;
}