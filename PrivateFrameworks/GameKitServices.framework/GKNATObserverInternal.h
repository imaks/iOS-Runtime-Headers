/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class <GKNATObserverDelegate>, GKNATObserver_SCContext, NSMutableDictionary, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSRecursiveLock;

@interface GKNATObserverInternal : GKNATObserver {
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    <GKNATObserverDelegate> *_delegate;
    struct __SCDynamicStore { } *_dynamicStore;
    NSMutableDictionary *_interfaceInfoDictionary;
    int _lastReportedCarrierNATType;
    int _lastReportedNATType;
    int _lastReportedNonCarrierNATType;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    GKNATObserver_SCContext *_sccontext;
    NSRecursiveLock *_xNATCheck;
    bool_addCarrierFlag;
    bool_addInRangeFlag;
    bool_checkTCPAndSSL;
    bool_fNATCheckInProgress;
    bool_fNATCheckQueued;
    bool_favorNonCarrier;
    bool_hasNATCheckEnded;
    bool_hasNATCheckStarted;
    bool_ignoreCarrierBundle;
    bool_ignoreNatTypeCache;
    bool_newCarrierType;
    bool_nonCarrierInterfacesOnly;
}

- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(bool)arg2;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(bool)arg2;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(bool)arg2;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (void)calculateSummmaryNATType:(int*)arg1 andCarrierNATType:(int*)arg2 andNonCarrierNATType:(int*)arg3 copyInterfaceInfoDictionary:(id*)arg4;
- (struct tagCommNATInfo { unsigned int x1; unsigned int x2; unsigned short x3[3]; unsigned int x4; }*)callCommNATTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 ToServer:(id)arg2 isSSL:(bool)arg3;
- (void)clearRetries;
- (int)currentNATType;
- (void)dealloc;
- (id)delegate;
- (bool)ensureNatCachePathExists;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 interfaceName:(id)arg2;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(bool)arg2 commnatFlagsCached:(bool)arg3 tcpFlagsCached:(bool)arg4 sslFlagsCached:(bool)arg5;
- (void)registerForNetworkChanges;
- (oneway void)release;
- (void)reportNATType;
- (id)retrieveNatTypeCache;
- (id)retrieveNatTypeCache_CachePlistScheme;
- (id)retrieveNatTypeCache_OSXGamedScheme;
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(bool)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(bool)arg3;
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(bool)arg3;
- (void)shouldTryNATCheck;
- (void)tryNATCheckWithDelay:(double)arg1;
- (void)updateNatTypeCache:(id)arg1;
- (void)updateNatTypeCache_CachePlistScheme:(id)arg1;
- (void)updateNatTypeCache_OSXGamedScheme:(id)arg1;

@end