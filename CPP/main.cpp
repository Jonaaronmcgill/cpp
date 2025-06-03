#include <iostream>
#include <cstdint>

 


int main()
{
    
    int x[4] = {1,2,3,4};
    int y=0;
    while(true)
    {
        std::cout << x[y] << '\n';
        std::cin.get();
        y++;
    }
    
    
    
    
    
    
    
    
    
    /*
    int x = 6;  // 00000110
    int y = 12; // 00001100
    int z = 0;  //
    
    z = x & y;  // 00000100  4 (AND works if both are 1)
    std::cout << "& = " << z << std::endl;
    
    z = x | y;  // 00001110 14 (OR works if one or the other are 1)
    std::cout << "| = " << z << std::endl;
    
    z = x ^ y;  // 00001010 10 (XOR toggles bits)
    std::cout << "^ = " << z << std::endl;
    
    z = x << 1; // 00001100 12 (SHIFT RIGHT multiplys and truncate)
    std::cout << "<< = " << z << std::endl;
    
    z = x >> 1; // 00000011  3 (SHIFT LEFT divides and truncate)
    std::cout << ">> = " << z << std::endl;
     */
    
    
    
}
