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
    int string_count = 0 ;
    int max_count = 1;
    int num_mark = 0;
    
    
    //Word or names variables
    string name_input = "";
    
    cout<<"Insert name/word" << endl;
    
    getline(cin,name_input);
    
    // Create a vector called cars that will store strings
    vector<char> name(name_input.begin(), name_input.end());
    
    
    for(int count = 0; count < name.size(); count++)
    {
        cout << name[count];
        
        if (name[count] == name[count-1] || name[count] == name[count-2] || name[count] == name[count-3])
        {
            string_count = 1;
            num_mark = count;
            cout << "The vector location that have same alphabet " << num_mark << endl;
            continue;
        }
        else
        {
            string_count++;
            
            if (string_count > max_count)
                max_count = string_count;
        }

        cout << endl;
    }
    
    cout << endl << "max count is :" << max_count;

    return 0;
}
