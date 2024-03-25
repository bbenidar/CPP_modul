#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include<set>
using namespace std;

    
	

// class Base {
//     public:
//     virtual ~Base(){};
// };

// class child 
// {
//     public :
//         virtual ~child() {};
//             void fun()
//             {
//                 std::cout << "hhhh\n";
//             }

// };

// int main()
// {
//     Base* b = new Base[15];
//     child* ch = dynamic_cast<child*>(b);
//     if (ch)
//         ch->fun();
// }
// r<int> twoSum(vector<int>& nums, int target) {
//         vector <int> res;
//         int size;
//         set <int> reset;
//         for (int i= 0; i < nums.size() ; i++)
//         {
//             size = reset.size();
//             if (find(nums.begin(), nums.end(), (9 - nums[i])) != nums.end())
//             {
//                 reset.insert(i);
//                 if (size != reset.size())
//                     res.push_back(i);
//             }
//         }
//         return (res);
//     }
// vecto
    
    int main()
    {
        string s = "hello                       maniga wtsap      everything okey?";


        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
                cout << s[i];
            while(s[i] == ' ')
                i++;
            if (s[i - 1] == ' ' && s[i] != '\0')
                cout << "   ";
        }
    }
    

