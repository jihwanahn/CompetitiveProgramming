#include <iostream>

int main()
{
    while(1) {
    int a=-1, b=-1, c=-1;
    int temp = -1;
    
    std::cin>> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        return 0;
    }
    
    if (a > b) { temp = b; b = a; a = temp; }
    if (b > c) { temp = c; c = b; b = temp; }
    
   
    if (c*c == a*a + b*b)    
        std::cout << "right" << std::endl;
    else
        std::cout << "wrong" << std::endl;
    }
}