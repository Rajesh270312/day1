#include<bits/stdc++.h>
#include<math.h>
#include <string>
using namespace std;

class MyStack
{
private:
    char arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    void pop();
    void push(char);
    char peak();
};

void MyStack :: push(char x)
{
    top++;
   arr[top]=x;
}

void MyStack :: pop()
{
    if(top==-1){
        return ;
    }      
    top--;
}

char MyStack :: peak()
{
    return arr[top];
}

bool check(string s1,string s2,char c,char s){
    for(int j=0;j<3;j++){
        if(s1[j]==c){
            if(s2[j]==s){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string s;
    string s1 = "{([";
    string s2 = "})]";
    cout << "enter the string"<< endl;
    cin >> s;
    bool f = true;
    MyStack *ms = new MyStack();

    for(int i=0; i<s.size(); i++){
        for(int j=0;j<3;j++){
            if(s[i]==s1[j]){
                ms->push(s[i]);
            }
            if(s[i]==s2[j]){
                char last = ms->peak();
                 if(check(s1,s2,last,s[i])){
                    ms->pop();
                 }else{
                    f = false;
                    cout << "Not perfect" << endl;
                    break;
                 }
            }
            if(f==false){
                break;
            }
        }
    }
    if(f){
        cout << "Everything is fine!"<<endl;
    }
    return 0;
}