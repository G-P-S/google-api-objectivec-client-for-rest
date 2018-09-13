// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Cloud Memorystore for Redis API (redis/v1)
// Description:
//   The Google Cloud Memorystore for Redis API is used for creating and
//   managing Redis instances on the Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/memorystore/docs/redis/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudRedis_GoogleCloudRedisV1LocationMetadata_AvailableZones;
@class GTLRCloudRedis_GoogleCloudRedisV1ZoneMetadata;
@class GTLRCloudRedis_Instance;
@class GTLRCloudRedis_Instance_Labels;
@class GTLRCloudRedis_Instance_RedisConfigs;
@class GTLRCloudRedis_Location;
@class GTLRCloudRedis_Location_Labels;
@class GTLRCloudRedis_Location_Metadata;
@class GTLRCloudRedis_Operation;
@class GTLRCloudRedis_Operation_Metadata;
@class GTLRCloudRedis_Operation_Response;
@class GTLRCloudRedis_Status;
@class GTLRCloudRedis_Status_Details_Item;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudRedis_Instance.state

/**
 *  Redis instance is being created.
 *
 *  Value: "CREATING"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Creating;
/**
 *  Redis instance is being deleted.
 *
 *  Value: "DELETING"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Deleting;
/**
 *  Maintenance is being performed on this Redis instance.
 *
 *  Value: "MAINTENANCE"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Maintenance;
/**
 *  Redis instance has been created and is fully usable.
 *
 *  Value: "READY"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Ready;
/**
 *  Redis instance is being repaired and may be unusable. Details can be
 *  found in the `status_message` field.
 *
 *  Value: "REPAIRING"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Repairing;
/**
 *  Not set.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_StateUnspecified;
/**
 *  Redis instance configuration is being updated. Certain kinds of updates
 *  may cause the instance to become unusable while the update is in
 *  progress.
 *
 *  Value: "UPDATING"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_State_Updating;

// ----------------------------------------------------------------------------
// GTLRCloudRedis_Instance.tier

/**
 *  BASIC tier: standalone instance
 *
 *  Value: "BASIC"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_Tier_Basic;
/**
 *  STANDARD_HA tier: highly available primary/replica instances
 *
 *  Value: "STANDARD_HA"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_Tier_StandardHa;
/**
 *  Not set.
 *
 *  Value: "TIER_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudRedis_Instance_Tier_TierUnspecified;

/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudRedis_Empty : GTLRObject
@end


/**
 *  This location metadata represents additional configuration options for a
 *  given location where a Redis instance may be created. All fields are output
 *  only. It is returned as content of the
 *  `google.cloud.location.Location.metadata` field.
 */
@interface GTLRCloudRedis_GoogleCloudRedisV1LocationMetadata : GTLRObject

/**
 *  Output only. The set of available zones in the location. The map is keyed
 *  by the lowercase ID of each zone, as defined by GCE. These keys can be
 *  specified in `location_id` or `alternative_location_id` fields when
 *  creating a Redis instance.
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_GoogleCloudRedisV1LocationMetadata_AvailableZones *availableZones;

@end


/**
 *  Output only. The set of available zones in the location. The map is keyed
 *  by the lowercase ID of each zone, as defined by GCE. These keys can be
 *  specified in `location_id` or `alternative_location_id` fields when
 *  creating a Redis instance.
 *
 *  @note This class is documented as having more properties of
 *        GTLRCloudRedis_GoogleCloudRedisV1ZoneMetadata. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudRedis_GoogleCloudRedisV1LocationMetadata_AvailableZones : GTLRObject
@end


/**
 *  Represents the v1 metadata of the long-running operation.
 */
@interface GTLRCloudRedis_GoogleCloudRedisV1OperationMetadata : GTLRObject

/** API version. */
@property(nonatomic, copy, nullable) NSString *apiVersion;

/**
 *  Specifies if cancellation was requested for the operaiton.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *cancelRequested;

/** Creation timestamp. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/** End timestamp. */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** Operation status details. */
@property(nonatomic, copy, nullable) NSString *statusDetail;

/** Operation target. */
@property(nonatomic, copy, nullable) NSString *target;

/** Operation verb. */
@property(nonatomic, copy, nullable) NSString *verb;

@end


/**
 *  Defines specific information for a particular zone. Currently empty and
 *  reserved for future use only.
 */
@interface GTLRCloudRedis_GoogleCloudRedisV1ZoneMetadata : GTLRObject
@end


/**
 *  A Google Cloud Redis instance.
 */
@interface GTLRCloudRedis_Instance : GTLRObject

/**
 *  Optional. Only applicable to STANDARD_HA tier which protects the instance
 *  against zonal failures by provisioning it across two zones. If provided, it
 *  must be a different zone from the one provided in [location_id].
 */
