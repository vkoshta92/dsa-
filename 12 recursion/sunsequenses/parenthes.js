function para(n,left,right,ans,temp){
if(left+right===2*n){
   
    
    ans.push(temp.join(""));
    return;
}



    // left

    if(left<n){
        temp.push("(");
        para(n,left+1,right,ans,temp);
        temp.pop();

    }

    // right
    if(right<left){
        temp.push(")");
        para(n,left,right+1,ans,temp);
        temp.pop();
    }
}

let n=3;
let ans=[];
let temp=[];
para(3,0,0,ans,temp);
for(let i=0;i<ans.length;i++){
console.log(ans[i]);
}