#import <UIKit/UIKit.h>
#import "NUACoalescedNotification.h"
#import "NUANotificationRepository.h"
#import "NUANotificationTableViewCell.h"
#import "NUATableViewCell.h"
#import <NougatServices/NougatServices.h>
#import <MediaPlayerUI/MediaPlayerUI.h>

@class NUAMainTableViewController;

@protocol NUAMainTableViewControllerDelegate <NSObject>
@required

- (void)tableViewControllerWantsDismissal:(NUAMainTableViewController *)tableViewController;
- (CGFloat)tableViewControllerRequestsPanelContentHeight:(NUAMainTableViewController *)tableViewController;

@end

@interface NUAMainTableViewController : UIViewController <NUANotificationsObserver, NUATableViewCellDelegate, NUANotificationTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) NUAPreferenceManager *notificationShadePreferences;

@property (strong, readonly, nonatomic) UITableViewController *tableViewController;
@property (strong, readonly, nonatomic) MPUNowPlayingController *nowPlayingController;
@property (strong, readonly, nonatomic) NUANotificationRepository *notificationRepository;
@property (copy, readonly, nonatomic) NSArray<NUACoalescedNotification *> *notifications;

@property (weak, nonatomic) id<NUAMainTableViewControllerDelegate> delegate;
@property (assign, nonatomic) CGFloat presentedHeight;
@property (assign, nonatomic) CGFloat revealPercentage;
@property (readonly, nonatomic) CGFloat contentHeight;

@end