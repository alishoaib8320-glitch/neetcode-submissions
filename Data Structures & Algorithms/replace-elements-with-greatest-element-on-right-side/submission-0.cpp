class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_1=-1;
        for(int i = arr.size()-1;i>=0;i--){
            int temp = arr[i];
            arr[i]=max_1;
            max_1=max(max_1,temp);
        }
        return arr;
    }
};