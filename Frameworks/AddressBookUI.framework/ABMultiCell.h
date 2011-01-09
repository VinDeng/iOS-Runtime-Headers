/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABMultiCellContentView;



@interface ABMultiCell : UITableViewCell 
{
    ABMultiCellContentView *_abMultiCellContentView;
    BOOL _editingDisabled;
}

@property(retain) ABMultiCellContentView *multiCellContentView;
@property(getter=isEditingDisabled) BOOL editingDisabled;

+ (void)_initializeSafeCategory;

- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resizeMultiCellContentView;
- (void)_addMultiCellContentViewIfNeeded;
- (BOOL)isEditingDisabled;
- (id)multiCellContentView;
- (void)setEditingDisabled:(BOOL)arg1;
- (void)setMultiCellContentView:(id)arg1;
- (BOOL)_accessibilityAlwaysReturnsChild;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end