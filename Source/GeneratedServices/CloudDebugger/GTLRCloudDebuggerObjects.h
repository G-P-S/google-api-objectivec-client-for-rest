// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Stackdriver Debugger API (clouddebugger/v2)
// Description:
//   Examines the call stack and variables of a running application without
//   stopping or slowing it down.
// Documentation:
//   http://cloud.google.com/debugger

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudDebugger_AliasContext;
@class GTLRCloudDebugger_Breakpoint;
@class GTLRCloudDebugger_Breakpoint_Labels;
@class GTLRCloudDebugger_CloudRepoSourceContext;
@class GTLRCloudDebugger_CloudWorkspaceId;
@class GTLRCloudDebugger_CloudWorkspaceSourceContext;
@class GTLRCloudDebugger_Debuggee;
@class GTLRCloudDebugger_Debuggee_Labels;
@class GTLRCloudDebugger_ExtendedSourceContext;
@class GTLRCloudDebugger_ExtendedSourceContext_Labels;
@class GTLRCloudDebugger_FormatMessage;
@class GTLRCloudDebugger_GerritSourceContext;
@class GTLRCloudDebugger_GitSourceContext;
@class GTLRCloudDebugger_ProjectRepoId;
@class GTLRCloudDebugger_RepoId;
@class GTLRCloudDebugger_SourceContext;
@class GTLRCloudDebugger_SourceLocation;
@class GTLRCloudDebugger_StackFrame;
@class GTLRCloudDebugger_StatusMessage;
@class GTLRCloudDebugger_Variable;

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudDebugger_AliasContext.kind

/**
 *  Do not use.
 *
 *  Value: "ANY"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_AliasContext_Kind_Any;
/**
 *  Git tag
 *
 *  Value: "FIXED"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_AliasContext_Kind_Fixed;
/**
 *  Git branch
 *
 *  Value: "MOVABLE"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_AliasContext_Kind_Movable;
/**
 *  OTHER is used to specify non-standard aliases, those not of the kinds
 *  above. For example, if a Git repo has a ref named "refs/foo/bar", it
 *  is considered to be of kind OTHER.
 *
 *  Value: "OTHER"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_AliasContext_Kind_Other;

// ----------------------------------------------------------------------------
// GTLRCloudDebugger_Breakpoint.action

/**
 *  Capture stack frame and variables and update the breakpoint.
 *  The data is only captured once. After that the breakpoint is set
 *  in a final state.
 *
 *  Value: "CAPTURE"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_Breakpoint_Action_Capture;
/**
 *  Log each breakpoint hit. The breakpoint remains active until
 *  deleted or expired.
 *
 *  Value: "LOG"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_Breakpoint_Action_Log;

// ----------------------------------------------------------------------------
// GTLRCloudDebugger_Breakpoint.logLevel

/**
 *  Error log message.
 *
 *  Value: "ERROR"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_Breakpoint_LogLevel_Error;
/**
 *  Information log message.
 *
 *  Value: "INFO"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_Breakpoint_LogLevel_Info;
/**
 *  Warning log message.
 *
 *  Value: "WARNING"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_Breakpoint_LogLevel_Warning;

// ----------------------------------------------------------------------------
// GTLRCloudDebugger_StatusMessage.refersTo

/**
 *  Status applies to the breakpoint and is related to its age.
 *
 *  Value: "BREAKPOINT_AGE"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointAge;
/**
 *  Status applies to the breakpoint and is related to its condition.
 *
 *  Value: "BREAKPOINT_CONDITION"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointCondition;
/**
 *  Status applies to the breakpoint and is related to its expressions.
 *
 *  Value: "BREAKPOINT_EXPRESSION"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointExpression;
/**
 *  Status applies to the breakpoint and is related to its location.
 *
 *  Value: "BREAKPOINT_SOURCE_LOCATION"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointSourceLocation;
/**
 *  Status doesn't refer to any particular input.
 *
 *  Value: "UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_Unspecified;
/**
 *  Status applies to the entire variable.
 *
 *  Value: "VARIABLE_NAME"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_VariableName;
/**
 *  Status applies to variable value (variable name is valid).
 *
 *  Value: "VARIABLE_VALUE"
 */
