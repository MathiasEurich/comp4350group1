//
//  TableViewController.h
//  _Note
//
//  COMP 4350 - Software Development 2
//  Group 1: _Note
//

#import <UIKit/UIKit.h>
#import "Note.h"
@class NoteEditorViewController;

@interface TableViewController : UITableViewController

@property (strong, nonatomic) NoteEditorViewController *noteEditorViewController;

@property NSDictionary *json;
@property NSArray *titles;

@property NSURLConnection *urlConnection;
@property NSURLRequest *request;
@property BOOL authenticated;

- (NSString *)getTitlesFromJson:(NSDictionary *)j;
- (Note *)getNoteFromJson:(NSData *)j;

@end
