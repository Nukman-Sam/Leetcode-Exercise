/******************************************************************************

                             LeetCode Exercise 3

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <vector>

using namespace std;
int main() {
    // variables
    int same_number = 0 ;
    int string_count = 1 ;
    int max_count = 1;
    int repeat_num = 0;
    
    
    //Word or names variables
    string name_input = "";
    
    cout<<"Insert name/word" << endl;
    
    getline(cin,name_input);
    
    // Create a vector called cars that will store strings
    vector<char> cars(name_input.begin(), name_input.end());
    

	// Leetcode part
    same_number = cars[0];
    for(int count = 0; count < cars.size(); count++)
    {
        cout << cars[count];
        
        
        if (cars[count] == same_number)
        {
            cout << " reset" << endl;
            string_count = 1;
            same_number = cars[count];
            continue;
        }
        else 
        {   
            
            if(cars[count] == cars[count-1] || cars[count] == cars[count-2] || cars[count] == cars[count-3] || cars[count] == cars[count-4] || cars[count] == cars[count-5])
                {
                 cout << " Same" << endl;
                 string_count--;
                 continue;   
                }
                
            string_count++;
            if (string_count > max_count)
                max_count = string_count;
        }
        
        cout << endl;
    }
    
    cout << endl << "max count is :" << max_count;

    return 0;
}
