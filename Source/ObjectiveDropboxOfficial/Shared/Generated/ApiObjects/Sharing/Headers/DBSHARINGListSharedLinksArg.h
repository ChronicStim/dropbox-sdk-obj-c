///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListSharedLinksArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListSharedLinksArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListSharedLinksArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// See `listSharedLinks` description.
@property (nonatomic, readonly, copy, nullable) NSString *path;

/// The cursor returned by your last call to `listSharedLinks`.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

/// See `listSharedLinks` description.
@property (nonatomic, readonly, nullable) NSNumber *directOnly;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

///
/// Convenience constructor.
///
/// @param path See `listSharedLinks` description.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(nullable NSString *)path;

///
/// Convenience constructor.
///
/// @param path See `listSharedLinks` description.
/// @param cursor The cursor returned by your last call to `listSharedLinks`.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(nullable NSString *)path cursor:(nullable NSString *)cursor;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path See `listSharedLinks` description.
/// @param cursor The cursor returned by your last call to `listSharedLinks`.
/// @param directOnly See `listSharedLinks` description.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(nullable NSString *)path
                      cursor:(nullable NSString *)cursor
                  directOnly:(nullable NSNumber *)directOnly;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListSharedLinksArg` struct.
///
@interface DBSHARINGListSharedLinksArgSerializer : NSObject

///
/// Serializes `DBSHARINGListSharedLinksArg` instances.
///
/// @param instance An instance of the `DBSHARINGListSharedLinksArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksArg` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGListSharedLinksArg *)instance;

///
/// Deserializes `DBSHARINGListSharedLinksArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListSharedLinksArg` API object.
///
/// @return An instantiation of the `DBSHARINGListSharedLinksArg` object.
///
+ (DBSHARINGListSharedLinksArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
