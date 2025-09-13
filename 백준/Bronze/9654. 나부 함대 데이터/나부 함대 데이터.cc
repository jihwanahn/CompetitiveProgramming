#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::left;
    std::cout << std::setw(15) << "SHIP NAME" 
              << std::setw(15) << "CLASS" 
              << std::setw(11) << "DEPLOYMENT" 
              << std::setw(10) << "IN SERVICE" << std::endl;
    
    std::cout << std::setw(15) << "N2 Bomber" 
              << std::setw(15) << "Heavy Fighter" 
              << std::setw(11) << "Limited" 
              << std::setw(10) << "21" << std::endl;
    
    std::cout << std::setw(15) << "J-Type 327" 
              << std::setw(15) << "Light Combat" 
              << std::setw(11) << "Unlimited" 
              << std::setw(10) << "1" << std::endl;
    
    std::cout << std::setw(15) << "NX Cruiser" 
              << std::setw(15) << "Medium Fighter" 
              << std::setw(11) << "Limited" 
              << std::setw(10) << "18" << std::endl;
    
    std::cout << std::setw(15) << "N1 Starfighter" 
              << std::setw(15) << "Medium Fighter" 
              << std::setw(11) << "Unlimited" 
              << std::setw(10) << "25" << std::endl;
    
    std::cout << std::setw(15) << "Royal Cruiser" 
              << std::setw(15) << "Light Combat" 
              << std::setw(11) << "Limited" 
              << std::setw(10) << "4" << std::endl;
    
    return 0;
}