#include<bits/stdc++.h>
#include<vector>
using namespace std;


bool ContainsDuplicate(vector<int> arr,int n){
    sort(arr.begin(),arr.end());
    for(int i = 1; i<n; i++){    
        if(arr[i-1] == arr[i]){
            return true;
        }
        
    }
    return false;

}

int main(){
    int n;
    cout << "Enter the no. of element: ";
    cin >> n;

    cout << "Enter the Array: ";
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool res = ContainsDuplicate(arr,n);
    cout << res;
}