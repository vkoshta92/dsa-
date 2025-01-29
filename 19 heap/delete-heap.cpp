// jab deletee krte h bas top node kodlete karna h
// last node ise replce karega
// heapify

//step down uper sebniche  compare krta h






#include <iostream>
using namespace std;


class MaxHeap
{
    int *arr;
    int size;       // total element in heap
    int total_size; // total size of array

    // make constructer
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    // insert into thr heap

    void insert(int value)
    {
        // if heap size if avible or not

        if (size == total_size)
        { // agar array ke size se badi ho gayi to
            cout << " heap over flow\n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // compare with it parent

        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        };
        cout << arr[index] << "is inserted in heap";
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            cout <<endl;
        }
    }


// heapify
void Heapify(int index){
    int largest= index;
    int left = 2*index+1;
    int right=2*index+2;

    // largest will store the index of element which is greater between parent left child right child.
    if(left<size && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<size && arr[right]>arr[largest]){
        largest= right;
    }


    if(largest!=index){ // agar barabar  ho vgi largest ho jega nhiho barabr to 
        swap(arr[index],arr[largest]);
        Heapify(largest); // index ko store kar rha h largest  is index pe jake ise shi karo.
    }
}


    void Delete(){
        if(size==0){
            cout<<"heap overflow \n";
            return;
        }

cout<<arr[0]<<"deleted from  heap \n";
arr[0]= arr[size-1];
size--;

if(size==0)
return;
Heapify(0);

    }

};


int main()
{
    MaxHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.Delete();
    H1.print();
    H1.insert(40);
    H1.insert(114);
    H1.insert(111);
    H1.print();
    H1.Delete();
    H1.Delete();
    H1.Delete();


}