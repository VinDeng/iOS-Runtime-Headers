/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASFileProtection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fileProtection;
}

@property (nonatomic, copy) NSString *fileProtection;

+ (id)complete;
+ (id)completeUnlessOpen;
+ (id)completeUntilFirstUserAuthentication;
+ (id)none;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProtection;
- (BOOL)indicatesProtection;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtection:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setFileProtection:(id)arg1;

@end
