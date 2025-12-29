// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result = 0; 

    // Write your code here
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        std::cout << i << ": " << nums[i] << " of size " << sizeof(nums[i]) << std::endl;
        result = result + (float) nums[i];
    }

    std::cout << "The total is " << result << std::endl;

    result =  result / length;

    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
