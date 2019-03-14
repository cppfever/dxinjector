#include <all.hpp>


int main(int argc, char **argv)
{    
    try
    {
        std::cout << "Ok" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Some std::exception was caught." << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch(...)
    {
        std::cout << "Unknown Error in vgui application !" << std::endl;
    }

    return 0;
}
