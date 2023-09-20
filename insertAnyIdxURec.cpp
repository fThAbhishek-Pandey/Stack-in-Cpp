#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return ;
}
void insertkth (stack<int>&st,int x,int k){
    if (k==0){
        st.push (x);
        return;
    }
    int curr= st.top();
    st.pop();
    insertkth(st,x,k-1);
    st.push(curr);
    return;
}
int main (){
    cout <<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack\n";
    stack<int> st;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    cout<<"enter the value which inserting : ";
    int x;
    cin>>x;
    int k;
    cout<<"enter the index where inserting : ";
    cin>>k;
    insertkth(st,x,st.size()-k);
    display(st);
    return 0; 
}
