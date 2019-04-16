#include<iostream>
#include<vector>
using namespace std;
typedef struct{
    int c[4];
}row;
int main(){
    int n;
    cin>>n;
    vector<row> a(n);
    for(int i=0;i<n;++i){
        for(int j=0;j<4;++j){
            cin>>a[i].c[j];
        }
    }
    int jiawin=0,yiwin=0;
    for(int i=0;i<n;++i){
        int sum=a[i].c[0]+a[i].c[2];
        if(a[i].c[1]==sum&&a[i].c[3]!=sum)jiawin++;
        if(a[i].c[3]==sum&&a[i].c[1]!=sum)yiwin++;
    }
    cout<<yiwin<<' '<<jiawin;
    return 0;
}
