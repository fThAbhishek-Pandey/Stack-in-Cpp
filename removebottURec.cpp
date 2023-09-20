#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void removeBott (stack<int>&st){
    if (st.size()==1){
        st.pop();
        return;
    }
    int curr= st.top();
    st.pop();
    removeBott(st);
    st.push(curr);
    return ;
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack \n";
    stack<int > st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
     }
     display(st);
     removeBott(st);
     display(st);
}