class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, currWater, ht, wt, lp = 0, rp = height.size() - 1;
        while(lp < rp){
            ht = min(height[lp], height[rp]);
            wt = rp - lp;
            currWater = ht * wt;
            maxWater = max(maxWater, currWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};