/*

return x value
Look Contraints op[i] is given! & you have to check the match means if statement

*/


// class Solution {
// public:
//     int finalValueAfterOperations(vector<string>& operations) {
        // Operations 

        // Solution 1
//         int x = 0;
//         // Lets Traverse Through the Loop
//         for( int i = 0 ; i < operations.size() ; i++){
            
//             //If i encounter operations == "++x" or "++x" then ill increment x = x + 1
//             if( operations[i] == "++X" || operations[i] == "X++"){
//                 x = x + 1;
//             }
            
//             //If i encounter operations == "--x" or "x--" then ill increment x = x -1               
//             if( operations[i] == "--X" || operations[i] == "X--"){
//                 x = x - 1;
//             }
//         }
//         return x;
        
// Solution 2         
//         int x = 0;
        
//         //Lets traverse the loop 
        
//         for( int i = 0 ; i < operations.size() ; i++){
            
//             // and check what op matches 
//             if(operations[i] == "++X"){
//                 x++;
//             }
//             else if(operations[i] == "X++"){
//                 x++;
//             }
//             else if(operations[i] == "X--"){
//                 x--;
//             }
//             else if(operations[i] == "--X"){
//                 x--;
//             }    
//         }
//     return x;
//     }
// };
//TC == O(n)
//SC == O(1)
