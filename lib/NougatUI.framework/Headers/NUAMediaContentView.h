#import <UIKit/UIKit.h>
#import <MediaPlayerUI/MPUNowPlayingMetadata.h>
#import "NUAMediaControlsView.h"
#import "NUAMediaHeaderView.h"

@interface NUAMediaContentView : UIView
@property (getter=isPlaying, nonatomic) BOOL playing;
@property (strong, nonatomic) UIImage *nowPlayingArtwork;

@property (copy, nonatomic) NSString *nowPlayingAppDisplayID;
@property (strong, nonatomic) MPUNowPlayingMetadata *metadata;

@end