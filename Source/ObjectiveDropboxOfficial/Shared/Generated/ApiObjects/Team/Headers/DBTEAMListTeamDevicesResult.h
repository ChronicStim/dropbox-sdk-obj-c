///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListTeamDevicesResult;
@class DBTEAMMemberDevices;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListTeamDevicesResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamDevicesResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The devices of each member of the team
@property (nonatomic, readonly) NSArray<DBTEAMMemberDevices *> *devices;

/// If true, then there are more devices available. Pass the cursor to
/// `devicesListTeamDevices` to retrieve the rest.
@property (nonatomic, readonly) NSNumber *hasMore;

/// Pass the cursor into `devicesListTeamDevices` to receive the next sub list
/// of team's devices.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

#pragma mark - Constructors

///
/// Convenience constructor.
///
/// @param devices The devices of each member of the team
/// @param hasMore If true, then there are more devices available. Pass the
/// cursor to `devicesListTeamDevices` to retrieve the rest.
///
/// @return An initialized instance.
///
- (instancetype)initWithDevices:(NSArray<DBTEAMMemberDevices *> *)devices hasMore:(NSNumber *)hasMore;

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param devices The devices of each member of the team
/// @param hasMore If true, then there are more devices available. Pass the
/// cursor to `devicesListTeamDevices` to retrieve the rest.
/// @param cursor Pass the cursor into `devicesListTeamDevices` to receive the
/// next sub list of team's devices.
///
/// @return An initialized instance.
///
- (instancetype)initWithDevices:(NSArray<DBTEAMMemberDevices *> *)devices
                        hasMore:(NSNumber *)hasMore
                         cursor:(nullable NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamDevicesResult` struct.
///
@interface DBTEAMListTeamDevicesResultSerializer : NSObject

///
/// Serializes `DBTEAMListTeamDevicesResult` instances.
///
/// @param instance An instance of the `DBTEAMListTeamDevicesResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesResult` API object.
///
+ (NSDictionary *)serialize:(DBTEAMListTeamDevicesResult *)instance;

///
/// Deserializes `DBTEAMListTeamDevicesResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesResult` API object.
///
/// @return An instantiation of the `DBTEAMListTeamDevicesResult` object.
///
+ (DBTEAMListTeamDevicesResult *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
