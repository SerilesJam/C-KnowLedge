//
//  Manager.m
//  mixComplie
//
//  Created by 贾淼 on 2017/2/24.
//  Copyright © 2017年 贾淼. All rights reserved.
//

#import "Manager.h"
#import "Person.hpp"

@interface Manager () {
    Person *person;
}

@end

@implementation Manager

- (instancetype)init {
    self = [super init];
    
    if (self) {
        person = new Person();
        person->printHello();
    }
    
    return self;
}

@end
