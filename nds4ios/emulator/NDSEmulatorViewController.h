//
//  NDSEmulatorViewController.h
//  nds4ios
//
//  Created by InfiniDev on 6/11/13.
//  Copyright (c) 2013 InfiniDev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NDSGame.h"

@interface NDSEmulatorViewController : UIViewController

@property (strong, nonatomic) NDSGame *game;
@property (copy, nonatomic) NSString *loadSaveState;

- (void)pauseEmulation;
- (void)resumeEmulation;
- (void)saveStateWithName:(NSString*)saveStateName;

@end
