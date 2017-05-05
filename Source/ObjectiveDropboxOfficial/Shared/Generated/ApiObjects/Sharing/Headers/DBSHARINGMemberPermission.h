///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGMemberAction;
@class DBSHARINGMemberPermission;
@class DBSHARINGPermissionDeniedReason;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberPermission` struct.
///
/// Whether the user is allowed to take the action on the associated member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGMemberPermission : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The action that the user may wish to take on the member.
@property (nonatomic, readonly) DBSHARINGMemberAction *action;

/// True if the user is allowed to take the action.
@property (nonatomic, readonly) NSNumber *allow;

/// The reason why the user is denied the permission. Not present if the action
/// is allowed.
@property (nonatomic, readonly, nullable) DBSHARINGPermissionDeniedReason *reason;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param action The action that the user may wish to take on the member.
/// @param allow True if the user is allowed to take the action.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGMemberAction *)action allow:(NSNumber *)allow;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param action The action that the user may wish to take on the member.
/// @param allow True if the user is allowed to take the action.
/// @param reason The reason why the user is denied the permission. Not present
/// if the action is allowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithAction:(DBSHARINGMemberAction *)action
                         allow:(NSNumber *)allow
                        reason:(nullable DBSHARINGPermissionDeniedReason *)reason;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberPermission` struct.
///
@interface DBSHARINGMemberPermissionSerializer : NSObject

///
/// Serializes `DBSHARINGMemberPermission` instances.
///
/// @param instance An instance of the `DBSHARINGMemberPermission` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGMemberPermission` API object.
///
+ (NSDictionary *)serialize:(DBSHARINGMemberPermission *)instance;

///
/// Deserializes `DBSHARINGMemberPermission` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGMemberPermission` API object.
///
/// @return An instantiation of the `DBSHARINGMemberPermission` object.
///
+ (DBSHARINGMemberPermission *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
