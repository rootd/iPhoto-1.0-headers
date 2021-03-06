/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@class NSMutableArray;

@interface BLJournalGrid : _ACAccountTypeIdentifierTwitter
{
    NSMutableArray *m_cells;
    int m_nextIndex;
    int m_rowCount;
    int m_columnCount;
    int m_newLineRow;
    int m_previousRow;
    int m_previousColumn;
    int m_previousWidth;
    int m_previousHeight;
    BOOL m_previousInline;
    struct CGRect m_previousFrame;
    float m_newLineMinY;
}

- (struct CGRect)nextSpotInline;
- (struct CGRect)nextFrameForElement:(id)fp8 location:(struct CGPoint *)fp12;
- (BOOL)frameAvailableAtRow:(int)fp8 column:(int)fp12 width:(int)fp16 height:(int)fp20;
- (void)markFrameAt:(int)fp8 column:(int)fp12 width:(int)fp16 height:(int)fp20;
- (void)setMinRowCount:(int)fp8;
- (unsigned int)lastIndex;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)fp8;

@end

