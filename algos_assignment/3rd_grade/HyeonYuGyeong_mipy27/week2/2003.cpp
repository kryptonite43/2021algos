#include <iostream>
using namespace std;

int main() {
    int arr[10001];
    int n,m;
    cin >> n >> m;
    
    for (int i=0;i<n;i++){
        cin >> arr[i];;
    }
    int s=0,e=0;
    int cnt=0,sum=0;
    
    while (s<n){
        if (sum >= m || e==n) sum-=arr[s++];
        else sum+=arr[e++];
        if (sum==m)cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
