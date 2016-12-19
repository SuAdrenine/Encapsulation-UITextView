//
//  ViewController.m
//  封装UITextView
//
//  Created by xby on 2016/12/19.
//  Copyright © 2016年 xby. All rights reserved.
//

#import "ViewController.h"
#import "XBYTextView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

-(void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [XBYTextView showWithController:self andRequestDataBlock:^(NSString *text) {
        NSLog(@"这里面去实现数据的回调");
    }];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
