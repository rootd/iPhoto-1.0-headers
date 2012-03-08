/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLEditor.h"

#import "BLMarkingTarget-Protocol.h"

@class BLGridController, BLSelectionManager, BLViewerController;

@interface BLPhotoEditor : BLEditor <BLMarkingTarget>
{
    BLPhotoEditor *m_otherPhotoEditor;
    BLGridController *m_gridController;
    BLViewerController *m_viewerController;
    BLSelectionManager *m_selectionManager;
    int m_lastOrientation;
    int m_rotationInProgress;
}

- (void)setSelectionManager:(id)fp8;
- (id)selectionManager;
- (void)setViewerController:(id)fp8;
- (id)viewerController;
- (void)setGridController:(id)fp8;
- (id)gridController;
- (void)markingCompleted:(id)fp8;
- (void)exitToolsWithCompletionBlock:(id)fp(null);
- (void)setView:(id)fp8;
- (void)viewDidUnload;
- (BOOL)shouldBecomeFirstResponder;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)compatibleOrientation:(int)fp8;
- (BOOL)isLandscape;
- (void)viewDidLoad;
- (void)a_done:(id)fp8;
- (void)setAlbum:(id)fp8;

@end

