/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying> {
    BOOL _aggregateByIdentifier;
    NSSet *_constrainAccounts;
    NSSet *_constrainBundleIds;
    NSSet *_constrainDomainIdentifiers;
    NSSet *_constrainIdentifiers;
    unsigned int _constrainMaxRecipientCount;
    NSSet *_constrainMechanisms;
    NSSet *_constrainPersonIdType;
    NSSet *_constrainPersonIds;
    NSSet *_ignoreContactIdentifiers;
    unsigned int _maxNumberOfPeopleSuggested;
    BOOL _requireOutgoingInteraction;
    BOOL _useFuture;
    BOOL _useTitleToContrainKeywords;
}

@property BOOL aggregateByIdentifier;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property unsigned int constrainMaxRecipientCount;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainPersonIdType;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *ignoreContactIdentifiers;
@property unsigned int maxNumberOfPeopleSuggested;
@property BOOL requireOutgoingInteraction;
@property BOOL useFuture;
@property BOOL useTitleToContrainKeywords;

+ (id)defaultSettings;

- (void).cxx_destruct;
- (BOOL)aggregateByIdentifier;
- (id)constrainAccounts;
- (id)constrainBundleIds;
- (id)constrainDomainIdentifiers;
- (id)constrainIdentifiers;
- (unsigned int)constrainMaxRecipientCount;
- (id)constrainMechanisms;
- (id)constrainPersonIdType;
- (id)constrainPersonIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ignoreContactIdentifiers;
- (id)init;
- (unsigned int)maxNumberOfPeopleSuggested;
- (BOOL)requireOutgoingInteraction;
- (void)setAggregateByIdentifier:(BOOL)arg1;
- (void)setConstrainAccounts:(id)arg1;
- (void)setConstrainBundleIds:(id)arg1;
- (void)setConstrainDomainIdentifiers:(id)arg1;
- (void)setConstrainIdentifiers:(id)arg1;
- (void)setConstrainMaxRecipientCount:(unsigned int)arg1;
- (void)setConstrainMechanisms:(id)arg1;
- (void)setConstrainPersonIdType:(id)arg1;
- (void)setConstrainPersonIds:(id)arg1;
- (void)setIgnoreContactIdentifiers:(id)arg1;
- (void)setMaxNumberOfPeopleSuggested:(unsigned int)arg1;
- (void)setRequireOutgoingInteraction:(BOOL)arg1;
- (void)setUseFuture:(BOOL)arg1;
- (void)setUseTitleToContrainKeywords:(BOOL)arg1;
- (BOOL)useFuture;
- (BOOL)useTitleToContrainKeywords;

@end