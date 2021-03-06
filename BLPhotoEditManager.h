/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class BLMedia, BLRepairLayerStack, BLRetouchLayerStack, BLUISound, NSMutableDictionary, NSNumber, UIImage;

@interface BLPhotoEditManager : _ACAccountTypeIdentifierTwitter
{
    BLMedia *m_photo;
    UIImage *m_sourceImage;
    UIImage *m_fullResolutionSourceImage;
    UIImage *m_croppedRenderSourceImage;
    NSMutableDictionary *m_valueDictionary;
    NSMutableDictionary *m_originalAdjustments;
    NSMutableDictionary *m_currentAdjustments;
    NSMutableDictionary *m_analysisData;
    BOOL m_updateAnalysisData;
    BOOL m_ignoreObserveredValues;
    BOOL m_inUndoGroupChange;
    id <BLPhotoEditManagerToolDelegate> m_toolDelegate;
    NSNumber *m_analyzedHistogramBlackPoint;
    NSNumber *m_analyzedHistogramWhitePoint;
    int m_originalImageOrientation;
    int m_currentImageOrientation;
    struct CGSize m_originalPixelSize;
    BLRetouchLayerStack *m_retouchLayerStack;
    BLRepairLayerStack *m_repairLayerStack;
    BLUISound *m_foldUp;
    BLUISound *m_foldDown;
    int m_initialDisabledToolState;
    int m_finalDisabledToolState;
    int m_toolStateSampleCount;
    BOOL m_finishStarted;
}

+ (void)initialize;
+ (struct CGSize)maximumSizeForRedEyeDetection;
+ (int)minSmallDimension;
+ (int)maxLargeDimension;
+ (int)preferredLargeDimension;
+ (int)effectTypesForPhoto:(id)fp8;
+ (BOOL)canPaste;
+ (void)pasteFromClipboardTo:(id)fp8;
+ (void)copyToClipboardFrom:(id)fp8;
+ (id)currentAdjustmentsFor:(id)fp8;
+ (void)revertToOriginal:(id)fp8;
+ (void)setAdjustments:(id)fp8 onPhoto:(id)fp12;
+ (void)showRedEyeAnimation:(BOOL)fp8 atLocation:(struct CGPoint)fp12 soundName:(id)fp20 onView:(id)fp24 viewScale:(float)fp28;
+ (void)showRedEyeAnimationsForPhoto:(id)fp8 onView:(id)fp12;
+ (void)autoEnhance:(id)fp8;
+ (id)faceDictionariesForPhoto:(id)fp8 ignoreAdjustments:(BOOL)fp12 highQualityAnalysis:(BOOL)fp16 performDetection:(BOOL)fp20;
+ (void)rotatePhoto:(id)fp8 by90DegreeTurnsClockwise:(int)fp12;
+ (void)originalImageForPhoto:(id)fp8 withTool:(int)fp12 screenSizeCompletionBlock:(id)fp(null) fullSizedCompletionBlock:(void)fp16;
+ (id)adjustmentKeys;
- (void)setRepairLayerStack:(id)fp8;
- (id)repairLayerStack;
- (void)setRetouchLayerStack:(id)fp8;
- (id)retouchLayerStack;
- (struct CGSize)originalPixelSize;
- (int)currentImageOrientation;
- (int)originalImageOrientation;
- (void)setAnalyzedHistogramWhitePoint:(id)fp8;
- (id)analyzedHistogramWhitePoint;
- (void)setAnalyzedHistogramBlackPoint:(id)fp8;
- (id)analyzedHistogramBlackPoint;
- (void)setToolDelegate:(id)fp8;
- (id)toolDelegate;
- (void)setUpdateAnalysisData:(BOOL)fp8;
- (BOOL)updateAnalysisData;
- (void)setAnalysisData:(id)fp8;
- (id)analysisData;
- (BOOL)ignoreObservedValues;
- (void)setCurrentAdjustments:(id)fp8;
- (id)currentAdjustments;
- (void)setOriginalAdjustments:(id)fp8;
- (id)originalAdjustments;
- (void)setValueDictionary:(id)fp8;
- (void)setCroppedRenderSourceImage:(id)fp8;
- (id)croppedRenderSourceImage;
- (id)fullResolutionSourceImage;
- (id)sourceImage;
- (id)photo;
- (void)updateIndicatorBanners;
- (int)disabledToolStateDelta;
- (void)sampleFinalDisabledToolState;
- (void)sampleInitialDisabledToolState;
- (int)sampleDisabledToolState;
- (void)playFoldDownSound;
- (void)playFoldUpSound;
- (int)effectTypesForCurrentPhoto;
- (void)setAdjustments:(id)fp8;
- (void)autoEnhance;
- (id)faceDictionariesIgnoringAdjustments:(BOOL)fp8 highQualityAnalysis:(BOOL)fp12 performDetection:(BOOL)fp16;
- (void)originalImageForTool:(int)fp8 boundingSize:(struct CGSize)fp12 screenSizeCompletionBlock:(id)fp(null) fullSizedCompletionBlock:(void)fp20;
- (struct CGAffineTransform)transformFromOriginalCoordinatesToCropped:(BOOL)fp8 andRotated:(BOOL)fp12;
- (struct CGSize)croppedSize;
- (id)undoActionForKey:(id)fp8;
- (id)adjustmentDefaultValues;
- (void)performStartOrEndGroupChangeForAction:(id)fp8 withTool:(int)fp12;
- (void)endGroupChangeForAction:(id)fp8;
- (void)beginGroupChangeForAction:(id)fp8;
- (void)performSetValue:(id)fp8 forKey:(id)fp12 forUndo:(BOOL)fp16 withTool:(int)fp20;
- (void)dealloc;
- (BOOL)willRender;
- (void)finish;
- (id)valueDictionary;
- (id)initWithPhoto:(id)fp8 withAsyncLoad:(BOOL)fp12;
- (id)initWithPhoto:(id)fp8;

@end

