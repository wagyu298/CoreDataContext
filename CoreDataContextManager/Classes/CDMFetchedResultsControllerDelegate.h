// This is free and unencumbered software released into the public domain.
// For more information, please refer to <http://unlicense.org/>

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@protocol CDMFetchedResultsControllerDelegateDataSource <UITableViewDataSource>

@required
- (void)configureCell:(UITableViewCell * _Nonnull)cell atIndexPath:(NSIndexPath * _Nullable)indexPath;

@end

@interface CDMFetchedResultsControllerDelegate : NSObject <NSFetchedResultsControllerDelegate>

+ (void)setDefaultRowAnimation:(UITableViewRowAnimation)rowAnimation;

@property (nullable, nonatomic, weak) IBOutlet UITableView *tableView;
@property (nonatomic) UITableViewRowAnimation rowAnimation;

- (instancetype _Nonnull)initWithTableView:(UITableView * _Nonnull)tableView rowAnimation:(UITableViewRowAnimation)rowAnimation;
- (instancetype _Nonnull)initWithTableView:(UITableView * _Nonnull)tableView;

@end