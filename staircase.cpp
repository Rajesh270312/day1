#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void finds(int **arr,int i,int j,int s,int t){
    if(i<0 || j >=t){
        return;
    }
    if(arr[i][j]==s){
       cout << s << " found at " << i+1 <<" row " << j+1 << " column" << endl;
    }
else if(arr[i][j]<s){
    finds(arr,i,j+1,s,t);
}
else if(arr[i][j]>s){
    finds(arr,i-1,j,s,t);
}
else{
     cout << s <<" not found" << endl;
}
}

int main(){
   //arr will be a*a
   int a;
   cin >> a;
    int **arr = new int*[a];
    for (int i = 0; i < a; i++) {
        arr[i] = new int[a];
    }

   for(int i = 0;i<a;i++){
    for(int j = 0;j<a;j++){
        cin >> arr[i][j];
    }
   }
   
 
   int s;
   cout << "Enter the element to search for: ";
   cin >> s;
   finds(arr,a-1,0,s,a);


    return 0;
}