// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None = 0,
	DepthSensor = 1,
	Front = 2,
	Rear = 4,
	Unknown = 8,
	EMediaWebcamCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Software = 2,
	Unknown = 4,
	Webcam = 8,
	EMediaVideoCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None = 0,
	Card = 1,
	Microphone = 2,
	Software = 4,
	Unknown = 8,
	EMediaAudioCaptureDeviceFilter_MAX = 9,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	Audio = 0,
	Caption = 1,
	Metadata = 2,
	Script = 3,
	Subtitle = 4,
	Text = 5,
	Video = 6,
	EMediaPlayerTrack_MAX = 7,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	EMediaSoundComponentFFTSize_MAX = 4,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t {
	Mono = 0,
	Stereo = 1,
	Surround = 2,
	EMediaSoundChannels_MAX = 3,
};

// Class MediaAssets.BaseMediaSource
class UBaseMediaSource : public UMediaSource {

public:

	struct FName PlayerName; // 0x80 (8)
};

// Class MediaAssets.FileMediaSource
class UFileMediaSource : public UBaseMediaSource {

public:

	struct FString FilePath; // 0x88 (16)
	bool PrecacheFile; // 0x98 (1)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63880>
};

// Class MediaAssets.MediaComponent
class UMediaComponent : public UActorComponent {

public:

	struct UMediaTexture MediaTexture; // 0xB0 (8)
	struct UMediaPlayer MediaPlayer; // 0xB8 (8)

	struct UMediaTexture GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25EB2D0>
	struct UMediaPlayer GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61960>
};

// Class MediaAssets.MediaPlayer
class UMediaPlayer : public Object {

public:

