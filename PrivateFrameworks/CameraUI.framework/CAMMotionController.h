/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate> {
    BKSAccelerometer * __accelerometer;
    long long  __cachedCaptureOrientation;
    long long  __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    long long  _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (setter=_setCachedCaptureOrientation:, nonatomic) long long _cachedCaptureOrientation;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) long long _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (nonatomic, readonly) long long captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDominantPhysicalButton:, nonatomic) long long dominantPhysicalButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long panoramaCaptureOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accelerometer;
- (long long)_cachedCaptureOrientation;
- (long long)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setCachedCaptureOrientation:(long long)arg1;
- (void)_setDominantPhysicalButton:(long long)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (long long)captureOrientation;
- (void)dealloc;
- (void)deviceDidChangeOrientation:(id)arg1;
- (long long)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (id)init;
- (long long)interfaceOrientation;
- (long long)panoramaCaptureOrientation;

@end
