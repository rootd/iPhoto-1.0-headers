/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class CADisplayLink, MCMontage, MRLayerParallelizer, MRRendererInternal, NSDictionary;

@interface MRRenderer : _ACAccountTypeIdentifierTwitter
{
    MCMontage *mMontage;
    MRLayerParallelizer *mTopMRLayer;
    float mVolume;
    struct CGSize mSize;
    double mTimeQuantum;
    int mOrientation;
    CADisplayLink *mDisplayLink;
    double mDisplayLinkTimestamp;
    BOOL mIsCleanedUp;
    BOOL mIsPlaying;
    BOOL mPushRendering;
    BOOL mRequestRenderingOnChanges;
    int mMode;
    BOOL mDisplaysFPS;
    BOOL mIsEditing;
    NSDictionary *mParameters;
    MRRendererInternal *mInternal;
    id <MZMediaManagement> mAssetManagementDelegate;
    id <MRRenderingDelegate> mRenderingDelegate;
    id <MREditingDelegate> mEditingDelegate;
    id <MRFeatureDelegate> mFeatureDelegate;
    NSDictionary *mDescriptionsForRandomTransitionPresetIDs;
    BOOL _asynchronousOperationsAreSuspended;
}

- (void)suspendAsynchronousOperations:(BOOL)fp8;
- (BOOL)asynchronousOperationsAreSuspended;
- (id)parameters;
- (double)timeQuantum;
- (void)setVolume:(float)fp8;
- (float)volume;
- (void)setEditingDelegate:(id)fp8;
- (id)editingDelegate;
- (void)setRenderingDelegate:(id)fp8;
- (id)renderingDelegate;
- (void)setFeatureDelegate:(id)fp8;
- (id)featureDelegate;
- (id)assetManagementDelegate;
- (BOOL)displaysFPS;
- (void)setRequestRenderingOnChanges:(BOOL)fp8;
- (BOOL)requestRenderingOnChanges;
- (void)setPushRendering:(BOOL)fp8;
- (BOOL)pushRendering;
- (BOOL)isPlaying;
- (void)setIsEditing:(BOOL)fp8;
- (BOOL)isEditing;
- (int)mode;
- (struct CGSize)size;
- (id)montage;
- (BOOL)sendStandardAction:(id)fp8;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(float)fp8 andOrientation:(int)fp12 withDuration:(double)fp16;
- (void)stall;
- (void)effect:(id)fp8 requestedNumberOfSlides:(unsigned int)fp12 firstSlideIndexStillNeeded:(unsigned int)fp16;
- (void)_effectRequestedSlides:(id)fp8;
- (void)nearingEndForSerializer:(id)fp8;
- (void)_nearingEndForSerializer:(id)fp8;
- (void)dumpActiveHierarchy;
- (id)snapshotOfStates:(id)fp8 atSize:(struct CGSize)fp12;
- (void)gotoState:(id)fp8;
- (id)currentState;
- (id)plugForCurrentSublayerInNavigatorForPlug:(id)fp8;
- (id)layerForPlugObjectID:(id)fp8;
- (id)layerForPlug:(id)fp8;
- (void)transitionToPreviousPlugInContainerOfPlug:(id)fp8;
- (void)transitionToNextPlugInContainerOfPlug:(id)fp8;
- (void)_doActions;
- (void)doAction:(id)fp8;
- (double)_doAction:(id)fp8;
- (void)setDisplaysFPS:(BOOL)fp8;
- (void)setAssetManagementDelegate:(id)fp8;
- (BOOL)isOffscreen;
- (void)setMode:(int)fp8;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (void)setContextOffset:(struct CGPoint)fp8;
- (struct CGPoint)contextOffset;
- (void)setTemporarySize:(struct CGSize)fp8;
- (void)setSize:(struct CGSize)fp8;
- (void)setTimeQuantum:(double)fp8;
- (void)setTime:(double)fp8;
- (double)time;
- (void)moveNavigatorFromForthToBackHistory:(id)fp8;
- (void)moveNavigatorFromBackToForthHistory:(id)fp8;
- (void)removeNavigatorFromForthHistory:(id)fp8;
- (void)removeNavigatorFromBackHistory:(id)fp8;
- (void)addNavigatorToForthHistory:(id)fp8;
- (void)addNavigatorToBackHistory:(id)fp8;
- (BOOL)canGoForth;
- (BOOL)canGoBack;
- (void)goForth;
- (void)goBack;
- (void)stepBackward;
- (void)stepForward;
- (void)_doSnapshot;
- (void)_renderForScreenBurnTestAtTime:(double)fp8;
- (void)_render:(id)fp8;
- (void)_stopRenderTimer;
- (void)_startRenderTimer;
- (void)_renderThreadMain;
- (void)warmupVideo:(BOOL)fp8;
- (void)warmupAudio:(BOOL)fp8;
- (BOOL)requestRenderingWithin:(double)fp8;
- (void)requestRendering:(BOOL)fp8;
- (void)resume;
- (void)pause;
- (void)setSlaveFrameMode:(BOOL)fp8;
- (BOOL)slaveFrameMode;
- (void)_unlockRendering;
- (BOOL)_lockRendering;
- (void)unlockRendering;
- (void)lockRendering;
- (void)setMontage:(id)fp8;
- (void)setEAGLContext:(id)fp8;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithParameters:(id)fp8;

@end