	struct FMulticastInlineDelegate OnEndReached; // 0x28 (16)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38 (16)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48 (16)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58 (16)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68 (16)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78 (16)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88 (16)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98 (16)
	struct FTimespan CacheAhead; // 0xA8 (8)
	struct FTimespan CacheBehind; // 0xB0 (8)
	struct FTimespan CacheBehindGame; // 0xB8 (8)
	bool NativeAudioOut; // 0xC0 (1)
	bool PlayOnOpen; // 0xC1 (1)
	char Shuffle : 1; // 0xC4 (1)
	char pad_C2_1 : 7; // 0xC2 (1)
	char pad_C3_0 : 1; // 0xC3 (1)
	char Loop : 1; // 0xC4 (1)
	char pad_C3_2 : 6; // 0xC3 (1)
	struct UMediaPlaylist Playlist; // 0xC8 (8)
	int32_t PlaylistIndex; // 0xD0 (4)
	struct FTimespan TimeDelay; // 0xD8 (8)
	float HorizontalFieldOfView; // 0xE0 (4)
	float VerticalFieldOfView; // 0xE4 (4)
	struct FRotator ViewRotation; // 0xE8 (12)
	struct FGuid PlayerGuid; // 0x120 (16)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B64640>
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B64610>
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B64540>
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B64460>
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B64350>
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B64250>
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B64150>
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B640D0>
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63F20>
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63E90>
	void SetMediaOptions(struct UMediaSource Options); // Function MediaAssets.MediaPlayer.SetMediaOptions(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63D10>
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63920>
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63620>
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63590>
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B634D0>
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63430>
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63400>
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63310>
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B631C0>
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B631A0>
	bool Play(); // Function MediaAssets.MediaPlayer.Play(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63170>
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63140>
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63090>
	bool OpenSourceWithOptions(struct UMediaSource MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62F90>
	void OpenSourceLatent(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62DB0>
	bool OpenSource(struct UMediaSource MediaSource); // Function MediaAssets.MediaPlayer.OpenSource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62D20>
	bool OpenPlaylistIndex(struct UMediaPlaylist InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62C60>
	bool OpenPlaylist(struct UMediaPlaylist InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62BC0>
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62B10>
	bool Next(); // Function MediaAssets.MediaPlayer.Next(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62AC0>
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62A90>
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62A60>
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62A30>
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62A00>
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B629D0>
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B629A0>
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62970>
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62940>
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62850>
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B627E0>
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B626E0>
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62610>
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62550>
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62480>
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B623C0>
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62390>
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62350>
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62240>
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62180>
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62060>
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62020>
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61FE0>
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61EE0>
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61DD0>
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61DA0>
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61C40>
	struct UMediaPlaylist GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61C20>
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61BE0>
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61B50>
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61A90>
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName(Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B618C0>
	struct FTimespan GetLastVideoSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61880>
	struct FTimespan GetLastAudioSampleProcessedTime(); // Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61840>
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61810>
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61770>
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61730>
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61630>
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61570>
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B614B0>
	void Close(); // Function MediaAssets.MediaPlayer.Close(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B61130>
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B61080>
	bool CanPlaySource(struct UMediaSource MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B60FF0>
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B60FC0>
};

// Class MediaAssets.MediaPlaylist
class UMediaPlaylist : public Object {

public:

	struct TArray<struct UMediaSource> Items; // 0x28 (16)

	bool Replace(int32_t Index, struct UMediaSource Replacement); // Function MediaAssets.MediaPlaylist.Replace(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63340>
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63280>
	bool Remove(struct UMediaSource MediaSource); // Function MediaAssets.MediaPlaylist.Remove(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B631F0>
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62AF0>
	void Insert(struct UMediaSource MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B62880>
	struct UMediaSource GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B61D00>
	struct UMediaSource GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B61C60>
	struct UMediaSource GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B619F0>
	struct UMediaSource Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B613F0>
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B60CC0>
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B60C10>
	bool Add(struct UMediaSource MediaSource); // Function MediaAssets.MediaPlaylist.Add(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B60B80>
};

// Class MediaAssets.MediaSoundComponent
class UMediaSoundComponent : public USynthComponent {

public:

	enum class EMediaSoundChannels Channels; // 0x6D0 (4)
	bool DynamicRateAdjustment; // 0x6D4 (1)
	float RateAdjustmentFactor; // 0x6D8 (4)
	struct FFloatRange RateAdjustmentRange; // 0x6DC (16)
	struct UMediaPlayer MediaPlayer; // 0x6F0 (8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63FB0>
	void SetMediaPlayer(struct UMediaPlayer NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63D90>
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B637C0>
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63730>
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B636A0>
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B61E60>
	struct UMediaPlayer GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61990>
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B617B0>
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B60D70>
};

// Class MediaAssets.MediaTexture
class UMediaTexture : public UTexture {

public:

	enum class TextureAddress AddressX; // 0xB8 (1)
	enum class TextureAddress AddressY; // 0xB9 (1)
	bool AutoClear; // 0xBA (1)
	struct FLinearColor ClearColor; // 0xBC (16)
	bool EnableGenMips; // 0xCC (1)
	char NumMips; // 0xCD (1)
	struct UMediaPlayer MediaPlayer; // 0xD0 (8)

	void SetMediaPlayer(struct UMediaPlayer NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B63E10>
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B62820>
	struct UMediaPlayer GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B619C0>
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B617E0>
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B61480>
};

// Class MediaAssets.PlatformMediaSource
class UPlatformMediaSource : public UMediaSource {

public:

	struct UMediaSource MediaSource; // 0x80 (8)
};

// Class MediaAssets.StreamMediaSource
class UStreamMediaSource : public UBaseMediaSource {

public:

	struct FString StreamUrl; // 0x88 (16)
};

// Class MediaAssets.TimeSynchronizableMediaSource
class UTimeSynchronizableMediaSource : public UBaseMediaSource {

public:

	bool bUseTimeSynchronization; // 0x88 (1)
	int32_t FrameDelay; // 0x8C (4)
	double TimeDelay; // 0x90 (8)
};

// ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x0 (24)
	struct FString URL; // 0x18 (16)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0 (4)
	float Magnitude; // 0x4 (4)
};

// Function MediaAssets.FileMediaSource.SetFilePath
inline void UFileMediaSource::SetFilePath(struct FString Path) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	struct SetFilePath_Params {
		struct FString Path;
	}; SetFilePath_Params Params;

	Params.Path = Path;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaComponent.GetMediaTexture
inline struct UMediaTexture UMediaComponent::GetMediaTexture() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaTexture");

	struct GetMediaTexture_Params {
		
		struct UMediaTexture ReturnValue;

	}; GetMediaTexture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaComponent.GetMediaPlayer
inline struct UMediaPlayer UMediaComponent::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaComponent.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct UMediaPlayer ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsSeeking
inline bool UMediaPlayer::SupportsSeeking() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");

	struct SupportsSeeking_Params {
		
		bool ReturnValue;

	}; SupportsSeeking_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsScrubbing
inline bool UMediaPlayer::SupportsScrubbing() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");

	struct SupportsScrubbing_Params {
		
		bool ReturnValue;

	}; SupportsScrubbing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SupportsRate
inline bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");

	struct SupportsRate_Params {
		float Rate;
		bool Unthinned;
		bool ReturnValue;

	}; SupportsRate_Params Params;

	Params.Rate = Rate;
	Params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetViewRotation
inline bool UMediaPlayer::SetViewRotation(struct FRotator& Rotation, bool Absolute) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");

	struct SetViewRotation_Params {
		struct FRotator& Rotation;
		bool Absolute;
		bool ReturnValue;

	}; SetViewRotation_Params Params;

	Params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Rotation = Params.Rotation;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetViewField
inline bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");

	struct SetViewField_Params {
		float Horizontal;
		float Vertical;
		bool Absolute;
		bool ReturnValue;

	}; SetViewField_Params Params;

	Params.Horizontal = Horizontal;
	Params.Vertical = Vertical;
	Params.Absolute = Absolute;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
inline bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");

	struct SetVideoTrackFrameRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float FrameRate;
		bool ReturnValue;

	}; SetVideoTrackFrameRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;
	Params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetTrackFormat
inline bool UMediaPlayer::SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");

	struct SetTrackFormat_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		int32_t FormatIndex;
		bool ReturnValue;

	}; SetTrackFormat_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetTimeDelay
inline void UMediaPlayer::SetTimeDelay(struct FTimespan TimeDelay) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");

	struct SetTimeDelay_Params {
		struct FTimespan TimeDelay;
	}; SetTimeDelay_Params Params;

	Params.TimeDelay = TimeDelay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetRate
inline bool UMediaPlayer::SetRate(float Rate) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");

	struct SetRate_Params {
		float Rate;
		bool ReturnValue;

	}; SetRate_Params Params;

	Params.Rate = Rate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetNativeVolume
inline bool UMediaPlayer::SetNativeVolume(float Volume) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");

	struct SetNativeVolume_Params {
		float Volume;
		bool ReturnValue;

	}; SetNativeVolume_Params Params;

	Params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetMediaOptions
inline void UMediaPlayer::SetMediaOptions(struct UMediaSource Options) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetMediaOptions");

	struct SetMediaOptions_Params {
		struct UMediaSource Options;
	}; SetMediaOptions_Params Params;

	Params.Options = Options;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetLooping
inline bool UMediaPlayer::SetLooping(bool Looping) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");

	struct SetLooping_Params {
		bool Looping;
		bool ReturnValue;

	}; SetLooping_Params Params;

	Params.Looping = Looping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
inline void UMediaPlayer::SetDesiredPlayerName(struct FName PlayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");

	struct SetDesiredPlayerName_Params {
		struct FName PlayerName;
	}; SetDesiredPlayerName_Params Params;

	Params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.SetBlockOnTime
inline void UMediaPlayer::SetBlockOnTime(struct FTimespan& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");

	struct SetBlockOnTime_Params {
		struct FTimespan& Time;
	}; SetBlockOnTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;

}

// Function MediaAssets.MediaPlayer.SelectTrack
inline bool UMediaPlayer::SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");

	struct SelectTrack_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		bool ReturnValue;

	}; SelectTrack_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Seek
inline bool UMediaPlayer::Seek(struct FTimespan& Time) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");

	struct Seek_Params {
		struct FTimespan& Time;
		bool ReturnValue;

	}; Seek_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Time = Params.Time;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Rewind
inline bool UMediaPlayer::Rewind() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");

	struct Rewind_Params {
		
		bool ReturnValue;

	}; Rewind_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Reopen
inline bool UMediaPlayer::Reopen() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");

	struct Reopen_Params {
		
		bool ReturnValue;

	}; Reopen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Previous
inline bool UMediaPlayer::Previous() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");

	struct Previous_Params {
		
		bool ReturnValue;

	}; Previous_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.PlayAndSeek
inline void UMediaPlayer::PlayAndSeek() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.PlayAndSeek");

	struct PlayAndSeek_Params {
		
	}; PlayAndSeek_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.Play
inline bool UMediaPlayer::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");

	struct Play_Params {
		
		bool ReturnValue;

	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Pause
inline bool UMediaPlayer::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");

	struct Pause_Params {
		
		bool ReturnValue;

	}; Pause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenUrl
inline bool UMediaPlayer::OpenUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenUrl");

	struct OpenUrl_Params {
		struct FString URL;
		bool ReturnValue;

	}; OpenUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
inline bool UMediaPlayer::OpenSourceWithOptions(struct UMediaSource MediaSource, struct FMediaPlayerOptions& Options) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");

	struct OpenSourceWithOptions_Params {
		struct UMediaSource MediaSource;
		struct FMediaPlayerOptions& Options;
		bool ReturnValue;

	}; OpenSourceWithOptions_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Options = Params.Options;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenSourceLatent
inline void UMediaPlayer::OpenSourceLatent(struct Object WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");

	struct OpenSourceLatent_Params {
		struct Object WorldContextObject;
		struct FLatentActionInfo LatentInfo;
		struct UMediaSource MediaSource;
		struct FMediaPlayerOptions& Options;
		bool& bSuccess;
	}; OpenSourceLatent_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.LatentInfo = LatentInfo;
	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Options = Params.Options;
	bSuccess = Params.bSuccess;

}

// Function MediaAssets.MediaPlayer.OpenSource
inline bool UMediaPlayer::OpenSource(struct UMediaSource MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");

	struct OpenSource_Params {
		struct UMediaSource MediaSource;
		bool ReturnValue;

	}; OpenSource_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
inline bool UMediaPlayer::OpenPlaylistIndex(struct UMediaPlaylist InPlaylist, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");

	struct OpenPlaylistIndex_Params {
		struct UMediaPlaylist InPlaylist;
		int32_t Index;
		bool ReturnValue;

	}; OpenPlaylistIndex_Params Params;

	Params.InPlaylist = InPlaylist;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenPlaylist
inline bool UMediaPlayer::OpenPlaylist(struct UMediaPlaylist InPlaylist) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");

	struct OpenPlaylist_Params {
		struct UMediaPlaylist InPlaylist;
		bool ReturnValue;

	}; OpenPlaylist_Params Params;

	Params.InPlaylist = InPlaylist;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.OpenFile
inline bool UMediaPlayer::OpenFile(struct FString FilePath) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");

	struct OpenFile_Params {
		struct FString FilePath;
		bool ReturnValue;

	}; OpenFile_Params Params;

	Params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Next
inline bool UMediaPlayer::Next() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");

	struct Next_Params {
		
		bool ReturnValue;

	}; Next_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsReady
inline bool UMediaPlayer::IsReady() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");

	struct IsReady_Params {
		
		bool ReturnValue;

	}; IsReady_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPreparing
inline bool UMediaPlayer::IsPreparing() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");

	struct IsPreparing_Params {
		
		bool ReturnValue;

	}; IsPreparing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPlaying
inline bool UMediaPlayer::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");

	struct IsPlaying_Params {
		
		bool ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsPaused
inline bool UMediaPlayer::IsPaused() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");

	struct IsPaused_Params {
		
		bool ReturnValue;

	}; IsPaused_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsLooping
inline bool UMediaPlayer::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");

	struct IsLooping_Params {
		
		bool ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsConnecting
inline bool UMediaPlayer::IsConnecting() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");

	struct IsConnecting_Params {
		
		bool ReturnValue;

	}; IsConnecting_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsClosed
inline bool UMediaPlayer::IsClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");

	struct IsClosed_Params {
		
		bool ReturnValue;

	}; IsClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.IsBuffering
inline bool UMediaPlayer::IsBuffering() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");

	struct IsBuffering_Params {
		
		bool ReturnValue;

	}; IsBuffering_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.HasError
inline bool UMediaPlayer::HasError() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");

	struct HasError_Params {
		
		bool ReturnValue;

	}; HasError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetViewRotation
inline struct FRotator UMediaPlayer::GetViewRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");

	struct GetViewRotation_Params {
		
		struct FRotator ReturnValue;

	}; GetViewRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackType
inline struct FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");

	struct GetVideoTrackType_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FString ReturnValue;

	}; GetVideoTrackType_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
inline struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");

	struct GetVideoTrackFrameRates_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FFloatRange ReturnValue;

	}; GetVideoTrackFrameRates_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
inline float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");

	struct GetVideoTrackFrameRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float ReturnValue;

	}; GetVideoTrackFrameRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
inline struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");

	struct GetVideoTrackDimensions_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FIntPoint ReturnValue;

	}; GetVideoTrackDimensions_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
inline float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");

	struct GetVideoTrackAspectRatio_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		float ReturnValue;

	}; GetVideoTrackAspectRatio_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
inline float UMediaPlayer::GetVerticalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");

	struct GetVerticalFieldOfView_Params {
		
		float ReturnValue;

	}; GetVerticalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetUrl
inline struct FString UMediaPlayer::GetUrl() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetUrl");

	struct GetUrl_Params {
		
		struct FString ReturnValue;

	}; GetUrl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackLanguage
inline struct FString UMediaPlayer::GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");

	struct GetTrackLanguage_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		struct FString ReturnValue;

	}; GetTrackLanguage_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackFormat
inline int32_t UMediaPlayer::GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");

	struct GetTrackFormat_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		int32_t ReturnValue;

	}; GetTrackFormat_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTrackDisplayName
inline struct FText UMediaPlayer::GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");

	struct GetTrackDisplayName_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		struct FText ReturnValue;

	}; GetTrackDisplayName_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTimeDelay
inline struct FTimespan UMediaPlayer::GetTimeDelay() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");

	struct GetTimeDelay_Params {
		
		struct FTimespan ReturnValue;

	}; GetTimeDelay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetTime
inline struct FTimespan UMediaPlayer::GetTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");

	struct GetTime_Params {
		
		struct FTimespan ReturnValue;

	}; GetTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetSupportedRates
inline void UMediaPlayer::GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");

	struct GetSupportedRates_Params {
		struct TArray<struct FFloatRange>& OutRates;
		bool Unthinned;
	}; GetSupportedRates_Params Params;

	Params.Unthinned = Unthinned;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutRates = Params.OutRates;

}

// Function MediaAssets.MediaPlayer.GetSelectedTrack
inline int32_t UMediaPlayer::GetSelectedTrack(enum class EMediaPlayerTrack TrackType) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");

	struct GetSelectedTrack_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t ReturnValue;

	}; GetSelectedTrack_Params Params;

