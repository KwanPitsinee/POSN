#include<iostream>
#include<vector>
using namespace std;

void demoCreate(){
	vector<int> vi(3);
	vi[0] = 10;
	vi[1] = 20;
	vi[2] = 30;
	vi.push_back(40);
//	cout<<vi[0];
for(int i=0;i<vi.size();++i){
	cout<<vi[i] << " ";
}
cout<<endl;
}

void demoInit(){
	vector<int> vj = {10, 20, 30, 40};
	//for loop (index)
	//for(int i=0;i<vj.size();++i){
    //	cout<<vj[i] << " ";
//}
//range
cout<<"vj = ";
    for(int e : vj) {
    	cout<< e << " ";
	}
cout<<endl;

vector<int> vk; // no size
vk.push_back(10);
vk.push_back(20);
vk.push_back(30);
vk.push_back(40);
cout<<"vk = ";
for(int e : vk) {
    	cout<< e << " ";
	}
}


int main(){
//	demoCreate();
	demoInit();
	return 0;
}
