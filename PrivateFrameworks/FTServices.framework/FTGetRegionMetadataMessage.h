/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : FTMessage  {
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

@property(copy) NSDictionary * responseRegionInformation;
@property(copy) NSString * language;


- (id)bagKey;
- (void)dealloc;
- (id)responseRegionInformation;
- (void)setResponseRegionInformation:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)requiredKeys;
- (void)setLanguage:(id)arg1;
- (id)language;
- (id)messageBody;

@end