GTLR_EXTERN NSString * const kGTLRCloudDebugger_StatusMessage_RefersTo_VariableValue;

/**
 *  An alias to a repo revision.
 */
@interface GTLRCloudDebugger_AliasContext : GTLRObject

/**
 *  The alias kind.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudDebugger_AliasContext_Kind_Any Do not use. (Value:
 *        "ANY")
 *    @arg @c kGTLRCloudDebugger_AliasContext_Kind_Fixed Git tag (Value:
 *        "FIXED")
 *    @arg @c kGTLRCloudDebugger_AliasContext_Kind_Movable Git branch (Value:
 *        "MOVABLE")
 *    @arg @c kGTLRCloudDebugger_AliasContext_Kind_Other OTHER is used to
 *        specify non-standard aliases, those not of the kinds
 *        above. For example, if a Git repo has a ref named "refs/foo/bar", it
 *        is considered to be of kind OTHER. (Value: "OTHER")
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The alias name. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Represents the breakpoint specification, status and results.
 */
@interface GTLRCloudDebugger_Breakpoint : GTLRObject

/**
 *  Action that the agent should perform when the code at the
 *  breakpoint location is hit.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudDebugger_Breakpoint_Action_Capture Capture stack frame
 *        and variables and update the breakpoint.
 *        The data is only captured once. After that the breakpoint is set
 *        in a final state. (Value: "CAPTURE")
 *    @arg @c kGTLRCloudDebugger_Breakpoint_Action_Log Log each breakpoint hit.
 *        The breakpoint remains active until
 *        deleted or expired. (Value: "LOG")
 */
@property(nonatomic, copy, nullable) NSString *action;

/**
 *  Condition that triggers the breakpoint.
 *  The condition is a compound boolean expression composed using expressions
 *  in a programming language at the source location.
 */
@property(nonatomic, copy, nullable) NSString *condition;

/** Time this breakpoint was created by the server in seconds resolution. */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Values of evaluated expressions at breakpoint time.
 *  The evaluated expressions appear in exactly the same order they
 *  are listed in the `expressions` field.
 *  The `name` field holds the original expression text, the `value` or
 *  `members` field holds the result of the evaluated expression.
 *  If the expression cannot be evaluated, the `status` inside the `Variable`
 *  will indicate an error and contain the error text.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Variable *> *evaluatedExpressions;

/**
 *  List of read-only expressions to evaluate at the breakpoint location.
 *  The expressions are composed using expressions in the programming language
 *  at the source location. If the breakpoint action is `LOG`, the evaluated
 *  expressions are included in log statements.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *expressions;

/**
 *  Time this breakpoint was finalized as seen by the server in seconds
 *  resolution.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *finalTime;

/**
 *  Breakpoint identifier, unique in the scope of the debuggee.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  When true, indicates that this is a final result and the
 *  breakpoint state will not change from here on.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isFinalState;

/**
 *  A set of custom breakpoint properties, populated by the agent, to be
 *  displayed to the user.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Breakpoint_Labels *labels;

/** Breakpoint source location. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_SourceLocation *location;

/**
 *  Indicates the severity of the log. Only relevant when action is `LOG`.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudDebugger_Breakpoint_LogLevel_Error Error log message.
 *        (Value: "ERROR")
 *    @arg @c kGTLRCloudDebugger_Breakpoint_LogLevel_Info Information log
 *        message. (Value: "INFO")
 *    @arg @c kGTLRCloudDebugger_Breakpoint_LogLevel_Warning Warning log
 *        message. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *logLevel;

/**
 *  Only relevant when action is `LOG`. Defines the message to log when
 *  the breakpoint hits. The message may include parameter placeholders `$0`,
 *  `$1`, etc. These placeholders are replaced with the evaluated value
 *  of the appropriate expression. Expressions not referenced in
 *  `log_message_format` are not logged.
 *  Example: `Message received, id = $0, count = $1` with
 *  `expressions` = `[ message.id, message.count ]`.
 */
