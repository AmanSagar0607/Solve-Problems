//Find the smallest element in an array
#include <bits/stdc++.h>
using  namespace std;

int sort(vector<int> arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){
    vector<int> arr = {1,0,5,23,45,96};
    
    int ans = sort(arr);
    cout << ans;
    
    return 0;
}
