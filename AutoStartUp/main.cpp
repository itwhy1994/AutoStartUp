#include "AutoStartUp.h"
#include "iostream"

void Tips()
{
    std::cout << "Please Enter the Number of Your Choice:" << std::endl;
    std::cout << "0.Exit" << std::endl;
    std::cout << "1.CreateAutoStartUp" << std::endl;
    std::cout << "2.DeleteAutoStartUp" << std::endl;
}

int main(void)
{
    unsigned int iChoice = 0;
    do
    {
        if (iChoice > 2)
        {
            std::cout << "You Enter Wrong Number!" << std::endl;
        }
        Tips();
    } while (std::cin>>iChoice, iChoice > 2);
    AutoStartUp autoStartUp;
    switch (iChoice)
    {
    case 0:
        break;
    case 1:
        autoStartUp.createAutoStartUp();
        break;
    case 2:
        autoStartUp.deleteAutoStartUp();
        break;

    default:
        break;
    }
    std::cout << "Done!" << std::endl;
    system("Pause");

    return 0;
}
