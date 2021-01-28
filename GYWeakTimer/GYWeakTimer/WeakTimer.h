//
//  WeakTimer.h
//  WeakTimer
//
//  Created by zhugy781 on 2021/1/28.
//

#import <Foundation/Foundation.h>

typedef void (^TimerHandler)(id userInfo);

@interface WeakTimer : NSObject

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      target:(id)aTarget
                                    selector:(SEL)aSelector
                                    userInfo:(id)userInfo
                                     repeats:(BOOL)repeats;

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      block:(TimerHandler)block
                                   userInfo:(id)userInfo
                                    repeats:(BOOL)repeats;

@end
