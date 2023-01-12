vector<int> productExceptSelf(vector<int>& nums) {
	int size = nums.size();
	int pre[size], post[size];
	pre[0] = 1;
	post[size-1] = 1;
	vector<int> result;

	for(int i=0; i<size-1; i++){
		pre[i+1] = pre[i]*nums[i];
		post[size-2-i] = post[size-i-1]*nums[size-i-1];
	}
	for(int i=0; i<size; i++){
		result.push_back(pre[i]*post[i]);
	}

	return result;
}