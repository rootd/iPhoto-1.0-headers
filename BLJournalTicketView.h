/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLJournalElementView.h"

#import "UITextFieldDelegate-Protocol.h"

@class UIImageView, UITextField;

@interface BLJournalTicketView : BLJournalElementView <UITextFieldDelegate>
{
    UIImageView *m_imageView;
    UITextField *m_airlineTextField;
    UITextField *m_originTextField;
    UITextField *m_destinationTextField;
    UITextField *m_passengerTextField;
    UITextField *m_flightTextField;
    UITextField *m_seatTextField;
    UITextField *m_dateTextField;
}

- (void)endEditing;
- (void)beginEditing;
- (struct CGRect)contentRect;
- (struct CGRect)dragImageFinalFrame;
- (id)ticketElement;
- (id)initWithFrame:(struct CGRect)fp8 element:(id)fp24;
- (void)setEditing:(BOOL)fp8;

@end

