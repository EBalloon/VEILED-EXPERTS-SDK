// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t {
	Auto = 0,
	User = 1,
	Break = 2,
	Linear = 3,
	Constant = 4,
	EMovieSceneKeyInterpolation_MAX = 5,
};

// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t {
	Invalid = 0,
	Absolute = 1,
	Additive = 2,
	Relative = 4,
	EMovieSceneBlendType_MAX = 5,
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t {
	Linear = 0,
	SinIn = 1,
	SinOut = 2,
	SinInOut = 3,
	QuadIn = 4,
	QuadOut = 5,
	QuadInOut = 6,
	CubicIn = 7,
	CubicOut = 8,
	CubicInOut = 9,
	QuartIn = 10,
	QuartOut = 11,
	QuartInOut = 12,
	QuintIn = 13,
	QuintOut = 14,
	QuintInOut = 15,
	ExpoIn = 16,
	ExpoOut = 17,
	ExpoInOut = 18,
	CircIn = 19,
	CircOut = 20,
	CircInOut = 21,
	EMovieSceneBuiltInEasing_MAX = 22,
};

// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t {
	Static = 0,
	Swept = 1,
	EEvaluationMethod_MAX = 2,
};

// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t {
	Tick = 0,
	Platform = 1,
	Audio = 2,
	RelativeTimecode = 3,
	Timecode = 4,
	Custom = 5,
	EUpdateClockSource_MAX = 6,
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t {
	FrameLocked = 0,
	WithSubFrames = 1,
	EMovieSceneEvaluationType_MAX = 2,
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t {
	Stopped = 0,
	Playing = 1,
	Recording = 2,
	Scrubbing = 3,
	Jumping = 4,
	Stepping = 5,
	Paused = 6,
	MAX = 7,
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t {
	Local = 0,
	Root = 1,
	EMovieSceneObjectBindingSpace_MAX = 2,
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t {
	KeepState = 0,
	RestoreState = 1,
	ProjectDefault = 2,
	EMovieSceneCompletionMode_MAX = 3,
};

// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t {
	None = 0,
	PreRoll = 1,
	PostRoll = 2,
	ESectionEvaluationFlags_MAX = 3,
};

// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t {
	Play = 0,
	Jump = 1,
	Scrub = 2,
	EUpdatePositionMethod_MAX = 3,
};

// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t {
	InnerSequence = 0,
	MasterSequence = 1,
	External = 2,
	ESpawnOwnership_MAX = 3,
};

// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public Object {

public:

	struct FGuid Signature; // 0x28 (16)
};

// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject {

public:

	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x50 (2)
	struct FMovieSceneEasingSettings Easing; // 0x58 (56)
	struct FMovieSceneFrameRange SectionRange; // 0x90 (16)
	struct FFrameNumber PreRollFrames; // 0xA0 (4)
	struct FFrameNumber PostRollFrames; // 0xA4 (4)
	int32_t RowIndex; // 0xA8 (4)
	int32_t OverlapPriority; // 0xAC (4)
	char bIsActive : 1; // 0xB0 (1)
	char pad_AA_1 : 7; // 0xAA (1)
	char pad_AB_0 : 1; // 0xAB (1)
	char bIsLocked : 1; // 0xB0 (1)
	char pad_AB_2 : 6; // 0xAB (1)
	float StartTime; // 0xB4 (4)
	float EndTime; // 0xB8 (4)
	float PrerollTime; // 0xBC (4)
	float PostrollTime; // 0xC0 (4)
	char bIsInfinite : 1; // 0xC4 (1)
	char pad_BC_1 : 7; // 0xBC (1)
	bool bSupportsInfiniteRange; // 0xC8 (1)
	struct FOptionalMovieSceneBlendType BlendType; // 0xC9 (2)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2878310>
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2878280>
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x28781F0>
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2878170>
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x28780E0>
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2878050>
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2877FD0>
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType(RequiredAPI|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2877F50>
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877F20>
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877EF0>
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877ED0>
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877EB0>
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877E90>
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877E70>
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877E50>
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877E20>
};

// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject {

public:

	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x50 (4)
	bool bIsEvalDisabled; // 0x55 (1)
};

// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject {

