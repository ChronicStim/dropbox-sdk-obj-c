///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPAPERCursor;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `Cursor` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERCursor : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The actual cursor value.
@property (nonatomic, readonly, copy) NSString *value;

/// Expiration time of value. Some cursors might have expiration time assigned.
/// This is a UTC value after which the cursor is no longer valid and the API
/// starts returning an error. If cursor expires a new one needs to be obtained
/// and pagination needs to be restarted. Some cursors might be short-lived some
/// cursors might be long-lived. This really depends on the sorting type and
/// order, e.g.: 1. on one hand, listing docs created by the user, sorted by the
/// created time ascending will have undefinite expiration because the results
/// cannot change while the iteration is happening. This cursor would be
/// suitable for long term polling. 2. on the other hand, listing docs sorted by
/// the last modified time will have a very short expiration as docs do get
/// modified very often and the modified time can be changed while the iteration
/// is happening thus altering the results.
@property (nonatomic, readonly, nullable) NSDate *expiration;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param value The actual cursor value.
///
/// @return An initialized instance.
///
- (instancetype)initWithValue:(NSString *)value;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param value The actual cursor value.
/// @param expiration Expiration time of value. Some cursors might have
/// expiration time assigned. This is a UTC value after which the cursor is no
/// longer valid and the API starts returning an error. If cursor expires a new
/// one needs to be obtained and pagination needs to be restarted. Some cursors
/// might be short-lived some cursors might be long-lived. This really depends
/// on the sorting type and order, e.g.: 1. on one hand, listing docs created by
/// the user, sorted by the created time ascending will have undefinite
/// expiration because the results cannot change while the iteration is
/// happening. This cursor would be suitable for long term polling. 2. on the
/// other hand, listing docs sorted by the last modified time will have a very
/// short expiration as docs do get modified very often and the modified time
/// can be changed while the iteration is happening thus altering the results.
///
/// @return An initialized instance.
///
- (instancetype)initWithValue:(NSString *)value expiration:(nullable NSDate *)expiration;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `Cursor` struct.
///
@interface DBPAPERCursorSerializer : NSObject

///
/// Serializes `DBPAPERCursor` instances.
///
/// @param instance An instance of the `DBPAPERCursor` API object.
///
/// @return A json-compatible dictionary representation of the `DBPAPERCursor`
/// API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERCursor *)instance;

///
/// Deserializes `DBPAPERCursor` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERCursor` API object.
///
/// @return An instantiation of the `DBPAPERCursor` object.
///
+ (DBPAPERCursor *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
