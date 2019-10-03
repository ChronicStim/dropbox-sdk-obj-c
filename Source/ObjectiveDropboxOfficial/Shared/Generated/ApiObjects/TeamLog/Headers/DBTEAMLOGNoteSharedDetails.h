///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGNoteSharedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `NoteSharedDetails` struct.
///
/// Shared Paper doc.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGNoteSharedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `NoteSharedDetails` struct.
///
@interface DBTEAMLOGNoteSharedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGNoteSharedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGNoteSharedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGNoteSharedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGNoteSharedDetails *)instance;

///
/// Deserializes `DBTEAMLOGNoteSharedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGNoteSharedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGNoteSharedDetails` object.
///
+ (DBTEAMLOGNoteSharedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
