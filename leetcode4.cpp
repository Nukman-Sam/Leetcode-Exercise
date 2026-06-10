/******************************************************************************

                             LeetCode Exercise 4

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;
int main() {
    
    // Create a vector for arrays
    vector<double> num1 = {1,3};
    vector<double> num2 = {4,2};
    double median_pointer = 0;
    double median = 0.0;
    
    // Display the contains of both vectors
    for(int i = 0; i < num1.size(); i++)
        cout << num1[i];
    
    cout << endl;
    
    for(int i = 0; i < num2.size(); i++)
        cout << num2[i];
    
    cout << endl;
    
    
    // insert num2 into num1
    num1.insert(num1.end(), num2.begin(), num2.end());
    // then sort it
    sort(num1.begin(), num1.end());
    
    for(int i = 0; i < num1.size(); i++)
        cout << num1[i];
    
    cout << endl;
    
    
    // Leet Code Exercise
    if (num1.size() % 2 == 0)
    {
        median_pointer = num1.size() / 2;
        median = (num1[median_pointer -1] + num1[median_pointer]) / 2;
        cout << setprecision(5) << median ;
    }
    
    else
    {
        median_pointer = num1.size() / 2;
        cout << num1[median_pointer] ;
    }
    
    
    

    return 0;
}