@property(nonatomic, copy, nullable) NSString *logMessageFormat;

/** The stack at breakpoint time. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_StackFrame *> *stackFrames;

/**
 *  Breakpoint status.
 *  The status includes an error flag and a human readable message.
 *  This field is usually unset. The message can be either
 *  informational or an error message. Regardless, clients should always
 *  display the text message back to the user.
 *  Error status indicates complete failure of the breakpoint.
 *  Example (non-final state): `Still loading symbols...`
 *  Examples (final state):
 *  * `Invalid line number` referring to location
 *  * `Field f not found in class C` referring to condition
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_StatusMessage *status;

/** E-mail address of the user that created this breakpoint */
@property(nonatomic, copy, nullable) NSString *userEmail;

/**
 *  The `variable_table` exists to aid with computation, memory and network
 *  traffic optimization. It enables storing a variable once and reference
 *  it from multiple variables, including variables stored in the
 *  `variable_table` itself.
 *  For example, the same `this` object, which may appear at many levels of
 *  the stack, can have all of its data stored once in this table. The
 *  stack frame variables then would hold only a reference to it.
 *  The variable `var_table_index` field is an index into this repeated field.
 *  The stored objects are nameless and get their name from the referencing
 *  variable. The effective variable is a merge of the referencing variable
 *  and the referenced variable.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Variable *> *variableTable;

@end


/**
 *  A set of custom breakpoint properties, populated by the agent, to be
 *  displayed to the user.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudDebugger_Breakpoint_Labels : GTLRObject
@end


/**
 *  A CloudRepoSourceContext denotes a particular revision in a cloud
 *  repo (a repo hosted by the Google Cloud Platform).
 */
@interface GTLRCloudDebugger_CloudRepoSourceContext : GTLRObject

/** An alias, which may be a branch or tag. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_AliasContext *aliasContext;

/** The name of an alias (branch, tag, etc.). */
@property(nonatomic, copy, nullable) NSString *aliasName;

/** The ID of the repo. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_RepoId *repoId;

/** A revision ID. */
@property(nonatomic, copy, nullable) NSString *revisionId;

@end


/**
 *  A CloudWorkspaceId is a unique identifier for a cloud workspace.
 *  A cloud workspace is a place associated with a repo where modified files
 *  can be stored before they are committed.
 */
@interface GTLRCloudDebugger_CloudWorkspaceId : GTLRObject

/**
 *  The unique name of the workspace within the repo. This is the name
 *  chosen by the client in the Source API's CreateWorkspace method.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** The ID of the repo containing the workspace. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_RepoId *repoId;

@end


/**
 *  A CloudWorkspaceSourceContext denotes a workspace at a particular snapshot.
 */
@interface GTLRCloudDebugger_CloudWorkspaceSourceContext : GTLRObject

/**
 *  The ID of the snapshot.
 *  An empty snapshot_id refers to the most recent snapshot.
 */
@property(nonatomic, copy, nullable) NSString *snapshotId;

/** The ID of the workspace. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_CloudWorkspaceId *workspaceId;

@end


/**
 *  Represents the application to debug. The application may include one or more
 *  replicated processes executing the same code. Each of these processes is
 *  attached with a debugger agent, carrying out the debugging commands.
 *  The agents attached to the same debuggee are identified by using exactly the
 *  same field values when registering.
 */
@interface GTLRCloudDebugger_Debuggee : GTLRObject

/**
 *  Version ID of the agent release. The version ID is structured as
 *  following: `domain/type/vmajor.minor` (for example
 *  `google.com/gcp-java/v1.1`).
 */
@property(nonatomic, copy, nullable) NSString *agentVersion;

