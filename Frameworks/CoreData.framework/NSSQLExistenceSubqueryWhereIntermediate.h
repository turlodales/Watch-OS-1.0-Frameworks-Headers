//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSExpression, NSSQLEntity, NSSQLProperty, NSString;

@interface NSSQLExistenceSubqueryWhereIntermediate : NSSQLWhereIntermediate
{
    NSExpression *_subqueryExpression;
    NSExpression *_variableExpression;
    NSString *_variableAlias;
    NSSQLProperty *_collectionProperty;
    NSSQLEntity *_governingEntityForVariable;
}

- (BOOL)isExistenceScoped;
- (BOOL)_isKeypathScopedToSubquery:(id)arg1;
- (id)_generateSQLForVariableExpression:(id)arg1 inContext:(id)arg2;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2;
- (id)generateSQLStringInContext:(id)arg1;

@end

