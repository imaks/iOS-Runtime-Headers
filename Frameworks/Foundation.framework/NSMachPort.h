/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort  {
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

+ (id)port;
+ (void)resetAllPorts;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
+ (void)_fixNSMachPortLeak;

- (id)initWithMachPort:(unsigned int)arg1;
- (BOOL)isValid;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isMemberOfClass:(Class)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (oneway void)release;
- (id)init;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned int)machPort;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
- (unsigned long)_cfTypeID;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;

@end