/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class mutationsPtr, <NSFastEnumeration>;

@interface __NSFastEnumerationEnumerator : NSEnumerator  {
    <NSFastEnumeration> *_obj;
    id _origObj;

  /* Error parsing encoded ivar type info: {?="state"@"itemsPtr"^@"mutationsPtr"^L"extra"[5@]} */
    /* Warning: unhandled struct encoding: '{?="state"@"itemsPtr"^@"mutationsPtr"^L"extra"[5@]}' */ struct { 
        id state; 
        mutationsPtr **itemsPtr; 
    } _state;

    unsigned int _count;
    unsigned int _mut;
}


- (id)nextObject;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end