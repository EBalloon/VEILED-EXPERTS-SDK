// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t {
	Success = 0,
	Blocked = 1,
	OffPath = 2,
	Aborted = 3,
	Skipped_DEPRECATED = 4,
	Invalid = 5,
	EPathFollowingResult_MAX = 6,
};

// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t {
	Processing = 0,
	Success = 1,
	Failed = 2,
	Aborted = 3,
	OwnerLost = 4,
	MissingParam = 5,
	EEnvQueryStatus_MAX = 6,
};

// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t {
	OnEveryPerception = 0,
	OnPerceptionChange = 1,
	EAISenseNotifyType_MAX = 2,
};

// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t {
	Lowest = 0,
	Low = 64,
	AutonomousAI = 127,
	High = 192,
	Ultimate = 254,
	EAITaskPriority_MAX = 255,
};

// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t {
	Less = 0,
	LessOrEqual = 1,
	Equal = 2,
	NotEqual = 3,
	GreaterOrEqual = 4,
	Greater = 5,
	IsTrue = 6,
	MAX = 7,
};

// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t {
	Animation = 0,
	Logic = 1,
	Script = 2,
	Gameplay = 3,
	MAX = 4,
};

// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t {
	SoftScript = 0,
	Logic = 1,
	HardScript = 2,
	Reaction = 3,
	Ultimate = 4,
	MAX = 5,
};

// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t {
	Invalid = 0,
	FailedToStart = 1,
	InstantAbort = 2,
	FinishedAborting = 3,
	FinishedExecution = 4,
	Push = 5,
	EPawnActionEventType_MAX = 6,
};

// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t {
	NotStarted = 0,
	InProgress = 1,
	Success = 2,
	Failed = 3,
	Aborted = 4,
	EPawnActionResult_MAX = 5,
};

// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t {
	NeverStarted = 0,
	NotBeingAborted = 1,
	MarkPendingAbort = 2,
	LatentAbortInProgress = 3,
	AbortDone = 4,
	MAX = 5,
};

// Enum AIModule.FAIDistanceType
enum class FAIDistanceType : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	MAX = 3,
};

// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3,
};

// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t {
	None = 0,
	LowerPriority = 1,
	Self = 2,
	Both = 3,
	EBTFlowAbortMode_MAX = 4,
};

// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t {
	Succeeded = 0,
	Failed = 1,
	Aborted = 2,
	InProgress = 3,
	EBTNodeResult_MAX = 4,
};

// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Contain = 2,
	NotContain = 3,
	ETextKeyOperation_MAX = 4,
};

// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t {
	Equal = 0,
	NotEqual = 1,
	Less = 2,
	LessOrEqual = 3,
	Greater = 4,
	GreaterOrEqual = 5,
	EArithmeticKeyOperation_MAX = 6,
};

// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t {
	Set = 0,
	NotSet = 1,
	EBasicKeyOperation_MAX = 2,
};

// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t {
	AbortBackground = 0,
	WaitForBackground = 1,
	EBTParallelMode_MAX = 2,
};

// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t {
	Invalid = 0,
	Test = 1,
	And = 2,
	Or = 3,
	Not = 4,
	EBTDecoratorLogic_MAX = 5,
};

// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t {
	FirstNode = 0,
	TaskNode = 1,
	EBTChildIndex_MAX = 2,
};

// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t {
	ValueChange = 0,
	ResultChange = 1,
	EBTBlackboardRestart_MAX = 2,
};

// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t {
	Equal = 0,
	NotEqual = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t {
	NavmeshRaycast2D = 0,
	HierarchicalQuery = 1,
	RegularPathFinding = 2,
	EPathExistanceQueryType_MAX = 3,
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t {
	BySpaceBetween = 0,
	ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t {
	Absolute = 0,
	RelativeToScores = 1,
	EEQSNormalizationType_MAX = 2,
};

// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t {
	Distance3D = 0,
	Distance2D = 1,
	DistanceZ = 2,
	DistanceAbsoluteZ = 3,
	EEnvTestDistance_MAX = 4,
};

// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t {
	Dot3D = 0,
	Dot2D = 1,
	EEnvTestDot_MAX = 2,
};

// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t {
	PathExist = 0,
	PathCost = 1,
	PathLength = 2,
	EEnvTestPathfinding_MAX = 3,
};

// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t {
	None = 0,
	SpecifiedValue = 1,
	FilterThreshold = 2,
	EEnvQueryTestClamping_MAX = 3,
};

// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t {
	TwoPoints = 0,
	Rotation = 1,
	EEnvDirection_MAX = 2,
};

// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t {
	Box = 0,
	Sphere = 1,
	Capsule = 2,
	EEnvOverlapShape_MAX = 3,
};

// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t {
	Line = 0,
	Box = 1,
	Sphere = 2,
	Capsule = 3,
	EEnvTraceShape_MAX = 4,
};

// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t {
	None = 0,
	Navigation = 1,
	Geometry = 2,
	NavigationOverLedges = 3,
	EEnvQueryTrace_MAX = 4,
};

// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	MAX = 3,
};

// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t {
	Float = 0,
	Int = 1,
	Bool = 2,
	EEnvQueryParam_MAX = 3,
};

// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t {
	SingleResult = 0,
	RandomBest5Pct = 1,
	RandomBest25Pct = 2,
	AllMatching = 3,
	EEnvQueryRunMode_MAX = 4,
};

// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t {
	AverageScore = 0,
	MinScore = 1,
	MaxScore = 2,
	Multiply = 3,
	EEnvTestScoreOperator_MAX = 4,
};

// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t {
	AllPass = 0,
	AnyPass = 1,
	EEnvTestFilterOperator_MAX = 2,
};

// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	EEnvTestCost_MAX = 3,
};

// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t {
	None = 0,
	Square = 1,
	Inverse = 2,
	Unused = 3,
	Constant = 4,
	Skip = 5,
	EEnvTestWeight_MAX = 6,
};

// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t {
	Linear = 0,
	Square = 1,
	InverseLinear = 2,
	SquareRoot = 3,
	Constant = 4,
	EEnvTestScoreEquation_MAX = 5,
};

// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t {
	Minimum = 0,
	Maximum = 1,
	Range = 2,
	Match = 3,
	EEnvTestFilterType_MAX = 4,
};

// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t {
	Filter = 0,
	Score = 1,
	FilterAndScore = 2,
	EEnvTestPurpose_MAX = 3,
};

// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t {
	All = 0,
	Best5Pct = 1,
	Best25Pct = 2,
	EEnvQueryHightlightMode_MAX = 3,
};

// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t {
	Friendly = 0,
	Neutral = 1,
	Hostile = 2,
	ETeamAttitude_MAX = 3,
};

// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t {
	Failed = 0,
	AlreadyAtGoal = 1,
	RequestSuccessful = 2,
	EPathFollowingRequestResult_MAX = 3,
};

// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t {
	Error = 0,
	NoMove = 1,
	DirectMove = 2,
	PartialPath = 3,
	PathToGoal = 4,
	EPathFollowingAction_MAX = 5,
};

// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t {
	Idle = 0,
	Waiting = 1,
	Paused = 2,
	Moving = 3,
	EPathFollowingStatus_MAX = 4,
};

// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t {
	RequireSuccess = 0,
	IgnoreFailure = 1,
	EPawnActionFailHandling_MAX = 2,
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t {
	CopyBeforeTriggering = 0,
	ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t {
	UsePathfinding = 0,
	StraightLine = 1,
	EPawnActionMoveMode_MAX = 2,
};

// Class AIModule.AIAsyncTaskBlueprintProxy
class UAIAsyncTaskBlueprintProxy : public Object {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x28 (16)
	struct FMulticastInlineDelegate OnFail; // 0x38 (16)

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x35979C0>
};

// Class AIModule.AIController
class AAIController : public AController {

public:

	char bStartAILogicOnPossess : 1; // 0x2D0 (1)
	char pad_298_1 : 7; // 0x298 (1)
	char pad_299_0 : 1; // 0x299 (1)
	char bStopAILogicOnUnposses : 1; // 0x2D0 (1)
	char pad_299_2 : 6; // 0x299 (1)
	char pad_29A_0 : 2; // 0x29A (1)
	char bLOSflag : 1; // 0x2D0 (1)
	char pad_29A_3 : 5; // 0x29A (1)
	char pad_29B_0 : 3; // 0x29B (1)
	char bSkipExtraLOSChecks : 1; // 0x2D0 (1)
	char pad_29B_4 : 4; // 0x29B (1)
	char pad_29C_0 : 4; // 0x29C (1)
	char bAllowStrafe : 1; // 0x2D0 (1)
	char pad_29C_5 : 3; // 0x29C (1)
	char pad_29D_0 : 5; // 0x29D (1)
	char bWantsPlayerState : 1; // 0x2D0 (1)
	char pad_29D_6 : 2; // 0x29D (1)
	char pad_29E_0 : 6; // 0x29E (1)
	char bSetControlRotationFromPawnOrientation : 1; // 0x2D0 (1)
	char pad_29E_7 : 1; // 0x29E (1)
	struct UPathFollowingComponent PathFollowingComponent; // 0x2D8 (8)
	struct UBrainComponent BrainComponent; // 0x2E0 (8)
	struct UAIPerceptionComponent PerceptionComponent; // 0x2E8 (8)
	struct UPawnActionsComponent ActionsComp; // 0x2F0 (8)
	struct UBlackboardComponent Blackboard; // 0x2F8 (8)
	struct UGameplayTasksComponent CachedGameplayTasksComponent; // 0x300 (8)
	struct UClass* DefaultNavigationFilterClass; // 0x308 (8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310 (16)

	bool UseBlackboard(struct UBlackboardData BlackboardAsset, struct UBlackboardComponent& BlackboardComponent); // Function AIModule.AIController.UseBlackboard(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3598840>
	void UnclaimTaskResource(struct UClass* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3598610>
	void SetPathFollowingComponent(struct UPathFollowingComponent NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3598140>
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35980B0>
	bool RunBehaviorTree(struct UBehaviorTree BTAsset); // Function AIModule.AIController.RunBehaviorTree(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597EE0>
	void OnUsingBlackBoard(struct UBlackboardComponent BlackboardComp, struct UBlackboardData BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed(Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x35978F0>
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597680>
	enum class EPathFollowingRequestResult MoveToActor(struct UActor Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597460>
	void K2_SetFocus(struct UActor NewFocus); // Function AIModule.AIController.K2_SetFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35972D0>
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597240>
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597220>
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3597040>
	struct UPathFollowingComponent GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596D50>
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596D20>
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596BF0>
	struct UActor GetFocusActor(); // Function AIModule.AIController.GetFocusActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596BC0>
	struct FVector GetFocalPointOnActor(struct UActor Actor); // Function AIModule.AIController.GetFocalPointOnActor(Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596B10>
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596AD0>
	struct UAIPerceptionComponent GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35967C0>
	void ClaimTaskResource(struct UClass* ResourceClass); // Function AIModule.AIController.ClaimTaskResource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35964E0>
};

// Class AIModule.AIDataProvider_QueryParams
class UAIDataProvider_QueryParams : public UAIDataProvider {

public:

	struct FName ParamName; // 0x28 (8)
	float FloatValue; // 0x30 (4)
	int32_t IntValue; // 0x34 (4)
	bool BoolValue; // 0x38 (1)
};

// Class AIModule.AIDataProvider_Random
class UAIDataProvider_Random : public UAIDataProvider_QueryParams {

public:

	float Min; // 0x40 (4)
	float Max; // 0x44 (4)
	char bInteger : 1; // 0x48 (1)
};

// Class AIModule.AIPerceptionComponent
class UAIPerceptionComponent : public UActorComponent {

public:

	struct TArray<struct UAISenseConfig> SensesConfig; // 0xB0 (16)
	struct UClass* DominantSense; // 0xC0 (8)
	struct AAIController AIOwner; // 0xD8 (8)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x160 (16)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170 (16)

	void SetSenseEnabled(struct UClass* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35981C0>
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597EC0>
	void OnOwnerEndPlay(struct UActor Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x3597A80>
	void GetPerceivedHostileActors(struct TArray<struct UActor>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596E60>
	void GetPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596D70>
	void GetKnownPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x3596C30>
	void GetCurrentlyPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35969E0>
	bool GetActorsPerception(struct UActor Actor, struct FActorPerceptionBlueprintInfo& Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35967E0>
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3596720>
};

// Class AIModule.AIPerceptionStimuliSourceComponent
class UAIPerceptionStimuliSourceComponent : public UActorComponent {

public:

	char bAutoRegisterAsSource : 1; // 0xB0 (1)
	char pad_B0_1 : 7; // 0xB0 (1)
	struct TArray<struct UClass*> RegisterAsSourceForSenses; // 0xB8 (16)

	void UnregisterFromSense(struct UClass* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35987C0>
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35987A0>
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597D70>
	void RegisterForSense(struct UClass* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597C00>
};

// Class AIModule.AISubsystem
class UAISubsystem : public Object {

public:

	struct UAISystem AISystem; // 0x30 (8)
};

// Class AIModule.AIPerceptionSystem
class UAIPerceptionSystem : public UAISubsystem {

public:

	struct TArray<struct UAISense> Senses; // 0x88 (16)
	float PerceptionAgingRate; // 0x98 (4)

	void ReportPerceptionEvent(struct Object WorldContextObject, struct UAISenseEvent PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597E10>
	void ReportEvent(struct UAISenseEvent PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597D90>
	bool RegisterPerceptionStimuliSource(struct Object WorldContextObject, struct UClass* Sense, struct UActor Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3597C80>
	void OnPerceptionStimuliSourceEndPlay(struct UActor Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x3597B40>
	struct UClass* GetSenseClassForStimulus(struct Object WorldContextObject, struct FAIStimulus& Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3596F10>
};

// Class AIModule.AISense
class UAISense : public Object {

public:

	float DefaultExpirationAge; // 0x28 (4)
	enum class EAISenseNotifyType NotifyType; // 0x2C (1)
	char bWantsNewPawnNotification : 1; // 0x30 (1)
	char pad_2D_1 : 7; // 0x2D (1)
	char pad_2E_0 : 1; // 0x2E (1)
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30 (1)
	char pad_2E_2 : 6; // 0x2E (1)
	struct UAIPerceptionSystem PerceptionSystemInstance; // 0x38 (8)
};

// Class AIModule.AISense_Blueprint
class UAISense_Blueprint : public UAISense {

public:

	struct UClass* ListenerDataType; // 0x80 (8)
	struct TArray<struct UAIPerceptionComponent> ListenerContainer; // 0x88 (16)
	struct TArray<struct UAISenseEvent> UnprocessedEvents; // 0x98 (16)

	float OnUpdate(struct TArray<struct UAISenseEvent>& EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate(Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnListenerUpdated(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnListenerUnregistered(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnListenerRegistered(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void K2_OnNewPawn(struct APawn NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent>& ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x359C720>
	void GetAllListenerActors(struct TArray<struct UActor>& ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x359C670>
};

// Class AIModule.AISense_Damage
class UAISense_Damage : public UAISense {

public:

	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x80 (16)

	void ReportDamageEvent(struct Object WorldContextObject, struct UActor DamagedActor, struct UActor Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359C870>
};

// Class AIModule.AISense_Hearing
class UAISense_Hearing : public UAISense {

public:

	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x80 (16)
	float SpeedOfSoundSq; // 0x90 (4)

	void ReportNoiseEvent(struct Object WorldContextObject, struct FVector NoiseLocation, float Loudness, struct UActor Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359CA40>
};

// Class AIModule.AISense_Prediction
class UAISense_Prediction : public UAISense {

public:

	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x80 (16)

	void RequestPawnPredictionEvent(struct APawn Requestor, struct UActor PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359CD00>
	void RequestControllerPredictionEvent(struct AAIController Requestor, struct UActor PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359CC00>
};

// Class AIModule.AISense_Sight
class UAISense_Sight : public UAISense {

public:

	int32_t MaxTracesPerTick; // 0x148 (4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x14C (4)
	double MaxTimeSlicePerTick; // 0x150 (8)
	float HighImportanceQueryDistanceThreshold; // 0x158 (4)
	float MaxQueryImportance; // 0x160 (4)
	float SightLimitQueryImportance; // 0x164 (4)
};

// Class AIModule.AISense_Team
class UAISense_Team : public UAISense {

public:

	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x80 (16)
};

// Class AIModule.AISense_Touch
class UAISense_Touch : public UAISense {

public:

	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x80 (16)
};

// Class AIModule.AISenseConfig
class UAISenseConfig : public Object {

public:

	struct FColor DebugColor; // 0x28 (4)
	float MaxAge; // 0x2C (4)
	char bStartsEnabled : 1; // 0x30 (1)
};

// Class AIModule.AISenseConfig_Blueprint
class UAISenseConfig_Blueprint : public UAISenseConfig {

public:

	struct UClass* Implementation; // 0x48 (8)
};

// Class AIModule.AISenseConfig_Damage
class UAISenseConfig_Damage : public UAISenseConfig {

public:

	struct UClass* Implementation; // 0x48 (8)
};

// Class AIModule.AISenseConfig_Hearing
class UAISenseConfig_Hearing : public UAISenseConfig {

public:

	struct UClass* Implementation; // 0x48 (8)
	float HearingRange; // 0x50 (4)
	float LoSHearingRange; // 0x54 (4)
	char bUseLoSHearing : 1; // 0x58 (1)
	char pad_58_1 : 7; // 0x58 (1)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C (4)
};

// Class AIModule.AISenseConfig_Sight
class UAISenseConfig_Sight : public UAISenseConfig {

public:

	struct UClass* Implementation; // 0x48 (8)
	float SightRadius; // 0x50 (4)
	float LoseSightRadius; // 0x54 (4)
	float PeripheralVisionAngleDegrees; // 0x58 (4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C (4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60 (4)
};

// Class AIModule.AISenseEvent_Damage
class UAISenseEvent_Damage : public UAISenseEvent {

public:

	struct FAIDamageEvent Event; // 0x28 (48)
};

// Class AIModule.AISenseEvent_Hearing
class UAISenseEvent_Hearing : public UAISenseEvent {

public:

	struct FAINoiseEvent Event; // 0x28 (48)
};

// Class AIModule.AISystem
class UAISystem : public UAISystemBase {

public:

	struct FSoftClassPath PerceptionSystemClassName; // 0x58 (24)
	struct FSoftClassPath HotSpotManagerClassName; // 0x70 (24)
	float AcceptanceRadius; // 0x88 (4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8C (4)
	float PathfollowingNavLinkAcceptanceRadius; // 0x90 (4)
	bool bFinishMoveOnGoalOverlap; // 0x94 (1)
	bool bAcceptPartialPaths; // 0x95 (1)
	bool bAllowStrafing; // 0x96 (1)
	bool bEnableBTAITasks; // 0x97 (1)
	bool bAllowControllersAsEQSQuerier; // 0x98 (1)
	bool bEnableDebuggerPlugin; // 0x99 (1)
	bool bForgetStaleActors; // 0x9A (1)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x9B (1)
	struct UBehaviorTreeManager BehaviorTreeManager; // 0xA0 (8)
	struct UEnvQueryManager EnvironmentQueryManager; // 0xA8 (8)
	struct UAIPerceptionSystem PerceptionSystem; // 0xB0 (8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy> AllProxyObjects; // 0xB8 (16)
	struct UAIHotSpotManager HotSpotManager; // 0xC8 (8)
	struct UNavLocalGridManager NavLocalGrids; // 0xD0 (8)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose(Exec|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x25D7290>
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers(Exec|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x2B46D10>
};

// Class AIModule.AITask
class UAITask : public UGameplayTask {

public:

	struct AAIController OwnerController; // 0x68 (8)
};

// Class AIModule.AITask_MoveTo
class UAITask_MoveTo : public UAITask {

public:

	struct FMulticastInlineDelegate OnRequestFailed; // 0x70 (16)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x80 (16)
	struct FAIMoveRequest MoveRequest; // 0x90 (64)

	struct UAITask_MoveTo AIMoveTo(struct AAIController Controller, struct FVector GoalLocation, struct UActor GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo(Final|Native|Static|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359C290>
};

// Class AIModule.BehaviorTree
class UBehaviorTree : public Object {

public:

	struct UBTCompositeNode RootNode; // 0x30 (8)
	struct UBlackboardData BlackboardAsset; // 0x38 (8)
	struct TArray<struct UBTDecorator> RootDecorators; // 0x40 (16)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50 (16)
};

// Class AIModule.BrainComponent
class UBrainComponent : public UActorComponent {

public:

	struct UBlackboardComponent BlackboardComp; // 0xB8 (8)
	struct AAIController AIOwner; // 0xC0 (8)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1840>
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x3374BD0>
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A0F60>
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning(Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0E90>
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused(Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0E60>
};

// Class AIModule.BehaviorTreeComponent
class UBehaviorTreeComponent : public UBrainComponent {

public:

	struct TArray<struct UBTNode> NodeInstances; // 0x130 (16)
	struct UBehaviorTree DefaultBehaviorTreeAsset; // 0x268 (8)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359CEC0>
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x359C7D0>
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x359C560>
};

// Class AIModule.BehaviorTreeManager
class UBehaviorTreeManager : public Object {

public:

	int32_t MaxDebuggerSteps; // 0x28 (4)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30 (16)
	struct TArray<struct UBehaviorTreeComponent> ActiveComponents; // 0x40 (16)
};

// Class AIModule.BlackboardComponent
class UBlackboardComponent : public UActorComponent {

public:

	struct UBrainComponent BrainComp; // 0xB0 (8)
	struct UBlackboardData DefaultBlackboardAsset; // 0xB8 (8)
	struct UBlackboardData BlackboardAsset; // 0xC0 (8)
	struct TArray<struct UBlackboardKeyType> KeyInstances; // 0xE8 (16)

	void SetValueAsVector(struct FName& KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1750>
	void SetValueAsString(struct FName& KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1620>
	void SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1530>
	void SetValueAsObject(struct FName& KeyName, struct Object ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1460>
	void SetValueAsName(struct FName& KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1390>
	void SetValueAsInt(struct FName& KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A12C0>
	void SetValueAsFloat(struct FName& KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A11F0>
	void SetValueAsEnum(struct FName& KeyName, char EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1120>
	void SetValueAsClass(struct FName& KeyName, struct UClass* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A1050>
	void SetValueAsBool(struct FName& KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A0F80>
	bool IsVectorValueSet(struct FName& KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0EC0>
	struct FVector GetValueAsVector(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0D50>
	struct FString GetValueAsString(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsString(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0C70>
	struct FRotator GetValueAsRotator(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0BC0>
	struct Object GetValueAsObject(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0B20>
	struct FName GetValueAsName(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsName(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0A80>
	int32_t GetValueAsInt(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A09E0>
	float GetValueAsFloat(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0940>
	char GetValueAsEnum(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A08A0>
	struct UClass* GetValueAsClass(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0800>
	bool GetValueAsBool(struct FName& KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0760>
	bool GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0670>
	bool GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0580>
	void ClearValue(struct FName& KeyName); // Function AIModule.BlackboardComponent.ClearValue(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A04C0>
};

// Class AIModule.BlackboardData
class UBlackboardData : public UDataAsset {

public:

	struct UBlackboardData Parent; // 0x30 (8)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38 (16)
	char bHasSynchronizedKeys : 1; // 0x48 (1)
};

// Class AIModule.BlackboardKeyType_Class
class UBlackboardKeyType_Class : public UBlackboardKeyType {

public:

	struct UClass* BaseClass; // 0x30 (8)
};

// Class AIModule.BlackboardKeyType_Enum
class UBlackboardKeyType_Enum : public UBlackboardKeyType {

public:

	struct UEnum EnumType; // 0x30 (8)
	struct FString EnumName; // 0x38 (16)
	char bIsEnumNameValid : 1; // 0x48 (1)
};

// Class AIModule.BlackboardKeyType_NativeEnum
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType {

public:

	struct FString EnumName; // 0x30 (16)
	struct UEnum EnumType; // 0x40 (8)
};

// Class AIModule.BlackboardKeyType_Object
class UBlackboardKeyType_Object : public UBlackboardKeyType {

public:

	struct UClass* BaseClass; // 0x30 (8)
};

// Class AIModule.BlackboardKeyType_String
class UBlackboardKeyType_String : public UBlackboardKeyType {

public:

	struct FString StringValue; // 0x30 (16)
};

// Class AIModule.BTNode
class UBTNode : public Object {

public:

	struct FString NodeName; // 0x30 (16)
	struct UBehaviorTree TreeAsset; // 0x40 (8)
	struct UBTCompositeNode ParentNode; // 0x48 (8)
};

// Class AIModule.BTCompositeNode
class UBTCompositeNode : public UBTNode {

public:

	struct TArray<struct FBTCompositeChild> Children; // 0x58 (16)
	struct TArray<struct UBTService> Services; // 0x68 (16)
	char bApplyDecoratorScope : 1; // 0x88 (1)
};

// Class AIModule.BTComposite_SimpleParallel
class UBTComposite_SimpleParallel : public UBTCompositeNode {

public:

	enum class EBTParallelMode FinishMode; // 0x90 (1)
};

// Class AIModule.BTDecorator
class UBTDecorator : public UBTAuxiliaryNode {

public:

	char pad_60_0 : 7; // 0x60 (1)
	char bInverseCondition : 1; // 0x60 (1)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x64 (1)
};

// Class AIModule.BTDecorator_BlackboardBase
class UBTDecorator_BlackboardBase : public UBTDecorator {

public:

	struct FBlackboardKeySelector BlackboardKey; // 0x68 (40)
};

// Class AIModule.BTDecorator_Blackboard
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase {

public:

	int32_t IntValue; // 0x90 (4)
	float FloatValue; // 0x94 (4)
	struct FString StringValue; // 0x98 (16)
	struct FString CachedDescription; // 0xA8 (16)
	char OperationType; // 0xB8 (1)
	enum class EBTBlackboardRestart NotifyObserver; // 0xB9 (1)
};

// Class AIModule.BTDecorator_BlueprintBase
class UBTDecorator_BlueprintBase : public UBTDecorator {

public:

	struct AAIController AIOwner; // 0x68 (8)
	struct UActor ActorOwner; // 0x70 (8)
	struct TArray<struct FName> ObservedKeyNames; // 0x78 (16)
	char bShowPropertyDetails : 1; // 0x98 (1)
	char pad_88_1 : 7; // 0x88 (1)
	char pad_89_0 : 1; // 0x89 (1)
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98 (1)
	char pad_89_2 : 6; // 0x89 (1)
	char pad_8A_0 : 2; // 0x8A (1)
	char bIsObservingBB : 1; // 0x98 (1)

	void ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveTick(struct UActor OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveObserverDeactivatedAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveObserverDeactivated(struct UActor OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveObserverActivatedAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveObserverActivated(struct UActor OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecutionStartAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecutionStart(struct UActor OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecutionFinishAI(struct AAIController OwnerController, struct APawn ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecutionFinish(struct UActor OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool PerformConditionCheckAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool PerformConditionCheck(struct UActor OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0E30>
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A0E00>
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator {

public:

	struct FBlackboardKeySelector ActorToCheck; // 0x68 (40)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x90 (1)
	struct FGameplayTagContainer GameplayTags; // 0x98 (32)
	struct FString CachedDescription; // 0xB8 (16)
};

// Class AIModule.BTDecorator_CompareBBEntries
class UBTDecorator_CompareBBEntries : public UBTDecorator {

public:

	enum class EBlackBoardEntryComparison Operator; // 0x68 (1)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70 (40)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98 (40)
};

// Class AIModule.BTDecorator_ConeCheck
class UBTDecorator_ConeCheck : public UBTDecorator {

public:

	float ConeHalfAngle; // 0x68 (4)
	struct FBlackboardKeySelector ConeOrigin; // 0x70 (40)
	struct FBlackboardKeySelector ConeDirection; // 0x98 (40)
	struct FBlackboardKeySelector Observed; // 0xC0 (40)
};

// Class AIModule.BTDecorator_Cooldown
class UBTDecorator_Cooldown : public UBTDecorator {

public:

	float CoolDownTime; // 0x68 (4)
};

// Class AIModule.BTDecorator_DoesPathExist
class UBTDecorator_DoesPathExist : public UBTDecorator {

public:

	struct FBlackboardKeySelector BlackboardKeyA; // 0x68 (40)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x90 (40)
	char bUseSelf : 1; // 0xB8 (1)
	char pad_B8_1 : 7; // 0xB8 (1)
	enum class EPathExistanceQueryType PathQueryType; // 0xBC (1)
	struct UClass* FilterClass; // 0xC0 (8)
};

// Class AIModule.BTDecorator_IsAtLocation
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {

public:

	float AcceptableRadius; // 0x90 (4)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98 (56)
	enum class FAIDistanceType GeometricDistanceType; // 0xD0 (1)
	char bUseParametrizedRadius : 1; // 0xD4 (1)
	char pad_CD_1 : 7; // 0xCD (1)
	char pad_CE_0 : 1; // 0xCE (1)
	char bUseNavAgentGoalLocation : 1; // 0xD4 (1)
	char pad_CE_2 : 6; // 0xCE (1)
	char pad_CF_0 : 2; // 0xCF (1)
	char bPathFindingBasedTest : 1; // 0xD4 (1)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase {

public:

	struct UClass* TestClass; // 0x90 (8)
};

// Class AIModule.BTDecorator_KeepInCone
class UBTDecorator_KeepInCone : public UBTDecorator {

public:

	float ConeHalfAngle; // 0x68 (4)
	struct FBlackboardKeySelector ConeOrigin; // 0x70 (40)
	struct FBlackboardKeySelector Observed; // 0x98 (40)
	char bUseSelfAsOrigin : 1; // 0xC0 (1)
	char pad_BC_1 : 7; // 0xBC (1)
	char pad_BD_0 : 1; // 0xBD (1)
	char bUseSelfAsObserved : 1; // 0xC0 (1)
};

// Class AIModule.BTDecorator_Loop
class UBTDecorator_Loop : public UBTDecorator {

public:

	int32_t NumLoops; // 0x68 (4)
	bool bInfiniteLoop; // 0x6C (1)
	float InfiniteLoopTimeoutTime; // 0x70 (4)
};

// Class AIModule.BTDecorator_SetTagCooldown
class UBTDecorator_SetTagCooldown : public UBTDecorator {

public:

	struct FGameplayTag CooldownTag; // 0x68 (8)
	float CooldownDuration; // 0x70 (4)
	bool bAddToExistingDuration; // 0x74 (1)
};

// Class AIModule.BTDecorator_TagCooldown
class UBTDecorator_TagCooldown : public UBTDecorator {

public:

	struct FGameplayTag CooldownTag; // 0x68 (8)
	float CooldownDuration; // 0x70 (4)
	bool bAddToExistingDuration; // 0x74 (1)
	bool bActivatesCooldown; // 0x75 (1)
};

// Class AIModule.BTDecorator_TimeLimit
class UBTDecorator_TimeLimit : public UBTDecorator {

public:

	float TimeLimit; // 0x68 (4)
};

// Class AIModule.BTService
class UBTService : public UBTAuxiliaryNode {

public:

	float Interval; // 0x60 (4)
	float RandomDeviation; // 0x64 (4)
	char bCallTickOnSearchStart : 1; // 0x68 (1)
	char bRestartTimerOnEachActivation : 1; // 0x68 (1)
};

// Class AIModule.BTService_BlackboardBase
class UBTService_BlackboardBase : public UBTService {

public:

	struct FBlackboardKeySelector BlackboardKey; // 0x70 (40)
};

// Class AIModule.BTService_BlueprintBase
class UBTService_BlueprintBase : public UBTService {

public:

	struct AAIController AIOwner; // 0x70 (8)
	struct UActor ActorOwner; // 0x78 (8)
	char bShowPropertyDetails : 1; // 0x90 (1)
	char pad_80_1 : 7; // 0x80 (1)
	char pad_81_0 : 1; // 0x81 (1)
	char bShowEventDetails : 1; // 0x90 (1)

	void ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveTick(struct UActor OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveSearchStartAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveSearchStart(struct UActor OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveDeactivationAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveDeactivation(struct UActor OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveActivationAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveActivation(struct UActor OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A5080>
};

// Class AIModule.BTService_DefaultFocus
class UBTService_DefaultFocus : public UBTService_BlackboardBase {

public:

	char FocusPriority; // 0x98 (1)
};

// Class AIModule.BTService_RunEQS
class UBTService_RunEQS : public UBTService_BlackboardBase {

public:

	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98 (72)
};

// Class AIModule.BTTaskNode
class UBTTaskNode : public UBTNode {

public:

	struct TArray<struct UBTService> Services; // 0x58 (16)
	char bIgnoreRestartSelf : 1; // 0x68 (1)
};

// Class AIModule.BTTask_BlackboardBase
class UBTTask_BlackboardBase : public UBTTaskNode {

public:

	struct FBlackboardKeySelector BlackboardKey; // 0x70 (40)
};

// Class AIModule.BTTask_BlueprintBase
class UBTTask_BlueprintBase : public UBTTaskNode {

public:

	struct AAIController AIOwner; // 0x70 (8)
	struct UActor ActorOwner; // 0x78 (8)
	struct FIntervalCountdown TickInterval; // 0x80 (8)
	char bShowPropertyDetails : 1; // 0xA0 (1)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A5E50>
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A5DD0>
	void ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveTick(struct UActor OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecuteAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveExecute(struct UActor OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveAbortAI(struct AAIController OwnerController, struct APawn ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveAbort(struct UActor OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A50E0>
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A50B0>
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A4390>
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A4370>
};

// Class AIModule.BTTask_FinishWithResult
class UBTTask_FinishWithResult : public UBTTaskNode {

public:

	enum class EBTNodeResult Result; // 0x70 (1)
};

// Class AIModule.BTTask_GameplayTaskBase
class UBTTask_GameplayTaskBase : public UBTTaskNode {

public:

	char bWaitForGameplayTask : 1; // 0x70 (1)
};

// Class AIModule.BTTask_MakeNoise
class UBTTask_MakeNoise : public UBTTaskNode {

public:

	float Loudnes; // 0x70 (4)
};

// Class AIModule.BTTask_MoveTo
class UBTTask_MoveTo : public UBTTask_BlackboardBase {

public:

	float AcceptableRadius; // 0x98 (4)
	struct UClass* FilterClass; // 0xA0 (8)
	float ObservedBlackboardValueTolerance; // 0xA8 (4)
	char bObserveBlackboardValue : 1; // 0xAC (1)
	char pad_A8_1 : 7; // 0xA8 (1)
	char pad_A9_0 : 1; // 0xA9 (1)
	char bAllowStrafe : 1; // 0xAC (1)
	char pad_A9_2 : 6; // 0xA9 (1)
	char pad_AA_0 : 2; // 0xAA (1)
	char bAllowPartialPath : 1; // 0xAC (1)
	char pad_AA_3 : 5; // 0xAA (1)
	char pad_AB_0 : 3; // 0xAB (1)
	char bTrackMovingGoal : 1; // 0xAC (1)
	char pad_AB_4 : 4; // 0xAB (1)
	char pad_AC_0 : 4; // 0xAC (1)
	char bProjectGoalLocation : 1; // 0xAC (1)
	char bReachTestIncludesAgentRadius : 1; // 0xAC (1)
	char bReachTestIncludesGoalRadius : 1; // 0xAC (1)
	char bStopOnOverlap : 1; // 0xAC (1)
	char bStopOnOverlapNeedsUpdate : 1; // 0xAD (1)
};

// Class AIModule.BTTask_MoveDirectlyToward
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {

public:

	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xB0 (1)
	char bProjectVectorGoalToNavigation : 1; // 0xB0 (1)
	char bUpdatedDeprecatedProperties : 1; // 0xB0 (1)
};

// Class AIModule.BTTask_PlayAnimation
class UBTTask_PlayAnimation : public UBTTaskNode {

public:

	struct UAnimationAsset AnimationToPlay; // 0x70 (8)
	char bLooping : 1; // 0x78 (1)
	char bNonBlocking : 1; // 0x78 (1)
	char pad_78_2 : 6; // 0x78 (1)
	struct UBehaviorTreeComponent MyOwnerComp; // 0x80 (8)
	struct USkeletalMeshComponent CachedSkelMesh; // 0x88 (8)
};

// Class AIModule.BTTask_PlaySound
class UBTTask_PlaySound : public UBTTaskNode {

public:

	struct USoundCue SoundToPlay; // 0x70 (8)
};

// Class AIModule.BTTask_PushPawnAction
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase {

public:

	struct UPawnAction Action; // 0x70 (8)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {

public:

	float Precision; // 0x98 (4)
};

// Class AIModule.BTTask_RunBehavior
class UBTTask_RunBehavior : public UBTTaskNode {

public:

	struct UBehaviorTree BehaviorAsset; // 0x70 (8)
};

// Class AIModule.BTTask_RunBehaviorDynamic
class UBTTask_RunBehaviorDynamic : public UBTTaskNode {

public:

	struct FGameplayTag InjectionTag; // 0x70 (8)
	struct UBehaviorTree DefaultBehaviorAsset; // 0x78 (8)
	struct UBehaviorTree BehaviorAsset; // 0x80 (8)
};

// Class AIModule.BTTask_RunEQSQuery
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {

public:

	struct UEnvQuery QueryTemplate; // 0x98 (8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xA0 (16)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xB0 (16)
	enum class EEnvQueryRunMode RunMode; // 0xC0 (1)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xC8 (40)
	bool bUseBBKey; // 0xF0 (1)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xF8 (72)
};

// Class AIModule.BTTask_SetTagCooldown
class UBTTask_SetTagCooldown : public UBTTaskNode {

public:

	struct FGameplayTag CooldownTag; // 0x70 (8)
	bool bAddToExistingDuration; // 0x78 (1)
	float CooldownDuration; // 0x7C (4)
};

// Class AIModule.BTTask_Wait
class UBTTask_Wait : public UBTTaskNode {

public:

	float WaitTime; // 0x70 (4)
	float RandomDeviation; // 0x74 (4)
};

// Class AIModule.BTTask_WaitBlackboardTime
class UBTTask_WaitBlackboardTime : public UBTTask_Wait {

public:

	struct FBlackboardKeySelector BlackboardKey; // 0x78 (40)
};

// Class AIModule.PathFollowingComponent
class UPathFollowingComponent : public UActorComponent {

public:

	struct UNavMovementComponent MovementComp; // 0xE8 (8)
	struct ANavigationData MyNavData; // 0xF8 (8)

	void OnNavDataRegistered(struct ANavigationData NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x35B01E0>
	void OnActorBump(struct UActor SelfActor, struct UActor OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function AIModule.PathFollowingComponent.OnActorBump(Native|Public|HasOutParms|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x35B0040>
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFC50>
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFC20>
};

// Class AIModule.CrowdFollowingComponent
class UCrowdFollowingComponent : public UPathFollowingComponent {

public:

	struct UCharacterMovementComponent CharacterMovement; // 0x260 (8)
	struct FVector CrowdAgentMoveDirection; // 0x268 (12)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35A9330>
};

// Class AIModule.CrowdManager
class UCrowdManager : public UCrowdManagerBase {

public:

	struct ANavigationData MyNavData; // 0x28 (8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30 (16)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40 (16)
	int32_t MaxAgents; // 0x50 (4)
	float MaxAgentRadius; // 0x54 (4)
	int32_t MaxAvoidedAgents; // 0x58 (4)
	int32_t MaxAvoidedWalls; // 0x5C (4)
	float NavmeshCheckInterval; // 0x60 (4)
	float PathOptimizationInterval; // 0x64 (4)
	float SeparationDirClamp; // 0x68 (4)
	float PathOffsetRadiusMultiplier; // 0x6C (4)
	char pad_70_0 : 4; // 0x70 (1)
	char bResolveCollisions : 1; // 0x70 (1)
};

// Class AIModule.EnvQuery
class UEnvQuery : public UDataAsset {

public:

	struct FName QueryName; // 0x30 (8)
	struct TArray<struct UEnvQueryOption> Options; // 0x38 (16)
};

// Class AIModule.EnvQueryNode
class UEnvQueryNode : public Object {

public:

	int32_t VerNum; // 0x28 (4)
};

// Class AIModule.EnvQueryGenerator
class UEnvQueryGenerator : public UEnvQueryNode {

public:

	struct FString OptionName; // 0x30 (16)
	struct UClass* ItemType; // 0x40 (8)
	char bAutoSortTests : 1; // 0x48 (1)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator {

public:

	struct UClass* SearchedActorClass; // 0x50 (8)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58 (56)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90 (56)
	struct UClass* SearchCenter; // 0xC8 (8)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator {

public:

	struct FText GeneratorsActionDescription; // 0x50 (24)
	struct UClass* Context; // 0x68 (8)
	struct UClass* GeneratedItemType; // 0x70 (8)

	struct Object GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A9300>
	void DoItemGeneration(struct TArray<struct FVector>& ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration(Event|Public|HasOutParms|BlueprintEvent|Const) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector(Final|Native|Public|HasDefaults|BlueprintCallable|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A9270>
	void AddGeneratedActor(struct UActor GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor(Final|Native|Public|BlueprintCallable|Const) // <VeiledExperts-Win64-Shipping.exe+0x35A91F0>
};

// Class AIModule.EnvQueryGenerator_Composite
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator {

public:

	struct TArray<struct UEnvQueryGenerator> Generators; // 0x50 (16)
	char bAllowDifferentItemTypes : 1; // 0x60 (1)
	char bHasMatchingItemType : 1; // 0x60 (1)
	char pad_60_2 : 6; // 0x60 (1)
	struct UClass* ForcedItemType; // 0x68 (8)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator {

public:

	struct FEnvTraceData ProjectionData; // 0x50 (48)
};

// Class AIModule.EnvQueryGenerator_Cone
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x80 (56)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xB8 (56)
	struct FAIDataProviderFloatValue AngleStep; // 0xF0 (56)
	struct FAIDataProviderFloatValue Range; // 0x128 (56)
	struct UClass* CenterActor; // 0x160 (8)
	char bIncludeContextLocation : 1; // 0x168 (1)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator {

public:

	struct UClass* QueryContext; // 0x50 (8)
};

// Class AIModule.EnvQueryGenerator_Donut
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct FAIDataProviderFloatValue InnerRadius; // 0x80 (56)
	struct FAIDataProviderFloatValue OuterRadius; // 0xB8 (56)
	struct FAIDataProviderIntValue NumberOfRings; // 0xF0 (56)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128 (56)
	struct FEnvDirection ArcDirection; // 0x160 (32)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180 (56)
	bool bUseSpiralPattern; // 0x1B8 (1)
	struct UClass* Center; // 0x1C0 (8)
	char bDefineArc : 1; // 0x1C8 (1)
};

// Class AIModule.EnvQueryGenerator_OnCircle
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct FAIDataProviderFloatValue CircleRadius; // 0x80 (56)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8 (56)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xF0 (56)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128 (1)
	struct FEnvDirection ArcDirection; // 0x130 (32)
	struct FAIDataProviderFloatValue ArcAngle; // 0x150 (56)
	float AngleRadians; // 0x188 (4)
	struct UClass* CircleCenter; // 0x190 (8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198 (1)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1A0 (56)
	struct FEnvTraceData TraceData; // 0x1D8 (48)
	char bDefineArc : 1; // 0x208 (1)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints {

public:

	struct FAIDataProviderFloatValue GridSize; // 0x80 (56)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8 (56)
	struct UClass* GenerateAround; // 0xF0 (8)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid {

public:

	struct FAIDataProviderBoolValue PathToItem; // 0xF8 (56)
	struct UClass* NavigationFilter; // 0x130 (8)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138 (56)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
class UEnvQueryInstanceBlueprintWrapper : public Object {

public:

	int32_t QueryID; // 0x30 (4)
	struct UClass* ItemType; // 0x58 (8)
	int32_t OptionIndex; // 0x60 (4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68 (16)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35ACE60>
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35ACC60>
	struct TArray<struct UActor> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35ACBE0>
	bool GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations(Final|Native|Public|HasOutParms|BlueprintCallable|Const) // <VeiledExperts-Win64-Shipping.exe+0x35ACB20>
	bool GetQueryResultsAsActors(struct TArray<struct UActor>& ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors(Final|Native|Public|HasOutParms|BlueprintCallable|Const) // <VeiledExperts-Win64-Shipping.exe+0x35ACA60>
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AC9D0>
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class AIModule.EnvQueryManager
class UEnvQueryManager : public UAISubsystem {

public:

	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xA8 (16)
	struct TArray<struct UEnvQueryContext> LocalContexts; // 0xB8 (16)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper> GCShieldedWrappers; // 0xC8 (16)
	float MaxAllowedTestingTime; // 0x12C (4)
	bool bTestQueriesUsingBreadth; // 0x130 (1)
	int32_t QueryCountWarningThreshold; // 0x134 (4)
	double QueryCountWarningInterval; // 0x138 (8)

	struct UEnvQueryInstanceBlueprintWrapper RunEQSQuery(struct Object WorldContextObject, struct UEnvQuery QueryTemplate, struct Object Querier, enum class EEnvQueryRunMode RunMode, struct UClass* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35ACCE0>
};

// Class AIModule.EnvQueryOption
class UEnvQueryOption : public Object {

public:

	struct UEnvQueryGenerator Generator; // 0x28 (8)
	struct TArray<struct UEnvQueryTest> Tests; // 0x30 (16)
};

// Class AIModule.EnvQueryTest
class UEnvQueryTest : public UEnvQueryNode {

public:

	int32_t TestOrder; // 0x30 (4)
	enum class EEnvTestPurpose TestPurpose; // 0x34 (1)
	struct FString TestComment; // 0x38 (16)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x48 (1)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x49 (1)
	enum class EEnvTestFilterType FilterType; // 0x4A (1)
	struct FAIDataProviderBoolValue BoolValue; // 0x50 (56)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88 (56)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xC0 (56)
	enum class EEnvTestScoreEquation ScoringEquation; // 0xF9 (1)
	enum class EEnvQueryTestClamping ClampMinType; // 0xFA (1)
	enum class EEnvQueryTestClamping ClampMaxType; // 0xFB (1)
	enum class EEQSNormalizationType NormalizationType; // 0xFC (1)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100 (56)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138 (56)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170 (56)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1A8 (56)
	bool bDefineReferenceValue; // 0x1E0 (1)
	char bWorkOnFloatValues : 1; // 0x1F0 (1)
};

// Class AIModule.EnvQueryTest_Distance
class UEnvQueryTest_Distance : public UEnvQueryTest {

public:

	enum class EEnvTestDistance TestMode; // 0x1F8 (1)
	struct UClass* DistanceTo; // 0x200 (8)
};

// Class AIModule.EnvQueryTest_Dot
class UEnvQueryTest_Dot : public UEnvQueryTest {

public:

	struct FEnvDirection LineA; // 0x1F8 (32)
	struct FEnvDirection LineB; // 0x218 (32)
	enum class EEnvTestDot TestMode; // 0x238 (1)
	bool bAbsoluteValue; // 0x239 (1)
};

// Class AIModule.EnvQueryTest_GameplayTags
class UEnvQueryTest_GameplayTags : public UEnvQueryTest {

public:

	struct FGameplayTagQuery TagQueryToMatch; // 0x1F8 (72)
	bool bUpdatedToUseQuery; // 0x240 (1)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x241 (1)
	struct FGameplayTagContainer GameplayTags; // 0x248 (32)
};

// Class AIModule.EnvQueryTest_Overlap
class UEnvQueryTest_Overlap : public UEnvQueryTest {

public:

	struct FEnvOverlapData OverlapData; // 0x1F8 (32)
};

// Class AIModule.EnvQueryTest_Pathfinding
class UEnvQueryTest_Pathfinding : public UEnvQueryTest {

public:

	enum class EEnvTestPathfinding TestMode; // 0x1F8 (1)
	struct UClass* Context; // 0x200 (8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x208 (56)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x240 (56)
	struct UClass* FilterClass; // 0x278 (8)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding {

public:

	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280 (56)
};

// Class AIModule.EnvQueryTest_Project
class UEnvQueryTest_Project : public UEnvQueryTest {

public:

	struct FEnvTraceData ProjectionData; // 0x1F8 (48)
};

// Class AIModule.EnvQueryTest_Trace
class UEnvQueryTest_Trace : public UEnvQueryTest {

public:

	struct FEnvTraceData TraceData; // 0x1F8 (48)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228 (56)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260 (56)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298 (56)
	struct UClass* Context; // 0x2D0 (8)
};

// Class AIModule.EnvQueryTest_Volume
class UEnvQueryTest_Volume : public UEnvQueryTest {

public:

	struct UClass* VolumeContext; // 0x1F8 (8)
	struct UClass* VolumeClass; // 0x200 (8)
	char bDoComplexVolumeTest : 1; // 0x208 (1)
};

// Class AIModule.EQSTestingPawn
class AEQSTestingPawn : public ACharacter {

public:

	struct UEnvQuery QueryTemplate; // 0x4C0 (8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x4C8 (16)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x4D8 (16)
	float TimeLimitPerStep; // 0x4E8 (4)
	int32_t StepToDebugDraw; // 0x4EC (4)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x4F0 (1)
	char bDrawLabels : 1; // 0x4F4 (1)
	char pad_4F1_1 : 7; // 0x4F1 (1)
	char pad_4F2_0 : 1; // 0x4F2 (1)
	char bDrawFailedItems : 1; // 0x4F4 (1)
	char pad_4F2_2 : 6; // 0x4F2 (1)
	char pad_4F3_0 : 2; // 0x4F3 (1)
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x4F4 (1)
	char pad_4F3_3 : 5; // 0x4F3 (1)
	char pad_4F4_0 : 3; // 0x4F4 (1)
	char bShouldBeVisibleInGame : 1; // 0x4F4 (1)
	char bTickDuringGame : 1; // 0x4F4 (1)
	char pad_4F4_5 : 3; // 0x4F4 (1)
	enum class EEnvQueryRunMode QueryingMode; // 0x4F8 (1)
	struct FNavAgentProperties NavAgentProperties; // 0x500 (48)
};

// Class AIModule.GridPathFollowingComponent
class UGridPathFollowingComponent : public UPathFollowingComponent {

public:

	struct UNavLocalGridManager GridManager; // 0x258 (8)
};

// Class AIModule.NavLinkProxy
class ANavLinkProxy : public UActor {

public:

	struct TArray<struct FNavigationLink> PointLinks; // 0x230 (16)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x240 (16)
	struct UNavLinkCustomComponent SmartLinkComp; // 0x250 (8)
	bool bSmartLinkIsRelevant; // 0x258 (1)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x260 (16)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B0630>
	void ResumePathFollowing(struct UActor Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B0350>
	void ReceiveSmartLinkReached(struct UActor Agent, struct FVector& Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached(Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFD00>
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFCD0>
};

// Class AIModule.PawnAction
class UPawnAction : public Object {

public:

	struct UPawnAction ChildAction; // 0x28 (8)
	struct UPawnAction ParentAction; // 0x30 (8)
	struct UPawnActionsComponent OwnerComponent; // 0x38 (8)
	struct Object Instigator; // 0x40 (8)
	struct UBrainComponent BrainComp; // 0x48 (8)
	char bAllowNewSameClassInstance : 1; // 0x80 (1)
	char pad_50_1 : 7; // 0x50 (1)
	char pad_51_0 : 1; // 0x51 (1)
	char bReplaceActiveSameClassInstance : 1; // 0x80 (1)
	char pad_51_2 : 6; // 0x51 (1)
	char pad_52_0 : 2; // 0x52 (1)
	char bShouldPauseMovement : 1; // 0x80 (1)
	char pad_52_3 : 5; // 0x52 (1)
	char pad_53_0 : 3; // 0x53 (1)
	char bAlwaysNotifyOnFinished : 1; // 0x80 (1)

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35AFC00>
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish(Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14290>
	struct UPawnAction CreateActionInstance(struct Object WorldContextObject, struct UClass* ActionClass); // Function AIModule.PawnAction.CreateActionInstance(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35AF9B0>
};

// Class AIModule.PawnAction_Move
class UPawnAction_Move : public UPawnAction {

public:

	struct UActor GoalActor; // 0x98 (8)
	struct FVector GoalLocation; // 0xA0 (12)
	float AcceptableRadius; // 0xAC (4)
	struct UClass* FilterClass; // 0xB0 (8)
	char bAllowStrafe : 1; // 0xB8 (1)
	char bFinishOnOverlap : 1; // 0xB8 (1)
	char bUsePathfinding : 1; // 0xB8 (1)
	char bAllowPartialPath : 1; // 0xB8 (1)
	char bProjectGoalToNavigation : 1; // 0xB8 (1)
	char bUpdatePathToGoal : 1; // 0xB8 (1)
	char bAbortChildActionOnPathChange : 1; // 0xB8 (1)
};

// Class AIModule.PawnAction_Repeat
class UPawnAction_Repeat : public UPawnAction {

public:

	struct UPawnAction ActionToRepeat; // 0x98 (8)
	struct UPawnAction RecentActionCopy; // 0xA0 (8)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xA8 (1)
};

// Class AIModule.PawnAction_Sequence
class UPawnAction_Sequence : public UPawnAction {

public:

	struct TArray<struct UPawnAction> ActionSequence; // 0x98 (16)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xA8 (1)
	struct UPawnAction RecentActionCopy; // 0xB0 (8)
};

// Class AIModule.PawnAction_Wait
class UPawnAction_Wait : public UPawnAction {

public:

	float TimeToWait; // 0x98 (4)
};

// Class AIModule.PawnActionsComponent
class UPawnActionsComponent : public UActorComponent {

public:

	struct APawn ControlledPawn; // 0xB0 (8)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xB8 (16)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xC8 (16)
	struct UPawnAction CurrentAction; // 0xD8 (8)

	bool K2_PushAction(struct UPawnAction NewAction, enum class EAIRequestPriority Priority, struct Object Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35AFF40>
	bool K2_PerformAction(struct APawn Pawn, struct UPawnAction Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35AFE50>
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35AFDC0>
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35AFD30>
};

// Class AIModule.PawnSensingComponent
class UPawnSensingComponent : public UActorComponent {

public:

	float HearingThreshold; // 0xB0 (4)
	float LOSHearingThreshold; // 0xB4 (4)
	float SightRadius; // 0xB8 (4)
	float SensingInterval; // 0xBC (4)
	float HearingMaxSoundAge; // 0xC0 (4)
	char bEnableSensingUpdates : 1; // 0xC4 (1)
	char bOnlySensePlayers : 1; // 0xC4 (1)
	char bSeePawns : 1; // 0xC4 (1)
	char bHearNoises : 1; // 0xC4 (1)
	char pad_C4_4 : 4; // 0xC4 (1)
	struct FMulticastInlineDelegate OnSeePawn; // 0xD0 (16)
	struct FMulticastInlineDelegate OnHearNoise; // 0xE0 (16)
	float PeripheralVisionAngle; // 0xF0 (4)
	float PeripheralVisionCosine; // 0xF4 (4)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B05A0>
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B0520>
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle(BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B04A0>
	void SeePawnDelegate__DelegateSignature(struct APawn Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void HearNoiseDelegate__DelegateSignature(struct APawn Instigator, struct FVector& Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFCB0>
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35AFC90>
};

// ScriptStruct AIModule.AIRequestID
struct FAIRequestID {
	uint32_t RequestID; // 0x0 (4)
};

// ScriptStruct AIModule.AIStimulus
struct FAIStimulus {
	float Age; // 0x0 (4)
	float ExpirationAge; // 0x4 (4)
	float Strength; // 0x8 (4)
	struct FVector StimulusLocation; // 0xC (12)
	struct FVector ReceiverLocation; // 0x18 (12)
	struct FName Tag; // 0x24 (8)
	char pad_2C_0 : 1; // 0x2C (1)
	char bSuccessfullySensed : 1; // 0x38 (1)
};

// ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue {
	struct UAIDataProvider DataBinding; // 0x10 (8)
	struct FName DataField; // 0x18 (8)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	struct UClass* PropertyType; // 0x20 (8)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30 (1)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30 (4)
};

// ScriptStruct AIModule.AIDataProviderIntValue
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30 (4)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo {
	struct UActor Target; // 0x0 (8)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8 (16)
	char bIsHostile : 1; // 0x18 (1)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0 (1)
	char bDetectNeutrals : 1; // 0x0 (1)
	char bDetectFriendlies : 1; // 0x0 (1)
};

// ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent {
	float Amount; // 0x0 (4)
	struct FVector Location; // 0x4 (12)
	struct FVector HitLocation; // 0x10 (12)
	struct UActor DamagedActor; // 0x20 (8)
	struct UActor Instigator; // 0x28 (8)
};

// ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent {
	struct FVector NoiseLocation; // 0x4 (12)
	float Loudness; // 0x10 (4)
	float MaxRange; // 0x14 (4)
	struct UActor Instigator; // 0x18 (8)
	struct FName Tag; // 0x20 (8)
};

// ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent {
	struct UActor Requestor; // 0x0 (8)
	struct UActor PredictedActor; // 0x8 (8)
};

// ScriptStruct AIModule.AISightEvent
struct FAISightEvent {
	struct UActor SeenActor; // 0x8 (8)
	struct UActor Observer; // 0x10 (8)
};

// ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent {
	struct UActor Broadcaster; // 0x28 (8)
	struct UActor Enemy; // 0x30 (8)
};

// ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent {
	struct UActor TouchReceiver; // 0x10 (8)
	struct UActor OtherActor; // 0x18 (8)
};

// ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown {
	float Interval; // 0x0 (4)
};

// ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest {
	struct UActor GoalActor; // 0x0 (8)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree Asset; // 0x0 (8)
	struct UBTCompositeNode Template; // 0x8 (8)
};

// ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType> AllowedTypes; // 0x0 (16)
	struct FName SelectedKeyName; // 0x10 (8)
	struct UClass* SelectedKeyType; // 0x18 (8)
	char SelectedKeyID; // 0x20 (1)
	char bNoneIsAllowedValue : 1; // 0x24 (1)
};

// ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry {
	struct FName EntryName; // 0x0 (8)
	struct UBlackboardKeyType KeyType; // 0x8 (8)
	char bInstanceSynced : 1; // 0x10 (1)
};

// ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild {
	struct UBTCompositeNode ChildComposite; // 0x0 (8)
	struct UBTTaskNode ChildTask; // 0x8 (8)
	struct TArray<struct UBTDecorator> Decorators; // 0x10 (16)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20 (16)
};

// ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic {
	enum class EBTDecoratorLogic Operation; // 0x0 (1)
	uint16_t Number; // 0x2 (2)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x0 (16)
	struct TArray<float> Radii; // 0x10 (16)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x0 (4)
	float DesiredVelocityWeight; // 0x4 (4)
	float CurrentVelocityWeight; // 0x8 (4)
	float SideBiasWeight; // 0xC (4)
	float ImpactTimeWeight; // 0x10 (4)
	float ImpactTimeRange; // 0x14 (4)
	char CustomPatternIdx; // 0x18 (1)
	char AdaptiveDivisions; // 0x19 (1)
	char AdaptiveRings; // 0x1A (1)
	char AdaptiveDepth; // 0x1B (1)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache {
	struct UEnvQuery Template; // 0x0 (8)
};

// ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest {
	struct UEnvQuery QueryTemplate; // 0x0 (8)
	struct Object Owner; // 0x8 (8)
	struct UWorld World; // 0x10 (8)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest {
	struct UEnvQuery QueryTemplate; // 0x0 (8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8 (16)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18 (40)
	enum class EEnvQueryRunMode RunMode; // 0x40 (1)
	char bUseBBKeyForQueryTemplate : 1; // 0x44 (1)
};

// ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam {
	struct FName ParamName; // 0x0 (8)
	enum class EAIParamType ParamType; // 0x8 (1)
	float Value; // 0xC (4)
	struct FBlackboardKeySelector BBKey; // 0x10 (40)
};

// ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult {
	struct UClass* ItemType; // 0x10 (8)
	int32_t OptionIndex; // 0x2C (4)
	int32_t QueryID; // 0x30 (4)
};

// ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData {
	float ExtentX; // 0x0 (4)
	float ExtentY; // 0x4 (4)
	float ExtentZ; // 0x8 (4)
	struct FVector ShapeOffset; // 0xC (12)
	enum class ECollisionChannel OverlapChannel; // 0x18 (1)
	enum class EEnvOverlapShape OverlapShape; // 0x19 (1)
	char bOnlyBlockingHits : 1; // 0x1C (1)
	char pad_1A_1 : 7; // 0x1A (1)
	char pad_1B_0 : 1; // 0x1B (1)
	char bOverlapComplex : 1; // 0x1C (1)
	char pad_1B_2 : 6; // 0x1B (1)
	char pad_1C_0 : 2; // 0x1C (1)
	char bSkipOverlapQuerier : 1; // 0x1C (1)
};

// ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData {
	int32_t VersionNum; // 0x0 (4)
	struct UClass* NavigationFilter; // 0x8 (8)
	float ProjectDown; // 0x10 (4)
	float ProjectUp; // 0x14 (4)
	float ExtentX; // 0x18 (4)
	float ExtentY; // 0x1C (4)
	float ExtentZ; // 0x20 (4)
	float PostProjectionVerticalOffset; // 0x24 (4)
	enum class ETraceTypeQuery TraceChannel; // 0x28 (1)
	enum class ECollisionChannel SerializedChannel; // 0x29 (1)
	enum class EEnvTraceShape TraceShape; // 0x2A (1)
	enum class EEnvQueryTrace TraceMode; // 0x2B (1)
	char bTraceComplex : 1; // 0x2C (1)
	char pad_28_1 : 7; // 0x28 (1)
	char pad_29_0 : 1; // 0x29 (1)
	char bOnlyBlockingHits : 1; // 0x2C (1)
	char pad_29_2 : 6; // 0x29 (1)
	char pad_2A_0 : 2; // 0x2A (1)
	char bCanTraceOnNavMesh : 1; // 0x2C (1)
	char pad_2A_3 : 5; // 0x2A (1)
	char pad_2B_0 : 3; // 0x2B (1)
	char bCanTraceOnGeometry : 1; // 0x2C (1)
	char pad_2B_4 : 4; // 0x2B (1)
	char pad_2C_0 : 4; // 0x2C (1)
	char bCanDisableTrace : 1; // 0x2C (1)
	char bCanProjectDown : 1; // 0x2C (1)
};

// ScriptStruct AIModule.EnvDirection
struct FEnvDirection {
	struct UClass* LineFrom; // 0x0 (8)
	struct UClass* LineTo; // 0x8 (8)
	struct UClass* Rotation; // 0x10 (8)
	enum class EEnvDirection DirMode; // 0x18 (1)
};

// ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue {
	struct FName ParamName; // 0x0 (8)
	enum class EAIParamType ParamType; // 0x8 (1)
	float Value; // 0xC (4)
};

// ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId {
	char TeamID; // 0x0 (1)
};

// ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack {
	struct UPawnAction TopAction; // 0x0 (8)
};

// ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent {
	struct UPawnAction Action; // 0x0 (8)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
inline void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");

	struct OnMoveCompleted_Params {
		struct FAIRequestID RequestID;
		enum class EPathFollowingResult MovementResult;
	}; OnMoveCompleted_Params Params;

	Params.RequestID = RequestID;
	Params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.UseBlackboard
inline bool AAIController::UseBlackboard(struct UBlackboardData BlackboardAsset, struct UBlackboardComponent& BlackboardComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");

	struct UseBlackboard_Params {
		struct UBlackboardData BlackboardAsset;
		struct UBlackboardComponent& BlackboardComponent;
		bool ReturnValue;

	}; UseBlackboard_Params Params;

	Params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BlackboardComponent = Params.BlackboardComponent;


	return params.ReturnValue;
}

// Function AIModule.AIController.UnclaimTaskResource
inline void AAIController::UnclaimTaskResource(struct UClass* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UnclaimTaskResource");

	struct UnclaimTaskResource_Params {
		struct UClass* ResourceClass;
	}; UnclaimTaskResource_Params Params;

	Params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.SetPathFollowingComponent
inline void AAIController::SetPathFollowingComponent(struct UPathFollowingComponent NewPFComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetPathFollowingComponent");

	struct SetPathFollowingComponent_Params {
		struct UPathFollowingComponent NewPFComponent;
	}; SetPathFollowingComponent_Params Params;

	Params.NewPFComponent = NewPFComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.SetMoveBlockDetection
inline void AAIController::SetMoveBlockDetection(bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");

	struct SetMoveBlockDetection_Params {
		bool bEnable;
	}; SetMoveBlockDetection_Params Params;

	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.RunBehaviorTree
inline bool AAIController::RunBehaviorTree(struct UBehaviorTree BTAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");

	struct RunBehaviorTree_Params {
		struct UBehaviorTree BTAsset;
		bool ReturnValue;

	}; RunBehaviorTree_Params Params;

	Params.BTAsset = BTAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.OnUsingBlackBoard
inline void AAIController::OnUsingBlackBoard(struct UBlackboardComponent BlackboardComp, struct UBlackboardData BlackboardAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");

	struct OnUsingBlackBoard_Params {
		struct UBlackboardComponent BlackboardComp;
		struct UBlackboardData BlackboardAsset;
	}; OnUsingBlackBoard_Params Params;

	Params.BlackboardComp = BlackboardComp;
	Params.BlackboardAsset = BlackboardAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
inline void AAIController::OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");

	struct OnGameplayTaskResourcesClaimed_Params {
		struct FGameplayResourceSet NewlyClaimed;
		struct FGameplayResourceSet FreshlyReleased;
	}; OnGameplayTaskResourcesClaimed_Params Params;

	Params.NewlyClaimed = NewlyClaimed;
	Params.FreshlyReleased = FreshlyReleased;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.MoveToLocation
inline enum class EPathFollowingRequestResult AAIController::MoveToLocation(struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");

	struct MoveToLocation_Params {
		struct FVector& Dest;
		float AcceptanceRadius;
		bool bStopOnOverlap;
		bool bUsePathfinding;
		bool bProjectDestinationToNavigation;
		bool bCanStrafe;
		struct UClass* FilterClass;
		bool bAllowPartialPath;
		enum class EPathFollowingRequestResult ReturnValue;

	}; MoveToLocation_Params Params;

	Params.AcceptanceRadius = AcceptanceRadius;
	Params.bStopOnOverlap = bStopOnOverlap;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
	Params.bCanStrafe = bCanStrafe;
	Params.FilterClass = FilterClass;
	Params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Dest = Params.Dest;


	return params.ReturnValue;
}

// Function AIModule.AIController.MoveToActor
inline enum class EPathFollowingRequestResult AAIController::MoveToActor(struct UActor Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, struct UClass* FilterClass, bool bAllowPartialPath) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");

	struct MoveToActor_Params {
		struct UActor Goal;
		float AcceptanceRadius;
		bool bStopOnOverlap;
		bool bUsePathfinding;
		bool bCanStrafe;
		struct UClass* FilterClass;
		bool bAllowPartialPath;
		enum class EPathFollowingRequestResult ReturnValue;

	}; MoveToActor_Params Params;

	Params.Goal = Goal;
	Params.AcceptanceRadius = AcceptanceRadius;
	Params.bStopOnOverlap = bStopOnOverlap;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bCanStrafe = bCanStrafe;
	Params.FilterClass = FilterClass;
	Params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.K2_SetFocus
inline void AAIController::K2_SetFocus(struct UActor NewFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");

	struct K2_SetFocus_Params {
		struct UActor NewFocus;
	}; K2_SetFocus_Params Params;

	Params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.K2_SetFocalPoint
inline void AAIController::K2_SetFocalPoint(struct FVector FP) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");

	struct K2_SetFocalPoint_Params {
		struct FVector FP;
	}; K2_SetFocalPoint_Params Params;

	Params.FP = FP;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.K2_ClearFocus
inline void AAIController::K2_ClearFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");

	struct K2_ClearFocus_Params {
		
	}; K2_ClearFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIController.HasPartialPath
inline bool AAIController::HasPartialPath() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");

	struct HasPartialPath_Params {
		
		bool ReturnValue;

	}; HasPartialPath_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetPathFollowingComponent
inline struct UPathFollowingComponent AAIController::GetPathFollowingComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");

	struct GetPathFollowingComponent_Params {
		
		struct UPathFollowingComponent ReturnValue;

	}; GetPathFollowingComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetMoveStatus
inline enum class EPathFollowingStatus AAIController::GetMoveStatus() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");

	struct GetMoveStatus_Params {
		
		enum class EPathFollowingStatus ReturnValue;

	}; GetMoveStatus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetImmediateMoveDestination
inline struct FVector AAIController::GetImmediateMoveDestination() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");

	struct GetImmediateMoveDestination_Params {
		
		struct FVector ReturnValue;

	}; GetImmediateMoveDestination_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocusActor
inline struct UActor AAIController::GetFocusActor() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");

	struct GetFocusActor_Params {
		
		struct UActor ReturnValue;

	}; GetFocusActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocalPointOnActor
inline struct FVector AAIController::GetFocalPointOnActor(struct UActor Actor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");

	struct GetFocalPointOnActor_Params {
		struct UActor Actor;
		struct FVector ReturnValue;

	}; GetFocalPointOnActor_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetFocalPoint
inline struct FVector AAIController::GetFocalPoint() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");

	struct GetFocalPoint_Params {
		
		struct FVector ReturnValue;

	}; GetFocalPoint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.GetAIPerceptionComponent
inline struct UAIPerceptionComponent AAIController::GetAIPerceptionComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");

	struct GetAIPerceptionComponent_Params {
		
		struct UAIPerceptionComponent ReturnValue;

	}; GetAIPerceptionComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIController.ClaimTaskResource
inline void AAIController::ClaimTaskResource(struct UClass* ResourceClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIController.ClaimTaskResource");

	struct ClaimTaskResource_Params {
		struct UClass* ResourceClass;
	}; ClaimTaskResource_Params Params;

	Params.ResourceClass = ResourceClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.SetSenseEnabled
inline void UAIPerceptionComponent::SetSenseEnabled(struct UClass* SenseClass, bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.SetSenseEnabled");

	struct SetSenseEnabled_Params {
		struct UClass* SenseClass;
		bool bEnable;
	}; SetSenseEnabled_Params Params;

	Params.SenseClass = SenseClass;
	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
inline void UAIPerceptionComponent::RequestStimuliListenerUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");

	struct RequestStimuliListenerUpdate_Params {
		
	}; RequestStimuliListenerUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
inline void UAIPerceptionComponent::OnOwnerEndPlay(struct UActor Actor, enum class EEndPlayReason EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");

	struct OnOwnerEndPlay_Params {
		struct UActor Actor;
		enum class EEndPlayReason EndPlayReason;
	}; OnOwnerEndPlay_Params Params;

	Params.Actor = Actor;
	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
inline void UAIPerceptionComponent::GetPerceivedHostileActors(struct TArray<struct UActor>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");

	struct GetPerceivedHostileActors_Params {
		struct TArray<struct UActor>& OutActors;
	}; GetPerceivedHostileActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
inline void UAIPerceptionComponent::GetPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");

	struct GetPerceivedActors_Params {
		struct UClass* SenseToUse;
		struct TArray<struct UActor>& OutActors;
	}; GetPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
inline void UAIPerceptionComponent::GetKnownPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors");

	struct GetKnownPerceivedActors_Params {
		struct UClass* SenseToUse;
		struct TArray<struct UActor>& OutActors;
	}; GetKnownPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
inline void UAIPerceptionComponent::GetCurrentlyPerceivedActors(struct UClass* SenseToUse, struct TArray<struct UActor>& OutActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors");

	struct GetCurrentlyPerceivedActors_Params {
		struct UClass* SenseToUse;
		struct TArray<struct UActor>& OutActors;
	}; GetCurrentlyPerceivedActors_Params Params;

	Params.SenseToUse = SenseToUse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutActors = Params.OutActors;

}

// Function AIModule.AIPerceptionComponent.GetActorsPerception
inline bool UAIPerceptionComponent::GetActorsPerception(struct UActor Actor, struct FActorPerceptionBlueprintInfo& Info) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");

	struct GetActorsPerception_Params {
		struct UActor Actor;
		struct FActorPerceptionBlueprintInfo& Info;
		bool ReturnValue;

	}; GetActorsPerception_Params Params;

	Params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Info = Params.Info;


	return params.ReturnValue;
}

// Function AIModule.AIPerceptionComponent.ForgetAll
inline void UAIPerceptionComponent::ForgetAll() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.ForgetAll");

	struct ForgetAll_Params {
		
	}; ForgetAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
inline void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(struct UClass* SenseClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");

	struct UnregisterFromSense_Params {
		struct UClass* SenseClass;
	}; UnregisterFromSense_Params Params;

	Params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
inline void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");

	struct UnregisterFromPerceptionSystem_Params {
		
	}; UnregisterFromPerceptionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
inline void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");

	struct RegisterWithPerceptionSystem_Params {
		
	}; RegisterWithPerceptionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
inline void UAIPerceptionStimuliSourceComponent::RegisterForSense(struct UClass* SenseClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");

	struct RegisterForSense_Params {
		struct UClass* SenseClass;
	}; RegisterForSense_Params Params;

	Params.SenseClass = SenseClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
inline void UAIPerceptionSystem::ReportPerceptionEvent(struct Object WorldContextObject, struct UAISenseEvent PerceptionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");

	struct ReportPerceptionEvent_Params {
		struct Object WorldContextObject;
		struct UAISenseEvent PerceptionEvent;
	}; ReportPerceptionEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.ReportEvent
inline void UAIPerceptionSystem::ReportEvent(struct UAISenseEvent PerceptionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");

	struct ReportEvent_Params {
		struct UAISenseEvent PerceptionEvent;
	}; ReportEvent_Params Params;

	Params.PerceptionEvent = PerceptionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
inline bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(struct Object WorldContextObject, struct UClass* Sense, struct UActor Target) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");

	struct RegisterPerceptionStimuliSource_Params {
		struct Object WorldContextObject;
		struct UClass* Sense;
		struct UActor Target;
		bool ReturnValue;

	}; RegisterPerceptionStimuliSource_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Sense = Sense;
	Params.Target = Target;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
inline void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(struct UActor Actor, enum class EEndPlayReason EndPlayReason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");

	struct OnPerceptionStimuliSourceEndPlay_Params {
		struct UActor Actor;
		enum class EEndPlayReason EndPlayReason;
	}; OnPerceptionStimuliSourceEndPlay_Params Params;

	Params.Actor = Actor;
	Params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
inline struct UClass* UAIPerceptionSystem::GetSenseClassForStimulus(struct Object WorldContextObject, struct FAIStimulus& Stimulus) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");

	struct GetSenseClassForStimulus_Params {
		struct Object WorldContextObject;
		struct FAIStimulus& Stimulus;
		struct UClass* ReturnValue;

	}; GetSenseClassForStimulus_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Stimulus = Params.Stimulus;


	return params.ReturnValue;
}

// Function AIModule.AISense_Blueprint.OnUpdate
inline float UAISense_Blueprint::OnUpdate(struct TArray<struct UAISenseEvent>& EventsToProcess) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");

	struct OnUpdate_Params {
		struct TArray<struct UAISenseEvent>& EventsToProcess;
		float ReturnValue;

	}; OnUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	EventsToProcess = Params.EventsToProcess;


	return params.ReturnValue;
}

// Function AIModule.AISense_Blueprint.OnListenerUpdated
inline void UAISense_Blueprint::OnListenerUpdated(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");

	struct OnListenerUpdated_Params {
		struct UActor ActorListener;
		struct UAIPerceptionComponent PerceptionComponent;
	}; OnListenerUpdated_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
inline void UAISense_Blueprint::OnListenerUnregistered(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");

	struct OnListenerUnregistered_Params {
		struct UActor ActorListener;
		struct UAIPerceptionComponent PerceptionComponent;
	}; OnListenerUnregistered_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.OnListenerRegistered
inline void UAISense_Blueprint::OnListenerRegistered(struct UActor ActorListener, struct UAIPerceptionComponent PerceptionComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");

	struct OnListenerRegistered_Params {
		struct UActor ActorListener;
		struct UAIPerceptionComponent PerceptionComponent;
	}; OnListenerRegistered_Params Params;

	Params.ActorListener = ActorListener;
	Params.PerceptionComponent = PerceptionComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
inline void UAISense_Blueprint::K2_OnNewPawn(struct APawn NewPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");

	struct K2_OnNewPawn_Params {
		struct APawn NewPawn;
	}; K2_OnNewPawn_Params Params;

	Params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
inline void UAISense_Blueprint::GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent>& ListenerComponents) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");

	struct GetAllListenerComponents_Params {
		struct TArray<struct UAIPerceptionComponent>& ListenerComponents;
	}; GetAllListenerComponents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ListenerComponents = Params.ListenerComponents;

}

// Function AIModule.AISense_Blueprint.GetAllListenerActors
inline void UAISense_Blueprint::GetAllListenerActors(struct TArray<struct UActor>& ListenerActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");

	struct GetAllListenerActors_Params {
		struct TArray<struct UActor>& ListenerActors;
	}; GetAllListenerActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ListenerActors = Params.ListenerActors;

}

// Function AIModule.AISense_Damage.ReportDamageEvent
inline void UAISense_Damage::ReportDamageEvent(struct Object WorldContextObject, struct UActor DamagedActor, struct UActor Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");

	struct ReportDamageEvent_Params {
		struct Object WorldContextObject;
		struct UActor DamagedActor;
		struct UActor Instigator;
		float DamageAmount;
		struct FVector EventLocation;
		struct FVector HitLocation;
	}; ReportDamageEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.DamagedActor = DamagedActor;
	Params.Instigator = Instigator;
	Params.DamageAmount = DamageAmount;
	Params.EventLocation = EventLocation;
	Params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Hearing.ReportNoiseEvent
inline void UAISense_Hearing::ReportNoiseEvent(struct Object WorldContextObject, struct FVector NoiseLocation, float Loudness, struct UActor Instigator, float MaxRange, struct FName Tag) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");

	struct ReportNoiseEvent_Params {
		struct Object WorldContextObject;
		struct FVector NoiseLocation;
		float Loudness;
		struct UActor Instigator;
		float MaxRange;
		struct FName Tag;
	}; ReportNoiseEvent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.NoiseLocation = NoiseLocation;
	Params.Loudness = Loudness;
	Params.Instigator = Instigator;
	Params.MaxRange = MaxRange;
	Params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
inline void UAISense_Prediction::RequestPawnPredictionEvent(struct APawn Requestor, struct UActor PredictedActor, float PredictionTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");

	struct RequestPawnPredictionEvent_Params {
		struct APawn Requestor;
		struct UActor PredictedActor;
		float PredictionTime;
	}; RequestPawnPredictionEvent_Params Params;

	Params.Requestor = Requestor;
	Params.PredictedActor = PredictedActor;
	Params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
inline void UAISense_Prediction::RequestControllerPredictionEvent(struct AAIController Requestor, struct UActor PredictedActor, float PredictionTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");

	struct RequestControllerPredictionEvent_Params {
		struct AAIController Requestor;
		struct UActor PredictedActor;
		float PredictionTime;
	}; RequestControllerPredictionEvent_Params Params;

	Params.Requestor = Requestor;
	Params.PredictedActor = PredictedActor;
	Params.PredictionTime = PredictionTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISystem.AILoggingVerbose
inline void UAISystem::AILoggingVerbose() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");

	struct AILoggingVerbose_Params {
		
	}; AILoggingVerbose_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AISystem.AIIgnorePlayers
inline void UAISystem::AIIgnorePlayers() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");

	struct AIIgnorePlayers_Params {
		
	}; AIIgnorePlayers_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.AITask_MoveTo.AIMoveTo
inline struct UAITask_MoveTo UAITask_MoveTo::AIMoveTo(struct AAIController Controller, struct FVector GoalLocation, struct UActor GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");

	struct AIMoveTo_Params {
		struct AAIController Controller;
		struct FVector GoalLocation;
		struct UActor GoalActor;
		float AcceptanceRadius;
		enum class EAIOptionFlag StopOnOverlap;
		enum class EAIOptionFlag AcceptPartialPath;
		bool bUsePathfinding;
		bool bLockAILogic;
		bool bUseContinuosGoalTracking;
		enum class EAIOptionFlag ProjectGoalOnNavigation;
		struct UAITask_MoveTo ReturnValue;

	}; AIMoveTo_Params Params;

	Params.Controller = Controller;
	Params.GoalLocation = GoalLocation;
	Params.GoalActor = GoalActor;
	Params.AcceptanceRadius = AcceptanceRadius;
	Params.StopOnOverlap = StopOnOverlap;
	Params.AcceptPartialPath = AcceptPartialPath;
	Params.bUsePathfinding = bUsePathfinding;
	Params.bLockAILogic = bLockAILogic;
	Params.bUseContinuosGoalTracking = bUseContinuosGoalTracking;
	Params.ProjectGoalOnNavigation = ProjectGoalOnNavigation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BrainComponent.StopLogic
inline void UBrainComponent::StopLogic(struct FString reason) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");

	struct StopLogic_Params {
		struct FString reason;
	}; StopLogic_Params Params;

	Params.reason = reason;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.StartLogic
inline void UBrainComponent::StartLogic() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StartLogic");

	struct StartLogic_Params {
		
	}; StartLogic_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.RestartLogic
inline void UBrainComponent::RestartLogic() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");

	struct RestartLogic_Params {
		
	}; RestartLogic_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BrainComponent.IsRunning
inline bool UBrainComponent::IsRunning() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsRunning");

	struct IsRunning_Params {
		
		bool ReturnValue;

	}; IsRunning_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BrainComponent.IsPaused
inline bool UBrainComponent::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.IsPaused");

	struct IsPaused_Params {
		
		bool ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
inline void UBehaviorTreeComponent::SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree BehaviorAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");

	struct SetDynamicSubtree_Params {
		struct FGameplayTag InjectTag;
		struct UBehaviorTree BehaviorAsset;
	}; SetDynamicSubtree_Params Params;

	Params.InjectTag = InjectTag;
	Params.BehaviorAsset = BehaviorAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
inline float UBehaviorTreeComponent::GetTagCooldownEndTime(struct FGameplayTag CooldownTag) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");

	struct GetTagCooldownEndTime_Params {
		struct FGameplayTag CooldownTag;
		float ReturnValue;

	}; GetTagCooldownEndTime_Params Params;

	Params.CooldownTag = CooldownTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
inline void UBehaviorTreeComponent::AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");

	struct AddCooldownTagDuration_Params {
		struct FGameplayTag CooldownTag;
		float CooldownDuration;
		bool bAddToExistingDuration;
	}; AddCooldownTagDuration_Params Params;

	Params.CooldownTag = CooldownTag;
	Params.CooldownDuration = CooldownDuration;
	Params.bAddToExistingDuration = bAddToExistingDuration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BlackboardComponent.SetValueAsVector
inline void UBlackboardComponent::SetValueAsVector(struct FName& KeyName, struct FVector VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");

	struct SetValueAsVector_Params {
		struct FName& KeyName;
		struct FVector VectorValue;
	}; SetValueAsVector_Params Params;

	Params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsString
inline void UBlackboardComponent::SetValueAsString(struct FName& KeyName, struct FString StringValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");

	struct SetValueAsString_Params {
		struct FName& KeyName;
		struct FString StringValue;
	}; SetValueAsString_Params Params;

	Params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsRotator
inline void UBlackboardComponent::SetValueAsRotator(struct FName& KeyName, struct FRotator VectorValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");

	struct SetValueAsRotator_Params {
		struct FName& KeyName;
		struct FRotator VectorValue;
	}; SetValueAsRotator_Params Params;

	Params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsObject
inline void UBlackboardComponent::SetValueAsObject(struct FName& KeyName, struct Object ObjectValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");

	struct SetValueAsObject_Params {
		struct FName& KeyName;
		struct Object ObjectValue;
	}; SetValueAsObject_Params Params;

	Params.ObjectValue = ObjectValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsName
inline void UBlackboardComponent::SetValueAsName(struct FName& KeyName, struct FName NameValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");

	struct SetValueAsName_Params {
		struct FName& KeyName;
		struct FName NameValue;
	}; SetValueAsName_Params Params;

	Params.NameValue = NameValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsInt
inline void UBlackboardComponent::SetValueAsInt(struct FName& KeyName, int32_t IntValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");

	struct SetValueAsInt_Params {
		struct FName& KeyName;
		int32_t IntValue;
	}; SetValueAsInt_Params Params;

	Params.IntValue = IntValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsFloat
inline void UBlackboardComponent::SetValueAsFloat(struct FName& KeyName, float FloatValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");

	struct SetValueAsFloat_Params {
		struct FName& KeyName;
		float FloatValue;
	}; SetValueAsFloat_Params Params;

	Params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsEnum
inline void UBlackboardComponent::SetValueAsEnum(struct FName& KeyName, char EnumValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");

	struct SetValueAsEnum_Params {
		struct FName& KeyName;
		char EnumValue;
	}; SetValueAsEnum_Params Params;

	Params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsClass
inline void UBlackboardComponent::SetValueAsClass(struct FName& KeyName, struct UClass* ClassValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");

	struct SetValueAsClass_Params {
		struct FName& KeyName;
		struct UClass* ClassValue;
	}; SetValueAsClass_Params Params;

	Params.ClassValue = ClassValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.SetValueAsBool
inline void UBlackboardComponent::SetValueAsBool(struct FName& KeyName, bool BoolValue) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");

	struct SetValueAsBool_Params {
		struct FName& KeyName;
		bool BoolValue;
	}; SetValueAsBool_Params Params;

	Params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BlackboardComponent.IsVectorValueSet
inline bool UBlackboardComponent::IsVectorValueSet(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");

	struct IsVectorValueSet_Params {
		struct FName& KeyName;
		bool ReturnValue;

	}; IsVectorValueSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsVector
inline struct FVector UBlackboardComponent::GetValueAsVector(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");

	struct GetValueAsVector_Params {
		struct FName& KeyName;
		struct FVector ReturnValue;

	}; GetValueAsVector_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsString
inline struct FString UBlackboardComponent::GetValueAsString(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");

	struct GetValueAsString_Params {
		struct FName& KeyName;
		struct FString ReturnValue;

	}; GetValueAsString_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsRotator
inline struct FRotator UBlackboardComponent::GetValueAsRotator(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");

	struct GetValueAsRotator_Params {
		struct FName& KeyName;
		struct FRotator ReturnValue;

	}; GetValueAsRotator_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsObject
inline struct Object UBlackboardComponent::GetValueAsObject(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");

	struct GetValueAsObject_Params {
		struct FName& KeyName;
		struct Object ReturnValue;

	}; GetValueAsObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsName
inline struct FName UBlackboardComponent::GetValueAsName(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");

	struct GetValueAsName_Params {
		struct FName& KeyName;
		struct FName ReturnValue;

	}; GetValueAsName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsInt
inline int32_t UBlackboardComponent::GetValueAsInt(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");

	struct GetValueAsInt_Params {
		struct FName& KeyName;
		int32_t ReturnValue;

	}; GetValueAsInt_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsFloat
inline float UBlackboardComponent::GetValueAsFloat(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");

	struct GetValueAsFloat_Params {
		struct FName& KeyName;
		float ReturnValue;

	}; GetValueAsFloat_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsEnum
inline char UBlackboardComponent::GetValueAsEnum(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");

	struct GetValueAsEnum_Params {
		struct FName& KeyName;
		char ReturnValue;

	}; GetValueAsEnum_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsClass
inline struct UClass* UBlackboardComponent::GetValueAsClass(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");

	struct GetValueAsClass_Params {
		struct FName& KeyName;
		struct UClass* ReturnValue;

	}; GetValueAsClass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetValueAsBool
inline bool UBlackboardComponent::GetValueAsBool(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");

	struct GetValueAsBool_Params {
		struct FName& KeyName;
		bool ReturnValue;

	}; GetValueAsBool_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetRotationFromEntry
inline bool UBlackboardComponent::GetRotationFromEntry(struct FName& KeyName, struct FRotator& ResultRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");

	struct GetRotationFromEntry_Params {
		struct FName& KeyName;
		struct FRotator& ResultRotation;
		bool ReturnValue;

	}; GetRotationFromEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;
	ResultRotation = Params.ResultRotation;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.GetLocationFromEntry
inline bool UBlackboardComponent::GetLocationFromEntry(struct FName& KeyName, struct FVector& ResultLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");

	struct GetLocationFromEntry_Params {
		struct FName& KeyName;
		struct FVector& ResultLocation;
		bool ReturnValue;

	}; GetLocationFromEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;
	ResultLocation = Params.ResultLocation;


	return params.ReturnValue;
}

// Function AIModule.BlackboardComponent.ClearValue
inline void UBlackboardComponent::ClearValue(struct FName& KeyName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");

	struct ClearValue_Params {
		struct FName& KeyName;
	}; ClearValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	KeyName = Params.KeyName;

}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
inline void UBTDecorator_BlueprintBase::ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
inline void UBTDecorator_BlueprintBase::ReceiveTick(struct UActor OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct UActor OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
inline void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");

	struct ReceiveObserverDeactivatedAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveObserverDeactivatedAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
inline void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");

	struct ReceiveObserverDeactivated_Params {
		struct UActor OwnerActor;
	}; ReceiveObserverDeactivated_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
inline void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");

	struct ReceiveObserverActivatedAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveObserverActivatedAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
inline void UBTDecorator_BlueprintBase::ReceiveObserverActivated(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");

	struct ReceiveObserverActivated_Params {
		struct UActor OwnerActor;
	}; ReceiveObserverActivated_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
inline void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");

	struct ReceiveExecutionStartAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveExecutionStartAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
inline void UBTDecorator_BlueprintBase::ReceiveExecutionStart(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");

	struct ReceiveExecutionStart_Params {
		struct UActor OwnerActor;
	}; ReceiveExecutionStart_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
inline void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(struct AAIController OwnerController, struct APawn ControlledPawn, enum class EBTNodeResult NodeResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");

	struct ReceiveExecutionFinishAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
		enum class EBTNodeResult NodeResult;
	}; ReceiveExecutionFinishAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
inline void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(struct UActor OwnerActor, enum class EBTNodeResult NodeResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");

	struct ReceiveExecutionFinish_Params {
		struct UActor OwnerActor;
		enum class EBTNodeResult NodeResult;
	}; ReceiveExecutionFinish_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.NodeResult = NodeResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
inline bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");

	struct PerformConditionCheckAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
		bool ReturnValue;

	}; PerformConditionCheckAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
inline bool UBTDecorator_BlueprintBase::PerformConditionCheck(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");

	struct PerformConditionCheck_Params {
		struct UActor OwnerActor;
		bool ReturnValue;

	}; PerformConditionCheck_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
inline bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");

	struct IsDecoratorObserverActive_Params {
		
		bool ReturnValue;

	}; IsDecoratorObserverActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
inline bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");

	struct IsDecoratorExecutionActive_Params {
		
		bool ReturnValue;

	}; IsDecoratorExecutionActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
inline void UBTService_BlueprintBase::ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveTick
inline void UBTService_BlueprintBase::ReceiveTick(struct UActor OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct UActor OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
inline void UBTService_BlueprintBase::ReceiveSearchStartAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");

	struct ReceiveSearchStartAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveSearchStartAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
inline void UBTService_BlueprintBase::ReceiveSearchStart(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");

	struct ReceiveSearchStart_Params {
		struct UActor OwnerActor;
	}; ReceiveSearchStart_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
inline void UBTService_BlueprintBase::ReceiveDeactivationAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");

	struct ReceiveDeactivationAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveDeactivationAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
inline void UBTService_BlueprintBase::ReceiveDeactivation(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");

	struct ReceiveDeactivation_Params {
		struct UActor OwnerActor;
	}; ReceiveDeactivation_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
inline void UBTService_BlueprintBase::ReceiveActivationAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");

	struct ReceiveActivationAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveActivationAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
inline void UBTService_BlueprintBase::ReceiveActivation(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");

	struct ReceiveActivation_Params {
		struct UActor OwnerActor;
	}; ReceiveActivation_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTService_BlueprintBase.IsServiceActive
inline bool UBTService_BlueprintBase::IsServiceActive() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");

	struct IsServiceActive_Params {
		
		bool ReturnValue;

	}; IsServiceActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
inline void UBTTask_BlueprintBase::SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");

	struct SetFinishOnMessageWithId_Params {
		struct FName MessageName;
		int32_t RequestID;
	}; SetFinishOnMessageWithId_Params Params;

	Params.MessageName = MessageName;
	Params.RequestID = RequestID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
inline void UBTTask_BlueprintBase::SetFinishOnMessage(struct FName MessageName) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");

	struct SetFinishOnMessage_Params {
		struct FName MessageName;
	}; SetFinishOnMessage_Params Params;

	Params.MessageName = MessageName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
inline void UBTTask_BlueprintBase::ReceiveTickAI(struct AAIController OwnerController, struct APawn ControlledPawn, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");

	struct ReceiveTickAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
		float DeltaSeconds;
	}; ReceiveTickAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
inline void UBTTask_BlueprintBase::ReceiveTick(struct UActor OwnerActor, float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");

	struct ReceiveTick_Params {
		struct UActor OwnerActor;
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.OwnerActor = OwnerActor;
	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
inline void UBTTask_BlueprintBase::ReceiveExecuteAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");

	struct ReceiveExecuteAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveExecuteAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
inline void UBTTask_BlueprintBase::ReceiveExecute(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");

	struct ReceiveExecute_Params {
		struct UActor OwnerActor;
	}; ReceiveExecute_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
inline void UBTTask_BlueprintBase::ReceiveAbortAI(struct AAIController OwnerController, struct APawn ControlledPawn) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");

	struct ReceiveAbortAI_Params {
		struct AAIController OwnerController;
		struct APawn ControlledPawn;
	}; ReceiveAbortAI_Params Params;

	Params.OwnerController = OwnerController;
	Params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
inline void UBTTask_BlueprintBase::ReceiveAbort(struct UActor OwnerActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");

	struct ReceiveAbort_Params {
		struct UActor OwnerActor;
	}; ReceiveAbort_Params Params;

	Params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
inline bool UBTTask_BlueprintBase::IsTaskExecuting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");

	struct IsTaskExecuting_Params {
		
		bool ReturnValue;

	}; IsTaskExecuting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
inline bool UBTTask_BlueprintBase::IsTaskAborting() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");

	struct IsTaskAborting_Params {
		
		bool ReturnValue;

	}; IsTaskAborting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.BTTask_BlueprintBase.FinishExecute
inline void UBTTask_BlueprintBase::FinishExecute(bool bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");

	struct FinishExecute_Params {
		bool bSuccess;
	}; FinishExecute_Params Params;

	Params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.BTTask_BlueprintBase.FinishAbort
inline void UBTTask_BlueprintBase::FinishAbort() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");

	struct FinishAbort_Params {
		
	}; FinishAbort_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
inline void UPathFollowingComponent::OnNavDataRegistered(struct ANavigationData NavData) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnNavDataRegistered");

	struct OnNavDataRegistered_Params {
		struct ANavigationData NavData;
	}; OnNavDataRegistered_Params Params;

	Params.NavData = NavData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PathFollowingComponent.OnActorBump
inline void UPathFollowingComponent::OnActorBump(struct UActor SelfActor, struct UActor OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");

	struct OnActorBump_Params {
		struct UActor SelfActor;
		struct UActor OtherActor;
		struct FVector NormalImpulse;
		struct FHitResult& Hit;
	}; OnActorBump_Params Params;

	Params.SelfActor = SelfActor;
	Params.OtherActor = OtherActor;
	Params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Hit = Params.Hit;

}

// Function AIModule.PathFollowingComponent.GetPathDestination
inline struct FVector UPathFollowingComponent::GetPathDestination() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");

	struct GetPathDestination_Params {
		
		struct FVector ReturnValue;

	}; GetPathDestination_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PathFollowingComponent.GetPathActionType
inline enum class EPathFollowingAction UPathFollowingComponent::GetPathActionType() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");

	struct GetPathActionType_Params {
		
		enum class EPathFollowingAction ReturnValue;

	}; GetPathActionType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
inline void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");

	struct SuspendCrowdSteering_Params {
		bool bSuspend;
	}; SuspendCrowdSteering_Params Params;

	Params.bSuspend = bSuspend;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
inline struct Object UEnvQueryGenerator_BlueprintBase::GetQuerier() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");

	struct GetQuerier_Params {
		
		struct Object ReturnValue;

	}; GetQuerier_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
inline void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(struct TArray<struct FVector>& ContextLocations) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");

	struct DoItemGeneration_Params {
		struct TArray<struct FVector>& ContextLocations;
	}; DoItemGeneration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ContextLocations = Params.ContextLocations;

}

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
inline void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(struct FVector GeneratedVector) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");

	struct AddGeneratedVector_Params {
		struct FVector GeneratedVector;
	}; AddGeneratedVector_Params Params;

	Params.GeneratedVector = GeneratedVector;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
inline void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(struct UActor GeneratedActor) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");

	struct AddGeneratedActor_Params {
		struct UActor GeneratedActor;
	}; AddGeneratedActor_Params Params;

	Params.GeneratedActor = GeneratedActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
inline void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(struct FName ParamName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam");

	struct SetNamedParam_Params {
		struct FName ParamName;
		float Value;
	}; SetNamedParam_Params Params;

	Params.ParamName = ParamName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
inline struct TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");

	struct GetResultsAsLocations_Params {
		
		struct TArray<struct FVector> ReturnValue;

	}; GetResultsAsLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
inline struct TArray<struct UActor> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");

	struct GetResultsAsActors_Params {
		
		struct TArray<struct UActor> ReturnValue;

	}; GetResultsAsActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
inline bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(struct TArray<struct FVector>& ResultLocations) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations");

	struct GetQueryResultsAsLocations_Params {
		struct TArray<struct FVector>& ResultLocations;
		bool ReturnValue;

	}; GetQueryResultsAsLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ResultLocations = Params.ResultLocations;


	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
inline bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(struct TArray<struct UActor>& ResultActors) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors");

	struct GetQueryResultsAsActors_Params {
		struct TArray<struct UActor>& ResultActors;
		bool ReturnValue;

	}; GetQueryResultsAsActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ResultActors = Params.ResultActors;


	return params.ReturnValue;
}

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
inline float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");

	struct GetItemScore_Params {
		int32_t ItemIndex;
		float ReturnValue;

	}; GetItemScore_Params Params;

	Params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
inline void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper QueryInstance, enum class EEnvQueryStatus QueryStatus) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");

	struct EQSQueryDoneSignature__DelegateSignature_Params {
		struct UEnvQueryInstanceBlueprintWrapper QueryInstance;
		enum class EEnvQueryStatus QueryStatus;
	}; EQSQueryDoneSignature__DelegateSignature_Params Params;

	Params.QueryInstance = QueryInstance;
	Params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.EnvQueryManager.RunEQSQuery
inline struct UEnvQueryInstanceBlueprintWrapper UEnvQueryManager::RunEQSQuery(struct Object WorldContextObject, struct UEnvQuery QueryTemplate, struct Object Querier, enum class EEnvQueryRunMode RunMode, struct UClass* WrapperClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");

	struct RunEQSQuery_Params {
		struct Object WorldContextObject;
		struct UEnvQuery QueryTemplate;
		struct Object Querier;
		enum class EEnvQueryRunMode RunMode;
		struct UClass* WrapperClass;
		struct UEnvQueryInstanceBlueprintWrapper ReturnValue;

	}; RunEQSQuery_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.QueryTemplate = QueryTemplate;
	Params.Querier = Querier;
	Params.RunMode = RunMode;
	Params.WrapperClass = WrapperClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
inline void ANavLinkProxy::SetSmartLinkEnabled(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.SetSmartLinkEnabled");

	struct SetSmartLinkEnabled_Params {
		bool bEnabled;
	}; SetSmartLinkEnabled_Params Params;

	Params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.NavLinkProxy.ResumePathFollowing
inline void ANavLinkProxy::ResumePathFollowing(struct UActor Agent) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ResumePathFollowing");

	struct ResumePathFollowing_Params {
		struct UActor Agent;
	}; ResumePathFollowing_Params Params;

	Params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
inline void ANavLinkProxy::ReceiveSmartLinkReached(struct UActor Agent, struct FVector& Destination) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.ReceiveSmartLinkReached");

	struct ReceiveSmartLinkReached_Params {
		struct UActor Agent;
		struct FVector& Destination;
	}; ReceiveSmartLinkReached_Params Params;

	Params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Destination = Params.Destination;

}

// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
inline bool ANavLinkProxy::IsSmartLinkEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.IsSmartLinkEnabled");

	struct IsSmartLinkEnabled_Params {
		
		bool ReturnValue;

	}; IsSmartLinkEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.NavLinkProxy.HasMovingAgents
inline bool ANavLinkProxy::HasMovingAgents() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.NavLinkProxy.HasMovingAgents");

	struct HasMovingAgents_Params {
		
		bool ReturnValue;

	}; HasMovingAgents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnAction.GetActionPriority
inline enum class EAIRequestPriority UPawnAction::GetActionPriority() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");

	struct GetActionPriority_Params {
		
		enum class EAIRequestPriority ReturnValue;

	}; GetActionPriority_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnAction.Finish
inline void UPawnAction::Finish(enum class EPawnActionResult WithResult) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");

	struct Finish_Params {
		enum class EPawnActionResult WithResult;
	}; Finish_Params Params;

	Params.WithResult = WithResult;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnAction.CreateActionInstance
inline struct UPawnAction UPawnAction::CreateActionInstance(struct Object WorldContextObject, struct UClass* ActionClass) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");

	struct CreateActionInstance_Params {
		struct Object WorldContextObject;
		struct UClass* ActionClass;
		struct UPawnAction ReturnValue;

	}; CreateActionInstance_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_PushAction
inline bool UPawnActionsComponent::K2_PushAction(struct UPawnAction NewAction, enum class EAIRequestPriority Priority, struct Object Instigator) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");

	struct K2_PushAction_Params {
		struct UPawnAction NewAction;
		enum class EAIRequestPriority Priority;
		struct Object Instigator;
		bool ReturnValue;

	}; K2_PushAction_Params Params;

	Params.NewAction = NewAction;
	Params.Priority = Priority;
	Params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_PerformAction
inline bool UPawnActionsComponent::K2_PerformAction(struct APawn Pawn, struct UPawnAction Action, enum class EAIRequestPriority Priority) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");

	struct K2_PerformAction_Params {
		struct APawn Pawn;
		struct UPawnAction Action;
		enum class EAIRequestPriority Priority;
		bool ReturnValue;

	}; K2_PerformAction_Params Params;

	Params.Pawn = Pawn;
	Params.Action = Action;
	Params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
inline enum class EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(struct UPawnAction ActionToAbort) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");

	struct K2_ForceAbortAction_Params {
		struct UPawnAction ActionToAbort;
		enum class EPawnActionAbortState ReturnValue;

	}; K2_ForceAbortAction_Params Params;

	Params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnActionsComponent.K2_AbortAction
inline enum class EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(struct UPawnAction ActionToAbort) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");

	struct K2_AbortAction_Params {
		struct UPawnAction ActionToAbort;
		enum class EPawnActionAbortState ReturnValue;

	}; K2_AbortAction_Params Params;

	Params.ActionToAbort = ActionToAbort;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
inline void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");

	struct SetSensingUpdatesEnabled_Params {
		bool bEnabled;
	}; SetSensingUpdatesEnabled_Params Params;

	Params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnSensingComponent.SetSensingInterval
inline void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");

	struct SetSensingInterval_Params {
		float NewSensingInterval;
	}; SetSensingInterval_Params Params;

	Params.NewSensingInterval = NewSensingInterval;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
inline void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");

	struct SetPeripheralVisionAngle_Params {
		float NewPeripheralVisionAngle;
	}; SetPeripheralVisionAngle_Params Params;

	Params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
inline void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(struct APawn Pawn) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");

	struct SeePawnDelegate__DelegateSignature_Params {
		struct APawn Pawn;
	}; SeePawnDelegate__DelegateSignature_Params Params;

	Params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
inline void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(struct APawn Instigator, struct FVector& Location, float Volume) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");

	struct HearNoiseDelegate__DelegateSignature_Params {
		struct APawn Instigator;
		struct FVector& Location;
		float Volume;
	}; HearNoiseDelegate__DelegateSignature_Params Params;

	Params.Instigator = Instigator;
	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Location = Params.Location;

}

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
inline float UPawnSensingComponent::GetPeripheralVisionCosine() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");

	struct GetPeripheralVisionCosine_Params {
		
		float ReturnValue;

	}; GetPeripheralVisionCosine_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
inline float UPawnSensingComponent::GetPeripheralVisionAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");

	struct GetPeripheralVisionAngle_Params {
		
		float ReturnValue;

	}; GetPeripheralVisionAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

