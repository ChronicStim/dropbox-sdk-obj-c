///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBFILESSharingInfo.h"
#import "DBSerializableProtocol.h"

@class DBFILESFolderSharingInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FolderSharingInfo` struct.
///
/// Sharing info for a folder which is contained in a shared folder or is a
/// shared folder mount point.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFolderSharingInfo : DBFILESSharingInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Set if the folder is contained by a shared folder.
@property (nonatomic, readonly, copy, nullable) NSString *parentSharedFolderId;

/// If this folder is a shared folder mount point, the ID of the shared folder
/// mounted at this location.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderId;

/// Specifies that the folder can only be traversed and the user can only see a
/// limited subset of the contents of this folder because they don't have read
/// access to this folder. They do, however, have access to some sub folder.
@property (nonatomic, readonly) NSNumber *traverseOnly;

/// Specifies that the folder cannot be accessed by the user.
@property (nonatomic, readonly) NSNumber *noAccess;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithReadOnly:(NSNumber *)readOnly;

///
/// Convenience constructor.
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
/// @param parentSharedFolderId Set if the folder is contained by a shared
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithReadOnly:(NSNumber *)readOnly parentSharedFolderId:(nullable NSString *)parentSharedFolderId;

///
/// Convenience constructor.
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
/// @param parentSharedFolderId Set if the folder is contained by a shared
/// folder.
/// @param sharedFolderId If this folder is a shared folder mount point, the ID
/// of the shared folder mounted at this location.
///
/// @return An initialized instance.
///
- (instancetype)initWithReadOnly:(NSNumber *)readOnly
            parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                  sharedFolderId:(nullable NSString *)sharedFolderId;

///
/// Convenience constructor.
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
/// @param parentSharedFolderId Set if the folder is contained by a shared
/// folder.
/// @param sharedFolderId If this folder is a shared folder mount point, the ID
/// of the shared folder mounted at this location.
/// @param traverseOnly Specifies that the folder can only be traversed and the
/// user can only see a limited subset of the contents of this folder because
/// they don't have read access to this folder. They do, however, have access to
/// some sub folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithReadOnly:(NSNumber *)readOnly
            parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                  sharedFolderId:(nullable NSString *)sharedFolderId
                    traverseOnly:(nullable NSNumber *)traverseOnly;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param readOnly True if the file or folder is inside a read-only shared
/// folder.
/// @param parentSharedFolderId Set if the folder is contained by a shared
/// folder.
/// @param sharedFolderId If this folder is a shared folder mount point, the ID
/// of the shared folder mounted at this location.
/// @param traverseOnly Specifies that the folder can only be traversed and the
/// user can only see a limited subset of the contents of this folder because
/// they don't have read access to this folder. They do, however, have access to
/// some sub folder.
/// @param noAccess Specifies that the folder cannot be accessed by the user.
///
/// @return An initialized instance.
///
- (instancetype)initWithReadOnly:(NSNumber *)readOnly
            parentSharedFolderId:(nullable NSString *)parentSharedFolderId
                  sharedFolderId:(nullable NSString *)sharedFolderId
                    traverseOnly:(nullable NSNumber *)traverseOnly
                        noAccess:(nullable NSNumber *)noAccess;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FolderSharingInfo` struct.
///
@interface DBFILESFolderSharingInfoSerializer : NSObject

///
/// Serializes `DBFILESFolderSharingInfo` instances.
///
/// @param instance An instance of the `DBFILESFolderSharingInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESFolderSharingInfo` API object.
///
+ (nullable NSDictionary *)serialize:(DBFILESFolderSharingInfo *)instance;

///
/// Deserializes `DBFILESFolderSharingInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFolderSharingInfo` API object.
///
/// @return An instantiation of the `DBFILESFolderSharingInfo` object.
///
+ (DBFILESFolderSharingInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
