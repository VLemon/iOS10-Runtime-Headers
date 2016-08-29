/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStorePlaybackItemsRequest : MPModelRequest <MPModelRequestDetailedKeepLocalStatusRequesting, MPModelStorePreviousRequestStoring> {
    bool  _allowsMultipleResponseHandlerCalls;
    MPModelResponse * _previousResponse;
    NSArray * _storeIDs;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic) bool allowsMultipleResponseHandlerCalls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelResponse *previousResponse;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

- (void).cxx_destruct;
- (bool)allowsMultipleResponseHandlerCalls;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (void)setAllowsMultipleResponseHandlerCalls:(bool)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (id)storeIDs;
- (bool)wantsDetailedKeepLocalRequestableResponse;

@end