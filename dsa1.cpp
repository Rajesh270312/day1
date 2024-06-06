#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int binary(int *arr,int i,int j,int s){
    if(i>j){
        return 0;
    }
    int mid = (i + j) / 2;
    if(arr[mid]==s){
        cout << s << " found at " << mid <<" position" << endl;
        return 1;
    }else if(arr[mid]<s){
        binary(arr,mid+1,j,s);
    }else{
        binary(arr,i,mid-1,s);
    }
}

int main(){
    int n,s,check = 0;
    cout << "enter the value of n" << endl;
    cin >> n;

     if (n == 0) {
        cout << "Array is empty. No elements to search." << endl;
        return 0; 
    }

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            check = 0;
        }else{
            check = 1;
        }
    }
    cout << "Enter the element to search for: ";
    cin >> s;
    if (check){
        //Linear search 
        int f = 0;
        for(int i =0;i<n;i++){
            if(s==arr[i]){
                cout << s << "found at " << i <<" position" << endl;
                f=1;
                break;
            }
        }
        if(f==0){
            cout << s <<" not found" << endl;
        }
    }else{  
      int a = binary(arr,0,n-1,s);
      if(a==0){
        cout << s <<" not found" << endl;
      }
    }
    
    return 0;
}