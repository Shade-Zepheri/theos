#import <UIKit/UIKit.h>

@class NUANotificationShadeExtensionViewController;

@protocol NUANotificationShadeExtensionViewControllerDelegate <NSObject>

- (void)extensionWantsNotificationShadeDismissal:(NUANotificationShadeExtensionViewController *)extension;

@end

@interface NUANotificationShadeExtensionViewController : UIViewController
@property (class, readonly, nonatomic) Class viewClass;
@property (copy, readonly, nonatomic) NSString *extensionIdentifier;
@property (weak, nonatomic) id<NUANotificationShadeExtensionViewControllerDelegate> delegate;

@end

/* Notes
All part of expanding table view
Music is "table cell" at top
all push notifs insert themselves under music if exists
all "table cells" expand



*/