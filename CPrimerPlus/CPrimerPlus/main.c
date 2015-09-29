//
//  main.c
//  CPrimerPlus
//
//  Created by Cc on 15/9/10.
//  Copyright (c) 2015年 PinguoSDK. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
// insert code here...
    
    float w = 0;
    float v = 0;
    
    printf("输入");
    scanf("%f", &w);
    v = 770 * w * 14.5833;
    printf("%.3f",v);
    
    return 0;
}
