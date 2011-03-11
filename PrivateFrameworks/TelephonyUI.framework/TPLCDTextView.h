/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIFrameAnimation, NSString, UIColor, TPLCDTextViewScrollingView;

@interface TPLCDTextView : UIView  {
    NSString *_text;
    struct __GSFont { } *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    float _fontSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textRect;
    UIFrameAnimation *_animation;
    id _delegate;
    float _minFontSize;
    unsigned int _textRectIsValid : 1;
    unsigned int _centerText : 1;
    unsigned int _animates : 1;
    unsigned int _isAnimating : 1;
    unsigned int _leftTruncates : 1;
}

+ (float)defaultMinimumFontSize;
+ (void)_initializeSafeCategory;

- (void)startAnimating;
- (void)_tearDownAnimation;
- (void)setTextColor:(id)arg1;
- (void)stopAnimating;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;
- (void)setMinimumFontSize:(float)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)_automationID;
- (struct CGSize { float x1; float x2; })sizeToFit;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFont:(struct __GSFont { }*)arg1;
- (void)dealloc;
- (void)setShadowColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setCenterText:(BOOL)arg1;
- (void)setLeftTruncatesText:(BOOL)arg1;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 verticallyOffset:(BOOL)arg2;
- (void)_scheduleStartScrolling;
- (void)_setupForAnimationIfNecessary;
- (void)setAnimatesIfTruncated:(BOOL)arg1;
- (void)_startScrolling;
- (void)_finishedScrolling;
- (BOOL)animates;
- (void)resetAnimation;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end