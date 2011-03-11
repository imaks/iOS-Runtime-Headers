/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKImageData;

@interface CKCompressibleImageMediaObject : CKMediaObject  {
    CKImageData *_imageData;
}

+ (id)mimeTypesToFileExtensions;
+ (id)previewDataMIMEType;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;

- (void)dealloc;
- (id)imageData;
- (id)newPreview:(int)arg1 highlight:(BOOL)arg2;
- (BOOL)shouldTranscodeForMMS;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(int)arg1 forceJPEG:(BOOL)arg2;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(int)arg1;
- (id)newTranscodingForMMSWithMaxByteLength:(int)arg1;
- (id)_orientationStringForImageOrientation:(int)arg1;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (BOOL)shouldGeneratePreviewInBackground;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (void)logMediaDiagnotics;
- (int)mediaType;

@end