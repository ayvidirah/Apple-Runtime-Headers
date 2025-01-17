//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface CKSceneDelegateState : NSObject <NSSecureCoding>
{
    _Bool _composingNewMessage;
    NSArray *_unreadLastMessages;
    NSString *_groupID;
    NSDate *_date;
}

+ (_Bool)supportsSecureCoding;
+ (id)unarchivingClasses;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool composingNewMessage; // @synthesize composingNewMessage=_composingNewMessage;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSArray *unreadLastMessages; // @synthesize unreadLastMessages=_unreadLastMessages;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(_Bool)arg3;

@end

