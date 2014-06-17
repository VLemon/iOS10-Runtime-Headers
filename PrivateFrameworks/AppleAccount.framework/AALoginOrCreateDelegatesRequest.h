/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSDictionary, ACAccount, AASigningSession;

@interface AALoginOrCreateDelegatesRequest : AARequest  {
    ACAccount *_account;
    NSDictionary *_parameters;
    AASigningSession *_signingSession;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3;
- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;

@end