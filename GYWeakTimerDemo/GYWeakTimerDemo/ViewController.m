//
//  ViewController.m
//  GYWeakTimerDemo
//
//  Created by zhugy781 on 2021/1/28.
//

#import "ViewController.h"
#import <GYWeakTimer/WeakTimer.h>

@interface ViewController ()

@property (nonatomic, strong, nullable) NSTimer *timer;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.timer = [WeakTimer scheduledTimerWithTimeInterval:1 target:self selector:@selector(run) userInfo:nil repeats:YES];
    
}

- (void)run {
    static NSInteger i = 0;
    i++;
    NSLog(@"%ld",i);
}

@end
