#include<iostream>
#include<stack>
using namespace std;
stack<int> copy(stack<int> &st){
     stack<int> temp;
    while (!st.empty()){
        int curr_ele = st.top();
        st.pop();
        temp.push(curr_ele);
    }
    stack<int> res;
    while(!temp.empty()){
        int curr= temp.top();
        temp.pop();
        res.push(curr);
    }
    return res;
}
int main (){
    int n;
    cout<<"enter the number of stack : ";
    cin>>n;
    cout<<"enter the element of stack \n";
    stack<int> st;
    for (int i=0;i<n;i++){
        int ele ;
        cin>>ele;
        st.push (ele);
    }
   stack<int> res = copy(st);
    while (!res.empty()){
        cout<<res.top()<<" ";
        res.pop();
    }

    return 0;
}