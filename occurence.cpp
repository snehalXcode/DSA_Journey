// first last occurence = modified binary search
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;

    // Find first occurrence
    int first = -1;
    int low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key){
            first = mid;
            high = mid - 1; // Continue searching in the left half
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    // Find last occurrence
    int last = -1;
    low = 0, high = n-1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key){
            last = mid;
            low = mid + 1; // Continue searching in the right half
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(first == -1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "First occurrence: " << first << endl;
        cout << "Last occurrence: " << last << endl;
    }

    return 0;
}