/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "UIApplicationDelegate-Protocol.h"

@class BLActivityAlert, BLMainViewController, UIWindow;

@interface BlinkAppDelegate : _ACAccountTypeIdentifierTwitter <UIApplicationDelegate>
{
    UIWindow *m_window;
    BLMainViewController *m_mainViewController;
    BLActivityAlert *m_activityAlert;
}

+ (BOOL)squareGridThumbs;
+ (float)scale;
+ (id)hardwareModel;
+ (BOOL)isIPhone;
+ (int)maxJobCount;
- (void)setActivityAlert:(id)fp8;
- (id)activityAlert;
- (void)setMainViewController:(id)fp8;
- (id)mainViewController;
- (void)setWindow:(id)fp8;
- (id)window;
- (void)showHelpInViewController:(id)fp8 topic:(id)fp12;
- (BOOL)application:(id)fp8 openURL:(id)fp12 sourceApplication:(id)fp16 annotation:(id)fp20;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)valueDict;
- (void)application:(id)fp8 willChangeStatusBarOrientation:(int)fp12 duration:(double)fp16;
- (void)applicationWillResignActive:(id)fp8;
- (void)applicationDidReceiveMemoryWarning:(id)fp8;
- (void)application:(id)fp8 application:(id)fp12:(id)fp16;
- (void)application:(id)fp8 didReceiveLocalNotification:(id)fp12;
- (void)applicationDidBecomeActive:(id)fp8;
- (void)applicationDidEnterBackground:(id)fp8;
- (void)applicationWillEnterForeground:(id)fp8;
- (void)applicationWillTerminate:(id)fp8;
- (BOOL)application:(id)fp8 didFinishLaunchingWithOptions:(id)fp12;
- (void)setupAudioSession;
- (void)initPrefs;
- (void)_rebuildingDatabase:(id)fp8;
- (BOOL)shouldShowActivityAlert;

@end

