//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NEIKEv2EncryptedPayload, NEIKEv2IKESPI, NSArray;

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>
{
    _Bool _isFragmented;
    _Bool _isResponse;
    _Bool _isInitiator;
    _Bool _decrypted;
    _Bool _isInbound;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
}

+ (id)createPacketFromReceivedFragments:(id)arg1 ikeSA:(id)arg2;
+ (id)createPacketFromReceivedData:(id)arg1 ikeSA:(id)arg2;
+ (unsigned long long)exchangeType;
+ (_Bool)encryptPayloads;
+ (id)copyTypeDescription;
- (void).cxx_destruct;
@property(retain) NSArray *rawPayloads; // @synthesize rawPayloads=_rawPayloads;
@property(retain) NSArray *packetDatagrams; // @synthesize packetDatagrams=_packetDatagrams;
@property _Bool isInbound; // @synthesize isInbound=_isInbound;
@property _Bool decrypted; // @synthesize decrypted=_decrypted;
@property(retain) NSArray *notifications; // @synthesize notifications=_notifications;
@property(retain) NSArray *customPayloads; // @synthesize customPayloads=_customPayloads;
@property(retain) NEIKEv2EncryptedPayload *encryptedPayload; // @synthesize encryptedPayload=_encryptedPayload;
@property _Bool isInitiator; // @synthesize isInitiator=_isInitiator;
@property _Bool isResponse; // @synthesize isResponse=_isResponse;
@property(retain) NEIKEv2IKESPI *responderSPI; // @synthesize responderSPI=_responderSPI;
@property(retain) NEIKEv2IKESPI *initiatorSPI; // @synthesize initiatorSPI=_initiatorSPI;
@property int messageID; // @synthesize messageID=_messageID;
@property unsigned int totalFragments; // @synthesize totalFragments=_totalFragments;
@property unsigned int fragmentNumber; // @synthesize fragmentNumber=_fragmentNumber;
@property _Bool isFragmented; // @synthesize isFragmented=_isFragmented;
- (void)addNotification:(unsigned long long)arg1 fromArray:(id)arg2 toPayloads:(id)arg3;
- (_Bool)addNotification:(unsigned long long)arg1;
- (_Bool)addNotification:(unsigned long long)arg1 data:(id)arg2;
- (_Bool)addNotifyPayload:(id)arg1;
@property(readonly) _Bool hasErrors;
- (_Bool)hasNotification:(unsigned long long)arg1;
- (id)copyNotification:(unsigned long long)arg1;
- (id)copyReceivedPacketForIKESA:(id)arg1;
- (id)copyPacketDatagramsForIKESA:(id)arg1;
- (id)createPacketDatagramWithPayloadData:(id)arg1 nextPayloadType:(unsigned long long)arg2 ikeSA:(id)arg3 needsChecksum:(_Bool)arg4;
- (id)copyUnifiedData;
- (id)copyAdditionalAuthenticationDataForNextPayloadType:(unsigned long long)arg1 plainTextLen:(unsigned int)arg2 fragmentNumber:(unsigned short)arg3 totalFragments:(unsigned short)arg4 encryption:(id)arg5;
- (unsigned int)encryptedFragmentSizeForIKESA:(id)arg1;
- (_Bool)shouldFragmentForEncryptedPayloadSize:(unsigned int)arg1 addressFamily:(unsigned char)arg2 nonESPMarker:(_Bool)arg3;
- (unsigned int)headerSizeForAddressFamily:(unsigned char)arg1 fragment:(_Bool)arg2 nonESPMarker:(_Bool)arg3;
- (id)copyShortDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initResponse:(id)arg1;
- (id)initOutbound;
- (void)filloutPayloads;
- (void)gatherPayloads;
@property(readonly) NEIKEv2IKESPI *receiverSPI;
@property(readonly) NEIKEv2IKESPI *senderSPI;

@end

