//
//  mooshimeterAppDelegate.h
//  Mooshimeter
//
//  Created by James Whong on 9/3/13.
//  Copyright (c) 2013 mooshim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "MooshimeterDevice.h"
#import "LGBluetooth.h"

#import "ScanViewController.h"
#import "MeterViewController.h"
#import "GraphViewController.h"
#import "SmartNavigationController.h"

#import "OADProgressViewController.h"
#import "OADProfile.h"

@class SmartNavigationController;
@class ScanViewController;
@class OADProfile;
@class BLETIOADProgressViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, ScanViewControllerDelegate, MeterViewControllerDelegate, MooshimeterDeviceDelegate, ScatterViewControllerDelegate, UIAlertViewDelegate, NSObject>
{
    @public
    bool reboot_into_oad;
}

@property (strong,nonatomic) UIWindow *window;
@property (strong,nonatomic) OADProfile* oad_profile;

@property (strong,nonatomic) SmartNavigationController* nav;
@property (strong,nonatomic) ScanViewController* scan_vc;
@property (strong,nonatomic) BLETIOADProgressViewController* oad_vc;
@property (strong,nonatomic) MeterViewController* meter_vc;
@property (strong,nonatomic) GraphViewController* scatter_vc;

@property (strong,nonatomic) UILabel* bat_label;
@property (strong,nonatomic) UILabel* rssi_label;

-(UINavigationController*)getNav;
-(void)scanForMeters;

@end
