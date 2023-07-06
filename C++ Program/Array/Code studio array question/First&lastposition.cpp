// https://codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
// code studio question find First and Last Position of an Element In Sorted Array.

#include <bits/stdc++.h> 

int firstOcc(vector<int>& arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

         else if(key > arr[mid]) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2 ;
    int ans = -1;

    while(start <= end) {
        
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }

         else if(key > arr[mid]) {
            start = mid + 1 ;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);


    return p;
}