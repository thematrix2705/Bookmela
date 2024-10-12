#include<iostream>
using namespace std;
int partision(int *arr,int start,int end){
  int pivot = arr[end];
  int i = start - 1;
  int j;
  for ( j = start; i < end; i++){
    if(arr[j] > pivot){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[end]);
  return i + 1;
}
int quickSort(int *arr,int start,int end){
    if (start < end){
        int pivot = partion(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot + 1, end);
    }
    
}
int main(){
    int arr[10] = {4, 5, 8, 9, 0, 1, 2, 3, 6, 7};
    quickSort(arr, 0, 9);
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}