
class Solution {
public:
    // Function to determine the minimum number of chairs needed
    int minimumChairs(std::string s) {
        int c_chair = 0;      // Track the current number of people in the waiting room
        int max_c = 0;   // Track the maximum number of chairs needed at any time

        // Iterate over each character in the string
        for (char c : s) {
            if (c == 'E') {       // If 'E', a person enters the waiting room
                c_chair++;         // Increment the current count
            } 
            else if (c == 'L') { // If 'L', a person leaves the waiting room
                c_chair--;         // Decrement the current count
            }
           
            max_c =max(max_c, c_chair);
        }

        return max_c;  // Return the maximum number of chairs needed
    }
};
