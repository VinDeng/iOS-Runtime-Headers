/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleHomeFooterView : UICollectionReusableView {
    UIButton * _disclosureButton;
    BOOL  _dividerHidden;
    UIView * _dividerLine;
    unsigned int  _style;
}

@property (readonly) UIButton *disclosureButton;
@property (getter=isDividerHidden, nonatomic) BOOL dividerHidden;
@property (retain) UIView *dividerLine;
@property unsigned int style;

+ (float)_bottomSpacingForStyle:(unsigned int)arg1;
+ (float)_middleSpacingForStyle:(unsigned int)arg1;
+ (float)_topSpacingForStyle:(unsigned int)arg1;
+ (float)preferredHeightForStyle:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)disclosureButton;
- (id)dividerLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDividerHidden;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDividerHidden:(BOOL)arg1;
- (void)setDividerLine:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;

@end
