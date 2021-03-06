/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {
    MPModelMediaClip * _mediaClip;
    MPModelGenericObject * _modelGenericObject;
    id  _rtcReportingParentHierarchyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MPModelMediaClip *mediaClip;
@property (nonatomic, readonly) int rtcReportingAssetType;
@property (nonatomic, readonly) id rtcReportingParentHierarchyToken;
@property (nonatomic, readonly, copy) NSString *rtcReportingServiceIdentifier;
@property (readonly) Class superclass;

+ (id)requiredMediaClipProperties;

- (void).cxx_destruct;
- (BOOL)_allowsCellularPlayback;
- (void)_applyLoudnessInfo;
- (id)_currentPreferredStaticAsset;
- (BOOL)_isVideoAsset;
- (BOOL)allowsAirPlayFromCloud;
- (BOOL)allowsExternalPlayback;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)description;
- (double)durationFromExternalMetadata;
- (id)initWithMediaClip:(id)arg1;
- (BOOL)isAssetURLValid;
- (BOOL)isCloudItem;
- (BOOL)isStreamable;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaClip;
- (id)modelGenericObject;
- (void)notePlaybackFinishedByHittingEnd;
- (BOOL)prefersSeekOverSkip;
- (void)reevaluateType;
- (int)rtcReportingAssetType;
- (id)rtcReportingParentHierarchyToken;
- (id)rtcReportingServiceIdentifier;
- (void)setPlaybackFinishedTime:(double)arg1;
- (id)titlesForTime:(double)arg1;

@end
