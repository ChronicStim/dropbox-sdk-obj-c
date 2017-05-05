///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESCommitInfo;
@class DBFILESWriteMode;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CommitInfo` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCommitInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Path in the user's Dropbox to save the file.
@property (nonatomic, readonly, copy) NSString *path;

/// Selects what to do if the file already exists.
@property (nonatomic, readonly) DBFILESWriteMode *mode;

/// If there's a conflict, as determined by mode, have the Dropbox server try to
/// autorename the file to avoid conflict.
@property (nonatomic, readonly) NSNumber *autorename;

/// The value to store as the clientModified timestamp. Dropbox automatically
/// records the time at which the file was written to the Dropbox servers. It
/// can also record an additional timestamp, provided by Dropbox desktop
/// clients, mobile clients, and API apps of when the file was actually created
/// or modified.
@property (nonatomic, readonly, nullable) NSDate *clientModified;

/// Normally, users are made aware of any file modifications in their Dropbox
/// account via notifications in the client software. If true, this tells the
/// clients that this modification shouldn't result in a user notification.
@property (nonatomic, readonly) NSNumber *mute;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param path Path in the user's Dropbox to save the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

///
/// Convenience constructor.
///
/// @param path Path in the user's Dropbox to save the file.
/// @param mode Selects what to do if the file already exists.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path mode:(nullable DBFILESWriteMode *)mode;

///
/// Convenience constructor.
///
/// @param path Path in the user's Dropbox to save the file.
/// @param mode Selects what to do if the file already exists.
/// @param autorename If there's a conflict, as determined by mode, have the
/// Dropbox server try to autorename the file to avoid conflict.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                        mode:(nullable DBFILESWriteMode *)mode
                  autorename:(nullable NSNumber *)autorename;

///
/// Convenience constructor.
///
/// @param path Path in the user's Dropbox to save the file.
/// @param mode Selects what to do if the file already exists.
/// @param autorename If there's a conflict, as determined by mode, have the
/// Dropbox server try to autorename the file to avoid conflict.
/// @param clientModified The value to store as the clientModified timestamp.
/// Dropbox automatically records the time at which the file was written to the
/// Dropbox servers. It can also record an additional timestamp, provided by
/// Dropbox desktop clients, mobile clients, and API apps of when the file was
/// actually created or modified.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                        mode:(nullable DBFILESWriteMode *)mode
                  autorename:(nullable NSNumber *)autorename
              clientModified:(nullable NSDate *)clientModified;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Path in the user's Dropbox to save the file.
/// @param mode Selects what to do if the file already exists.
/// @param autorename If there's a conflict, as determined by mode, have the
/// Dropbox server try to autorename the file to avoid conflict.
/// @param clientModified The value to store as the clientModified timestamp.
/// Dropbox automatically records the time at which the file was written to the
/// Dropbox servers. It can also record an additional timestamp, provided by
/// Dropbox desktop clients, mobile clients, and API apps of when the file was
/// actually created or modified.
/// @param mute Normally, users are made aware of any file modifications in
/// their Dropbox account via notifications in the client software. If true,
/// this tells the clients that this modification shouldn't result in a user
/// notification.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path
                        mode:(nullable DBFILESWriteMode *)mode
                  autorename:(nullable NSNumber *)autorename
              clientModified:(nullable NSDate *)clientModified
                        mute:(nullable NSNumber *)mute;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `CommitInfo` struct.
///
@interface DBFILESCommitInfoSerializer : NSObject

///
/// Serializes `DBFILESCommitInfo` instances.
///
/// @param instance An instance of the `DBFILESCommitInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCommitInfo` API object.
///
+ (NSDictionary *)serialize:(DBFILESCommitInfo *)instance;

///
/// Deserializes `DBFILESCommitInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCommitInfo` API object.
///
/// @return An instantiation of the `DBFILESCommitInfo` object.
///
+ (DBFILESCommitInfo *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
