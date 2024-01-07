function binarySearch(arr,start,end,number){
    if(start>end){
        return -1;
    }
    let mid= Math.floor(start+(end-start)/2);
    if(arr[mid]===number){
        return mid;
    }

    else if(arr[mid]<number){
        return binarySearch(arr,mid+1,end,number);

    }
    else{
        return binarySearch(arr,start,mid-1,number);
    }
}

 let arr=[13,17,19,20];
let finadValue= 17;

console.log(binarySearch(arr,0,3,finadValue));