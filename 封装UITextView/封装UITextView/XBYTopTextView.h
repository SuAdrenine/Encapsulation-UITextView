//
//  XBYTopTextView.h
//  封装UITextView
//
//  Created by xby on 2016/12/19.
//  Copyright © 2016年 xby. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XBYTopTextView : UIView
@property (nonatomic,weak)UITextView *textView;
@property (nonatomic,weak)UIButton *submitBtn;
@property (nonatomic,weak)UIButton *cancelBtn;

@property (nonatomic,weak)UILabel *titleLabel;

@property (nonatomic,copy) void(^submitBlock)(NSString * text);
@property (nonatomic,copy) void(^closeBlock)();
@end
