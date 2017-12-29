///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGMemberPermission;
@class DBSHARINGMembershipInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembershipInfo` struct.
///
/// The information about a member of the shared content.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGMembershipInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The access type for this member.
@property (nonatomic, readonly) DBSHARINGAccessLevel *accessType;

/// The permissions that requesting user has on this member. The set of
/// permissions corresponds to the MemberActions in the request.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGMemberPermission *> *permissions;

/// Suggested name initials for a member.
@property (nonatomic, readonly, copy, nullable) NSString *initials;

/// True if the member has access from a parent folder.
@property (nonatomic, readonly) NSNumber *isInherited;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType;

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions;

///
/// Convenience constructor.
///
/// @param accessType The access type for this member.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions
                          initials:(nullable NSString *)initials;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessType The access type for this member.
/// @param permissions The permissions that requesting user has on this member.
/// The set of permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
/// @param isInherited True if the member has access from a parent folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessType:(DBSHARINGAccessLevel *)accessType
                       permissions:(nullable NSArray<DBSHARINGMemberPermission *> *)permissions
                          initials:(nullable NSString *)initials
                       isInherited:(nullable NSNumber *)isInherited;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembershipInfo` struct.
///
@interface DBSHARINGMembershipInfoSerializer : NSObject

///
/// Serializes `DBSHARINGMembershipInfo` instances.
///
/// @param instance An instance of the `DBSHARINGMembershipInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGMembershipInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBSHARINGMembershipInfo *)instance;

///
/// Deserializes `DBSHARINGMembershipInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGMembershipInfo` API object.
///
/// @return An instantiation of the `DBSHARINGMembershipInfo` object.
///
+ (DBSHARINGMembershipInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
