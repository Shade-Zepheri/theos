#import "../NUANotificationShadeExtensionViewController.h"
#import <MediaPlayerUI/MPUNowPlayingController+Private.h>

// 150 tall

@interface NUAMediaModuleController : NUANotificationShadeExtensionViewController <MPUNowPlayingDelegate> 
@property (strong, readonly, nonatomic) MPUNowPlayingController *nowPlayingController;
@property (getter=isPlaying, readonly, nonatomic) BOOL playing;

@end