@property(nonatomic, copy, nullable) NSString *alternativeLocationId;

/**
 *  Optional. The full name of the Google Compute Engine
 *  [network](/compute/docs/networks-and-firewalls#networks) to which the
 *  instance is connected. If left unspecified, the `default` network
 *  will be used.
 */
@property(nonatomic, copy, nullable) NSString *authorizedNetwork;

/** Output only. The time the instance was created. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Output only. The current zone where the Redis endpoint is placed. For Basic
 *  Tier instances, this will always be the same as the [location_id]
 *  provided by the user at creation time. For Standard Tier instances,
 *  this can be either [location_id] or [alternative_location_id] and can
 *  change after a failover event.
 */
@property(nonatomic, copy, nullable) NSString *currentLocationId;

/** An arbitrary and optional user-provided name for the instance. */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Output only. Hostname or IP address of the exposed Redis endpoint used by
 *  clients to connect to the service.
 */
@property(nonatomic, copy, nullable) NSString *host;

/** Resource labels to represent user provided metadata */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Instance_Labels *labels;

/**
 *  Optional. The zone where the instance will be provisioned. If not provided,
 *  the service will choose a zone for the instance. For STANDARD_HA tier,
 *  instances will be created across two zones for protection against zonal
 *  failures. If [alternative_location_id] is also provided, it must be
 *  different from [location_id].
 */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Required. Redis memory size in GiB.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *memorySizeGb;

/**
 *  Required. Unique name of the resource in this scope including project and
 *  location using the form:
 *  `projects/{project_id}/locations/{location_id}/instances/{instance_id}`
 *  Note: Redis instances are managed and addressed at regional level so
 *  location_id here refers to a GCP region; however, users may choose which
 *  specific zone (or collection of zones for cross-zone instances) an instance
 *  should be provisioned in. Refer to [location_id] and
 *  [alternative_location_id] fields for more details.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Output only. The port number of the exposed Redis endpoint.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *port;

/**
 *  Optional. Redis configuration parameters, according to
 *  http://redis.io/topics/config. Currently, the only supported parameters
 *  are:
 *  * maxmemory-policy
 *  * notify-keyspace-events
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Instance_RedisConfigs *redisConfigs;

/**
 *  Optional. The version of Redis software.
 *  If not provided, latest supported version will be used. Updating the
 *  version will perform an upgrade/downgrade to the new version. Currently,
 *  the supported values are `REDIS_3_2` for Redis 3.2.
 */
@property(nonatomic, copy, nullable) NSString *redisVersion;

/**
 *  Optional. The CIDR range of internal addresses that are reserved for this
 *  instance. If not provided, the service will choose an unused /29 block,
 *  for example, 10.0.0.0/29 or 192.168.0.0/29. Ranges must be unique
 *  and non-overlapping with existing subnets in an authorized network.
 */
@property(nonatomic, copy, nullable) NSString *reservedIpRange;

/**
 *  Output only. The current state of this instance.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudRedis_Instance_State_Creating Redis instance is being
 *        created. (Value: "CREATING")
 *    @arg @c kGTLRCloudRedis_Instance_State_Deleting Redis instance is being
 *        deleted. (Value: "DELETING")
 *    @arg @c kGTLRCloudRedis_Instance_State_Maintenance Maintenance is being
 *        performed on this Redis instance. (Value: "MAINTENANCE")
 *    @arg @c kGTLRCloudRedis_Instance_State_Ready Redis instance has been
 *        created and is fully usable. (Value: "READY")
 *    @arg @c kGTLRCloudRedis_Instance_State_Repairing Redis instance is being
 *        repaired and may be unusable. Details can be
 *        found in the `status_message` field. (Value: "REPAIRING")
 *    @arg @c kGTLRCloudRedis_Instance_State_StateUnspecified Not set. (Value:
 *        "STATE_UNSPECIFIED")
 *    @arg @c kGTLRCloudRedis_Instance_State_Updating Redis instance
 *        configuration is being updated. Certain kinds of updates
 *        may cause the instance to become unusable while the update is in
 *        progress. (Value: "UPDATING")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  Output only. Additional information about the current status of this
 *  instance, if available.
 */
@property(nonatomic, copy, nullable) NSString *statusMessage;

