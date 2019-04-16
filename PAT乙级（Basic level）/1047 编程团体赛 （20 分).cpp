#include<iostream>
using namespace std;
int main(){
    int n,team,num,score,max=0;
    int t[1001]={0};
    cin>>n;
    for(int i=0;i<n;++i){
        scanf("%d-%d %d",&team,&num,&score);
        t[team]+=score;
    }
    for(int j=1;j<1001;++j){
        if(t[j]>t[max])
            max=j;
    }
    cout<<max<<' '<<t[max];
    return 0;
}