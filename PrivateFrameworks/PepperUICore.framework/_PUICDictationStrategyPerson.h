//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PepperUICore/_PUICDictationStrategyText.h>

@class NSArray, NSString;

@interface _PUICDictationStrategyPerson : _PUICDictationStrategyText
{
    NSString *_finalText;
    NSArray *_transcriptionObjects;
    BOOL _isReadyToPresentResults;
}

- (void)receivedFinalText:(id)arg1;
- (int)transcriptionMode;
- (void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
- (void)presentPersonResultsIfReady;
- (void)startListeningForViewController:(id)arg1;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void).cxx_destruct;

@end