/**
 *  Required. The service tier of the instance.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudRedis_Instance_Tier_Basic BASIC tier: standalone
 *        instance (Value: "BASIC")
 *    @arg @c kGTLRCloudRedis_Instance_Tier_StandardHa STANDARD_HA tier: highly
 *        available primary/replica instances (Value: "STANDARD_HA")
 *    @arg @c kGTLRCloudRedis_Instance_Tier_TierUnspecified Not set. (Value:
 *        "TIER_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *tier;

@end


/**
 *  Resource labels to represent user provided metadata
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudRedis_Instance_Labels : GTLRObject
@end


/**
 *  Optional. Redis configuration parameters, according to
 *  http://redis.io/topics/config. Currently, the only supported parameters
 *  are:
 *  * maxmemory-policy
 *  * notify-keyspace-events
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudRedis_Instance_RedisConfigs : GTLRObject
@end


/**
 *  Response for ListInstances.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "instances" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudRedis_ListInstancesResponse : GTLRCollectionObject

/**
 *  A list of Redis instances in the project in the specified location,
 *  or across all locations.
 *  If the `location_id` in the parent field of the request is "-", all regions
 *  available to the project are queried, and the results aggregated.
 *  If in such an aggregated query a location is unavailable, a dummy Redis
 *  entry is included in the response with the "name" field set to a value of
 *  the form projects/{project_id}/locations/{location_id}/instances/- and the
 *  "status" field set to ERROR and "status_message" field set to "location not
 *  available for ListInstances".
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudRedis_Instance *> *instances;

/**
 *  Token to retrieve the next page of results, or empty if there are no more
 *  results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudRedis_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudRedis_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  The response message for Operations.ListOperations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "operations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudRedis_ListOperationsResponse : GTLRCollectionObject

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  A list of operations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudRedis_Operation *> *operations;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRCloudRedis_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name.
 *  For example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Location_Labels *labels;

/** Resource ID for the region. For example: "us-east1". */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Output only. The set of available zones in the location. The map is keyed by
 *  the lowercase ID of each zone, as defined by Compute Engine. These keys can
 *  be specified in `location_id` or `alternative_location_id` fields when
 *  creating a Redis instance.
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Location_Metadata *metadata;

/**
 *  Full resource name for the region. For example:
 *  "projects/example-project/locations/us-east1".
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudRedis_Location_Labels : GTLRObject
@end


/**
 *  Output only. The set of available zones in the location. The map is keyed by
 *  the lowercase ID of each zone, as defined by Compute Engine. These keys can
 *  be specified in `location_id` or `alternative_location_id` fields when
 *  creating a Redis instance.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudRedis_Location_Metadata : GTLRObject
@end


/**
 *  This resource represents a long-running operation that is the result of a
 *  network API call.
 */
@interface GTLRCloudRedis_Operation : GTLRObject

/**
 *  If the value is `false`, it means the operation is still in progress.
 *  If `true`, the operation is completed, and either `error` or `response` is
 *  available.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *done;

/** The error result of the operation in case of failure or cancellation. */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Status *error;

/**
 *  {
 *  `createTime`: The time the operation was created.
 *  `endTime`: The time the operation finished running.
 *  `target`: Server-defined resource path for the target of the operation.
 *  `verb`: Name of the verb executed by the operation.
 *  `statusDetail`: Human-readable status of the operation, if any.
 *  `cancelRequested`: Identifies whether the user has requested cancellation of
 *  the operation. Operations that have successfully been cancelled have
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *  `apiVersion`: API version used to start the operation.
 *  }
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Operation_Metadata *metadata;

/**
 *  The server-assigned name, which is only unique within the same service that
 *  originally returns it. If you use the default HTTP mapping, the
 *  `name` should have the format of `operations/some/unique/name`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 */
@property(nonatomic, strong, nullable) GTLRCloudRedis_Operation_Response *response;

@end


/**
 *  {
 *  `createTime`: The time the operation was created.
 *  `endTime`: The time the operation finished running.
 *  `target`: Server-defined resource path for the target of the operation.
 *  `verb`: Name of the verb executed by the operation.
 *  `statusDetail`: Human-readable status of the operation, if any.
 *  `cancelRequested`: Identifies whether the user has requested cancellation of
 *  the operation. Operations that have successfully been cancelled have
 *  Operation.error value with a google.rpc.Status.code of 1, corresponding to
 *  `Code.CANCELLED`.
 *  `apiVersion`: API version used to start the operation.
 *  }
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudRedis_Operation_Metadata : GTLRObject
@end


/**
 *  The normal response of the operation in case of success. If the original
 *  method returns no data on success, such as `Delete`, the response is
 *  `google.protobuf.Empty`. If the original method is standard
 *  `Get`/`Create`/`Update`, the response should be the resource. For other
 *  methods, the response should have the type `XxxResponse`, where `Xxx`
 *  is the original method name. For example, if the original method name
 *  is `TakeSnapshot()`, the inferred response type is
 *  `TakeSnapshotResponse`.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudRedis_Operation_Response : GTLRObject
@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRCloudRedis_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudRedis_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRCloudRedis_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudRedis_Status_Details_Item : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
