/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "BLEffectControllerToolCompletion-Protocol.h"
#import "BLEffectOverlayViewDelegate-Protocol.h"
#import "BLPhotoEditManagerToolDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class BLEffectOverlayView, BLEffectSettingsViewController, BLImage, BLPhotoEditManager, BLViewerItemWrapper, GridSwipeGestureRecognizer, NSMutableArray, NSMutableDictionary, UIPopoverController;

@interface BLEffectController : _ACAccountTypeIdentifierTwitter <BLEffectOverlayViewDelegate, BLPhotoEditManagerToolDelegate, BLEffectControllerToolCompletion, UIGestureRecognizerDelegate, UIPopoverControllerDelegate>
{
    BLEffectOverlayView *m_mainView;
    BLViewerItemWrapper *m_itemWrapper;
    NSMutableDictionary *m_valueDictionary;
    NSMutableArray *m_observedKeyPaths;
    NSMutableArray *m_observers;
    NSMutableDictionary *m_forwardingPool;
    BLPhotoEditManager *m_photoEditManager;
    BLImage *m_startingSwapImage;
    struct CGRect m_startingSwapImageFrame;
    BOOL m_ignoreObserveredValues;
    GridSwipeGestureRecognizer *m_leftSwipeRecognizer;
    GridSwipeGestureRecognizer *m_rightSwipeRecognizer;
    UIPopoverController *m_settingsPopoverController;
    BLEffectSettingsViewController *m_settingsModalViewController;
    BLEffectSettingsViewController *m_settingsController;
    BOOL m_finishStarted;
}

+ (id)adjustmentKeys;
+ (void)finishWithAnimation:(BOOL)fp8 andCompletionBlock:(id)fp(null);
+ (struct CGRect)swapImageFrame;
+ (id)swapImage;
+ (void)startWithViewerItemWrapper:(id)fp8 swapImage:(id)fp12 swapImageFrame:(struct CGRect)fp16 andPhotoEditManager:(id)fp32 animate:(BOOL)fp36 andCompletionBlock:(id)fp(null);
+ (id)effectController;
- (void)setSettingsController:(id)fp8;
- (id)settingsController;
- (void)setSettingsModalViewController:(id)fp8;
- (void)setRightGridSwipeRecognizer:(id)fp8;
- (id)rightGridSwipeRecognizer;
- (void)setLeftGridSwipeRecognizer:(id)fp8;
- (id)leftGridSwipeRecognizer;
- (void)setStartingSwapImageFrame:(struct CGRect)fp8;
- (struct CGRect)startingSwapImageFrame;
- (void)setStartingSwapImage:(id)fp8;
- (id)startingSwapImage;
- (void)setPhotoEditManager:(id)fp8;
- (id)photoEditManager;
- (void)setForwardingPool:(id)fp8;
- (void)setObservers:(id)fp8;
- (void)setObservedKeyPaths:(id)fp8;
- (void)setValueDictionary:(id)fp8;
- (void)setItemWrapper:(id)fp8;
- (id)itemWrapper;
- (id)mainView;
- (BOOL)canPaste;
- (void)a_paste:(id)fp8;
- (id)adjustmentsFromPasteboard;
- (id)pasteUndoName;
- (void)a_copy:(id)fp8;
- (id)pasteboardKey;
- (id)adjustmentData;
- (void)hideSettingsPopover;
- (void)endGroupChangeForAction:(id)fp8;
- (void)beginGroupChangeForAction:(id)fp8;
- (void)gridSwipe:(id)fp8;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (BOOL)gestureRecognizer:(id)fp8 shouldReceiveTouch:(id)fp12;
- (void)hideSettingsPopover:(BOOL)fp8;
- (void)adjustSettingsPopover:(id)fp8;
- (void)showSettingsPopover:(id)fp8;
- (void)setSettingsPopoverController:(id)fp8;
- (id)settingsModalViewController;
- (id)settingsPopoverController;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (BOOL)popoverControllerShouldDismissPopover:(id)fp8;
- (void)layoutSubviewsOfView:(id)fp8;
- (id)undoActionForKey:(id)fp8;
- (id)undoActionForTool;
- (struct CGSize)updateImageSize;
- (void)updateImage;
- (void)hideViews:(BOOL)fp8;
- (void)dealloc;
- (void)observeAndForwardValuesForKeyPath:(id)fp8 toObject:(id)fp12 startValue:(id)fp16;
- (void)observeAndForwardValuesForKeyPath:(id)fp8 toObject:(id)fp12 initialValue:(id)fp16;
- (void)forwardValuesForKeyPath:(id)fp8 toObject:(id)fp12;
- (void)observeValueForKeyPath:(id)fp8;
- (void)observeValueForKeyPath:(id)fp8 initialValue:(id)fp12;
- (void)observeValueForKeyPath:(id)fp8 initialValue:(id)fp12 forceValue:(BOOL)fp16;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)setInitialValue:(id)fp8 forKeyPath:(id)fp12 forceValue:(BOOL)fp16;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (void)setValue:(id)fp8 forKeyPath:(id)fp12;
- (struct CGRect)swapImageFrame;
- (id)swapImage;
- (void)finish;
- (id)keyForKeyPath:(id)fp8;
- (id)objectForKeyPath:(id)fp8;
- (id)forwardingPool;
- (id)observedKeyPaths;
- (id)observers;
- (id)valueDictionary;
- (int)toolType;
- (void)setMainView:(id)fp8;
- (id)initWithViewerItemWrapper:(id)fp8 swapImage:(id)fp12 swapImageFrame:(struct CGRect)fp16 andPhotoEditManager:(id)fp32;
- (void)setup;

@end
