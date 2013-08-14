//
//  SHControlViewController.h
//  SmartHouse
//
//  Created by Roc on 13-8-13.
//  Copyright (c) 2013年 Roc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SHControlViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,UIScrollViewDelegate>
{
    BOOL isScrolling;
}

@property(nonatomic, strong)UINavigationBar *navigationBar;
@property(nonatomic, strong)IBOutlet UITableView *tableView;
@property(nonatomic, strong)IBOutlet UIScrollView *scrollView;
@property(nonatomic, strong)IBOutlet UIButton *scrollLeft;
@property(nonatomic, strong)IBOutlet UIButton *scrollRight;
@property(nonatomic, strong)IBOutlet UIButton *LightButton;
@property(nonatomic, strong)IBOutlet UIButton *CurtainButton;
@property(nonatomic, strong)IBOutlet UIButton *MusicButton;

- (void)setupNavigationBar;
- (void)onBackButtonClick;
- (void)onSettingsButtonClick;
- (void)setupModeSelectBar;

- (IBAction)onScrollLeftClick:(id)sender;
- (IBAction)onScrollRightClick:(id)sender;
- (IBAction)onLightClick:(id)sender;
- (IBAction)onCuitainClick:(id)sender;
- (IBAction)onMusicClick:(id)sender;

@end