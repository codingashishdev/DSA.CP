#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int low = 0, high = n - 1;
    int mid = 0;
    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        /*we will not increse the mid pointer because we still don't know the value of mid 
         whether it is 0 or 1 */
        else if(v[mid] == 2){
            swap(v[mid], v[high]);
            high--;
        }
        else{
            mid++;
        }
    }

    for(int i:v){
        cout << i << " "; 
    }
}
