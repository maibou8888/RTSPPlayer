//
//  ViewController.h
//  TestVideo
//
//  Created by Admin on 12/21/14.
//  Copyright (c) 2014 Sutan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class RTSPPlayer;

@interface ViewController : UIViewController

@property (nonatomic, strong) RTSPPlayer *video;
@property (weak, nonatomic) IBOutlet UIImageView *image;

@end

