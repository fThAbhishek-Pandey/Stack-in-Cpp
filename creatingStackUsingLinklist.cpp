#include<iostream>

using namespace std;
class node {
  public :
    int data;
    node* next ;
    node (int d){
        data =d;
        next=NULL;
    }
};
class stack {
node* head;
int capacity;
int curr_size;
public:
    stack (int c){
      this-> capacity =c;
      this->curr_size=1;
      this->head=NULL;

    }
    bool isEmpty (){
      return this->head==NULL;
    }
    bool isFull (){
      return this->capacity==this->curr_size;
    }
    void push (int data){
      if (this->curr_size==this->capacity) {
        cout<<"overflow\n";
        return;
      }
      node* new_node = new node (data);
      if (head==NULL){
        this->head=new_node;
        new_node ->next=NULL;
        return;
      }
      new_node->next=this->head;
      this->head= new_node;
      this->curr_size++;
      return;
    }
    int pop (){
      if (this->head ==NULL){
        cout<<"underflow\n";
        return -10e8;
      }
      node*new_head = this->head->next;
      this->head->next=NULL;
      node* tobedeleted =this->head;
      int res= tobedeleted->data;
      delete tobedeleted;
      this->head=new_head;
      this->curr_size--;
      return res; 
    }
    int gettop (){
      if (this->head==NULL){
         cout<<"underflow\n";
         return 10e8;
      }
      return this->head->data;
    }  
     int size(){
      return this->curr_size+1;
     }
};
int main (){
  cout<<"enter the number of element in stack\n";
  int n;
  cin>>n;
  cout<<"enter the element of stack\n";
  stack st(n);
  for (int i=0;i<=n;i++){
    int ele;
    cin>>ele;
    st.push(ele);
    if (st.isFull()) cout<<"the stack is full\n";
  }
   for (int i=0;i<n;i++){
    if (st.isEmpty()) cout<<"stack is empty\n";
   cout<<"the top element is : "<<st.gettop()<<endl;
   st.pop();
  cout <<"the size of stack is : "<<st.size()<<endl;
   }
   return 0;
}