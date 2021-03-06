/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BROperation : NSOperation {
    id  _executionTransation;
    bool  _finished;
    NSObject<OS_dispatch_queue> * _queue;
    id  _remoteOperation;
    unsigned char  _uuid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (getter=isExecuting, readonly) bool executing;
@property (getter=isFinished, readonly) bool finished;
@property (nonatomic, retain) NSObject<BRCancellable> *remoteOperation;

- (void).cxx_destruct;
- (bool)_finishIfCancelled;
- (void)_setExecuting:(bool)arg1;
- (void)_setFinished:(bool)arg1;
- (void)_setRemoteOperation:(id)arg1;
- (id)callbackQueue;
- (void)cancel;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)description;
- (bool)finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (oneway void)invalidate;
- (bool)isExecuting;
- (bool)isFinished;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)remoteObject;
- (id)remoteOperation;
- (void)setRemoteOperation:(id)arg1;
- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)start;

@end
