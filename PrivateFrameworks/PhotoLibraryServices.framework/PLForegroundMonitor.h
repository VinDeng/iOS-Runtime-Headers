/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSCountedSet, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundApplications;
    NSCountedSet *_interestingApplications;
    NSMapTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    bool_isMonitoringApplicationStates;
}

+ (id)sharedInstance;

- (void)_applicationDidMoveToBackgroundLocked:(id)arg1;
- (void)_applicationDidMoveToForegroundLocked:(id)arg1;
- (void)_applicationStateDidChange:(id)arg1;
- (void)_startMonitoringApplicationStatesLocked;
- (void)_stopMonitoringApplicationStatesLocked;
- (void)addForegroundObserver:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)removeForegroundObserver:(id)arg1 context:(id)arg2;
- (void)startWatchingApplicationWithBundleIdentifier:(id)arg1;
- (void)stopWatchingApplicationWithBundleIdentifier:(id)arg1;

@end