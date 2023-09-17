#include <iostream>
using namespace std; 
class stack {
protected :
    int capacity;
     int* arr;
      int top;
public :
        stack (int c){
          this->capacity=c;
          arr= new int [c];
          this->top=-1;
        }
    void push (int data){
      if (this->top==this->capacity-1) {
      cout<<"overflow\n";
        return;
      } 
      this->top++;
      this->arr[this->top]=data;
    }

      int pop (){
        if (this->top==-1){
          cout<<"underflow\n";
          return -10e8;
        }
        this->top--;
        return this->arr[this->top];
        
      }
        int top_ele (){
          if (this->top==-1){
            cout<<"underflow\n";
            return -10e8;
          }
          return this->arr[this->top];
        }
      bool isempty (){
        return this->top==-1;
      }
      int size (){
        return this->top+1;
      }
      bool isfull (){
        return this->top==this->capacity -1;
      }
    
};
int main() {

   cout << "enter the size of array : ";
  int n;
  cin>>n;
  stack st (n);
  if (st.isempty()) {
    cout<<"the stack is empty\n";
  }
  cout<<"enter the element of stack\n";
  for (int i=0;i<n;i++){
    int ele;
    cin>>ele;
    st.push(ele);
  }
  cout<<"the top elements is : "<<st.top_ele ()<<endl;
  cout<<"the size of stack is "<<st.size()<<endl;
  if (st.isfull())cout<<"the stack is fulfilled"<<endl;
  st.push(10);
  st.pop();
  cout<<"the top element is : "<<st.top_ele()<<endl;
  cout<<"the size of stack is : "<<st.size()<<endl;
  if (st.isfull()) cout<<"the stack is full \n";
  
  return 0;
}


