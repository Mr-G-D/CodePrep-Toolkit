
bool containsnearbyduplicate(vector<int>& nums, int k) {
    if (nums.size() <= 1) return false;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j <= i + k; j++) {
            if (j < nums.size() && nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

void main() {
	vector<int> nums = [1, 2, 3, 1];
	int k = 3
	cout << containsnearbyduplicate(nums, k);
}