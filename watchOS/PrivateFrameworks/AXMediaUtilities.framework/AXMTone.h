//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMADSREnvelope;

@interface AXMTone : NSObject
{
    unsigned int _sampleRate;
    AXMADSREnvelope *_envelope;
    unsigned int _waveform;
    double _frequency;
    double _gain;
    double _aWeighting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double aWeighting; // @synthesize aWeighting=_aWeighting;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(nonatomic) unsigned int waveform; // @synthesize waveform=_waveform;
@property(readonly, nonatomic) AXMADSREnvelope *envelope; // @synthesize envelope=_envelope;
@property(readonly, nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) unsigned int sampleRate; // @synthesize sampleRate=_sampleRate;
- (double)_rawValueForTonePhase:(double)arg1;
- (void)_setFrequency:(double)arg1;
- (void)renderInBuffer:(vector_3203cf93 *)arg1 atFrame:(unsigned int)arg2;
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;
- (id)init;

@end

