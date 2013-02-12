/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSNetworkConstraints : NSObject <SSCoding, SSXPCCoding, NSCopying> {
    struct dispatch_queue_s { } *_dispatchQueue;
    long long _sizeLimit2G;
    long long _sizeLimit3G;
    long long _sizeLimitWiFi;
}

@property(getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled;

+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(int)arg2 legacyDictionary:(id)arg3;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;

- (void)_setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithXPCEncoding:(void*)arg1;
- (BOOL)isAnyNetworkTypeEnabled;
- (BOOL)isEqual:(id)arg1;
- (void)setAllNetworkTypesDisabled;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(int)arg2;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (long long)sizeLimitForNetworkType:(int)arg1;

@end