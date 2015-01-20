/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder>, AVCaptureVideoDataOutputInternal_FigRecorder, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutput_FigRecorder : AVCaptureOutput_FigRecorder {
    AVCaptureVideoDataOutputInternal_FigRecorder *_internal;
}

@property bool alwaysDiscardsLateVideoFrames;
@property(readonly) NSArray * availableVideoCVPixelFormatTypes;
@property(readonly) NSArray * availableVideoCodecTypes;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property(readonly) <AVCaptureVideoDataOutputSampleBufferDelegate_FigRecorder> * sampleBufferDelegate;
@property(copy) NSDictionary * videoSettings;

+ (void)initialize;
+ (id)supportedVideoSettingsKeys;

- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)_setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)alwaysDiscardsLateVideoFrames;
- (bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (id)availableVideoCVPixelFormatTypes;
- (id)availableVideoCodecTypes;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isTheOnlyDataOutput;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct CGSize { double x1; double x2; })outputSizeForCaptureOptions:(id)arg1;
- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setAlwaysDiscardsLateVideoFrames:(bool)arg1;
- (void)setMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setSession:(id)arg1;
- (void)setVideoSettings:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;
- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;
- (id)videoSettings;

@end