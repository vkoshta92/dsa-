function binarySearchDecreasing(arr, start, end, number) {
    if (start > end) {
        return -1;
    }
    let mid = Math.floor(start + (end - start) / 2);
    if (arr[mid] === number) {
        return mid;
    } else if (arr[mid] < number) {
        return binarySearchDecreasing(arr, start, mid - 1, number);
    } else {
        return binarySearchDecreasing(arr, mid + 1, end, number);
    }
}

let arrDecreasing = [20, 19, 17, 13];
let findValueDecreasing = 17;

console.log(binarySearchDecreasing(arrDecreasing, 0, 3, findValueDecreasing));
