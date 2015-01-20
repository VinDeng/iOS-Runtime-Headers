/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, <ABUnknownPersonViewControllerDelegate>, ABContactViewController, ABPersonTableViewActionsDelegate, ABPersonTableViewDataSource, ABPersonTableViewSharingDelegate, ABPersonViewControllerHelper, ABUIPerson, NSArray, NSMutableArray, NSString, UIFont, UIImage, UITableView, UIView;

@interface ABUnknownPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    void *_addressBook;
    NSString *_alternateName;
    ABContactViewController *_contactViewController;
    ABPersonTableViewDataSource *_dataSource;
    void *_displayedPerson;
    NSArray *_displayedProperties;
    ABUIPerson *_displayedUIPerson;
    ABPersonViewControllerHelper *_helper;
    NSString *_message;
    UIView *_personHeaderView;
    NSString *_primaryCNProperty;
    NSString *_primaryCountryCode;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    int _style;
    <ABStyleProvider> *_styleProvider;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    NSMutableArray *_unmergedRecords;
    UITableView *_vCardTableView;
    NSArray *_vCards;
    NSArray *_vCardsProperties;
    bool_allowsActions;
    bool_allowsAddingToAddressBook;
    bool_allowsConferencing;
    bool_allowsContactBlocking;
    bool_allowsOnlyFaceTimeActions;
    bool_allowsOnlyPhoneActions;
    bool_allowsSharing;
}

@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property void* addressBook;
@property bool allowsActions;
@property bool allowsAddingToAddressBook;
@property bool allowsConferencing;
@property bool allowsContactBlocking;
@property bool allowsOnlyFaceTimeActions;
@property bool allowsOnlyPhoneActions;
@property bool allowsSharing;
@property(copy) NSString * alternateName;
@property(copy) NSString * attribution;
@property bool badgeEmailPropertiesForMailVIP;
@property(readonly) bool canShareContact;
@property(retain) ABContactViewController * contactViewController;
@property(retain) UIView * customFooterView;
@property(retain) UIView * customHeaderView;
@property(retain) UIView * customMessageView;
@property(readonly) ABPersonTableViewDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property void* displayedPerson;
@property(copy) NSArray * displayedProperties;
@property(retain) ABUIPerson * displayedUIPerson;
@property(readonly) unsigned long long hash;
@property(readonly) ABPersonViewControllerHelper * helper;
@property bool isLocation;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) UIView * personHeaderView;
@property(retain) NSString * primaryCNProperty;
@property(retain) NSString * primaryCountryCode;
@property bool savesNewContactOnSuspend;
@property(retain) UIImage * shareLocationSnapshotImage;
@property(copy) NSString * shareLocationURL;
@property(copy) NSString * shareMessageBody;
@property bool shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property bool shouldAlignPersonHeaderViewToImage;
@property int style;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) Class superclass;
@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;
@property(retain) NSMutableArray * unmergedRecords;
@property(retain) UITableView * vCardTableView;
@property(retain) NSArray * vCards;
@property(retain) NSArray * vCardsProperties;
@property(copy) id willTweetLocationCallback;
@property(copy) id willWeiboLocationCallback;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (int)abViewControllerType;
- (double)ab_heightToFitForViewInPopoverView;
- (id)actionsDelegate;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(bool)arg5;
- (void)addToExistingContacts;
- (void)addUnmergedRecords;
- (void*)addressBook;
- (bool)allowsActions;
- (bool)allowsAddingToAddressBook;
- (bool)allowsConferencing;
- (bool)allowsContactBlocking;
- (bool)allowsOnlyFaceTimeActions;
- (bool)allowsOnlyPhoneActions;
- (bool)allowsSharing;
- (id)alternateName;
- (id)attribution;
- (bool)badgeEmailPropertiesForMailVIP;
- (bool)canShareContact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4;
- (id)contactViewController;
- (void)createNewContacts;
- (id)customFooterView;
- (id)customHeaderView;
- (id)customMessageView;
- (id)dataSource;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (id)displayedUIPerson;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)findMatchingCardsForRecord:(void*)arg1;
- (id)helper;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)initWithVCardData:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLocation;
- (void)loadContactViewController;
- (void)loadView;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)newActionButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)personHeaderView;
- (void)presentAddToContactsSheet;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)presentShareContactSheet;
- (id)primaryCNProperty;
- (id)primaryCountryCode;
- (id)primaryPropertyStringForContact:(id)arg1;
- (void)reloadImageData;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3;
- (void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(bool)arg7;
- (bool)savesNewContactOnSuspend;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsAddingToAddressBook:(bool)arg1;
- (void)setAllowsConferencing:(bool)arg1;
- (void)setAllowsContactBlocking:(bool)arg1;
- (void)setAllowsOnlyFaceTimeActions:(bool)arg1;
- (void)setAllowsOnlyPhoneActions:(bool)arg1;
- (void)setAllowsSharing:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setAttribution:(id)arg1;
- (void)setBadgeEmailPropertiesForMailVIP:(bool)arg1;
- (void)setCardContentProvider:(id)arg1;
- (void)setContactViewController:(id)arg1;
- (void)setCustomFooterView:(id)arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setDisplayedUIPerson:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setIsLocation:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPrimaryCNProperty:(id)arg1;
- (void)setPrimaryCountryCode:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setPrimaryProperty:(int)arg1;
- (void)setSavesNewContactOnSuspend:(bool)arg1;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (void)setShareLocationURL:(id)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(bool)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldAlignPersonHeaderViewToImage:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setUnmergedRecords:(id)arg1;
- (void)setVCardTableView:(id)arg1;
- (void)setVCards:(id)arg1;
- (void)setVCardsProperties:(id)arg1;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setWillWeiboLocationCallback:(id)arg1;
- (id)shareLocationSnapshotImage;
- (id)shareLocationURL;
- (id)shareMessageBody;
- (bool)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (id)sharingDelegate;
- (bool)shouldAlignPersonHeaderViewToImage;
- (void)showUnmergedContactsAlert;
- (int)style;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)unknownPersonViewDelegate;
- (id)unmergedRecords;
- (id)vCardTableView;
- (id)vCards;
- (id)vCardsProperties;
- (id)willTweetLocationCallback;
- (id)willWeiboLocationCallback;

@end