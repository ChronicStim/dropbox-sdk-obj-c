///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESGetTemporaryLinkArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetTemporaryLinkArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESGetTemporaryLinkArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path to the file you want a temporary link to.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path to the file you want a temporary link to.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetTemporaryLinkArg` struct.
///
@interface DBFILESGetTemporaryLinkArgSerializer : NSObject

///
/// Serializes `DBFILESGetTemporaryLinkArg` instances.
///
/// @param instance An instance of the `DBFILESGetTemporaryLinkArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESGetTemporaryLinkArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESGetTemporaryLinkArg *)instance;

///
/// Deserializes `DBFILESGetTemporaryLinkArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESGetTemporaryLinkArg` API object.
///
/// @return An instantiation of the `DBFILESGetTemporaryLinkArg` object.
///
+ (DBFILESGetTemporaryLinkArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
