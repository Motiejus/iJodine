//
//  StatusDialog.h
//  dpump
//
//  Created by Motiejus on 17/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LogWatcher.h"
#import "Worker.h"
#import "Settings.h"

@interface StatusDialog : UIViewController<NSPortDelegate>
{
    UITextView *textView;
    LogWatcher *logWatcher;
    Worker *worker;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil setting:(Settings*)s;

@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) LogWatcher *logWatcher;
@property (nonatomic, retain) Worker *worker;

@end
