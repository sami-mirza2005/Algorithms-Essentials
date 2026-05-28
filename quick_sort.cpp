#include<bits/stdc++.h>
using namespace std;

// pivot বের করার ফাংশন
int getpivot(int arr[], int s, int e) {
    int ind = s-1;        // index রাখার pointer (pivot এর ছোটগুলো এখানে বসবে)
    int cur = arr[e];     // pivot = শেষের element

    for(int i=s; i<e; i++) {
        if(arr[i] <= cur) {   // যদি arr[i] pivot এর সমান বা ছোট হয়
            ind++;            // ind এগিয়ে যাবে
            swap(arr[i], arr[ind]); // arr[i] কে ind জায়গায় বসানো হবে
        }
    }
    ind++;
    swap(arr[ind], arr[e]);   // pivot কে তার ঠিক জায়গায় বসানো
    return ind;               // pivot এর index ফেরত দিচ্ছে
}

// quicksort ফাংশন
void quicksort(int arr[], int s, int e) {
    if(s < e) {
        int pivot = getpivot(arr, s, e);   // pivot ঠিক জায়গায় বসানো
        quicksort(arr, s, pivot-1);        // pivot এর বামে আবার sort
        quicksort(arr, pivot+1, e);        // pivot এর ডানে আবার sort
    }
}

int main() {
    int arr[]={10,20,30,40,55,25,35,17,29};
    int n = sizeof(arr)/sizeof(int);

    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
