/*

	Problem Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

*/

	/**
	 * Definition for a binary tree node.
	 * struct TreeNode {
	 *     int val;
	 *     TreeNode *left;
	 *     TreeNode *right;
	 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
	 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
	 * };
	 */
	class Solution {
	public:
	    
	    TreeNode *MakeBst(vector<int>&nums, int low, int high){
	        if(low > high)
	            return NULL;
	        int middle = low + (high-low)/2;
	        TreeNode *root = new TreeNode(nums[middle]);
	        root -> left = MakeBst(nums,low,middle-1);
	        root -> right = MakeBst(nums,middle+1,high);
	        return root;
	    }
	    
	    TreeNode* sortedArrayToBST(vector<int>& nums) {
	        if(nums.size()==0)
	            return NULL;
	        return MakeBst(nums,0,int(nums.size())-1);
	    }
	}; 
