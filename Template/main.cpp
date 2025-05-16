#include<iostream>
#include<vector>
#include<math.h>
#include<utils.h>
using namespace std;

int kadaneAlgorithm(vector<int> &arr, int size){
    int maxEnding = answer = arr[0];
    for(int i = 0; i<size; i++){
 	    if(maxEnding < 0){
	        maxEnding = arr[i];
	    }
	    else{
           maxEnding = maxEnding + arr[i];
	    }
    }
    answer = max(answer, maxEnding);
    return answer;
}

int sumOfArray(vector<int> &arr, int size){
	int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int largestElement(vector<int> &arr, int size){
    int largest = INT_MIN;
    for(int i = 0; i<arr.size(); i++){
        largest = max(largest, arr[i]);
    }
    return largest;
}

int smallestElement(vector<int> &arr, int size){
    int smallest = INT_MAX;
    for(auto i:arr){
        smallest = min(smallest, i);
    }
    return smallest;
}

int secondLargestElement(vector<int> &arr, int size){
    int largest = INT_MIN;
    int secondLargest = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

        if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

void sortArray(vector<int> &arr, int size){
    sort(arr)
}

int main(){
    //
    return 0;
}
