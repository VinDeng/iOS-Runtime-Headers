/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate> {
    <SiriUIKeyboardViewDelegate> * _delegate;
    UIButton * _dismissButton;
    UIButton * _helpButton;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIKeyboardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;

+ (float)heightForWidthSizeClass:(BOOL)arg1;

- (void).cxx_destruct;
- (id)_createDismissButton:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_createHelpButton:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_createTextFieldWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_dismissButtonLongPressed:(id)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_helpButtonLongPressed:(id)arg1;
- (void)_helpButtonTapped:(id)arg1;
- (BOOL)_isDefaultDismissKeyboardButtonVisible;
- (BOOL)_isSoftKeyboardWithoutDefaultDismissButtonMinimized;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputViewStyle:(int)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardEnabled:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
