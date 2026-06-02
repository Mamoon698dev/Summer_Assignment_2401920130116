#include<bits/stdc++.h>
#include<vector>
using namespace std;

int MaxSubarraySum(vector<int> &arr,int n){
    int maxi = INT_MIN;
    int sum =0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi = max(sum,maxi);
        if(sum<0){
            sum =0;
        }
    }
    return maxi;
}

int main(){
    int n;
    
    cout << "Enter the No. of elements: ";
    cin >> n;
    
    cout << "Enter the Array: ";
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = MaxSubarraySum(arr,n);
    cout << "MAximum Sum: "<< result;

}