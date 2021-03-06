/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIURLSessionImageDownload : NSObject {
    UIColor * _backgroundFillColor;
    id  _client;
    NSMutableData * _downloadedData;
    BOOL  _finished;
    struct CGSize { 
        float width; 
        float height; 
    }  _fitToSize;
    BOOL  _hasSentFinished;
    struct CGImageSource { } * _imageSource;
    unsigned int  _lastUpdatedLength;
    BOOL  _newDataAvailableToRender;
    id /* block */  _progressHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _renderTimer;
}

- (void).cxx_destruct;
- (void)_updateImageFromURL:(id)arg1 error:(id)arg2;
- (void)appendDownloadedData:(id)arg1 fromURL:(id)arg2;
- (void)dealloc;
- (void)finishedFromURL:(id)arg1 error:(id)arg2;
- (id)initWithFitToSize:(struct CGSize { float x1; float x2; })arg1 progressHandler:(id /* block */)arg2 incremental:(BOOL)arg3 client:(id)arg4 fillColor:(id)arg5;

@end
