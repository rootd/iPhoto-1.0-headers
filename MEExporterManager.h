/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class MELoader;

@interface MEExporterManager : _ACAccountTypeIdentifierTwitter
{
    MELoader *_loader;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
- (id)loader;
- (id)exporterWithDocument:(id)fp8;
- (void)loadPluginWithIdentifier:(id)fp8;
- (void)loadAllPlugins;
- (void)dealloc;
- (id)init;

@end
