#include <bits/stdc++.h> 
using namespace std; 
 int findKthPositive(vector<int>& arr, int k) {
 for(int i=0;i<arr.size();i++){
    int x=arr[i]-(i+1);
    if(x>=k)
    return i+k;
    }
    return arr.size()+k;
 }
int main() 
{ 
vector<int> arr = {1,2,3,4};
int k=2;
int ans=findKthPositive(arr,k);
cout<<ans<<endl;
return 0;
}