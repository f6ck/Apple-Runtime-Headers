//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSItemProvider, NSString, NSURL, UIImage;

@interface SLAttachment : NSObject <NSSecureCoding>
{
    CDUnknownBlockType _previewUpdateObserver;
    CDUnknownBlockType _payloadUpdateObserver;
    NSString *_identifier;
    _Bool _startedPayloadLoad;
    _Bool _needsAnotherPreviewGeneration;
    int _previewType;
    UIImage *_previewImage;
    int _type;
    id _payload;
    NSURL *_payloadSourceFileURL;
    NSItemProvider *_itemProvider;
    NSString *_typeIdentifier;
    int _itemProviderPreviewType;
    int _downsampleStatus;
}

+ (_Bool)attachmentTypeRepresentsAnImage:(int)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsAnotherPreviewGeneration; // @synthesize needsAnotherPreviewGeneration=_needsAnotherPreviewGeneration;
@property(nonatomic) _Bool startedPayloadLoad; // @synthesize startedPayloadLoad=_startedPayloadLoad;
@property(nonatomic) int downsampleStatus; // @synthesize downsampleStatus=_downsampleStatus;
@property(readonly, nonatomic) int itemProviderPreviewType; // @synthesize itemProviderPreviewType=_itemProviderPreviewType;
@property(copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(copy, nonatomic) NSURL *payloadSourceFileURL; // @synthesize payloadSourceFileURL=_payloadSourceFileURL;
@property(copy, nonatomic) id payload; // @synthesize payload=_payload;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property int previewType; // @synthesize previewType=_previewType;
- (id)description;
- (void)setPayloadUpdateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)setPreviewUpdateObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_uniqueIdentifier;
- (id)initWithPayload:(id)arg1 type:(int)arg2 previewImage:(id)arg3;
- (id)init;

@end

