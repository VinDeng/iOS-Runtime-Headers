/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAlertItem : NSObject <BSDescriptionProviding> {
    _SBAlertController * _alertController;
    BOOL  _allowInCar;
    BOOL  _allowInSetup;
    BOOL  _allowMessageInCar;
    NSArray * _allowedBundleIDs;
    NSString * _attachmentImagePath;
    BOOL  _didEverActivate;
    BOOL  _didEverDeactivate;
    BOOL  _didPlayPresentationSound;
    NSString * _iconImagePath;
    BOOL  _ignoreIfAlreadyDisplaying;
    BOOL  _occluded;
    BOOL  _pendInSetupIfNotAllowed;
    BOOL  _pendWhileKeyBagLocked;
}

@property (nonatomic) BOOL allowInCar;
@property (nonatomic) BOOL allowInSetup;
@property (nonatomic) BOOL allowMessageInCar;
@property (nonatomic, retain) NSArray *allowedBundleIDs;
@property (getter=_attachmentImagePath, nonatomic, retain) NSString *attachmentImagePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=_iconImagePath, nonatomic, retain) NSString *iconImagePath;
@property (nonatomic) BOOL ignoreIfAlreadyDisplaying;
@property (getter=_isOccluded, setter=_setOccluded:, nonatomic) BOOL occluded;
@property (nonatomic) BOOL pendInSetupIfNotAllowed;
@property (nonatomic) BOOL pendWhileKeyBagLocked;
@property (readonly) Class superclass;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (void).cxx_destruct;
- (id)_alertController;
- (id)_attachmentImage;
- (id)_attachmentImagePath;
- (void)_clearAlertController;
- (void)_deactivationCompleted;
- (BOOL)_didEverActivate;
- (BOOL)_dismissesAutomatically;
- (BOOL)_displayActionButtonOnLockScreen;
- (BOOL)_hasActiveKeyboardOnScreen;
- (id)_iconImage;
- (id)_iconImagePath;
- (BOOL)_isOccluded;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)_preventLockOver;
- (id)_publicDescription;
- (void)_setOccluded:(BOOL)arg1;
- (id)alertController;
- (int)alertPriority;
- (BOOL)allowInCar;
- (BOOL)allowInLoginWindow;
- (BOOL)allowInSetup;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)allowMessageInCar;
- (id)allowedBundleIDs;
- (BOOL)behavesSuperModally;
- (void)buttonDismissed;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)deactivate;
- (void)deactivateForButton;
- (void)deactivateForReason:(int)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (BOOL)didPlayPresentationSound;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (BOOL)dismissOnLock;
- (BOOL)dismissesOverlaysOnLockScreen;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)ignoreIfAlreadyDisplaying;
- (id)init;
- (id)lockLabel;
- (BOOL)pendInSetupIfNotAllowed;
- (BOOL)pendWhileKeyBagLocked;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (void)setAllowInCar:(BOOL)arg1;
- (void)setAllowInSetup:(BOOL)arg1;
- (void)setAllowMessageInCar:(BOOL)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setAttachmentImagePath:(id)arg1;
- (void)setIconImagePath:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1;
- (void)setPendInSetupIfNotAllowed:(BOOL)arg1;
- (void)setPendWhileKeyBagLocked:(BOOL)arg1;
- (id)shortLockLabel;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (id)sound;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(BOOL)arg1;

@end
