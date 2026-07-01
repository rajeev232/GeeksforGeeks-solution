class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mini = INT_MAX, maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return {mini, maxi};
    }
};