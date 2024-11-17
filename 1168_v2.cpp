// LANG : C++
#include <bits/stdc++.h>
using namespace std;

int s;

vector<int> v;

void rec() {
  //cout << s << "\n";
  v.push_back(s); //function stoi(s) string -> int
  int m = s%10;
  for (int i = m + 1; i <= 9; i++) {
    s=s*10+i ;
    rec();
    s/=10;
  }
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);
  int n;
  cin >> n;
  for (int i = 1; i <= 9; i++) {
    s = i;  //int => string
    rec();
  }

  sort(v.begin(),v.end());//sort string similar dectionry
  /*
  for(int i=0;i<v.size();i++) {
    cout<<v[i]<<"\n";
  }
  */
  /*
  for(auto e:v){ //e is member of v
    cout<<e<<"\n";
  }
  */
  for(int i=1;i<=n;i++){
    long long int x;
    cin>>x;
    if(x>v.size()) cout<<"-1"<<"\n";
    else cout<<v[x-1]<<"\n"; 
  }
}

// https://beta.programming.in.th/tasks/1168