	Params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetRate
inline float UMediaPlayer::GetRate() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");

	struct GetRate_Params {
		
		float ReturnValue;

	}; GetRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlaylistIndex
inline int32_t UMediaPlayer::GetPlaylistIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");

	struct GetPlaylistIndex_Params {
		
		int32_t ReturnValue;

	}; GetPlaylistIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlaylist
inline struct UMediaPlaylist UMediaPlayer::GetPlaylist() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");

	struct GetPlaylist_Params {
		
		struct UMediaPlaylist ReturnValue;

	}; GetPlaylist_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetPlayerName
inline struct FName UMediaPlayer::GetPlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");

	struct GetPlayerName_Params {
		
		struct FName ReturnValue;

	}; GetPlayerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetNumTracks
inline int32_t UMediaPlayer::GetNumTracks(enum class EMediaPlayerTrack TrackType) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");

	struct GetNumTracks_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t ReturnValue;

	}; GetNumTracks_Params Params;

	Params.TrackType = TrackType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetNumTrackFormats
inline int32_t UMediaPlayer::GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");

	struct GetNumTrackFormats_Params {
		enum class EMediaPlayerTrack TrackType;
		int32_t TrackIndex;
		int32_t ReturnValue;

	}; GetNumTrackFormats_Params Params;

	Params.TrackType = TrackType;
	Params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetMediaName
inline struct FText UMediaPlayer::GetMediaName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");

	struct GetMediaName_Params {
		
		struct FText ReturnValue;

	}; GetMediaName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
inline struct FTimespan UMediaPlayer::GetLastVideoSampleProcessedTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");

	struct GetLastVideoSampleProcessedTime_Params {
		
		struct FTimespan ReturnValue;

	}; GetLastVideoSampleProcessedTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
inline struct FTimespan UMediaPlayer::GetLastAudioSampleProcessedTime() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");

	struct GetLastAudioSampleProcessedTime_Params {
		
		struct FTimespan ReturnValue;

	}; GetLastAudioSampleProcessedTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
inline float UMediaPlayer::GetHorizontalFieldOfView() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");

	struct GetHorizontalFieldOfView_Params {
		
		float ReturnValue;

	}; GetHorizontalFieldOfView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetDuration
inline struct FTimespan UMediaPlayer::GetDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");

	struct GetDuration_Params {
		
		struct FTimespan ReturnValue;

	}; GetDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
inline struct FName UMediaPlayer::GetDesiredPlayerName() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");

	struct GetDesiredPlayerName_Params {
		
		struct FName ReturnValue;

	}; GetDesiredPlayerName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackType
inline struct FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");

	struct GetAudioTrackType_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		struct FString ReturnValue;

	}; GetAudioTrackType_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
