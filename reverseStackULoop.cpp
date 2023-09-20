#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return;
}
void reverseSt (stack<int> &st){
    stack<int> temp1;
    while (!st.empty()){
        int curr= st.top();
        st.pop();
        temp1.push(curr);
    }
     stack<int> temp2;
    while (!temp1.empty()){
        int curr= temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
     stack<int> temp;
    while (!temp2.empty()){
        int curr= temp2.top();
        temp2.pop();
        st.push(curr);
    }
    
    return;
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack \n";
    stack<int> st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    display (st);
    reverseSt (st);
    display (st);
    return 0;

}