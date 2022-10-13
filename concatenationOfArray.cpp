

/*

create a vector of 2n 
conditions : 
ans[i] == nums[i] and 
ans[i + n] == nums[i]

usko yeh hi chaiyeh ki 0  index pe jo value wo nums ke 0 index pe ho & nums 0 index wo ans ke 3 index pe value ho 
Also Operations wo given array nums wale pe hi hongey yani array.size() = 3 , naya vector jo bna rhe hai usme to 
values pushback hongi . 

*/

// class Solution {
// public:
//     vector<int> getConcatenation(vector<int>& nums) {
      
//         // created my vector
    
//         vector<int>ans;
        
//         // traverse 2 times 
//         // One Time 
//         for(int i=0;i<nums.size() ;i++)
//         {
//             ans.push_back(nums[i]);
//         }
//         // Two Time 
//         for(int i=0;i<nums.size();i++)
//         {
//             ans.push_back(nums[i]);
//         }

//         //return The Vector
//         return ans;

//     }
// };

//TC == O(n)
// SC == O(n)

