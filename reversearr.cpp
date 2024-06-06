#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
 MyStack(){top=-1;}
    void push(int x);
    void pop();
    int peak();
};

void MyStack :: push(int x){
    top++;
    arr[top]=x;
}

void MyStack :: pop(){
    if(top==-1){
        return ;
    }      
    top--;
}

int MyStack :: peak(){
    return arr[top];
}

int main(){
     int n;
    cout << "enter the length of array" << endl;
    cin >> n ;
    int arr[n];
    MyStack *ms = new MyStack();
    for(int i = 0;i<n;i++){
        cin >> arr[i];
        ms->push(arr[i]);
    }
    for(int i = 0;i<n;i++){
      arr[i] = ms->peak();
      ms->pop();
    }
    cout <<"this is reversed array"<< endl;
     for(int i = 0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}