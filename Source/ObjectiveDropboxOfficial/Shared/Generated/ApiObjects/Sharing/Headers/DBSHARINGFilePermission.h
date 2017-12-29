///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFileAction;
@class DBSHARINGFilePermission;
@class DBSHARINGPermissionDeniedReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FilePermission` struct.
///
/// Whether the user is allowed to take the sharing action on the file.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFilePermission : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The action that the user may wish to take on the file.
@property (nonatomic, readonly) DBSHARINGFileAction *action;

/// True if the user is allowed to take the action.
@property (nonatomic, readonly) NSNumber *allow;

/// The reason why the user is denied the permission. Not present if the action
/// is allowed.
@property (nonatomic, readonly, nullable) DBSHARINGPermissionDeniedReason *reason;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param action The action that the user may wish to take on the file.
/// @param allow True if the user is allowed to take the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGFileAction *)action allow:(NSNumber *)allow;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param action The action that the user may wish to take on the file.
/// @param allow True if the user is allowed to take the action.
/// @param reason The reason why the user is denied the permission. Not present
/// if the action is allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGFileAction *)action
                         allow:(NSNumber *)allow
                        reason:(nullable DBSHARINGPermissionDeniedReason *)reason;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FilePermission` struct.
///
@interface DBSHARINGFilePermissionSerializer : NSObject

///
/// Serializes `DBSHARINGFilePermission` instances.
///
/// @param instance An instance of the `DBSHARINGFilePermission` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFilePermission` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGFilePermission *)instance;

///
/// Deserializes `DBSHARINGFilePermission` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFilePermission` API object.
///
/// @return An instantiation of the `DBSHARINGFilePermission` object.
///
+ (DBSHARINGFilePermission *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
