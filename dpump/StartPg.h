//
//  StartPg.h
//  dpump
//
//  Created by Motiejus on 17/02/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "StatusDialog.h"

@interface StartPg : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *pkrSettings;
    NSMutableArray *settings;
    StatusDialog *statusDialogView;
}

- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView;
- (NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component;
- (NSString *)pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component;

-(IBAction)connectButtonClicked:(id)sender;

@property (nonatomic, retain) IBOutlet UIPickerView *pkrSettings;
@property (nonatomic, retain) NSMutableArray *settings;

@property (nonatomic, retain) StatusDialog *statusDialog;

@end
