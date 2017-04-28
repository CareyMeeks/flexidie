/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "FBValueObject.h"

//#import "NSCoding-Protocol.h"
//#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, UIColor;

@interface FBMAdminText : NSObject //FBValueObject <NSCopying, NSCoding>
{
    BOOL _isVideoCall;
    NSString *_genericAdminTextType;
    NSArray *_colorChoices;
    NSArray *_emojiChoices;
    NSArray *_botChoices;
    NSDictionary *_nicknameChoices;
    NSString *_threadIcon;
    UIColor *_themeColor;
    NSString *_participantID;
    NSString *_nickname;
    NSString *_event;
    NSString *_serverInfoData;
    NSString *_providerName;
}

@property(readonly, copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(readonly, nonatomic) BOOL isVideoCall; // @synthesize isVideoCall=_isVideoCall;
@property(readonly, copy, nonatomic) NSString *serverInfoData; // @synthesize serverInfoData=_serverInfoData;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(readonly, copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(readonly, copy, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(readonly, copy, nonatomic) NSString *threadIcon; // @synthesize threadIcon=_threadIcon;
@property(readonly, copy, nonatomic) NSDictionary *nicknameChoices; // @synthesize nicknameChoices=_nicknameChoices;
@property(readonly, copy, nonatomic) NSArray *botChoices; // @synthesize botChoices=_botChoices;
@property(readonly, copy, nonatomic) NSArray *emojiChoices; // @synthesize emojiChoices=_emojiChoices;
@property(readonly, copy, nonatomic) NSArray *colorChoices; // @synthesize colorChoices=_colorChoices;
@property(readonly, copy, nonatomic) NSString *genericAdminTextType; // @synthesize genericAdminTextType=_genericAdminTextType;
//- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGenericAdminTextType:(id)arg1 colorChoices:(id)arg2 emojiChoices:(id)arg3 botChoices:(id)arg4 nicknameChoices:(id)arg5 threadIcon:(id)arg6 themeColor:(id)arg7 participantID:(id)arg8 nickname:(id)arg9 event:(id)arg10 serverInfoData:(id)arg11 isVideoCall:(BOOL)arg12 providerName:(id)arg13;
- (id)initWithCoder:(id)arg1;

@end
