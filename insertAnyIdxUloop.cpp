#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
void insertAnyIdx(stack<int>&st,int x,int k){
    stack<int>temp;
    int count=0;
    int n=st.size();
    while(count<=n-k){
           count++;
        int curr=st.top();
        st.pop();
        temp.push(curr);
    
    }
    st.push(x);
    while (!temp.empty()){
        int curr=temp.top();
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
        int ele;
        cin>>ele;
         st.push(ele);
    }
    cout<<"entering the inserting value : ";
    int x;
    cin>>x;
    cout<<"entering the index at where inserting : ";
    int k;
    cin>>k;
    insertAnyIdx(st,x,k);
    display(st);
    return 0;

}