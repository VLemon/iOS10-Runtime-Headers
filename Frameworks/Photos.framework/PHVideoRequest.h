/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PHVideoRequestOptions;

@interface PHVideoRequest : PHImageManagerRequest  {
    PHVideoRequestOptions *_options;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resultHandler;

}

@property(readonly) PHVideoRequestOptions * options;
@property(copy,readonly) id resultHandler;

+ (id)videoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(id)arg4;

- (id)initVideoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(id)arg4;
- (id)resultHandler;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (bool)isVideo;
- (id)options;
- (void).cxx_destruct;
- (id)description;

@end