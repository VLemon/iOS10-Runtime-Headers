/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASyncAnchor, NSString, NSArray;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand> {
}

@property(retain) SASyncAnchor * current;
@property long long errorCode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;

+ (id)chunkDeniedWithErrorCode:(long long)arg1;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDenied;

- (void)setCurrent:(id)arg1;
- (id)current;
- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:(long long)arg1;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;

@end