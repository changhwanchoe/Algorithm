#include <bits/stdc++.h>
using namespace std;

int N, S, arr[8], answer[8];
bool vis[8];

void func(int cur)
{
    if(cur == S) {
        for(int i=0;i<S;++i)
            cout<<answer[i]<<' ';
        cout<<'\n';
        return;
    }
    for(int i=0;i<N;++i) {
        if(!vis[i]) {
            answer[cur] = arr[i];
            vis[i] = true;
            func(cur+1);
            vis[i] = false;
        }
    }
}

int main()
{
    cin>>N>>S;
    for(int i=0;i<N;++i)
        cin>>arr[i];
    sort(arr, arr+N);
    func(0);
    return 0;
}