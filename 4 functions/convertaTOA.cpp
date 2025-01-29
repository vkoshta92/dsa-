

// function convert(name) {
//     let ans = name.charCodeAt(0) - 'a'.charCodeAt(0) + 'A'.charCodeAt(0);
//     return String.fromCharCode(ans);
//   }
  
//   let data = convert('u');
//   console.log(data);
  


# include<iostream>
using namespace std;

char convert(char char_name){
char ans= char_name-'a' + 'A';
return ans;
}


int main(){
// char name;
// cin>>name;
char name= 'u';
cout<<convert(name);
return 0;
}
