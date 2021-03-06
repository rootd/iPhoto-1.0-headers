/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "GKSessionDelegate-Protocol.h"

@class BLActivityAlert, GKSession, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface BLGKMediaSharingManager : _ACAccountTypeIdentifierTwitter <GKSessionDelegate>
{
    NSMutableSet *m_peerIDList;
    id m_processIncomingFileBlock;
    GKSession *_session;
    NSMutableDictionary *_pendingClientConnectionRequests;
    NSMutableArray *_pendingClientDisconnectionRequests;
    NSMutableArray *_pendingServerConnectionRequests;
    NSMutableDictionary *_pendingServerDataHandlers;
    NSMutableSet *_acknowledgedPacketUuids;
    BLActivityAlert *_itemReceivedAlert;
    BOOL _sharing;
}

+ (id)sharedInstance;
- (void)setProcessIncomingFileBlock:(id)fp(null);
- (id)processIncomingFileBlock;
- (void)setPeerIDList:(id)fp8;
- (id)peerIDList;
- (id)managePeerViewController;
- (void)stopMediaSharing;
- (void)startMediaSharing;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)terminate;
- (void)initialize;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)receiveData:(id)fp8 fromPeer:(id)fp12 inSession:(id)fp16 context:(void *)fp20;
- (void)session:(id)fp8 didFailWithError:(id)fp12;
- (void)session:(id)fp8 connectionWithPeerFailed:(id)fp12 withError:(id)fp16;
- (void)session:(id)fp8 didReceiveConnectionRequestFromPeer:(id)fp12;
- (void)session:(id)fp8 peer:(id)fp12 didChangeState:(int)fp16;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_cancelSleeplessMode;
- (BOOL)_checkIfReceivedAcknowledgementPacketWithUuid:(id)fp8;
- (void)_processAcknowledgementPacketWithUuid:(id)fp8;
- (void)_userDefaultsChanged:(id)fp8;
- (id)_itemDescriptionWithPath:(id)fp8;
- (void)_refreshManagePeerViewIfPresent;
- (void)_destroySession;
- (void)_createSessionAndActivate:(BOOL)fp8;

@end

