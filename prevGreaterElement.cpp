#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void reverse (vector<int>& vec){
 for (int i=0,j=vec.size()-1;i<j;i++,j--){
    swap(vec[i],vec[j]);
 }
}
vector<int> nse (vector<int> vec){
    reverse (vec);
    stack<int> idx_st;
    vector<int> ans(vec.size(),-1);
    for (int i =0; i<vec.size();){
       if (idx_st.size()==0) {
        idx_st.push(i++);
       }
       else if (vec[i]<vec[idx_st.top()]){
           idx_st.push(i++);
       }
       else if (vec[i]>vec[idx_st.top()]){
              ans[idx_st.top()]= vec[i];
              idx_st.pop();
       }
    }
    reverse (ans);
    return ans;
}
// optimize code 
vector<int> nge2 (vector<int>vec){
    reverse(vec);
    vector<int> ans (vec.size(),-1);
    stack<int> st;
    st.push (0);
    for (int i=1;i<vec.size();i++){
        while (!st.empty()&&vec[i]>vec[st.top()]){
         ans[st.top()]= vec[i];
         st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        ans[st.top()]=-1;
        st.pop();
    }
    reverse(ans);
    return ans;
}
int main (){
    vector<int> vec;
    cout<<"enter the size of vector : ";
    int n;
    cin>>n;
    cout<<"enter the element of vector \n";
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    vector <int> ans= nse (vec);
    cout<<"the ans is \n";
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
        