inline int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");

	struct GetAudioTrackSampleRate_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		int32_t ReturnValue;

	}; GetAudioTrackSampleRate_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
inline int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");

	struct GetAudioTrackChannels_Params {
		int32_t TrackIndex;
		int32_t FormatIndex;
		int32_t ReturnValue;

	}; GetAudioTrackChannels_Params Params;

	Params.TrackIndex = TrackIndex;
	Params.FormatIndex = FormatIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.Close
inline void UMediaPlayer::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlayer.CanPlayUrl
inline bool UMediaPlayer::CanPlayUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");

	struct CanPlayUrl_Params {
		struct FString URL;
		bool ReturnValue;

	}; CanPlayUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.CanPlaySource
inline bool UMediaPlayer::CanPlaySource(struct UMediaSource MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");

	struct CanPlaySource_Params {
		struct UMediaSource MediaSource;
		bool ReturnValue;

	}; CanPlaySource_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlayer.CanPause
inline bool UMediaPlayer::CanPause() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");

	struct CanPause_Params {
		
		bool ReturnValue;

	}; CanPause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Replace
inline bool UMediaPlaylist::Replace(int32_t Index, struct UMediaSource Replacement) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");

	struct Replace_Params {
		int32_t Index;
		struct UMediaSource Replacement;
		bool ReturnValue;

	}; Replace_Params Params;

	Params.Index = Index;
	Params.Replacement = Replacement;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.RemoveAt
inline bool UMediaPlaylist::RemoveAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");

	struct RemoveAt_Params {
		int32_t Index;
		bool ReturnValue;

	}; RemoveAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Remove
inline bool UMediaPlaylist::Remove(struct UMediaSource MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");

	struct Remove_Params {
		struct UMediaSource MediaSource;
		bool ReturnValue;

	}; Remove_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Num
inline int32_t UMediaPlaylist::Num() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");

	struct Num_Params {
		
		int32_t ReturnValue;

	}; Num_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Insert
inline void UMediaPlaylist::Insert(struct UMediaSource MediaSource, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");

	struct Insert_Params {
		struct UMediaSource MediaSource;
		int32_t Index;
	}; Insert_Params Params;

	Params.MediaSource = MediaSource;
	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaPlaylist.GetRandom
inline struct UMediaSource UMediaPlaylist::GetRandom(int32_t& OutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");

	struct GetRandom_Params {
		int32_t& OutIndex;
		struct UMediaSource ReturnValue;

	}; GetRandom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutIndex = Params.OutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.GetPrevious
inline struct UMediaSource UMediaPlaylist::GetPrevious(int32_t& InOutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");

	struct GetPrevious_Params {
		int32_t& InOutIndex;
		struct UMediaSource ReturnValue;

	}; GetPrevious_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InOutIndex = Params.InOutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.GetNext
inline struct UMediaSource UMediaPlaylist::GetNext(int32_t& InOutIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");

	struct GetNext_Params {
		int32_t& InOutIndex;
		struct UMediaSource ReturnValue;

	}; GetNext_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InOutIndex = Params.InOutIndex;


	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Get
inline struct UMediaSource UMediaPlaylist::Get(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");

	struct Get_Params {
		int32_t Index;
		struct UMediaSource ReturnValue;

	}; Get_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.AddUrl
inline bool UMediaPlaylist::AddUrl(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");

	struct AddUrl_Params {
		struct FString URL;
		bool ReturnValue;

	}; AddUrl_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.AddFile
inline bool UMediaPlaylist::AddFile(struct FString FilePath) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");

	struct AddFile_Params {
		struct FString FilePath;
		bool ReturnValue;

	}; AddFile_Params Params;

	Params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaPlaylist.Add
inline bool UMediaPlaylist::Add(struct UMediaSource MediaSource) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");

	struct Add_Params {
		struct UMediaSource MediaSource;
		bool ReturnValue;

	}; Add_Params Params;

	Params.MediaSource = MediaSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
inline void UMediaSoundComponent::SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");

	struct SetSpectralAnalysisSettings_Params {
		struct TArray<float> InFrequenciesToAnalyze;
		enum class EMediaSoundComponentFFTSize InFFTSize;
	}; SetSpectralAnalysisSettings_Params Params;

	Params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
	Params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetMediaPlayer
inline void UMediaSoundComponent::SetMediaPlayer(struct UMediaPlayer NewMediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");

	struct SetMediaPlayer_Params {
		struct UMediaPlayer NewMediaPlayer;
	}; SetMediaPlayer_Params Params;

	Params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
inline void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");

	struct SetEnvelopeFollowingsettings_Params {
		int32_t AttackTimeMsec;
		int32_t ReleaseTimeMsec;
	}; SetEnvelopeFollowingsettings_Params Params;

	Params.AttackTimeMsec = AttackTimeMsec;
	Params.ReleaseTimeMsec = ReleaseTimeMsec;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
inline void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");

	struct SetEnableSpectralAnalysis_Params {
		bool bInSpectralAnalysisEnabled;
	}; SetEnableSpectralAnalysis_Params Params;

	Params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
inline void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");

	struct SetEnableEnvelopeFollowing_Params {
		bool bInEnvelopeFollowing;
	}; SetEnableEnvelopeFollowing_Params Params;

	Params.bInEnvelopeFollowing = bInEnvelopeFollowing;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaSoundComponent.GetSpectralData
inline struct TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");

	struct GetSpectralData_Params {
		
		struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;

	}; GetSpectralData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.GetMediaPlayer
inline struct UMediaPlayer UMediaSoundComponent::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct UMediaPlayer ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
inline float UMediaSoundComponent::GetEnvelopeValue() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");

	struct GetEnvelopeValue_Params {
		
		float ReturnValue;

	}; GetEnvelopeValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
inline bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");

	struct BP_GetAttenuationSettingsToApply_Params {
		struct FSoundAttenuationSettings& OutAttenuationSettings;
		bool ReturnValue;

	}; BP_GetAttenuationSettingsToApply_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutAttenuationSettings = Params.OutAttenuationSettings;


	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.SetMediaPlayer
inline void UMediaTexture::SetMediaPlayer(struct UMediaPlayer NewMediaPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");

	struct SetMediaPlayer_Params {
		struct UMediaPlayer NewMediaPlayer;
	}; SetMediaPlayer_Params Params;

	Params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MediaAssets.MediaTexture.GetWidth
inline int32_t UMediaTexture::GetWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");

	struct GetWidth_Params {
		
		int32_t ReturnValue;

	}; GetWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetMediaPlayer
inline struct UMediaPlayer UMediaTexture::GetMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");

	struct GetMediaPlayer_Params {
		
		struct UMediaPlayer ReturnValue;

	}; GetMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetHeight
inline int32_t UMediaTexture::GetHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");

	struct GetHeight_Params {
		
		int32_t ReturnValue;

	}; GetHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MediaAssets.MediaTexture.GetAspectRatio
inline float UMediaTexture::GetAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");

	struct GetAspectRatio_Params {
		
		float ReturnValue;

	}; GetAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

