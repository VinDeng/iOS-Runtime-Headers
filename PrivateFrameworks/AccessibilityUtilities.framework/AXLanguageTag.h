/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageTag : NSObject <NSCopying> {
    NSMutableOrderedSet * _ambiguousDialects;
    NSString * _content;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    NSMutableOrderedSet * _unambiguousDialects;
    BOOL  _wasPredicted;
}

@property (nonatomic, retain) NSMutableOrderedSet *ambiguousDialects;
@property (nonatomic) NSString *content;
@property (nonatomic, readonly) NSString *contentSubstring;
@property (nonatomic, readonly) AXDialectMap *dialect;
@property (nonatomic, readonly) AXDialectMap *preferredAmbiguousDialect;
@property (nonatomic, readonly) AXDialectMap *preferredUnambiguousDialect;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, retain) NSMutableOrderedSet *unambiguousDialects;
@property (nonatomic) BOOL wasPredicted;

+ (id)tagWithDialects:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 content:(id)arg3 predictedByTagger:(BOOL)arg4;

- (void)addAmbiguousDialect:(id)arg1;
- (void)addAmbiguousDialects:(id)arg1;
- (void)addUnambiguousDialect:(id)arg1;
- (id)ambiguousDialects;
- (BOOL)canBeSpokenByDialect:(id)arg1;
- (BOOL)canBeSpokenByLanguage:(id)arg1;
- (id)content;
- (id)contentSubstring;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dialect;
- (BOOL)hasAmbigiousDialects;
- (id)preferredAmbiguousDialect;
- (id)preferredUnambiguousDialect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setAmbiguousDialects:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setUnambiguousDialects:(id)arg1;
- (void)setWasPredicted:(BOOL)arg1;
- (id)unambiguousDialects;
- (BOOL)wasPredicted;

@end
