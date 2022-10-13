

/*

sum + nums[i]

ek loop se traverse karlo and sum ko update karlu and push back and return the vector

 */

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
        
//         // vector is passed as a reference which means i have a vector and i can perform operation on it , resuse it 
//         vector<int> ans;
//         int sum = 0;
        
//         // traversing the loop and updating the sum 
//         for( int i = 0 ; i < nums.size() ; i++){
            
//             ans.push_back(sum+nums[i]);
//             sum = sum + nums[i];
//         }
        
//         return ans;
//         //return the vector 
        
//     }
// };
// constraints == 10^3 
// TLE + MLE





