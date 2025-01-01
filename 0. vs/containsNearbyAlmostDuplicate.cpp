#include<bits/stdc++.h>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
    int n = nums.size();
    vector<pair<int,int>> s(n);

    for(int i=0;i<n;i++){
        s[i].first = nums[i];
        s[i].second = i;
    }

    sort(s.begin(),s.end());

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int id = abs(s[i].second - s[j].second);
            if(nums[i] <= valueDiff + nums[j] && id < indexDiff) return true;
            else {
                i++;
                j++;
            }
        }
    }

    return false;
}

int main(){

    vector<int> nums = {1,2,5,6,7,2,4};
    cout<<containsNearbyAlmostDuplicate(nums,4,0);
}