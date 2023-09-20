#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return;
}
void removekth (stack<int> &st,int k){
    if (k==0) {
        st.pop();
        return ;
    }
    int curr= st.top();
    st.pop();
    removekth(st,k-1);
    st.push(curr);
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack\n";
    stack<int> st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    cout<<"enter the index of removing element : ";
    int k;
    cin>>k;
    display(st);
    removekth (st,st.size()-k);
    display (st);
    return 0;
}