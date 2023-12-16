#include<iostream>
#include<vector>
using namespace std;
int main(){
//create vector ,declare
vector<int>v;
vector<int>v1(5,1); // 5 element 1 se initilaize
// size and capicity
cout<<"size of v"<<v.size()<<endl;
cout<<"capicity of v"<<v.capacity()<<endl;

v.push_back(2);
v.push_back(3);
v.push_back(3);
cout<<"size of v:="<<v.size()<<endl;
cout<<"capicity of v:="<<v.capacity()<<endl;;
//update calue
v[1]=5;

cout<<"size of v:="<<v1.size()<<endl;
cout<<"capicity of v:="<<v1.capacity()<<endl;
v1.push_back(8);
cout<<"size of v:="<<v1.size()<<endl;
cout<<"capicity of v:="<<v1.capacity()<<endl;;

vector<int>v3= {1,2,3,4,5};
cout<<v3.size();

// delete value from vector
vector<int>vnew;
vnew.push_back(4);
vnew.push_back(41);
vnew.push_back(14);
vnew.push_back(42);
vnew.push_back(84);
// vnew.pop_back();

// bich se value hatana
vnew.erase(vnew.begin()+1); // 41 vla hta dega
for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
}
cout<<endl;
// bich me value dalna
vnew.insert(vnew.begin()+1,50);
for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
}

// kisi index pr dusri value update karna
vnew[1]=37;
for(int i=0;i<vnew.size();i++){
    cout<<vnew[i]<<" ";
}

// sre elemnt clear krna
vnew.clear();

//
vector<int>arr;
arr.push_back(2);
arr.push_back(12);
arr.push_back(21);
arr.push_back(122);
cout<<arr[0]<<endl;
cout<<arr.front()<<endl;// front  vla 0 index vla priint hoga
cout<<arr[arr.size()-1]<<endl;
cout<<arr.back()<<endl; // last elemnt

vector<int>a;

// copy value 1 vector to another;  a me arr ki values aa gyi
a= arr;
cout<<a.size();

cout<<endl;
// ittertae
for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
//asse bhi irrtrate kra skte hai.
for(auto i:arr){
    cout<<i<<" ";
}

vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125);
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

// sort in decrresing order
sort(ans.begin(),ans.end(),greater<int>());
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

//  sort in decrresing order second method
sort(ans.rbegin(),ans.rend(),greater<int>());

// binary search
cout<<binary_search(ans.begin(),ans.end(),54)<<endl;// present na ho tp 0 ayega nhi to 1 true

// index search
cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;// 54 itrater se00 iterator ko- kr diya mera index aa gya

// max or min
int maximum= max_element(v.begin(),v.end());

int count= count(v.begin(),v.end(),5);


//function call in vector

}