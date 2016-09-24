/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLMetalContext : NSObject {
    <MTLDevice> * _metalDevice;
    BOOL  _useGPU;
    NSDictionary * _wisdomParams;
}

@property (readonly) <MTLDevice> *metalDevice;
@property (readonly) BOOL useGPU;
@property (readonly) NSDictionary *wisdomParams;

+ (id)mapMetalDeviceNameToWisdomParams;

- (void).cxx_destruct;
- (void)initWisdomParams;
- (id)initWithMetalDevice:(id)arg1;
- (id)metalDevice;
- (void)setMetalDevice:(id)arg1;
- (BOOL)useGPU;
- (id)wisdomParams;

@end