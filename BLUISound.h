/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSData, NSMutableArray, NSString;

@interface BLUISound : _ACAccountTypeIdentifierTwitter <AVAudioPlayerDelegate>
{
    NSString *m_name;
    NSData *m_soundData;
    NSMutableArray *m_availablePlayers;
    float m_volume;
    double m_lastPlayTime;
    BOOL m_dataFetchInProgress;
    BOOL m_playAfterFetch;
    AVAudioPlayer *m_mostRecentPlayer;
}

+ (void)playFailedSound;
+ (void)playSoundNamed:(id)fp8 withVolume:(float)fp12;
+ (void)playSoundNamed:(id)fp8;
+ (id)soundNamed:(id)fp8;
+ (BOOL)soundEffectsEnabled;
- (void)setVolume:(float)fp8;
- (float)volume;
- (void)setAvailablePlayers:(id)fp8;
- (id)availablePlayers;
- (void)setSoundData:(id)fp8;
- (void)setName:(id)fp8;
- (id)name;
- (void)dealloc;
- (void)preRoll;
- (void)stopLast;
- (void)play;
- (void)playSound;
- (void)audioPlayerDidFinishPlaying:(id)fp8 successfully:(BOOL)fp12;
- (id)initWithName:(id)fp8;
- (void)didReceiveMemoryWarning;
- (id)soundData;

@end

