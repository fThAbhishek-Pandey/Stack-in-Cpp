#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void reverse (vector<int> &vec){
   for (int i=0,j=vec.size()-1;i<j;i++,j--){
    swap (vec[i],vec[j]);
   }
}
vector<int> psi (vector<int> vec){// psi= previous smaller index 
    reverse(vec);
     vector<int> ans(vec.size(),-1);
     stack<int> st;
     for (int i=0;i<vec.size();){
        if (st.empty()){
            st.push(i++);
        }
        else if (vec[i]<vec[st.top()]){
            ans[st.top()]=vec.size()-1- i;
            st.pop(); 
        }
        else if (vec[i]>vec[st.top()]){
            st.push(i++);
        }      
     }
      reverse (ans);
      for(int i=0;i<ans.size();i++){
        if (ans[i]==-1) ans[i]=i;
      }
      return ans;  
}
vector<int> nsi(vector<int> vec){ // nsi = next smaller index 
     vector<int> ans(vec.size(),-1);
     stack<int> st;
     for (int i=0;i<vec.size();){
        if (st.empty()){
            st.push(i++);
        }
        else if (vec[i]<vec[st.top()]){
            ans[st.top()]= i;
            st.pop(); 
        }
        else if (vec[i]>vec[st.top()]){
            st.push(i++);
        }
     }
     for(int i=0;i<ans.size();i++){
        if (ans[i]==-1) ans[i]=i;
      }
      return ans;
} 
int histogram (vector<int>vec){
      vector<int> prev= psi(vec);
    vector<int> next = nsi(vec);
    int val=0;
    for (int i=0;i<vec.size();i++){
        val = max (val,(next[i]-prev[i])*vec[i]);
    }
    return val;
}
int main (){
    cout<<"enter the size of vector : ";
    int n;
    cin>>n;
    cout<<"enter of element of vector \n";
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
   cout<<"the maximum valume of rectangle is : "<<histogram(vec)<<endl;
    return 0;
}