
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(mid != 0 && nums[mid] < nums[mid-1]){
                return nums[mid];
            }

            if(nums[low] > nums[mid]){
                high = mid - 1;
            }
            else if(nums[high] < nums[mid]){
                low = mid + 1;
            }
            else{
                return nums[low];
            }
        }

        return -1;
    }

