
    int min_ele(int a, int b){
        if(a < b){
            return a;
        }else{
            return b;
        }
    }

    int maxArea(vector<int>& height) {
        if(height.size() == 2){
            return min_ele(height[0], height[1]);
        }
        int area = 0;
        int i = 0, j = height.size() - 1;
        while(i < j){
            if(min(height[i], height[j]) * (j-i) > area){
                area = min(height[i], height[j]) * (j-i);
            }
            if(min(height[i], height[j]) == height[i]){
                i++;
            }else{
                j--;
            }
        }
        return area;
    }

