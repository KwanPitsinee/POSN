//LANG : C++
#include<bits/stdc++.h>
using namespace std;
//priority_gueue;



vector<int> v;
queue<int> q;
stack<int> st;
priority_queue<int> pq;
priority_queue<int,vector<int>,greater<int>> pq2;

int main(){
 //vector
  for(int i=1;i<=5;i++) v.push_back(i);
  v.pop_back();
  v.insert(v.begin()+2,7);
  for(int i:v) cout<<i<<" "; cout<<"\n"; //i is member of vector v
  v.erase(v.begin());
  for(int i:v) cout<<i<<" "; cout<<"\n";
  v.erase(v.begin(),v.begin()+3);//start v.begin() end < begin()+3
  for(int i:v) cout<<i<<" "; cout<<"\n";
  cout<<"END VECTOR\n";
  
  //queue & stack & priority_queue
  for(int i=1;i<=15;i+=3) q.push(i);// 1 4 7 11 14
  for(int i=6;i<=20;i+=3) st.push(i);//6 9 12 15 18
  for(int i=10;i<=24;i+=3) pq.push(i%8);////2 5 0 3 6
  for(int i=10;i<=24;i+=3) pq2.push(i%8);//2 5 0 3 6

  //for(int i:q)  cout<<i<<" ";   |
  //for(int i:st) cout<<i<<" ";   > false
  //for(int i:pq) cout<<i<<" ";   | 
  
  cout<<"q first = "<<q.front()<<" "; cout<<"\n";
  cout<<"st first = "<<st.top()<<" "; cout<<"\n";
  cout<<"pq first = "<<pq.top()<<" "; cout<<"\n";
  cout<<"pq2 first = "<<pq2.top()<<" "; cout<<"\n";
  
  //cout<<"q second = "<<q.front()+1<<" "; cout<<"\n";  |
  //cout<<"st second = "<<st.top()-1<<" "; cout<<"\n";  > false
  //cout<<"pq seond = "<<pq.top()-1<<" ";  cout<<"\n";  |
  
  /*q.pop();
  st.pop();
  pq.pop();
  
  cout<<"q second = "<<q.front()<<" "; cout<<"\n";
  cout<<"st second = "<<st.top()<<" "; cout<<"\n";
  cout<<"pq seond = "<<pq.top()<<" "; cout<<"\n";
  */
  
  cout<<"\nQ : ";
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }

  cout<<"\nST : ";
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }

  cout<<"\nPQ : ";
  while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
  }
  
  cout<<"\nPQ2 : ";
  while(!pq2.empty()){
    cout<<pq2.top()<<" ";
    pq2.pop();
  }
}

//sort string similar dectionry
