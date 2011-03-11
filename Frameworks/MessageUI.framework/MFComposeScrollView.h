/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet, UIView, UIGestureRecognizer;

@interface MFComposeScrollView : UIScrollView  {
    UIGestureRecognizer *_singleTapGestureRecognizer;
    NSMutableSet *_disabledSubviews;
    UIView *_tappedView;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
    int _scrollBlocked;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _selectedRange;
    BOOL _catchesSingleTap;
    BOOL _shouldScrollToFirstResponder;
}

@property BOOL catchesSingleTap;
@property BOOL shouldScrollToFirstResponder;
@property struct CGPoint { float x; float y; } tapLocation;
@property(retain) UIView * tappedView;


- (struct CGPoint { float x1; float x2; })tapLocation;
- (void)willRemoveSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)didAddSubview:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldScrollToFirstResponder;
- (BOOL)catchesSingleTap;
- (void)performDelayedTap:(BOOL)arg1;
- (void)disableSubview:(id)arg1;
- (void)enableSubview:(id)arg1;
- (void)endBlockingScroll;
- (void)setShouldScrollToFirstResponder:(BOOL)arg1;
- (void)setTapLocation:(struct CGPoint { float x1; float x2; })arg1;
- (id)tappedView;
- (void)setTappedView:(id)arg1;
- (void)beginBlockingScroll;
- (void)setCatchesSingleTap:(BOOL)arg1;
- (void)singleTap:(id)arg1;

@end