/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterDataVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    unsigned long long  _passBytes;
    unsigned long long  _peekBytes;
    NSURL * _url;
}

@property unsigned long long passBytes;
@property unsigned long long peekBytes;
@property (retain) NSURL *url;

+ (id)allowVerdict;
+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)dropVerdict;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)passBytes;
- (unsigned long long)peekBytes;
- (void)setPassBytes:(unsigned long long)arg1;
- (void)setPeekBytes:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end