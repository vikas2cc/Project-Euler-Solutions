/*
https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem
*/
#include <bits/stdc++.h>
using namespace std;

long long int ans[40]={0};

void precalculate(){
    for(int i=0; i<40; i++){
        ans[i]=i+1;
        if(i!=0){
            ans[i]=(ans[i]*ans[i-1])/__gcd(ans[i],ans[i-1]);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    precalculate();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
    return 0;
}
