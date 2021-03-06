//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HDSQLiteDatabase, HDSQLiteOrderingTerm, HDSQLiteStatement, NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSSortDescriptor, NSString, NSUUID;

@protocol HDSQLiteEntity <NSObject>
+ (HDSQLiteOrderingTerm *)orderingTermForSortDescriptor:(NSSortDescriptor *)arg1;
+ (Class)entityClassForEnumeration;
+ (NSString *)disambiguatedSQLForProperty:(NSString *)arg1;
+ (NSSet *)joinClausesForProperty:(NSString *)arg1;
+ (NSSet *)checkConstraints;
+ (NSArray *)allDatabaseColumnNames;
+ (NSString *)disambiguatedDatabaseTable;
+ (Class)entityForProperty:(NSString *)arg1;
+ (NSArray *)privateSubEntities;
+ (BOOL)isTemporary;
+ (NSArray *)uniquedColumns;
+ (NSArray *)indices;
+ (NSDictionary *)foreignKeys;
+ (void)enumerateColumnsWithBlock:(void (^)(_HDSQLiteEntityColumn *, BOOL ))arg1;
+ (NSString *)createTableSQL;
// + (const CDStruct_4c492439 )columnDefinitionsWithCount:(NSUInteger )arg1;
+ (NSArray *)tableAliases;
+ (NSString *)databaseTable;
+ (NSString *)databaseName;
+ (HDSQLiteStatement *)deleteStatementWithProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (void)willDeleteFromDatabase:(HDSQLiteDatabase *)arg1;
- (BOOL)deleteFromDatabase:(HDSQLiteDatabase *)arg1 error:(id )arg2;
//  (BOOL)getValuesForProperties:(NSArray *)arg1 database:(HDSQLiteDatabase *)arg2 error:(id )arg3 handler:(void (^)(NSArray *, struct HDSQLiteRow ))arg4;
//  (BOOL)getValuesForProperties:(NSArray *)arg1 database:(HDSQLiteDatabase *)arg2 handler:(void (^)(NSArray *, struct HDSQLiteRow ))arg3;
- (NSUUID *)UUIDForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSString *)stringForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSNumber *)numberForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (NSDate *)dateForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (BOOL)booleanForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
- (id)valueForProperty:(NSString *)arg1 database:(HDSQLiteDatabase *)arg2;
@end

