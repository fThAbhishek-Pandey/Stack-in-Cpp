#include<iostream>
#include<stack>
using namespace std;
int main (){
    int n;
    cout<<"enter the size of length : ";
    cin>>n;
    cout<<"enter the element of stack \n";
    stack <int> st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    for (int i=0;i<n;i++){
        cout<<"the top element is : "<<st.top()<<" "<<endl;
        cout<<"the size of stack is : "<<st.size()<<endl;
        st.pop();
        if (st.empty()) cout<<"the stack is empty\n";
        
    }
    return 0;
}