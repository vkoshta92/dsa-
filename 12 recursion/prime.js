function isPrime(n){
    if(n<=1){
        return false;
    }
    for(let i=2;i*i<=n;i++){
        if(n%i===0){
            return false;
        }
    }
    return true;
}

function countRange(num1,num2){
    let primeNumbers=[];
     let count=0;
     for(let i=num1;i<=num2;i++){
        if(isPrime(i)){
            primeNumbers.push(i);
            count++;
        }
     }
     return {primeNumbers,count}
}

const data= countRange(2,100);
console.log(`numbers: ${data.primeNumbers}, total prime numbers  is ${data.count}`);