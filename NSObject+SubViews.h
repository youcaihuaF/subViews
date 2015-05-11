//
//  NSObject+SubViews.h
//  view的所有子控件
//
//  Created by daming on 15-5-12.
//  Copyright (c) 2015年 daming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (SubViews)

// 将一个view的所有子控件 用xml文件表示出来。
+ (NSString *)digView:(UIView *)view;
@end