/**
 *  Human readable description of the debuggee.
 *  Including a human-readable project name, environment name and version
 *  information is recommended.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  References to the locations and revisions of the source code used in the
 *  deployed application.
 *  Contexts describing a remote repo related to the source code
 *  have a `category` label of `remote_repo`. Source snapshot source
 *  contexts have a `category` of `snapshot`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_ExtendedSourceContext *> *extSourceContexts;

/**
 *  Unique identifier for the debuggee generated by the controller service.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  If set to `true`, indicates that the agent should disable itself and
 *  detach from the debuggee.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isDisabled;

/**
 *  If set to `true`, indicates that the debuggee is considered as inactive by
 *  the Controller service.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isInactive;

/**
 *  A set of custom debuggee properties, populated by the agent, to be
 *  displayed to the user.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Debuggee_Labels *labels;

/**
 *  Project the debuggee is associated with.
 *  Use the project number when registering a Google Cloud Platform project.
 */
@property(nonatomic, copy, nullable) NSString *project;

/**
 *  References to the locations and revisions of the source code used in the
 *  deployed application.
 *  NOTE: This field is deprecated. Consumers should use
 *  `ext_source_contexts` if it is not empty. Debug agents should populate
 *  both this field and `ext_source_contexts`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_SourceContext *> *sourceContexts;

/**
 *  Human readable message to be displayed to the user about this debuggee.
 *  Absence of this field indicates no status. The message can be either
 *  informational or an error status.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_StatusMessage *status;

/**
 *  Debuggee uniquifier within the project.
 *  Any string that identifies the application within the project can be used.
 *  Including environment and version or build IDs is recommended.
 */
@property(nonatomic, copy, nullable) NSString *uniquifier;

@end


/**
 *  A set of custom debuggee properties, populated by the agent, to be
 *  displayed to the user.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudDebugger_Debuggee_Labels : GTLRObject
@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRCloudDebugger_Empty : GTLRObject
@end


/**
 *  An ExtendedSourceContext is a SourceContext combined with additional
 *  details describing the context.
 */
@interface GTLRCloudDebugger_ExtendedSourceContext : GTLRObject

/** Any source context. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_SourceContext *context;

/** Labels with user defined metadata. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_ExtendedSourceContext_Labels *labels;

@end


/**
 *  Labels with user defined metadata.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRCloudDebugger_ExtendedSourceContext_Labels : GTLRObject
@end


/**
 *  Represents a message with parameters.
 */
@interface GTLRCloudDebugger_FormatMessage : GTLRObject

/**
 *  Format template for the message. The `format` uses placeholders `$0`,
 *  `$1`, etc. to reference parameters. `$$` can be used to denote the `$`
 *  character.
 *  Examples:
 *  * `Failed to load '$0' which helps debug $1 the first time it
 *  is loaded. Again, $0 is very important.`
 *  * `Please pay $$10 to use $0 instead of $1.`
 */
@property(nonatomic, copy, nullable) NSString *format;

/** Optional parameters to be embedded into the message. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *parameters;

@end


/**
 *  A SourceContext referring to a Gerrit project.
 */
@interface GTLRCloudDebugger_GerritSourceContext : GTLRObject

/** An alias, which may be a branch or tag. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_AliasContext *aliasContext;

/** The name of an alias (branch, tag, etc.). */
@property(nonatomic, copy, nullable) NSString *aliasName;

/**
 *  The full project name within the host. Projects may be nested, so
 *  "project/subproject" is a valid project name.
 *  The "repo name" is hostURI/project.
 */
@property(nonatomic, copy, nullable) NSString *gerritProject;

/** The URI of a running Gerrit instance. */
@property(nonatomic, copy, nullable) NSString *hostUri;

/** A revision (commit) ID. */
@property(nonatomic, copy, nullable) NSString *revisionId;

@end


/**
 *  Response for getting breakpoint information.
 */
@interface GTLRCloudDebugger_GetBreakpointResponse : GTLRObject

/**
 *  Complete breakpoint state.
 *  The fields `id` and `location` are guaranteed to be set.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Breakpoint *breakpoint;

@end


/**
 *  A GitSourceContext denotes a particular revision in a third party Git
 *  repository (e.g. GitHub).
 */
