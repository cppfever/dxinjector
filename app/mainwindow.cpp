#include <all.hpp>


int main(int argc, char **argv)
{    
    try
    {
        vgui::EventLoopT<scnn::DX9Window> loop;

        scnn::DX9Window win("Heroes of Might & Magic III - HD Edition", 200, 299, 800, 600);

        std::cout << "Ok" << std::endl;
        return loop.Run();
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

    return -1;
}
