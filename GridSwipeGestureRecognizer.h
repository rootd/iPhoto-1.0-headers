/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ACAccountTypeIdentifierTwitter.h"

@interface GridSwipeGestureRecognizer : _ACAccountTypeIdentifierTwitter
{
    double m_start;
    float m_distance;
    struct CGPoint m_startPoint;
    int m_direction;
    int m_allowedDirections;
}

- (void)setAllowDirections:(int)fp8;
- (int)allowDirections;
- (int)direction;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (struct CGPoint)locationInView:(id)fp8;
- (void)fail;
- (void)reset;

@end

