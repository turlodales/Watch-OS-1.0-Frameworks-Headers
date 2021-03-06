//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_PUICDictationStrategy.h"

@class AFDictationConnection, AFSiriContext, NSString;

@interface _PUICDictationStrategyText : NSObject <_PUICDictationStrategy>
{
    AFDictationConnection *_dictationConnection;
    BOOL _isListening;
    BOOL _didCancel;
    id <_PUICDictationStrategyDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    NSString *_languageCode;
    AFSiriContext *_context;
}

- (void)updatedText:(id)arg1;
- (void)configureSpeechRequestOptions:(id)arg1;
- (void)finishedListeningWithResult:(id)arg1;
@property(readonly, nonatomic) BOOL didCancel;
- (void)failedToListen;
@property(readonly, nonatomic) float audioAveragePower;
- (void)finishListening:(CDUnknownBlockType)arg1;
- (void)cancelListening;
@property(readonly, nonatomic) BOOL isListening;
- (id)yieldDictationConnection;
- (id)initWithPreheatedConnection:(id)arg1;
- (void)receivedFinalText:(id)arg1;
- (int)transcriptionMode;
- (void)startListeningForViewController:(id)arg1;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) AFSiriContext *context; // @synthesize context=_context;
- (id)currentText;
@property(readonly, nonatomic) id <_PUICDictationStrategyDelegate> delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