@interface GTLRCloudDebugger_GitSourceContext : GTLRObject

/**
 *  Git commit hash.
 *  required.
 */
@property(nonatomic, copy, nullable) NSString *revisionId;

/** Git repository URL. */
@property(nonatomic, copy, nullable) NSString *url;

@end


/**
 *  Response for listing active breakpoints.
 */
@interface GTLRCloudDebugger_ListActiveBreakpointsResponse : GTLRObject

/**
 *  List of all active breakpoints.
 *  The fields `id` and `location` are guaranteed to be set on each breakpoint.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Breakpoint *> *breakpoints;

/**
 *  A wait token that can be used in the next method call to block until
 *  the list of breakpoints changes.
 */
@property(nonatomic, copy, nullable) NSString *nextWaitToken;

/**
 *  The `wait_expired` field is set to true by the server when the
 *  request times out and the field `success_on_timeout` is set to true.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *waitExpired;

@end


/**
 *  Response for listing breakpoints.
 */
@interface GTLRCloudDebugger_ListBreakpointsResponse : GTLRObject

/**
 *  List of breakpoints matching the request.
 *  The fields `id` and `location` are guaranteed to be set on each breakpoint.
 *  The fields: `stack_frames`, `evaluated_expressions` and `variable_table`
 *  are cleared on each breakpoint regardless of its status.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Breakpoint *> *breakpoints;

/**
 *  A wait token that can be used in the next call to `list` (REST) or
 *  `ListBreakpoints` (RPC) to block until the list of breakpoints has changes.
 */
@property(nonatomic, copy, nullable) NSString *nextWaitToken;

@end


/**
 *  Response for listing debuggees.
 */
@interface GTLRCloudDebugger_ListDebuggeesResponse : GTLRObject

/**
 *  List of debuggees accessible to the calling user.
 *  Note that the `description` field is the only human readable field
 *  that should be displayed to the user.
 *  The fields `debuggee.id` and `description` fields are guaranteed to be
 *  set on each debuggee.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Debuggee *> *debuggees;

@end


/**
 *  Selects a repo using a Google Cloud Platform project ID
 *  (e.g. winged-cargo-31) and a repo name within that project.
 */
@interface GTLRCloudDebugger_ProjectRepoId : GTLRObject

/** The ID of the project. */
@property(nonatomic, copy, nullable) NSString *projectId;

/** The name of the repo. Leave empty for the default repo. */
@property(nonatomic, copy, nullable) NSString *repoName;

@end


/**
 *  Request to register a debuggee.
 */
@interface GTLRCloudDebugger_RegisterDebuggeeRequest : GTLRObject

/**
 *  Debuggee information to register.
 *  The fields `project`, `uniquifier`, `description` and `agent_version`
 *  of the debuggee must be set.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Debuggee *debuggee;

@end


/**
 *  Response for registering a debuggee.
 */
@interface GTLRCloudDebugger_RegisterDebuggeeResponse : GTLRObject

/**
 *  Debuggee resource.
 *  The field `id` is guranteed to be set (in addition to the echoed fields).
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Debuggee *debuggee;

@end


/**
 *  A unique identifier for a cloud repo.
 */
@interface GTLRCloudDebugger_RepoId : GTLRObject

/** A combination of a project ID and a repo name. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_ProjectRepoId *projectRepoId;

/** A server-assigned, globally unique identifier. */
@property(nonatomic, copy, nullable) NSString *uid;

@end


/**
 *  Response for setting a breakpoint.
 */
@interface GTLRCloudDebugger_SetBreakpointResponse : GTLRObject

/**
 *  Breakpoint resource.
 *  The field `id` is guaranteed to be set (in addition to the echoed fileds).
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Breakpoint *breakpoint;

@end


/**
 *  A SourceContext is a reference to a tree of files. A SourceContext together
 *  with a path point to a unique revision of a single file or directory.
 */
@interface GTLRCloudDebugger_SourceContext : GTLRObject

