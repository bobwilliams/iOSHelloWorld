//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Robert Williams on 1/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate> {

    NSString *userName;

}

@property (nonatomic, copy) NSString *userName;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

- (IBAction)changeGreeting:(id)sender;
@end