public:

	struct FMovieSceneEvaluationTemplate PrecompiledEvaluationTemplate; // 0x50 (752)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x340 (1)
	bool bParentContextsAreSignificant; // 0x341 (1)
	bool bPlayableDirectly; // 0x342 (1)

	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877D40>
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2877C90>
};

// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public Object {

public:

	struct FMulticastInlineDelegate OnPlay; // 0x408 (16)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x418 (16)
	struct FMulticastInlineDelegate OnStop; // 0x428 (16)
	struct FMulticastInlineDelegate OnPause; // 0x438 (16)
	struct FMulticastInlineDelegate OnFinished; // 0x448 (16)
	enum class EMovieScenePlayerStatus Status; // 0x458 (1)
	char bReversePlayback : 1; // 0x45C (1)
	char pad_79_1 : 7; // 0x79 (1)
	struct UMovieSceneSequence Sequence; // 0x460 (8)
	struct FFrameNumber StartTime; // 0x468 (4)
	int32_t DurationFrames; // 0x46C (4)
	int32_t CurrentNumLoops; // 0x470 (4)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488 (20)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4A0 (800)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x828 (16)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x838 (16)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C460>
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C440>
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C380>
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C0C0>
	void SetPlaybackRange(float NewStartTime, float NewEndTime); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C240>
	void SetPlaybackPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C140>
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C030>
	void SetFrameRange(int32_t StartFrame, int32_t Duration); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BF70>
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BEE0>
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B880>
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BE30>
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BDA0>
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BD80>
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <VeiledExperts-Win64-Shipping.exe+0x287BCF0>
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent(Final|Net|NetReliableNative|Event|NetMulticast|Private) // <VeiledExperts-Win64-Shipping.exe+0x287BC20>
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BBA0>
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BAF0>
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BA60>
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287BA40>
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B9C0>
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B9A0>
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B980>
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B900>
	void JumpToPosition(float NewPlaybackPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToPosition(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B880>
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B7D0>
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B740>
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B710>
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B6E0>
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B6B0>
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B690>
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B640>
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B3E0>
	float GetPlaybackStart(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B590>
	float GetPlaybackPosition(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B4A0>
	float GetPlaybackEnd(); // Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B410>
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct Object InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B300>
	float GetLength(); // Function MovieScene.MovieSceneSequencePlayer.GetLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B2D0>
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B2B0>
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B280>
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B220>
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B1E0>
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B1B0>
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B170>
	struct TArray<struct Object> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B070>
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287B050>
};

// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection {

public:

	struct FMovieSceneSectionParameters Parameters; // 0xE0 (36)
	float StartOffset; // 0x104 (4)
	float TimeScale; // 0x108 (4)
	float PrerollTime; // 0x10C (4)
	struct UMovieSceneSequence SubSequence; // 0x110 (8)
	LazyObjectProperty ActorToRecord; // 0x118 (28)
	struct FString TargetSequenceName; // 0x138 (16)
	struct FDirectoryPath TargetPathToRecordTo; // 0x148 (16)

	void SetSequence(struct UMovieSceneSequence Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x287C300>
	struct UMovieSceneSequence GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x287B610>
};

// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack {

public:

	struct TArray<struct UMovieSceneSection> Sections; // 0x58 (16)
};

// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject {

public:

	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x50 (16)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x60 (16)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x70 (16)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x80 (80)
	struct TArray<struct UMovieSceneTrack> MasterTracks; // 0xD0 (16)
	struct UMovieSceneTrack CameraCutTrack; // 0xE0 (8)
	struct FMovieSceneFrameRange SelectionRange; // 0xE8 (16)
	struct FMovieSceneFrameRange PlaybackRange; // 0xF8 (16)
	struct FFrameRate TickResolution; // 0x108 (8)
	struct FFrameRate DisplayRate; // 0x110 (8)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x118 (1)
	enum class EUpdateClockSource ClockSource; // 0x119 (1)
	struct FSoftObjectPath CustomClockSourcePath; // 0x120 (24)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x138 (16)
};

// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public Object {

public:

	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x28 (16)
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public Object {

public:

	enum class EMovieSceneBuiltInEasing Type; // 0x30 (1)
};

// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public Object {

public:

	struct UCurveFloat Curve; // 0x30 (8)
};

// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public Object {

public:

	struct FName FolderName; // 0x28 (8)
	struct TArray<struct UMovieSceneFolder> ChildFolders; // 0x30 (16)
	struct TArray<struct UMovieSceneTrack> ChildMasterTracks; // 0x40 (16)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x50 (16)
};

// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack {

public:

	bool bHighPassFilter; // 0x58 (1)
	struct TArray<struct UMovieSceneSection> SectionArray; // 0x60 (16)
};

// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
};

// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack {

public:

	struct TArray<struct UMovieSceneSection> SectionArray; // 0x68 (16)
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	enum class EMovieSceneCompletionMode CompletionMode; // 0x10 (1)
	struct TWeakObjectPtr<struct UMovieSceneSection> SourceSectionPtr; // 0x14 (8)
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8 (16)
	bool DefaultValue; // 0x18 (1)
	bool bHasDefaultValue; // 0x19 (1)
	struct TArray<bool> Values; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : FMovieSceneChannel {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x8 (1)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x9 (1)
	struct TArray<struct FFrameNumber> Times; // 0x10 (16)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x20 (16)
	float DefaultValue; // 0x30 (4)
	bool bHasDefaultValue; // 0x34 (1)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x38 (96)
	struct FFrameRate TickResolution; // 0x98 (8)
};

// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue {
	float Value; // 0x0 (4)
	struct FMovieSceneTangentData Tangent; // 0x4 (20)
	enum class ERichCurveInterpMode InterpMode; // 0x18 (1)
	enum class ERichCurveTangentMode TangentMode; // 0x19 (1)
	char PaddingByte; // 0x1A (1)
};

// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0 (4)
	float LeaveTangent; // 0x4 (4)
	float ArriveTangentWeight; // 0x8 (4)
	float LeaveTangentWeight; // 0xC (4)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x10 (1)
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8 (16)
	int32_t DefaultValue; // 0x18 (4)
	bool bHasDefaultValue; // 0x1C (1)
	struct TArray<int32_t> Values; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20 (40)
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData {
	struct FName PropertyName; // 0x0 (8)
	struct FString PropertyPath; // 0x8 (16)
	struct FName FunctionName; // 0x18 (8)
	struct FName NotifyFunctionName; // 0x20 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand {
	struct FGuid ObjectBindingID; // 0x0 (16)
	struct FMovieSceneSequenceID SequenceID; // 0x10 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup {
	struct TArray<struct TWeakObjectPtr<struct UMovieSceneSection>> Sections; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs {
	struct TArray<struct FMovieSceneObjectBindingID> IDs; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0 (4)
	enum class EMovieSceneObjectBindingSpace Space; // 0x4 (1)
	struct FGuid Guid; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels {
	struct TArray<struct FString> Strings; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData {
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0 (80)
	struct TArray<struct FString> PinnedNodes; // 0x50 (16)
	double ViewStart; // 0x60 (8)
	double ViewEnd; // 0x68 (8)
	double WorkStart; // 0x70 (8)
	double WorkEnd; // 0x78 (8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80 (80)
	struct FFloatRange WorkingRange; // 0xD0 (16)
	struct FFloatRange ViewRange; // 0xE0 (16)
};

// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0 (1)
};

// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame {
	struct FFrameNumber FrameNumber; // 0x0 (4)
	struct FString Label; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource {
	struct FTimecode Timecode; // 0x0 (20)
	struct FFrameNumber DeltaFrame; // 0x14 (4)
};

// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding {
	struct FGuid ObjectGuid; // 0x0 (16)
	struct FString BindingName; // 0x10 (16)
	struct TArray<struct UMovieSceneTrack> Tracks; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData {
	struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0 (24)
	struct TWeakObjectPtr<struct Object> Object; // 0x18 (8)
	bool bOverridesDefault; // 0x20 (1)
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType {
	enum class EMovieSceneBlendType BlendType; // 0x0 (1)
	bool bIsValid; // 0x1 (1)
};

// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x8 (16)
	char DefaultValue; // 0x18 (1)
	bool bHasDefaultValue; // 0x19 (1)
	struct TArray<char> Values; // 0x20 (16)
	struct UEnum Enum; // 0x30 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField {
	struct TArray<struct FMovieSceneFrameRange> Ranges; // 0x0 (16)
	struct TArray<struct FMovieSceneEvaluationGroup> Groups; // 0x10 (16)
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData; // 0x20 (16)
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData {
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences; // 0x0 (16)
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10 (16)
	struct TMap<struct FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20 (80)
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey {
	struct FMovieSceneEvaluationKey Key; // 0x0 (12)
	uint16_t SetupIndex; // 0xC (2)
	uint16_t TearDownIndex; // 0xE (2)
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey {
	struct FMovieSceneSequenceID SequenceID; // 0x0 (4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4 (4)
	uint32_t SectionIndex; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup {
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0 (16)
	struct TArray<struct FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSequenceID SequenceID; // 0x0 (4)
	struct FMovieSceneTrackIdentifier TrackIdentifier; // 0x4 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	struct FMovieSceneSegmentIdentifier SegmentID; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0 (4)
	int32_t NumInitPtrs; // 0x4 (4)
	int32_t NumEvalPtrs; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate {
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0 (80)
	struct FMovieSceneEvaluationField EvaluationField; // 0xA0 (48)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0xD0 (160)
	struct FGuid SequenceSignature; // 0x170 (16)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180 (4)
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188 (168)
	struct FMovieSceneTrackFieldData TrackFieldData; // 0x230 (96)
	struct FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290 (96)
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger {
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0 (4)
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8 (80)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58 (80)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy {
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x0 (80)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50 (80)
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode {
	struct FMovieSceneSequenceID ParentID; // 0x0 (4)
	struct TArray<struct FMovieSceneSequenceID> Children; // 0x8 (16)
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData {
	struct FSoftObjectPath Sequence; // 0x0 (24)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18 (32)
	struct FFrameRate TickResolution; // 0x38 (8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x40 (4)
	struct FMovieSceneFrameRange PlayRange; // 0x44 (16)
	struct FMovieSceneFrameRange FullPlayRange; // 0x54 (16)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0x64 (16)
	struct FMovieSceneFrameRange PreRollRange; // 0x74 (16)
	struct FMovieSceneFrameRange PostRollRange; // 0x84 (16)
	int32_t HierarchicalBias; // 0x94 (4)
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98 (24)
	struct FGuid SubSectionSignature; // 0xB8 (16)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0xC8 (32)
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x0 (12)
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform {
	struct FMovieSceneTimeTransform LinearTransform; // 0x0 (12)
	struct FMovieSceneTimeWarping Warping; // 0xC (8)
};

// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping {
	struct FFrameNumber Start; // 0x0 (4)
	struct FFrameNumber End; // 0x4 (4)
};

// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0 (4)
	struct FFrameTime Offset; // 0x4 (8)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack {
	struct FGuid ObjectBindingID; // 0x0 (16)
	uint16_t EvaluationPriority; // 0x10 (2)
	enum class EEvaluationMethod EvaluationMethod; // 0x12 (1)
	struct FMovieSceneEvaluationTrackSegments Segments; // 0x18 (32)
	struct UMovieSceneTrack SourceTrack; // 0x38 (8)
	struct FSectionEvaluationDataTree EvaluationTree; // 0x40 (96)
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xA0 (16)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0xB0 (56)
	struct FName EvaluationGroup; // 0xE8 (8)
	char bEvaluateInPreroll : 1; // 0xF0 (1)
	char pad_EB_1 : 7; // 0xEB (1)
	char pad_EC_0 : 1; // 0xEC (1)
	char bEvaluateInPostroll : 1; // 0xF0 (1)
	char pad_EC_2 : 6; // 0xEC (1)
	char pad_ED_0 : 2; // 0xED (1)
	char bTearDownPriority : 1; // 0xF0 (1)
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
struct FMovieSceneEvaluationTrackSegments {
	struct TArray<int32_t> SegmentIdentifierToIndex; // 0x0 (16)
	struct TArray<struct FMovieSceneSegment> SortedSegments; // 0x10 (16)
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData {
	struct TWeakObjectPtr<struct UMovieSceneSubSection> Section; // 0x0 (8)
	struct FGuid ObjectBindingID; // 0x8 (16)
	enum class ESectionEvaluationFlags Flags; // 0x18 (1)
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance {
	struct TMap<struct FMovieSceneSequenceID, struct Object> DirectorInstances; // 0x18 (80)
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x8 (4)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	struct UClass* PropertyClass; // 0x8 (8)
	struct TArray<struct FFrameNumber> Times; // 0x10 (16)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x20 (16)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30 (48)
};

// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue {
	struct TSoftObjectPtr<Object> SoftPtr; // 0x0 (40)
	struct Object HardPtr; // 0x28 (8)
};

// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable {
	struct TArray<struct FName> Tags; // 0x0 (16)
	struct FGuid Guid; // 0x10 (16)
	struct FString Name; // 0x20 (16)
	struct UClass* PossessedObjectClass; // 0x30 (8)
	struct FGuid ParentGuid; // 0x38 (16)
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0 (4)
	int32_t AutoEaseOutDuration; // 0x4 (4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8 (16)
	bool bManualEaseIn; // 0x18 (1)
	int32_t ManualEaseInDuration; // 0x1C (4)
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20 (16)
	bool bManualEaseOut; // 0x30 (1)
	int32_t ManualEaseOutDuration; // 0x34 (4)
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0 (1)
	enum class EMovieSceneCompletionMode CompletionMode; // 0x1 (1)
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters {
	struct FFrameNumber StartFrameOffset; // 0x0 (4)
	bool bCanLoop; // 0x4 (1)
	struct FFrameNumber EndFrameOffset; // 0x8 (4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xC (4)
	float TimeScale; // 0x10 (4)
	int32_t HierarchicalBias; // 0x14 (4)
	float StartOffset; // 0x18 (4)
	float PrerollTime; // 0x1C (4)
	float PostrollTime; // 0x20 (4)
};

// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0 (4)
	struct FFrameNumber ForcedTime; // 0x4 (4)
	enum class ESectionEvaluationFlags Flags; // 0x8 (1)
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; // 0x0 (1)
	char pad_0_1 : 7; // 0x0 (1)
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4 (4)
	float PlayRate; // 0x8 (4)
	float StartTime; // 0xC (4)
	char bRandomStartTime : 1; // 0x10 (1)
	char pad_D_1 : 7; // 0xD (1)
	char pad_E_0 : 1; // 0xE (1)
	char bRestoreState : 1; // 0x10 (1)
	char pad_E_2 : 6; // 0xE (1)
	char pad_F_0 : 2; // 0xF (1)
	char bDisableMovementInput : 1; // 0x10 (1)
	char pad_F_3 : 5; // 0xF (1)
	char pad_10_0 : 3; // 0x10 (1)
	char bDisableLookAtInput : 1; // 0x10 (1)
	char bHidePlayer : 1; // 0x10 (1)
	char bHideHud : 1; // 0x10 (1)
	char bDisableCameraCuts : 1; // 0x10 (1)
	char bPauseAtEnd : 1; // 0x10 (1)
};

// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0 (4)
};

// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties {
	struct FFrameTime LastKnownPosition; // 0x0 (8)
	enum class EMovieScenePlayerStatus LastKnownStatus; // 0x8 (1)
	int32_t LastKnownNumLoops; // 0xC (4)
};

// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter {
	struct TArray<uint32_t> WarpCounts; // 0x0 (16)
};

// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable {
	struct FTransform SpawnTransform; // 0x0 (48)
	struct TArray<struct FName> Tags; // 0x30 (16)
	bool bContinuouslyRespawn; // 0x40 (1)
	struct FGuid Guid; // 0x44 (16)
	struct FString Name; // 0x58 (16)
	struct Object ObjectTemplate; // 0x68 (8)
	struct TArray<struct FGuid> ChildPossessables; // 0x70 (16)
	enum class ESpawnOwnership Ownership; // 0x80 (1)
	struct FName LevelName; // 0x84 (8)
};

// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0 (1)
};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0 (1)
	char bEvalNearestSection : 1; // 0x0 (1)
	char bEvaluateInPreroll : 1; // 0x0 (1)
	char bEvaluateInPostroll : 1; // 0x0 (1)
	char bEvaluateNearestSection : 1; // 0x0 (1)
};

// Function MovieScene.MovieSceneSection.SetRowIndex
inline void UMovieSceneSection::SetRowIndex(int32_t NewRowIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	struct SetRowIndex_Params {
		int32_t NewRowIndex;
	}; SetRowIndex_Params Params;

	Params.NewRowIndex = NewRowIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetPreRollFrames
inline void UMovieSceneSection::SetPreRollFrames(int32_t InPreRollFrames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	struct SetPreRollFrames_Params {
		int32_t InPreRollFrames;
	}; SetPreRollFrames_Params Params;

	Params.InPreRollFrames = InPreRollFrames;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetPostRollFrames
inline void UMovieSceneSection::SetPostRollFrames(int32_t InPostRollFrames) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	struct SetPostRollFrames_Params {
		int32_t InPostRollFrames;
	}; SetPostRollFrames_Params Params;

	Params.InPostRollFrames = InPostRollFrames;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetOverlapPriority
inline void UMovieSceneSection::SetOverlapPriority(int32_t NewPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	struct SetOverlapPriority_Params {
		int32_t NewPriority;
	}; SetOverlapPriority_Params Params;

	Params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetIsLocked
inline void UMovieSceneSection::SetIsLocked(bool bInIsLocked) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	struct SetIsLocked_Params {
		bool bInIsLocked;
	}; SetIsLocked_Params Params;

	Params.bInIsLocked = bInIsLocked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetIsActive
inline void UMovieSceneSection::SetIsActive(bool bInIsActive) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	struct SetIsActive_Params {
		bool bInIsActive;
	}; SetIsActive_Params Params;

	Params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetCompletionMode
inline void UMovieSceneSection::SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	struct SetCompletionMode_Params {
		enum class EMovieSceneCompletionMode InCompletionMode;
	}; SetCompletionMode_Params Params;

	Params.InCompletionMode = InCompletionMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.SetBlendType
inline void UMovieSceneSection::SetBlendType(enum class EMovieSceneBlendType InBlendType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	struct SetBlendType_Params {
		enum class EMovieSceneBlendType InBlendType;
	}; SetBlendType_Params Params;

	Params.InBlendType = InBlendType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSection.IsLocked
inline bool UMovieSceneSection::IsLocked() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	struct IsLocked_Params {
		
		bool ReturnValue;

	}; IsLocked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.IsActive
inline bool UMovieSceneSection::IsActive() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	struct IsActive_Params {
		
		bool ReturnValue;

	}; IsActive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetRowIndex
inline int32_t UMovieSceneSection::GetRowIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	struct GetRowIndex_Params {
		
		int32_t ReturnValue;

	}; GetRowIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetPreRollFrames
inline int32_t UMovieSceneSection::GetPreRollFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	struct GetPreRollFrames_Params {
		
		int32_t ReturnValue;

	}; GetPreRollFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetPostRollFrames
inline int32_t UMovieSceneSection::GetPostRollFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	struct GetPostRollFrames_Params {
		
		int32_t ReturnValue;

	}; GetPostRollFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetOverlapPriority
inline int32_t UMovieSceneSection::GetOverlapPriority() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	struct GetOverlapPriority_Params {
		
		int32_t ReturnValue;

	}; GetOverlapPriority_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetCompletionMode
inline enum class EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	struct GetCompletionMode_Params {
		
		enum class EMovieSceneCompletionMode ReturnValue;

	}; GetCompletionMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSection.GetBlendType
inline struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	struct GetBlendType_Params {
		
		struct FOptionalMovieSceneBlendType ReturnValue;

	}; GetBlendType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequence.FindBindingsByTag
inline struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(struct FName InBindingName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	struct FindBindingsByTag_Params {
		struct FName InBindingName;
		struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;

	}; FindBindingsByTag_Params Params;

	Params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequence.FindBindingByTag
inline struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(struct FName InBindingName) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	struct FindBindingByTag_Params {
		struct FName InBindingName;
		struct FMovieSceneObjectBindingID ReturnValue;

	}; FindBindingByTag_Params Params;

	Params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
inline void UMovieSceneSequencePlayer::StopAtCurrentTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	struct StopAtCurrentTime_Params {
		
	}; StopAtCurrentTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.Stop
inline void UMovieSceneSequencePlayer::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
inline void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	struct SetTimeRange_Params {
		float StartTime;
		float Duration;
	}; SetTimeRange_Params Params;

	Params.StartTime = StartTime;
	Params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
inline void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	struct SetPlayRate_Params {
		float PlayRate;
	}; SetPlayRate_Params Params;

	Params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
inline void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	struct SetPlaybackRange_Params {
		float NewStartTime;
		float NewEndTime;
	}; SetPlaybackRange_Params Params;

	Params.NewStartTime = NewStartTime;
	Params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
inline void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	struct SetPlaybackPosition_Params {
		float NewPlaybackPosition;
	}; SetPlaybackPosition_Params Params;

	Params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
inline void UMovieSceneSequencePlayer::SetFrameRate(struct FFrameRate FrameRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	struct SetFrameRate_Params {
		struct FFrameRate FrameRate;
	}; SetFrameRate_Params Params;

	Params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
inline void UMovieSceneSequencePlayer::SetFrameRange(int32_t StartFrame, int32_t Duration) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	struct SetFrameRange_Params {
		int32_t StartFrame;
		int32_t Duration;
	}; SetFrameRange_Params Params;

	Params.StartFrame = StartFrame;
	Params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
inline void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	struct SetDisableCameraCuts_Params {
		bool bInDisableCameraCuts;
	}; SetDisableCameraCuts_Params Params;

	Params.bInDisableCameraCuts = bInDisableCameraCuts;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
inline void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	struct ScrubToSeconds_Params {
		float TimeInSeconds;
	}; ScrubToSeconds_Params Params;

	Params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
inline bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	struct ScrubToMarkedFrame_Params {
		struct FString InLabel;
		bool ReturnValue;

	}; ScrubToMarkedFrame_Params Params;

	Params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
inline void UMovieSceneSequencePlayer::ScrubToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	struct ScrubToFrame_Params {
		struct FFrameTime NewPosition;
	}; ScrubToFrame_Params Params;

	Params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.Scrub
inline void UMovieSceneSequencePlayer::Scrub() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	struct Scrub_Params {
		
	}; Scrub_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
inline void UMovieSceneSequencePlayer::RPC_OnStopEvent(struct FFrameTime StoppedTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	struct RPC_OnStopEvent_Params {
		struct FFrameTime StoppedTime;
	}; RPC_OnStopEvent_Params Params;

	Params.StoppedTime = StoppedTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
inline void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	struct RPC_ExplicitServerUpdateEvent_Params {
		enum class EUpdatePositionMethod Method;
		struct FFrameTime RelevantTime;
	}; RPC_ExplicitServerUpdateEvent_Params Params;

	Params.Method = Method;
	Params.RelevantTime = RelevantTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
inline void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	struct PlayToSeconds_Params {
		float TimeInSeconds;
	}; PlayToSeconds_Params Params;

	Params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
inline bool UMovieSceneSequencePlayer::PlayToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	struct PlayToMarkedFrame_Params {
		struct FString InLabel;
		bool ReturnValue;

	}; PlayToMarkedFrame_Params Params;

	Params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
inline void UMovieSceneSequencePlayer::PlayToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	struct PlayToFrame_Params {
		struct FFrameTime NewPosition;
	}; PlayToFrame_Params Params;

	Params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
inline void UMovieSceneSequencePlayer::PlayReverse() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	struct PlayReverse_Params {
		
	}; PlayReverse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
inline void UMovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	struct PlayLooping_Params {
		int32_t NumLoops;
	}; PlayLooping_Params Params;

	Params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.Play
inline void UMovieSceneSequencePlayer::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.Pause
inline void UMovieSceneSequencePlayer::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	struct Pause_Params {
		
	}; Pause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
inline void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	struct JumpToSeconds_Params {
		float TimeInSeconds;
	}; JumpToSeconds_Params Params;

	Params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.JumpToPosition
inline void UMovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToPosition");

	struct JumpToPosition_Params {
		float NewPlaybackPosition;
	}; JumpToPosition_Params Params;

	Params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
inline bool UMovieSceneSequencePlayer::JumpToMarkedFrame(struct FString InLabel) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	struct JumpToMarkedFrame_Params {
		struct FString InLabel;
		bool ReturnValue;

	}; JumpToMarkedFrame_Params Params;

	Params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
inline void UMovieSceneSequencePlayer::JumpToFrame(struct FFrameTime NewPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	struct JumpToFrame_Params {
		struct FFrameTime NewPosition;
	}; JumpToFrame_Params Params;

	Params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.IsReversed
inline bool UMovieSceneSequencePlayer::IsReversed() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	struct IsReversed_Params {
		
		bool ReturnValue;

	}; IsReversed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
inline bool UMovieSceneSequencePlayer::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	struct IsPlaying_Params {
		
		bool ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.IsPaused
inline bool UMovieSceneSequencePlayer::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	struct IsPaused_Params {
		
		bool ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
inline void UMovieSceneSequencePlayer::GoToEndAndStop() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	struct GoToEndAndStop_Params {
		
	}; GoToEndAndStop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
inline struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	struct GetStartTime_Params {
		
		struct FQualifiedFrameTime ReturnValue;

	}; GetStartTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
inline float UMovieSceneSequencePlayer::GetPlayRate() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	struct GetPlayRate_Params {
		
		float ReturnValue;

	}; GetPlayRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
inline float UMovieSceneSequencePlayer::GetPlaybackStart() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	struct GetPlaybackStart_Params {
		
		float ReturnValue;

	}; GetPlaybackStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
inline float UMovieSceneSequencePlayer::GetPlaybackPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	struct GetPlaybackPosition_Params {
		
		float ReturnValue;

	}; GetPlaybackPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
inline float UMovieSceneSequencePlayer::GetPlaybackEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	struct GetPlaybackEnd_Params {
		
		float ReturnValue;

	}; GetPlaybackEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
inline struct TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(struct Object InObject) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	struct GetObjectBindings_Params {
		struct Object InObject;
		struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;

	}; GetObjectBindings_Params Params;

	Params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetLength
inline float UMovieSceneSequencePlayer::GetLength() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	struct GetLength_Params {
		
		float ReturnValue;

	}; GetLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
inline struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	struct GetFrameRate_Params {
		
		struct FFrameRate ReturnValue;

	}; GetFrameRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
inline int32_t UMovieSceneSequencePlayer::GetFrameDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	struct GetFrameDuration_Params {
		
		int32_t ReturnValue;

	}; GetFrameDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
inline struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	struct GetEndTime_Params {
		
		struct FQualifiedFrameTime ReturnValue;

	}; GetEndTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetDuration
inline struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	struct GetDuration_Params {
		
		struct FQualifiedFrameTime ReturnValue;

	}; GetDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
inline bool UMovieSceneSequencePlayer::GetDisableCameraCuts() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	struct GetDisableCameraCuts_Params {
		
		bool ReturnValue;

	}; GetDisableCameraCuts_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
inline struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	struct GetCurrentTime_Params {
		
		struct FQualifiedFrameTime ReturnValue;

	}; GetCurrentTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
inline struct TArray<struct Object> UMovieSceneSequencePlayer::GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	struct GetBoundObjects_Params {
		struct FMovieSceneObjectBindingID ObjectBinding;
		struct TArray<struct Object> ReturnValue;

	}; GetBoundObjects_Params Params;

	Params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
inline void UMovieSceneSequencePlayer::ChangePlaybackDirection() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	struct ChangePlaybackDirection_Params {
		
	}; ChangePlaybackDirection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSubSection.SetSequence
inline void UMovieSceneSubSection::SetSequence(struct UMovieSceneSequence Sequence) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	struct SetSequence_Params {
		struct UMovieSceneSequence Sequence;
	}; SetSequence_Params Params;

	Params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieScene.MovieSceneSubSection.GetSequence
inline struct UMovieSceneSequence UMovieSceneSubSection::GetSequence() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	struct GetSequence_Params {
		
		struct UMovieSceneSequence ReturnValue;

	}; GetSequence_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

