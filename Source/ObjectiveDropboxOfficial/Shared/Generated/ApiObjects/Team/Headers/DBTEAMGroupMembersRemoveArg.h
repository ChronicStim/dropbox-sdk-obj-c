///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMIncludeMembersArg.h"

@class DBTEAMGroupMembersRemoveArg;
@class DBTEAMGroupSelector;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupMembersRemoveArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMembersRemoveArg : DBTEAMIncludeMembersArg <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Group from which users will be removed.
@property (nonatomic, readonly) DBTEAMGroupSelector *group;

/// List of users to be removed from the group.
@property (nonatomic, readonly) NSArray<DBTEAMUserSelectorArg *> *users;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param group Group from which users will be removed.
/// @param users List of users to be removed from the group.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group users:(NSArray<DBTEAMUserSelectorArg *> *)users;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Group from which users will be removed.
/// @param users List of users to be removed from the group.
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroup:(DBTEAMGroupSelector *)group
                        users:(NSArray<DBTEAMUserSelectorArg *> *)users
                returnMembers:(nullable NSNumber *)returnMembers;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMembersRemoveArg` struct.
///
@interface DBTEAMGroupMembersRemoveArgSerializer : NSObject

///
/// Serializes `DBTEAMGroupMembersRemoveArg` instances.
///
/// @param instance An instance of the `DBTEAMGroupMembersRemoveArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersRemoveArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMGroupMembersRemoveArg *)instance;

///
/// Deserializes `DBTEAMGroupMembersRemoveArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersRemoveArg` API object.
///
/// @return An instantiation of the `DBTEAMGroupMembersRemoveArg` object.
///
+ (DBTEAMGroupMembersRemoveArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
