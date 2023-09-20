#include<iostream>
#include<stack>
using namespace std;
void copy(stack<int>st,stack<int>& res){
    if (!st.empty()) return;
    int curr= st.top();
    st.pop();
    copy(st,res);
    res.push(curr);
   return;
}
void display (stack<int>&st){
while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return;
}
int main(){
    int n;
    cout<<"enter the size of stack : ";    
    cin>>n;
    cout<<"enter the element of stack\n";
    stack<int> st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    display(st);
    stack<int> ans ;
    if (ans.empty()) cout<<"the ans is empty1\n";
     copy(st,ans);
    display (ans);
    display(st);
    if (st.empty()) cout<<"the ans is empty3\n";
    if (ans.empty()) cout<<"the ans is empty2\n";
    return 0;
}