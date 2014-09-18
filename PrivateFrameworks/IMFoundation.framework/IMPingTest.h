/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSObject<OS_dispatch_source>, NSString;

@interface IMPingTest : NSObject {
    NSString *_address;
    id _collector;
    double _secondsToRun;
    NSObject<OS_dispatch_source> *_sendTimer;
    NSObject<OS_dispatch_source> *_socketReadSource;
    bool_isRunning;
    bool_usesWifi;
}

@property(readonly) double secondsToRun;

- (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(id)arg6;
- (int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; })arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(id)arg5;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 wifi:(bool)arg2;
- (double)longTimeInterval;
- (id)pingStats:(double)arg1;
- (id)pingStats;
- (double)secondsToRun;
- (void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)stop;
- (bool)writeResultsToFile:(id)arg1 error:(id*)arg2;

@end