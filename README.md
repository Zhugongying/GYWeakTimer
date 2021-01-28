# GYWeakTimer
解决开发过程中 定时器相互 引用的 问题

```
# 添加源
source 'https://github.com/Zhugy/GYSpecs.git'


pod 'GYWeakTimer'
```

### 使用

```
@property (nonatomic, strong, nullable) NSTimer *timer;

self.timer = [WeakTimer scheduledTimerWithTimeInterval:1 target:self selector:@selector(run) userInfo:nil repeats:YES];

```

### 提供的方法

```
+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      target:(id)aTarget
                                    selector:(SEL)aSelector
                                    userInfo:(id)userInfo
                                     repeats:(BOOL)repeats;

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      block:(TimerHandler)block
                                   userInfo:(id)userInfo
                                    repeats:(BOOL)repeats;
                                    
```

