//
//  XBYTextView.h
//  封装UITextView
//
//  Created by xby on 2016/12/19.
//  Copyright © 2016年 xby. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBYTextView : UIView
@property (nonatomic,weak)UIButton *grayBgView;
@property (nonatomic,copy)void (^requestDataBlock)(NSString *text);

+(instancetype)showWithController:(UIViewController *)controller;
+(void)showWithController:(UIViewController *)controller andRequestDataBlock:(void(^)(NSString *))requestDataBlock;
@end
