
# include  <iostream>
using namespace std;

void lowerToUpperCase(string &str, int index)
{
if(index==-1){
    return;

}
str[index]= 'A'+str[index]-'a';

lowerToUpperCase(str, index-1);
}
int main(){
string str= "vishnukant";
lowerToUpperCase(str,9);
cout<<str;

}





















