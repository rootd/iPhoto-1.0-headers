/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLEffectController.h"

@class BLEffectIntegerLabel, BLEffectSlider, BLPhotoFXView, BLSpinner, NSMutableDictionary, NSString, UIBarButtonItem, UIButton, UIImageView, UILabel;

@interface BLPhotoEffectsController : BLEffectController
{
    BLPhotoFXView *m_photoFXView;
    BLSpinner *m_activityIndicator;
    UILabel *m_settingsLabel;
    BLEffectSlider *m_settingsSlider;
    BLEffectIntegerLabel *m_settingsValueLabel;
    UIButton *m_pasteButton;
    UIButton *m_resetButton;
    UIBarButtonItem *m_resetBarButton;
    int m_inLiveChangeCount;
    BOOL m_inUndoGroupChange;
    BOOL m_firstEffectChange;
    BOOL m_firstChangeIsAGroupChange;
    BOOL m_haveResetCenter;
    BOOL m_setupMade;
    BOOL m_settingUp;
    BOOL m_aChangeWasMade;
    NSMutableDictionary *m_originalAdjustments;
    NSMutableDictionary *m_currentAdjustments;
    NSString *m_action;
    BOOL m_renderInProgress;
    BOOL m_needRender;
    BOOL m_abortRender;
    BOOL m_updateQueued;
    BOOL m_needToCallEndGroupChangeForAction;
    BOOL m_hasSourceImageLoadedObserver;
    BOOL m_hasFullResolutionSourceImageLoadedObserver;
    UIImageView *m_animatingImageView;
    BOOL m_haveStartedRemovalOfAnimatedImageView;
    BOOL m_loadingFullResolutionSource;
    BOOL m_inFullResReloadLoop;
}

+ (id)adjustmentKeys;
- (void)setPhotoFXView:(id)fp8;
- (id)photoFXView;
- (void)setAnimatingImageView:(id)fp8;
- (id)animatingImageView;
- (void)setAction:(id)fp8;
- (id)action;
- (void)setCurrentAdjustments:(id)fp8;
- (id)currentAdjustments;
- (void)setOriginalAdjustments:(id)fp8;
- (id)originalAdjustments;
- (void)setSettingsValueLabel:(id)fp8;
- (id)settingsValueLabel;
- (void)setResetBarButton:(id)fp8;
- (id)resetBarButton;
- (void)setResetButton:(id)fp8;
- (id)resetButton;
- (void)setPasteButton:(id)fp8;
- (id)pasteButton;
- (void)setSettingsSlider:(id)fp8;
- (id)settingsSlider;
- (void)setSettingsLabel:(id)fp8;
- (id)settingsLabel;
- (struct CGRect)swapImageFrame;
- (id)swapImage;
- (id)undoActionForKey:(id)fp8;
- (id)adjustmentDefaultValues;
- (void)updateImageWithQuality:(BOOL)fp8;
- (void)scheduleUpdateWithEffect;
- (void)updateImageWithEffect;
- (void)performStartOrEndGroupChangeForAction:(id)fp8 withTool:(int)fp12;
- (void)endGroupChangeForAction:(id)fp8;
- (void)endGroupChangeForAction:(id)fp8 withUpdate:(BOOL)fp12;
- (void)beginGroupChangeForAction:(id)fp8;
- (void)willCloseUndoGroup:(id)fp8;
- (void)effectDidEndGroupChange:(id)fp8;
- (void)effectWillBeginGroupChange:(id)fp8;
- (void)effectDidChange:(id)fp8;
- (void)effectWillChange:(id)fp8;
- (id)valueForKey:(id)fp8;
- (void)performSetValue:(id)fp8 forKey:(id)fp12 forUndo:(BOOL)fp16 withTool:(int)fp20;
- (void)setValue:(id)fp8 forKey:(id)fp12;
- (id)undoActionForTool;
- (void)updateMainView;
- (void)viewerFrameChanged;
- (void)layoutSubviewsOfView:(id)fp8;
- (void)dealloc;
- (void)finish;
- (void)setup;
- (int)toolType;
- (void)updateImage;
- (struct CGSize)updateImageSize;
- (void)sourceImageLoaded;
- (void)fullResolutionSourceImageLoaded;
- (void)generateHistogram;
- (void)a_reset:(id)fp8;
- (void)showSettingsPopover:(id)fp8;
- (void)a_done:(id)fp8;
- (void)popoverControllerDidDismissPopover:(id)fp8;
- (void)setSettingsController:(id)fp8;
- (id)settingsController;
- (void)stopActivityIndicatorAnimating;
- (void)startActivityIndicatorAnimating;
- (void)updateActivityCenter;
- (id)pasteUndoName;
- (id)pasteboardKey;

@end
