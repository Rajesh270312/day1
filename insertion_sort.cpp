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
    for(int i = 1; i<=n; i++){
        for(int j = i; j>0 ; j--){
            while(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }

        }
    }
    cout << "this is sorted array" << endl;
    for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}