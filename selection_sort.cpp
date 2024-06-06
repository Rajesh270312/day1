#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "enter the length of array" << endl;
    cin >> n ;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j = i;j < n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout << "this is sorted array" << endl;
    for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}