//
//  main.cpp
//  Chapter2
//
//  Created by 贾淼 on 2017/2/28.
//  Copyright © 2017年 贾淼. All rights reserved.
//

#include <iostream>

std::string global_str;
int global_int;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int value = 2;
    int pow = 10;
    int result = 1;
    
    for (int cnt=0; cnt != pow; cnt++) {
        result *= value;
    }
    
    std::cout << value << " raised to the power of pow \t" << result << std::endl;
    
    std::string titleA = "C++ Promer";
    std::string titleB("C++ primer");
    std::string all_Nines(10, '9');
    
    std::cout << titleA << "\t" << titleB << "\t" << all_Nines << std::endl;
    
    std::cout << global_str << "\t" << global_int << std::endl;
    
    std::string local_str;
    int local_int;
    
    std::cout << local_str << "\t" << local_int << std::endl;
    
    //const type
    const int &ival = 1.01;
    
    int ival2 = 42;
    const int &r = ival2;
    std::cout << r << ival2 << std::endl;
    
    enum Forms {shape=1, sphere, cylinder, polygon};
    
    Forms form  = cylinder;
    
    return 0;
}
