#include <bits/stdc++.h>

using namespace std;


int firstOccurence(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0, end = n-1;
    int ans = -1;
    while(start <= end){
	int mid = start + (end-start)/2;
	if(arr[mid] == target){
	    ans = mid;
	    end = mid-1;
	}
	else if(arr[mid] > target){
	    end = mid-1;
	}
	else{
	    start = mid+1;
	}
    }
    return ans;
}

int lastOccurence(vector<int> &arr, int target){
    int n = arr.size();
    int start = 0, end = n-1;
    int ans = -1;
    while(start <= end){
	int mid = start + (end-start)/2;
	if(arr[mid] == target){
	    ans = mid;
	    start = mid+1;
	}
	else if(arr[mid] > target){
	    end = mid-1;
	}
	else{
	    start = mid+1;
	}
    }
    return ans;
}

vector<int> firstAndLastOccurence(vector<int> &arr, int target){
    vector<int> ans;
    ans.push_back(firstOccurence(arr, target));
    ans.push_back(lastOccurence(arr, target));
    return ans;
}

int main(){

    return 0;
}