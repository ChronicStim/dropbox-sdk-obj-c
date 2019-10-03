///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGInsufficientPlan;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `InsufficientPlan` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGInsufficientPlan : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A message to tell the user to upgrade in order to support expected action.
@property (nonatomic, readonly, copy) NSString *message;

/// A URL to send the user to in order to obtain the account type they need,
/// e.g. upgrading. Absent if there is no action the user can take to upgrade.
@property (nonatomic, readonly, copy, nullable) NSString *upsellUrl;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param message A message to tell the user to upgrade in order to support
/// expected action.
/// @param upsellUrl A URL to send the user to in order to obtain the account
/// type they need, e.g. upgrading. Absent if there is no action the user can
/// take to upgrade.
///
/// @return An initialized instance.
///
- (instancetype)initWithMessage:(NSString *)message upsellUrl:(nullable NSString *)upsellUrl;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param message A message to tell the user to upgrade in order to support
/// expected action.
///
/// @return An initialized instance.
///
- (instancetype)initWithMessage:(NSString *)message;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `InsufficientPlan` struct.
///
@interface DBSHARINGInsufficientPlanSerializer : NSObject

///
/// Serializes `DBSHARINGInsufficientPlan` instances.
///
/// @param instance An instance of the `DBSHARINGInsufficientPlan` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGInsufficientPlan` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGInsufficientPlan *)instance;

///
/// Deserializes `DBSHARINGInsufficientPlan` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGInsufficientPlan` API object.
///
/// @return An instantiation of the `DBSHARINGInsufficientPlan` object.
///
+ (DBSHARINGInsufficientPlan *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
