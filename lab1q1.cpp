#include <iostream>
using namespace std;

int main() {
   int size;
   cout<<"Enter the size of the array: ";
   cin >> size;
   int array[size];
   for(int i = 0; i < size; i++){
       cout<<"Enter the " << i+1 << "th number: ";
       cin>>array[i];
   }
   for(int i = 0; i < size; i++){
       cout<<"Element " << i+1 << ": " << array[i] << endl; 
   }
   int sum = 0;
   for(int i = 0; i < size; i++){
       sum = sum + array[i];
   }
   int average = sum / size;
   cout << "The sum of the elements in the array is " << sum << " and the average is " << average << endl;
   cout << "Even numbers in the array: ";
   for(int i = 0; i < size; i++){
       if(array[i]%2 == 0){
           cout << array[i] << " ";
       }
   }
   int largest = array[0];
   int second_largest = array[1];
   if(largest < second_largest){
       int a = largest;
       largest = second_largest;
       second_largest = a;
   }
   for(int i = 2; i < size; i++){
       if(array[i] > second_largest){
           if(array[i] > largest){
               second_largest = largest;
               largest = array[i];
           }
           else{
               second_largest = array[i];
           }
       }
   }
   cout << endl <<"The largest number in the array is: " << largest <<" and the second largest is: " << second_largest << endl;
   
   int pos;
   int num;
   cout <<"Enter the position to enter the number: ";
   cin>>pos;
   cout << "Enter the number to be entered: ";
   cin >> num;
   int arr2[size+1];
   for(int i = 0; i<pos; i++){
       arr2[i] = array[i];
   }
   arr2[pos] = num;
   for(int i = pos; i < size; i++){
       arr2[i+1] = array[i];
   }
   for(int i = 0; i < size+1; i++){
       cout << "Element " << i+1 << ": " << arr2[i] <<endl;
   }
    return 0;
}
