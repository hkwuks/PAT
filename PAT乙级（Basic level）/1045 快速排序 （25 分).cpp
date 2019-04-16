#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define N 100000
int main(){
    int n;
    int C[N];
    int max=0,sum=0;
    cin>>n;
    vector<int> A(n),B(n);
    for(int k=0;k<n;++k){
        cin>>A[k];
        B[k]=A[k];
    }
    sort(A.begin(),A.end());
    for(int i=0;i<n;++i){
        if(A[i]==B[i]&&B[i]>max)
            C[sum++]=B[i];
        if(B[i]>max)
            max=B[i];
    }
    cout<<sum<<endl;
    for(int j=0;j<sum;++j){
        cout<<C[j];
        if(j!=sum-1)cout<<' ';
    }
    cout<<endl;
    return 0;
}