/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BLJournalElement.h"

@class NSString;

@interface BLJournalTicketElement : BLJournalElement
{
    NSString *m_airlineName;
    NSString *m_originName;
    NSString *m_destinationName;
    NSString *m_passengerName;
    NSString *m_flightNumber;
    NSString *m_seatNumber;
    NSString *m_departureDate;
}

- (void)setDepartureDate:(id)fp8;
- (id)departureDate;
- (void)setSeatNumber:(id)fp8;
- (id)seatNumber;
- (void)setFlightNumber:(id)fp8;
- (id)flightNumber;
- (void)setPassengerName:(id)fp8;
- (id)passengerName;
- (void)setDestinationName:(id)fp8;
- (id)destinationName;
- (void)setOriginName:(id)fp8;
- (id)originName;
- (void)setAirlineName:(id)fp8;
- (id)airlineName;
- (void)dealloc;
- (Class)elementViewClass;
- (struct CGSize)sizeInGridForSize:(int)fp8;
- (id)dictionary;
- (id)initWithDictionary:(id)fp8 page:(id)fp12;

@end