/** A SourceContext referring to a revision in a cloud repo. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_CloudRepoSourceContext *cloudRepo;

/** A SourceContext referring to a snapshot in a cloud workspace. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_CloudWorkspaceSourceContext *cloudWorkspace;

/** A SourceContext referring to a Gerrit project. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_GerritSourceContext *gerrit;

/** A SourceContext referring to any third party Git repo (e.g. GitHub). */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_GitSourceContext *git;

@end


/**
 *  Represents a location in the source code.
 */
@interface GTLRCloudDebugger_SourceLocation : GTLRObject

/**
 *  Line inside the file. The first line in the file has the value `1`.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *line;

/** Path to the source file within the source context of the target binary. */
@property(nonatomic, copy, nullable) NSString *path;

@end


/**
 *  Represents a stack frame context.
 */
@interface GTLRCloudDebugger_StackFrame : GTLRObject

/**
 *  Set of arguments passed to this function.
 *  Note that this might not be populated for all stack frames.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Variable *> *arguments;

/** Demangled function name at the call site. */
@property(nonatomic, copy, nullable) NSString *function;

/**
 *  Set of local variables at the stack frame location.
 *  Note that this might not be populated for all stack frames.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Variable *> *locals;

/** Source location of the call site. */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_SourceLocation *location;

@end


/**
 *  Represents a contextual status message.
 *  The message can indicate an error or informational status, and refer to
 *  specific parts of the containing object.
 *  For example, the `Breakpoint.status` field can indicate an error referring
 *  to the `BREAKPOINT_SOURCE_LOCATION` with the message `Location not found`.
 */
@interface GTLRCloudDebugger_StatusMessage : GTLRObject

/**
 *  Status message text.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_FormatMessage *descriptionProperty;

/**
 *  Distinguishes errors from informational messages.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *isError;

/**
 *  Reference to which the message applies.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointAge Status
 *        applies to the breakpoint and is related to its age. (Value:
 *        "BREAKPOINT_AGE")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointCondition
 *        Status applies to the breakpoint and is related to its condition.
 *        (Value: "BREAKPOINT_CONDITION")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointExpression
 *        Status applies to the breakpoint and is related to its expressions.
 *        (Value: "BREAKPOINT_EXPRESSION")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_BreakpointSourceLocation
 *        Status applies to the breakpoint and is related to its location.
 *        (Value: "BREAKPOINT_SOURCE_LOCATION")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_Unspecified Status
 *        doesn't refer to any particular input. (Value: "UNSPECIFIED")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_VariableName Status
 *        applies to the entire variable. (Value: "VARIABLE_NAME")
 *    @arg @c kGTLRCloudDebugger_StatusMessage_RefersTo_VariableValue Status
 *        applies to variable value (variable name is valid). (Value:
 *        "VARIABLE_VALUE")
 */
@property(nonatomic, copy, nullable) NSString *refersTo;

@end


/**
 *  Request to update an active breakpoint.
 */
@interface GTLRCloudDebugger_UpdateActiveBreakpointRequest : GTLRObject

/**
 *  Updated breakpoint information.
 *  The field `id` must be set.
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_Breakpoint *breakpoint;

@end


/**
 *  Response for updating an active breakpoint.
 *  The message is defined to allow future extensions.
 */
@interface GTLRCloudDebugger_UpdateActiveBreakpointResponse : GTLRObject
@end


