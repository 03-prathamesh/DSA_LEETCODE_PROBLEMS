class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int>v1;
        for(int i=1;i<height.size();i++){
            if(height[i-1]>threshold){
                v1.push_back(i);
            }
        }
        return v1;
    }
};