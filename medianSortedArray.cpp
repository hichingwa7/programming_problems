/*
    Program that finds median of two sorted arrays of the same size.
    The complexity is O(log(n)).

*/

#include <iostream>
#include <iterator>

using namespace std;

int getMedian(int ar1[], int ar2[], int n) {
    int i = 0; // Current index of input array ar1[]
    int j = 0; // Current index of input array ar2[]
    int count;
    int m1 = -1, m2 = -1;
    /* Since there are 2n elements, median will be average of elements  
    at index n-1 and n in the array obtained after merging ar1 and ar2 */
    
    for (count = 0; count <= n; count++) {
        /* Below is to handle case where all elements of ar1[] are 
           smaller than smallest(or first) element of ar2[] */
        if (i == n) {
            m1 = m2; 
            m2 = ar2[0]; 
            break; 
        } 
        /* Below is to handle case where all elements of ar2[] are 
          smaller than smallest(or first) element of ar1[] */
        else if (j == n) { 
            m1 = m2; 
            m2 = ar1[0]; 
            break; 
        } 
        if (ar1[i] < ar2[j]) { 
            // Store the prev median
            m1 = m2;  
            m2 = ar1[i]; 
            i++; 
        } 
        else {
            // Store the prev median
            m1 = m2;  
            m2 = ar2[j]; 
            j++; 
        } 
    }
    return (m1 + m2)/2; 
}

int main () {
    
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};
    
    int s_arr1 = std::end(arr1) - std::begin(arr1); //array one size
    int s_arr2 = std::end(arr2) - std::begin(arr2); //array two size
    
    if (s_arr1 == s_arr2) {
        cout<< "Median of array is: " <<getMedian(arr1, arr2, s_arr1);
    }
    else {
        cout<< "Doesn't work for arrays of unequal size";
    } 
    return 0;
}