/**
 *  Represents a variable or an argument possibly of a compound object type.
 *  Note how the following variables are represented:
 *  1) A simple variable:
 *  int x = 5
 *  { name: "x", value: "5", type: "int" } // Captured variable
 *  2) A compound object:
 *  struct T {
 *  int m1;
 *  int m2;
 *  };
 *  T x = { 3, 7 };
 *  { // Captured variable
 *  name: "x",
 *  type: "T",
 *  members { name: "m1", value: "3", type: "int" },
 *  members { name: "m2", value: "7", type: "int" }
 *  }
 *  3) A pointer where the pointee was captured:
 *  T x = { 3, 7 };
 *  T* p = &x;
 *  { // Captured variable
 *  name: "p",
 *  type: "T*",
 *  value: "0x00500500",
 *  members { name: "m1", value: "3", type: "int" },
 *  members { name: "m2", value: "7", type: "int" }
 *  }
 *  4) A pointer where the pointee was not captured:
 *  T* p = new T;
 *  { // Captured variable
 *  name: "p",
 *  type: "T*",
 *  value: "0x00400400"
 *  status { is_error: true, description { format: "unavailable" } }
 *  }
 *  The status should describe the reason for the missing value,
 *  such as `<optimized out>`, `<inaccessible>`, `<pointers limit reached>`.
 *  Note that a null pointer should not have members.
 *  5) An unnamed value:
 *  int* p = new int(7);
 *  { // Captured variable
 *  name: "p",
 *  value: "0x00500500",
 *  type: "int*",
 *  members { value: "7", type: "int" } }
 *  6) An unnamed pointer where the pointee was not captured:
 *  int* p = new int(7);
 *  int** pp = &p;
 *  { // Captured variable
 *  name: "pp",
 *  value: "0x00500500",
 *  type: "int**",
 *  members {
 *  value: "0x00400400",
 *  type: "int*"
 *  status {
 *  is_error: true,
 *  description: { format: "unavailable" } }
 *  }
 *  }
 *  }
 *  To optimize computation, memory and network traffic, variables that
 *  repeat in the output multiple times can be stored once in a shared
 *  variable table and be referenced using the `var_table_index` field. The
 *  variables stored in the shared table are nameless and are essentially
 *  a partition of the complete variable. To reconstruct the complete
 *  variable, merge the referencing variable with the referenced variable.
 *  When using the shared variable table, the following variables:
 *  T x = { 3, 7 };
 *  T* p = &x;
 *  T& r = x;
 *  { name: "x", var_table_index: 3, type: "T" } // Captured variables
 *  { name: "p", value "0x00500500", type="T*", var_table_index: 3 }
 *  { name: "r", type="T&", var_table_index: 3 }
 *  { // Shared variable table entry #3:
 *  members { name: "m1", value: "3", type: "int" },
 *  members { name: "m2", value: "7", type: "int" }
 *  }
 *  Note that the pointer address is stored with the referencing variable
 *  and not with the referenced variable. This allows the referenced variable
 *  to be shared between pointers and references.
 *  The type field is optional. The debugger agent may or may not support it.
 */
@interface GTLRCloudDebugger_Variable : GTLRObject

/** Members contained or pointed to by the variable. */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudDebugger_Variable *> *members;

/** Name of the variable, if any. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Status associated with the variable. This field will usually stay
 *  unset. A status of a single variable only applies to that variable or
 *  expression. The rest of breakpoint data still remains valid. Variables
 *  might be reported in error state even when breakpoint is not in final
 *  state.
 *  The message may refer to variable name with `refers_to` set to
 *  `VARIABLE_NAME`. Alternatively `refers_to` will be set to `VARIABLE_VALUE`.
 *  In either case variable value and members will be unset.
 *  Example of error message applied to name: `Invalid expression syntax`.
 *  Example of information message applied to value: `Not captured`.
 *  Examples of error message applied to value:
 *  * `Malformed string`,
 *  * `Field f not found in class C`
 *  * `Null pointer dereference`
 */
@property(nonatomic, strong, nullable) GTLRCloudDebugger_StatusMessage *status;

/**
 *  Variable type (e.g. `MyClass`). If the variable is split with
 *  `var_table_index`, `type` goes next to `value`. The interpretation of
 *  a type is agent specific. It is recommended to include the dynamic type
 *  rather than a static type of an object.
 */
@property(nonatomic, copy, nullable) NSString *type;

/** Simple value of the variable. */
@property(nonatomic, copy, nullable) NSString *value;

/**
 *  Reference to a variable in the shared variable table. More than
 *  one variable can reference the same variable in the table. The
 *  `var_table_index` field is an index into `variable_table` in Breakpoint.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *varTableIndex;

@end

NS_ASSUME_NONNULL_END
