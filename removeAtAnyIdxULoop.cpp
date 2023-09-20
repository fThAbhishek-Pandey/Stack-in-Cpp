#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return;
}
void removekth (stack<int>&st, int k){
    int count=0;
    stack<int> temp;
    while(count<k){
        int curr= st.top();
        st.pop();
        temp.push(curr);
        count++;
    }
    st.pop();
    while(!temp.empty()){
        int curr= temp.top();
        temp.pop();
        st.push(curr);
    }
    return;
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack\n";
    stack<int> st;
    for (int i=0;i<n;i++){
        int ele ;
        cin>>ele;
        st.push(ele);
    }
    cout<<"enter the index of stack : ";
    int idx;
    cin>>idx;
     display (st);
    removekth(st,st.size()-idx);
     display (st);

}