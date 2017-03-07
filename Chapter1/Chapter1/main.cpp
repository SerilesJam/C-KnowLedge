//
//  main.cpp
//  Chapter1
//
//  Created by 贾淼 on 2017/2/24.
//  Copyright © 2017年 贾淼. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    unsigned u = 10;
    int i = -42;
    std::cout << i+i << std::endl;
    
    std::cout << i+u << std::endl;
    
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1+v2 << std::endl;
    
    int sum = 0, val = 50;
    int value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << sum <<std::endl;
    
    sum = 0, val = 50;
    
    for (int i=50; i<=100; i++) {
        sum += i;
    }
    
    std::cout << sum << std::endl;
    
    sum = 0;
    while (val <= 100) {
        sum += val;
        val++;
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
