function isPrime(number){
    if(number<=1){
        return false;
    }
    for(let i=2;i*i<=number;i++){
        
        if(number%i===0){
            return false;
        }
    }
    return true;
}

function findPrimeNumberInRange(a,b){
    const primeRange=[];
    let count=0;
    for(let i=a;i<=b;i++){
if(isPrime(i)){
    primeRange.push(i);
    count++;
}
    }
    return {primeRange, count}
}

const primeNumber= findPrimeNumberInRange(5,100);
console.log(primeNumber.primeRange,primeNumber.count);