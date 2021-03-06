//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXLangMap, AXLanguageManager, NSCharacterSet, NSLocale, NSString;

@interface AXDialectMap : NSObject
{
    AXLangMap *_langMap;
    NSString *_voiceName;
    NSLocale *_locale;
    NSString *_specificLanguageID;
    NSCharacterSet *_speakableCharacters;
    NSCharacterSet *_secondaryLanguageRange;
}

- (BOOL)canSpeakString:(id)arg1;
- (BOOL)canSpeakLongCharacter:(unsigned long)arg1;
- (BOOL)isDialectSecondaryForCharacter:(unsigned short)arg1;
@property(readonly, nonatomic) NSString *localeNameInCurrentLocale;
@property(readonly, nonatomic) NSString *languageNameInNativeLocale;
@property(readonly, nonatomic) NSString *languageNameInCurrentLocale;
@property(readonly, nonatomic) NSString *regionID;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;
- (BOOL)canSpeakCharacter:(unsigned short)arg1;
@property(retain, nonatomic) NSCharacterSet *speakableCharacters; // @synthesize speakableCharacters=_speakableCharacters;
@property(retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // @synthesize secondaryLanguageRange=_secondaryLanguageRange;
@property(readonly, nonatomic) AXLanguageManager *langManager;
@property(readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;
@property(readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) AXLangMap *langMap; // @synthesize langMap=_langMap;
@property(copy, nonatomic) NSString *specificLanguageID; // @synthesize specificLanguageID=_specificLanguageID;
- (id)basicDescription;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)debugDescription;
- (id)description;
- (void)dealloc;

@end

