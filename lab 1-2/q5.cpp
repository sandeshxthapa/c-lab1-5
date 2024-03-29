// Write a program that inputs ‘n’ integers from the user. Then, create a function pointer to find the maximum value among these integers. The function definition itself should also use pointer for comparison.

#include<iostream>
using namespace std;

int max(int *p, int size) {
  int maxNum = *p;
  for (int i = 0; i < size; i++) {
    if (*(p + i) > maxNum)
      maxNum = *(p + i);
  }
  return maxNum;
}

int main (){
  int arr[100], n, *ptr, (*fptr)(int [], int);
  cout<<"Enter the number of elements:"<<endl;
  cin>>n;
  cout<<"Enter the desired number of elements inside the array:"<<endl;
  for (int i = 0; i < n; i++)
    cin>>arr[i];
  ptr = arr;
  fptr = max;
  cout<<"The largest number in the array is: "<<fptr(arr, n);
  return 0;
}

// Output 
// Enter the number of elements:
// 4
// Enter the desired number of elements inside the array:
// 5 9 8 100
// The largest number in the array is: 100