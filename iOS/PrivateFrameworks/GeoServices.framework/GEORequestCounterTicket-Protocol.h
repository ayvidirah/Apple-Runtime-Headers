//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSURLSessionTask;

@protocol GEORequestCounterTicket <NSObject>
- (void)requestCompletedWithResult:(unsigned char)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)startingRequestWithTask:(NSURLSessionTask *)arg1;
@end

