// https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0
// code studio question Duplicate In Array.

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans= ans^arr[i];
    }

    for(int i=1; i<arr.size(); i++){
        ans= ans^i;
    }
	return ans;
}