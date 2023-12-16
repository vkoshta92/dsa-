// stl- standerd template liibrary
// stl me direct array ko use nhi kr skta hu , vector ke throw hi ho skta h.
// array ko hu vector  ki trh stlmr use karte hai.

//vector<datatype>name
//vector<int>vishnu;


//vector<int>v(size of vector,initialize)
// vector<int>vishnu(4,2)  // [2,2,2,2]

// vector<int>a;
//a.push_back(4);
//a.push_back(8)  // 8 push ho jega
// jab push krte h vector  space ko double kr deta h and value put kr deta h

// other way to iniatilize
// vector<int>vishnu={2,4,6,8,10}


// user se puch ke but ye only vector me hota h arrray me nhi hota h . array me nhi puch skte h kitna size chiye h
// int n;
// cin>>n;
//vector<int>vishnu(n);
// for(int i=0;i<n;i++){
// cin>>vishnu[i]
// }


// heap memory jyda size ki hoti h stack km size ki
// arr ke size ko limited hi rkhteh kyki stack me limited ata h , jda variable ke liye heap use hota h.
// user se  puchne ke liye  vector jb use krte h vo dynamic memory allocation use hota h hrapme , 
// array me staticc memory allocation hoti h size user se nhi puch skta h , to  stack me jta h data.
// stack me data line se jta h ak ke uper ak
// heap me  randomlely jta h
// agar array ki memmory me jyad avalu dennge to  stack overfkow ho jega

//.... vector double kyo krta h pushback ke time
// vector<int>vishnu;
//phle vo pure heap me   double size ka dhundhega  n and purabiui value and push value usme dal dega.
// o(1) rkhne ke liye vo new space dundhnta h use double krta h phir  push krtta h , kyoki purnai  meor me dalega vha kuch aur process chl rha hoga chances h
//

// how to remove value from vector
//vector<int>vishnu
//vishnu.pop_back();b// last value ko htane ke liye
// vishnu. clear()   // sri value hta dega

//vishnu.erase(vishnu.begin()+2) // 2 index ko hta dega  and bki ko shift kr dega  // O(n)



//size and capicity...................
// vector<int> v;
// v.push_back(1);
//v.push_bck(10)
// size=3;
// caicity=4;

// v.pop_back();
// size=1;
// capicity=4;


// front/ back,at,empty;
// v= 1,2,3,4
// cout<<v.front(); //1
// cout<<v.back(); //4
// cout<<v.empty(); // 0 khali nhi h to 0 ni to1 hota
// cout<< v.at();


// iterater in a vector
// v<int>vishnu={4,6,8,10};
// //v..begin();// first vale ko point
// //v.end();// last ke ak age vle ko point krega.

// for(auto it=v.begin();it!=v.end();it++){
//     cout<<*it<<" ";
//     }// aauto type h  jo bhi type hoga automatic le lega.
//     // 4,6,8,10





//
// v.rbegin()-// y1 10 ko point krega
// v.end()- phle index se ak phle vla , 


// easy methoditrate krne ka
// for(i=0;i<v.size();i++){
//     cout<<v[i];
// }



// sorting...............
// sort(v.begin(),v.end())
//sot(v.begin(),v.end(),greater<int>()); // decresing order


//search
