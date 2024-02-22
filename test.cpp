#include <iostream>
#include <cmath>
#include <exception>


int main() {

    int y = 0;
    int x = 1;

    try 
    {
        if (y == 0)
            throw std::exception();

        int j = x /    y;
    }
    catch (std::out_of_range e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (int j)
    {
        std::cout << " Y = 0 NB " << j << std::endl;

    }
    std::cout << " hello \n";





}
