
/*

Promblem is simple , Just Traverse the loop and create one more vector and push back values into that  vector
why are we using another vector is becoz if we use same vector and apply operations on it , it will not give the required
output , as the values will change on that vector

Array implementation is not possible becoz , array is not declared in main fucntion . In main function , Vector is declared so
you have to return a vector

https://linuxhint.com/print-vector-cpp/
*/

// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums)
//     // Already you have a vector passed as a reference means already you have a vector
//     {

//         // Creating A Vector Ans
//         vector<int> ans;

//         // traversing the vector
//         for (int i = 0 ;  i < nums.size() ; i++) {

//             // pushing values to my new vector
//             ans.push_back(nums[nums[i]]);
//         }
//         return ans;

//         // returning the new vector
//     }
// };

// Space Complexity: O(N) todo
// Time Complexity: O(N)

//  Printing elements using for loop

// #include <iostream>

// #include <vector>

// using namespace std;

// int main()
// {
//     //  declare + intalization of vector
//     vector<int> Jatin {12, 14, 16, 18, 20};

//     cout << "The Given Vector is : ";

//     // traverse vector
//     for (int i = 0; i < Jatin.size(); i++)

//     {

//         // print the vector elements
//         cout << Jatin[i] << " ";
//     }
// }

// Using the push_back() Method to Push Values Into the Vector ( input)

// #include <iostream>

// #include <vector>

// using namespace std;

// int main()
// {

// // create my vector
//     vector<int> v ;

// //pushback
//  v.push_back(12);
//  v.push_back(14);
//  v.push_back(34);

// //statement
// cout<<"My Vector is : ";
// // print my vector
// for( int i = 0 ; i < 3 ; i++){
//     cout<<v[i]<<" ";
// }
// return 0;

// }

// Data member functions == Data member Methods == member Fucntions == Methods == Class ke Functions
// Methods are functions that belongs to the class , method is a special type of function that is attached to a object , is really similar to hip-hop and music like hip-hop is a type of music but it's not entirely music
// All Are Same

// User defined Vector

// #include<iostream>
// #include<vector>

// using namespace std;

// //referencing
// void printMyVector( vector<int> &v ){

//     for( int i = 0 ; i < v.size() ; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){

// // Declared my vector , size , element
// vector<int> v1 ;
// int size , element;

// // Asking User
// cout<<"Enter The Size Of The VEctor : "<<endl;
// cin>>size;

// // input array elements

// for( int i = 0 ; i < size  ; i++){
//     cin>>element;
//     v1.push_back(element);
// }

// printMyVector( v1 );

// //printing elements
// // for( int i = 0 ; i < size ; i++){
// //     cout<<v1[i] <<" ";
// // }

// return 0;
// }

// Lets Start

// #include <iostream>

// #include <vector>

// using namespace std;

// int main()
// {

//     int nums[6] = {0, 2, 1, 5, 3, 4};

//     int ans[6];

//     // lets traverse baby
//     for (int i = 0; i < 6; i++)
//     {
//         ans[i] = nums[nums[i]];
//     }

//     cout << "The Output array is : " << endl;

//     // For outputting Array

//     for (int i = 0; i < 6; i++)
//     {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }

// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {
        
//         //lets create a vector 
//         vector<int> ans;
        
//         //let traverse and update nums[nums[i]] to ans
        
//         for( int i = 0 ; i < nums.size(); i++){
//            ans.push_back(nums[nums[i]]);
//         }
//         return ans;
//     }
// };


//Error : Why am I getting this runtime error? Line 1034: Char 9: runtime error: reference binding to null pointer of type 'int' == There are no values in ans


/* Final Solution */
// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {
        
//         //lets create a vector 
//         vector<int> ans;
        
//         //let traverse and update nums[nums[i]] to ans : add elements or update using push_back
        
//         for( int i = 0 ; i < nums.size(); i++){
//            ans.push_back(nums[nums[i]]);
            
//            // ans[i] = nums[nums[i]]; 
//         }
//         return ans;
//     }
// };
