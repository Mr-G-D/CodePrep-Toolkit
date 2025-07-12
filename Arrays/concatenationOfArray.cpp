class Solution
{
	void main() {
		vector<int> nums = { 1,2,1 };
		vector<int> ans = getConcatenation(nums);

		for (int i = 0; i < ans.size(); i++)
		{
			cout << i << endl;
		}
	}

	vector<int> getConcatenation(vector<int>& nums) {
		int size = nums.size();

		vector<int> ans = nums;

		nums.insert(nums.end(), nums.begin);

		return ans
	}

};