//
//  ViewController.h
//  AppSegmentControl
//
//  Created by Miriam Sanchez on 21/02/25.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentOutlet;
- (IBAction)segmentedControl:(id)sender;


@end

