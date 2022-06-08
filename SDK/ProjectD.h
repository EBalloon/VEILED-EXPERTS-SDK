// Enum ProjectD.ECoreNetError
enum class ECoreNetError : uint8_t {
	CNE_None = 0,
	CNE_ConnectError = 1,
	CNE_DisconnectByClient = 2,
	CNE_DisconnectedByServer = 3,
	CNE_ReceiveError = 4,
	CNE_SendError = 5,
	CNE_RSADecryptError = 6,
	CNE_TimeOut = 7,
	CNE_MAX = 8,
};

// Enum ProjectD.ECoreNetResult
enum class ECoreNetResult : uint8_t {
	CNR_None = 0,
	CNR_Success = 1,
	CNR_Failure = 2,
	CNR_MAX = 3,
};

// Enum ProjectD.EPDMovementState
enum class EPDMovementState : uint8_t {
	Grounded = 0,
	Falling = 1,
	Ragdoll = 2,
	Parkour = 3,
	Riding = 4,
	SkyDiving = 5,
	Airborne = 6,
	Sliding = 7,
	MAX = 8,
};

// Enum ProjectD.EPDCharacterActionType
enum class EPDCharacterActionType : uint8_t {
	None = 0,
	Land = 1,
	Jump = 2,
	Roll = 3,
	Vault = 4,
	Climbup = 5,
	LedgeGrapParkour = 6,
	LedgeGrapClimbing = 7,
	MeleeAttack = 8,
	Lean = 9,
	ChangeStance = 10,
	ItemUse = 11,
	ClimbEnterUpward = 12,
	ClimbEnterDownward = 13,
	ClimbEnterVault = 14,
	ClimbMove = 15,
	ClimbExit = 16,
	GroggyEnter = 17,
	GroggyExit = 18,
	Death_Normal = 19,
	Death_Groggy = 20,
	FireWeapon = 21,
	AimWeapon = 22,
	ChangeWeapon = 23,
	ReloadWeapon = 24,
	InstantThrowWeapon = 25,
	ThrowWeapon = 26,
	BoltAction = 27,
	OutCover = 28,
	PickUpItem = 29,
	DynamicShielding = 30,
	GroggyRescue = 31,
	SNDModeBomb = 32,
	Guard = 33,
	MeleeHit = 34,
	KnockBack = 35,
	FallingObjcetKnockBack = 36,
	SlidingEnter = 37,
	SlidingExit = 38,
	ZipLine = 39,
	Signature_RevolerSpinning = 40,
	Signature_DrinkBottle = 41,
	Signature_EatHotdog = 42,
	Signature_LickKnife = 43,
	Signature_CoinToss = 44,
	Signature_GlassesScan = 45,
	Signature_ShootFlare = 46,
	Signature_SprayMoney = 47,
	Signature_Warcry = 48,
	Signature_LookMagnifier = 49,
	Perk_Hacking = 50,
	Perk_Maintenance = 51,
	JuggernautWear_Start = 52,
	JuggernautWear_End = 53,
	JuggernautDash_Start = 54,
	JuggernautDash_End = 55,
	ExoSuitWear_Start = 56,
	ExoSuitWear_End = 57,
	ExoSuitDash = 58,
	ExoSuitLauncher = 59,
	ArmorPlateReplaceKit = 60,
	TurnBack = 61,
	AFK = 62,
	RoundEnter = 63,
	BurnReaction = 64,
	MAX = 65,
};

// Enum ProjectD.EINGAMEMISSIONSTATE
enum class EINGAMEMISSIONSTATE : uint8_t {
	None = 0,
	MissionOrder = 1,
	MissionClear = 2,
	MissionError = 3,
	MissionFail = 4,
	EINGAMEMISSIONSTATE_MAX = 5,
};

// Enum ProjectD.ESubLevelEvent
enum class ESubLevelEvent : uint8_t {
	SLE_NONE = 0,
	SLE_ExplodeAreaA = 1,
	SLE_MAX = 2,
};

// Enum ProjectD.ECharacterSpawnGroup
enum class ECharacterSpawnGroup : uint8_t {
	CharacterSG_RED = 0,
	CharacterSG_BLUE = 1,
	CharacterSG_Result = 2,
	CharacterSG_MAX = 3,
};

// Enum ProjectD.ETRIGGERNOTI
enum class ETRIGGERNOTI : uint8_t {
	ETB_ALL = 0,
	ETB_PLAYER = 1,
	ETB_NPC = 2,
	ETB_MAX = 3,
};

// Enum ProjectD.EDamageType
enum class EDamageType : uint8_t {
	None = 0,
	Melee = 1,
	Weapon = 2,
	SystemGroggy = 3,
	Fall = 4,
	Vehicle = 5,
	RedStorm = 6,
	Explosion = 7,
	Blaze = 8,
	Burn = 9,
	Gas = 10,
	Heal = 11,
	InstallSeed = 12,
	ExplosionSeed = 13,
	DeactiveSeed = 14,
	SuicideGroggyToKill = 15,
	Max = 16,
};

// Enum ProjectD.EActionReserveOption
enum class EActionReserveOption : uint8_t {
	None = 0,
	IsAbleTo = 1,
	MustReserve = 2,
	IfBlockedDontReserve = 3,
	EActionReserveOption_MAX = 4,
};

// Enum ProjectD.EPDGroggyRescueActionType
enum class EPDGroggyRescueActionType : uint8_t {
	GroggyRescueAction_Start = 0,
	GroggyRescueAction_Complete = 1,
	GroggyRescueAction_Cancel = 2,
	GroggyRescueAction_MAX = 3,
};

// Enum ProjectD.EParkourHeightType
enum class EParkourHeightType : uint8_t {
	Parkour_51 = 0,
	Parkour_101 = 1,
	Parkour_151 = 2,
	Parkour_201 = 3,
	Parkour_251 = 4,
	Parkour_301 = 5,
	MAX = 6,
};

// Enum ProjectD.ESlideEnterType
enum class ESlideEnterType : uint8_t {
	SlideEnter_None = 0,
	SlideEnter_Default = 1,
	SlideEnter_Falling = 2,
	SlideEnter_Groggy = 3,
	SlideEnter_GroggyFalling = 4,
	SlideEnter_Die = 5,
	SlideEnter_MAX = 6,
};

// Enum ProjectD.ESlideExitType
enum class ESlideExitType : uint8_t {
	SlideExit_None = 0,
	SlideExit_Default = 1,
	SlideExit_Roll = 2,
	SlideExit_Falling = 3,
	SlideExit_Groggy = 4,
	SlideExit_GroggyFalling = 5,
	SlideExit_Die = 6,
	SlideExit_MAX = 7,
};

// Enum ProjectD.ESlotState
enum class ESlotState : uint8_t {
	Create = 0,
	Filled = 1,
	ESlotState_MAX = 2,
};

// Enum ProjectD.EAkBankName
enum class EAkBankName : uint8_t {
	sfx = 0,
	weapons = 1,
	ambience = 2,
	bgm = 3,
	foley = 4,
	EAkBankName_MAX = 5,
};

// Enum ProjectD.EGameModeWidget
enum class EGameModeWidget : int32_t {
	None = -1,
	PlayerInfo = 0,
	Spectator = 1,
	StateGauge = 2,
	Perk = 3,
	CoinInfo = 4,
	CrossHair = 5,
	TargetScreen = 6,
	DamageIndicator = 7,
	ThreeDIndicator = 8,
	InteractionInfo = 9,
	RoundInfo = 10,
	RoundResult = 11,
	GameTime = 12,
	IngameMap = 13,
	RoundReplayer = 14,
	RingCommand = 15,
	MarkerGuide = 16,
	UnknownMarket = 17,
	StatusBoard = 18,
	ReportPopup = 19,
	WorldMessage = 20,
	BattleLog = 21,
	KillMessage = 22,
	KillLog = 23,
	PerkNotify = 24,
	PingLog = 25,
	TutorialQuest = 26,
	BreakInto = 27,
	RoundWait = 28,
	AgentLeptonInfo = 29,
	PlayerSetting = 30,
	PersonalMission = 31,
	MAX = 32,
};

// Enum ProjectD.EUIName
enum class EUIName : uint8_t {
	None = 0,
	Start = 1,
	Login = 2,
	NickNameCreate = 3,
	AgentCreate = 4,
	AgentInventory = 5,
	AgentLobby = 6,
	CustomMain = 7,
	CustomCharacterPerk = 8,
	CustomCharacterDeco = 9,
	CustomVoice = 10,
	CustomWeapon = 11,
	CustomGameDeco = 12,
	CustomLocker = 13,
	ClanMain = 14,
	ClanInfo = 15,
	ClanList = 16,
	ClanCreate = 17,
	ClanInfoPopup = 18,
	DebugLog = 19,
	PlayLogReport = 20,
	Loading = 21,
	Ingame = 22,
	Match = 23,
	Intro = 24,
	GameResult = 25,
	DeathMatchModeUI = 26,
	SquadDeathMatchModeUI = 27,
	OptionContent = 28,
	OKPopup = 29,
	OKCancelPopup = 30,
	OptionPopup = 31,
	LobbyUserListPopup = 32,
	InvitePartyPopup = 33,
	TutorialPopup = 34,
	StroyPerkPopup = 35,
	GainPerkPopup = 36,
	GuideWebPagePopup = 37,
	WebPopup = 38,
	TermsOfServicePopup = 39,
	ServerMaintenanceNoti = 40,
	SystemMessage = 41,
	GameModeSelectItem = 42,
	LobbyUserListItem = 43,
	CommunityPopup = 44,
	PartySlotListItem = 45,
	FriendListItem = 46,
	FriendAddItem = 47,
	FriendClanItem = 48,
	CustomMatchJoinPopup = 49,
	CustomMatchListItem = 50,
	AgentListItem = 51,
	AgentSlotListItem = 52,
	CustomCharacterListItem = 53,
	PlayLogPlayInfoItem = 54,
	KillLogItem = 55,
	EventLogItem = 56,
	NameTagAlly = 57,
	NameTagEnemy = 58,
	ObjectTag = 59,
	ObjectTagSite = 60,
	PingIndicator = 61,
	IngameShopMain = 62,
	CategoryListItem = 63,
	IngameShopListItem = 64,
	IngameShopEtcItemElem = 65,
	IngameShopPartListItem = 66,
	IngameShopUpgradeListItem = 67,
	PurchaseMsg = 68,
	RingCommand = 69,
	InvenDragModule = 70,
	LootingList = 71,
	DamageIndicator = 72,
	PlayerEntryItemAlly = 73,
	PlayerEntryItemEnemy = 74,
	MissionScorePlayerEntryItem = 75,
	MSStatusBoardPlayerInfo = 76,
	MSStatusBoardRoundItem = 77,
	PerkEntryItem = 78,
	PerkNotifySlot = 79,
	AttackDamageIndicator = 80,
	GrenadeIndicator = 81,
	CoinInfoListItem = 82,
	PingLogItem = 83,
	PersonalMissionModule = 84,
	PersonalMissionRewardModule = 85,
	ScreenMarkerLoot = 86,
	BaseGameMode = 87,
	DeathMatchMode = 88,
	DefuseBombMode = 89,
	MissionScoreMode = 90,
	UnKnownMarketPartListItem = 91,
	UnKnownMarketPurchaseMsgItem = 92,
	UnKnownMarketInvenListItem = 93,
	StatusBoardRoundListItem = 94,
	ResultRoundItem = 95,
	ResultTeamMember = 96,
	ResultExpItem = 97,
	ResultMedalItem = 98,
	MatchListItem = 99,
	MailPopup = 100,
	MailNotificationSlot = 101,
	MailItemListSlot = 102,
	TeamCharListItem = 103,
	LeptonPresetTab = 104,
	UI_Max = 105,
	EUIName_MAX = 106,
};

// Enum ProjectD.EPDHitReactionAnimType
enum class EPDHitReactionAnimType : uint8_t {
	HitReaction_None = 0,
	HitReaction_Normal = 1,
	HitReaction_Run = 2,
	HitReaction_Lower = 3,
	HitReaction_Head = 4,
	HitReaction_Melee = 5,
	HitReaction_BombGraze = 6,
	HitReaction_BulletGraze = 7,
	MAX = 8,
};

// Enum ProjectD.EPDRagdollState
enum class EPDRagdollState : uint8_t {
	Wake = 0,
	Freeze = 1,
	EPDRagdollState_MAX = 2,
};

// Enum ProjectD.EPDNPCActionState
enum class EPDNPCActionState : uint8_t {
	None = 0,
	LookAround = 1,
	Surprised = 2,
	MAX = 3,
};

// Enum ProjectD.EPDNPCLocoState
enum class EPDNPCLocoState : uint8_t {
	NotMoving = 0,
	Moving = 1,
	MAX = 2,
};

// Enum ProjectD.EOptionSensitivenessType
enum class EOptionSensitivenessType : uint8_t {
	ZOOM0 = 0,
	ZOOM1 = 1,
	ZOOM2 = 2,
	ZOOM3 = 3,
	ZOOM4 = 4,
	_TOTAL_COUNT = 5,
	EOptionSensitivenessType_MAX = 6,
};

// Enum ProjectD.EPDParkourType
enum class EPDParkourType : uint8_t {
	NONE = 0,
	STAIR = 1,
	HURDLE = 2,
	WALL = 3,
	NEXTFLOOR = 4,
	MAX = 5,
};

// Enum ProjectD.EPDActionRuleCondtion
enum class EPDActionRuleCondtion : uint8_t {
	NOT_CHANGE = 0,
	WAIT_PREV_ACTION = 1,
	IMMEDIATE_NEXT_ACTION = 2,
	EPDActionRuleCondtion_MAX = 3,
};

// Enum ProjectD.EPDIKStanceFrame
enum class EPDIKStanceFrame : uint8_t {
	Idle = 0,
	Default = 1,
	SingleShot = 2,
	VerticalGrip = 3,
	AngleGrip = 4,
	HalfGrip = 5,
	MagGrip = 6,
	Max = 7,
};

// Enum ProjectD.EPDSpecificWeaponAnimset
enum class EPDSpecificWeaponAnimset : uint8_t {
	HK416 = 0,
	SCAR = 1,
	AK47 = 2,
	MP5 = 3,
	MPX = 4,
	BenelliM4 = 5,
	M24 = 6,
	M14 = 7,
	M249 = 8,
	M134 = 9,
	KrissVector = 10,
	AUGA3 = 11,
	ASVAL = 12,
	AWP = 13,
	Glock = 14,
	DesertEagle = 15,
	DoubleBarrel = 16,
	PBPistol = 17,
	Bow = 18,
	M870 = 19,
	G36 = 20,
	MAC10 = 21,
	P30L = 22,
	SVD = 23,
	DoubleDefense = 24,
	Barrett = 25,
	MAX = 26,
};

// Enum ProjectD.EPDAnimset
enum class EPDAnimset : uint8_t {
	Bare = 0,
	HK416 = 1,
	MP5 = 2,
	BenelliM4 = 3,
	M24 = 4,
	M249 = 5,
	Glock = 6,
	Throw = 7,
	M134 = 8,
	Knife = 9,
	KnuckleBlade = 10,
	Bow = 11,
	Karambit = 12,
	CAxe = 13,
	Tonfa = 14,
	ThreeBaton = 15,
	CHammer = 16,
	FistKnife = 17,
	Wrench = 18,
	ExoSuit = 19,
	MAX = 20,
};

// Enum ProjectD.EPDLeanState
enum class EPDLeanState : uint8_t {
	Lean_None = 0,
	Lean_Left = 1,
	Lean_Right = 2,
	MAX = 3,
};

// Enum ProjectD.EPDSocketOffsetState
enum class EPDSocketOffsetState : uint8_t {
	SocketOffset_Left = 0,
	SocketOffset_Right = 1,
	MAX = 2,
};

// Enum ProjectD.EPDSlideStanceState
enum class EPDSlideStanceState : uint8_t {
	SlideStance_Default = 0,
	SlideStance_Groggy = 1,
	MAX = 2,
};

// Enum ProjectD.EPDThrowStanceState
enum class EPDThrowStanceState : uint8_t {
	ThrowStance_Over = 0,
	ThrowStance_Under = 1,
	MAX = 2,
};

// Enum ProjectD.EPDClimbStanceState
enum class EPDClimbStanceState : uint8_t {
	Climb_4P = 0,
	Climb_2P = 1,
	MAX = 2,
};

// Enum ProjectD.EPDRotationState
enum class EPDRotationState : uint8_t {
	None = 0,
	FreeLook = 1,
	VelocityDirection = 2,
	LookingDirection = 3,
	Max = 4,
};

// Enum ProjectD.EPDAimingState
enum class EPDAimingState : uint8_t {
	Idle = 0,
	HipFire = 1,
	Aim = 2,
	ADS = 3,
	MAX = 4,
};

// Enum ProjectD.EPDStanceState
enum class EPDStanceState : uint8_t {
	Standing = 0,
	Crouching = 1,
	MAX = 2,
};

// Enum ProjectD.EPDGaitsState
enum class EPDGaitsState : uint8_t {
	Staying = 0,
	Walking = 1,
	Jogging = 2,
	Running = 3,
	Sprinting = 4,
	MAX = 5,
};

// Enum ProjectD.EPDInputMoveType
enum class EPDInputMoveType : uint8_t {
	Walk = 0,
	Run = 1,
	Sprint = 2,
	MAX = 3,
};

// Enum ProjectD.EPDLocoState
enum class EPDLocoState : uint8_t {
	NotMoving = 0,
	Stopping = 1,
	Starting_F = 2,
	Starting_L = 3,
	Starting_R = 4,
	Moving = 5,
	MAX = 6,
};

// Enum ProjectD.EPDLocoType
enum class EPDLocoType : uint8_t {
	Default = 0,
	Climb = 1,
	Cover = 2,
	Groggy = 3,
	Slide = 4,
	ZipLine = 5,
	Dead = 6,
	MAX = 7,
};

// Enum ProjectD.EPDActionNotifyType
enum class EPDActionNotifyType : uint8_t {
	ActionNotify_Begin_Anim = 0,
	ActionNotify_End_Anim = 1,
	ActionNotify_Event_Anim = 2,
	ActionNotify_Event_CPP = 3,
	ActionNotify_MAX = 4,
};

// Enum ProjectD.EPDActionTriggerType
enum class EPDActionTriggerType : uint8_t {
	Activate = 0,
	End = 1,
	Cancel = 2,
	Toggle = 3,
	EPDActionTriggerType_MAX = 4,
};

// Enum ProjectD.EPDActionSlotType
enum class EPDActionSlotType : uint8_t {
	Fullbody = 0,
	Upper = 1,
	Lower = 2,
	Additive = 3,
	EPDActionSlotType_MAX = 4,
};

// Enum ProjectD.EPDLobbyAnimStatus
enum class EPDLobbyAnimStatus : uint8_t {
	None = 0,
	Lobby_Scene_Select = 1,
	Lobby_Scene_Select_Idle = 2,
	Lobby_Scene_Matching_Start = 3,
	Lobby_Scene_Matching_Idle = 4,
	Lobby_Scene_Customizing = 5,
	Lobby_Scene_Shop = 6,
	Create_Scene_Select = 7,
	Create_Scene_Idle = 8,
	Result_Scene_Win = 9,
	Result_Scene_Win_Idle = 10,
	Result_Scene_Lose = 11,
	Result_Scene_Lose_IDle = 12,
	MAX = 13,
};

// Enum ProjectD.EPDDirCalcMethodType
enum class EPDDirCalcMethodType : uint8_t {
	_2WAY = 0,
	_4WAY = 1,
	_8WAY = 2,
	MAX = 3,
};

// Enum ProjectD.EPD4DirType
enum class EPD4DirType : uint8_t {
	Forward = 0,
	Left = 1,
	Right = 2,
	Back = 3,
	MAX = 4,
};

// Enum ProjectD.EPDDirectionType
enum class EPDDirectionType : uint8_t {
	FWD = 0,
	BCK = 1,
	RT = 2,
	LFT = 3,
	FWD_RT = 4,
	FWD_LFT = 5,
	BCK_RT = 6,
	BCK_LFT = 7,
	MAX = 8,
};

// Enum ProjectD.EPDHitReactionType
enum class EPDHitReactionType : uint8_t {
	FULL_BODY = 0,
	UPPER_BODY = 1,
	LOWER_BODY = 2,
	MELEE_HIT = 3,
	MAX = 4,
};

// Enum ProjectD.EPDCharacterParts
enum class EPDCharacterParts : uint8_t {
	Head = 0,
	Body = 1,
	Hair = 2,
	Accessory = 3,
	EPDCharacterParts_MAX = 4,
};

// Enum ProjectD.EPDClimbMoveType
enum class EPDClimbMoveType : uint8_t {
	ClimbMove_None = 0,
	ClimbMove_Default = 1,
	ClimbMove_InTurn = 2,
	ClimbMove_OutTurn = 3,
	ClimbMove_Jump = 4,
	ClimbMove_Wide = 5,
	ClimbMove_LongJump = 6,
	ClimbMove_MAX = 7,
};

// Enum ProjectD.EPDClimbPointUptype
enum class EPDClimbPointUptype : uint8_t {
	ClimbPoint_None = 0,
	ClimbPoint_Vault = 1,
	ClimbPoint_ClimbUp = 2,
	ClimbPoint_MAX = 3,
};

// Enum ProjectD.EControlTapType
enum class EControlTapType : int32_t {
	None = -1,
	MoveNAction = 0,
	ETCAction = 1,
	EControlTapType_MAX = 2,
};

// Enum ProjectD.ECrossHairColorPreset
enum class ECrossHairColorPreset : uint8_t {
	WHITE = 0,
	RED = 1,
	BLUE = 2,
	GREEN = 3,
	YELLOW = 4,
	PINK = 5,
	ECrossHairColorPreset_MAX = 6,
};

// Enum ProjectD.ECrossHairDrawStyle
enum class ECrossHairDrawStyle : uint8_t {
	Scaled = 0,
	ScaledWithOutline = 1,
	NonScaled = 2,
	NonScaledWithOutline = 3,
	ECrossHairDrawStyle_MAX = 4,
};

// Enum ProjectD.EMISituation
enum class EMISituation : uint8_t {
	None = 0,
	Weapon_AR = 1,
	Weapon_SMG = 2,
	Weapon_SR = 3,
	Weapon_SG = 4,
	Weapon_LMG = 5,
	Weapon_BOW = 6,
	Weapon_RPG = 7,
	Weapon_MINIGUN = 8,
	Weapon_EXOSUIT_SMG = 9,
	Weapon_Pistol = 10,
	Weapon_Melee = 11,
	Weapon_Weapon = 12,
	Weapon_Explosion = 13,
	Weather = 14,
	Fire_HipFire = 15,
	Fire_Aim = 16,
	Fire_ADS = 17,
	Groggy = 18,
	Execution = 19,
	EMISituation_MAX = 20,
};

// Enum ProjectD.EMITarget
enum class EMITarget : uint8_t {
	AnybodyUser = 0,
	RandomUser = 1,
	BestUser = 2,
	EMITarget_MAX = 3,
};

// Enum ProjectD.EDYNAMICOBJECTSTATE
enum class EDYNAMICOBJECTSTATE : uint8_t {
	NONE = 0,
	ALIVEOBJ = 1,
	MDESTROY = 2,
	FDESTROY = 3,
	CLOSE = 4,
	OPEN = 5,
	OPEN2 = 6,
	MOVE = 7,
	MOVE2 = 8,
	EDYNAMICOBJECTSTATE_MAX = 9,
};

// Enum ProjectD.EGraphicsScalabilityType
enum class EGraphicsScalabilityType : uint8_t {
	None = 0,
	Resolution = 1,
	ViewDistance = 2,
	AntiAliasing = 3,
	PostProcessing = 4,
	Shadows = 5,
	Texture = 6,
	Effects = 7,
	Foliage = 8,
	EGraphicsScalabilityType_MAX = 9,
};

// Enum ProjectD.EFrameRateMode
enum class EFrameRateMode : uint8_t {
	DisplayBased = 0,
	Customize = 1,
	EFrameRateMode_MAX = 2,
};

// Enum ProjectD.EDisplayMode
enum class EDisplayMode : uint8_t {
	WindowedFullscreen = 0,
	Windowed = 1,
	Fullscreen = 2,
	EDisplayMode_MAX = 3,
};

// Enum ProjectD.EDisplayTapType
enum class EDisplayTapType : int32_t {
	None = -1,
	Video = 0,
	System = 1,
	EDisplayTapType_MAX = 2,
};

// Enum ProjectD.EDroneArmLagState
enum class EDroneArmLagState : uint8_t {
	None = 0,
	Floating = 1,
	Crouch = 2,
	Parkour_Enable = 3,
	Parkour_Disable = 4,
	EDroneArmLagState_MAX = 5,
};

// Enum ProjectD.EENVTYPE
enum class EENVTYPE : uint8_t {
	DEFAULT = 0,
	DESTROY = 1,
	SAND = 2,
	WET = 3,
	EENVTYPE_MAX = 4,
};

// Enum ProjectD.EPDEndAnimationType
enum class EPDEndAnimationType : uint8_t {
	StartMove = 0,
	StopMove = 1,
	Pivot = 2,
	Max = 3,
};

// Enum ProjectD.EPDEnvEffectClientType
enum class EPDEnvEffectClientType : uint8_t {
	Normal = 0,
	SandStorm = 1,
	Rain = 2,
	SeaFog = 3,
	EPDEnvEffectClientType_MAX = 4,
};

// Enum ProjectD.ESafeZoneDrawStyle
enum class ESafeZoneDrawStyle : uint8_t {
	Line = 0,
	Solid = 1,
	ESafeZoneDrawStyle_MAX = 2,
};

// Enum ProjectD.ESafeZoneDrawType
enum class ESafeZoneDrawType : uint8_t {
	None = 0,
	CurrentArea = 1,
	NextArea = 2,
	ESafeZoneDrawType_MAX = 3,
};

// Enum ProjectD.EMapShape
enum class EMapShape : uint8_t {
	Rect = 0,
	Oval = 1,
	EMapShape_MAX = 2,
};

// Enum ProjectD.EGamePlayTapType
enum class EGamePlayTapType : int32_t {
	None = -1,
	Mouse = 0,
	UI = 1,
	EGamePlayTapType_MAX = 2,
};

// Enum ProjectD.GBOStep
enum class GBOStep : uint8_t {
	ALL = 0,
	Step1 = 1,
	Step2 = 2,
	Step3 = 3,
	Step4 = 4,
	Step5 = 5,
	GBOStep_MAX = 6,
};

// Enum ProjectD.EInventorySlot
enum class EInventorySlot : uint8_t {
	Slot_None = 0,
	Weapon_MainSlot = 1,
	Weapon_SubSlot = 2,
	Weapon_PistolSlot = 3,
	Weapon_MeleeSlot = 4,
	Weapon_ThrowSlot = 5,
	Slot_Max = 6,
	EInventorySlot_MAX = 7,
};

// Enum ProjectD.EPDHitFeedBackType
enum class EPDHitFeedBackType : uint8_t {
	Hit = 0,
	Hit_NoDmg = 1,
	Groggy = 2,
	Death = 3,
	HeadShot = 4,
	Armor = 5,
	ArmorBroken = 6,
	EPDHitFeedBackType_MAX = 7,
};

// Enum ProjectD.EDivideType
enum class EDivideType : uint8_t {
	DivideType_None = 0,
	DivideType_DropItem = 1,
	DivideType_DropCoin = 2,
	DivideType_DropAmmo = 3,
	DivideType_GetItem = 4,
	DivideType_DropSlotItem = 5,
	DivideType_MAX = 6,
};

// Enum ProjectD.EPDStoppingType
enum class EPDStoppingType : uint8_t {
	Stopping_Foward = 0,
	Stopping_Left = 1,
	Stopping_Right = 2,
	Stopping_Back = 3,
	Stopping_MAX = 4,
};

// Enum ProjectD.EPDStartingType
enum class EPDStartingType : uint8_t {
	Starting_Foward = 0,
	Starting_Left = 1,
	Starting_Right = 2,
	Starting_Back = 3,
	Starting_MAX = 4,
};

// Enum ProjectD.EPDSpectatingModeType
enum class EPDSpectatingModeType : uint8_t {
	None = 0,
	FreeLookMode = 1,
	PlayerLookMode = 2,
	Max = 3,
};

// Enum ProjectD.ESmoothTurn
enum class ESmoothTurn : uint8_t {
	SmoothTurn_None = 0,
	SmoothTurn_Left = 1,
	SmoothTurn_Right = 2,
	SmoothTurn_MAX = 3,
};

// Enum ProjectD.EOverlapNumber
enum class EOverlapNumber : uint8_t {
	None = 0,
	Overlap1 = 1,
	Overlap2 = 2,
	Overlap3 = 3,
	Overlap4 = 4,
	Overlap5 = 5,
	Overlap6 = 6,
	Overlap7 = 7,
	Overlap8 = 8,
	Overlap9 = 9,
	EOverlapNumber_MAX = 10,
};

// Enum ProjectD.EOptionContentType
enum class EOptionContentType : uint8_t {
	ComboBox = 0,
	Slider = 1,
	InputKeySelector = 2,
	InputToggleKeySelector = 3,
	CheckBox = 4,
	Tabs = 5,
	OneButton = 6,
	CrossHairImage = 7,
	EOptionContentType_MAX = 8,
};

// Enum ProjectD.EBlockType
enum class EBlockType : uint8_t {
	Default = 0,
	Friend_Clan = 1,
	AllBlock = 2,
	EBlockType_MAX = 3,
};

// Enum ProjectD.EOptionQuality
enum class EOptionQuality : uint8_t {
	LowQuality = 0,
	MediumQuality = 1,
	HighQuality = 2,
	EpicQuality = 3,
	EOptionQuality_MAX = 4,
};

// Enum ProjectD.EGraphicsQuality
enum class EGraphicsQuality : uint8_t {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Custom = 4,
	EGraphicsQuality_MAX = 5,
};

// Enum ProjectD.EMouseSensitivityType
enum class EMouseSensitivityType : uint8_t {
	NormalSensitivity = 0,
	AimingSensitivity = 1,
	IronsightSensitivity = 2,
	X2ZoomScope = 3,
	X4ZoomScope = 4,
	X8ZoomScope = 5,
	X16ZoomScope = 6,
	EMouseSensitivityType_MAX = 7,
};

// Enum ProjectD.EOptionType
enum class EOptionType : int32_t {
	None = -1,
	Display = 0,
	Sounds = 1,
	Gameplay = 2,
	Controls = 3,
	OptionType_Max = 4,
	EOptionType_MAX = 5,
};

// Enum ProjectD.EOutGameCameraType
enum class EOutGameCameraType : uint8_t {
	OutgameCameraLobby = 0,
	OutgameCameraAgentInven = 1,
	OutgameCameraAgentCreate = 2,
	OutgameCameraCustomCharacter = 3,
	EOutGameCameraType_MAX = 4,
};

// Enum ProjectD.EOutgameCharacterSpawnGroup
enum class EOutgameCharacterSpawnGroup : uint8_t {
	OutgameCharacterSG_Lobby = 0,
	OutgameCharacterSG_AgentInven = 1,
	OutgameCharacterSG_AgentCreate = 2,
	OutgameCharacterSG_Custom = 3,
	OutgameCharacterSG_Result = 4,
	OutgameCharacterSG_MAX = 5,
};

// Enum ProjectD.EPartySlotState
enum class EPartySlotState : uint8_t {
	Empty = 0,
	Inviting = 1,
	Filled = 2,
	EPartySlotState_MAX = 3,
};

// Enum ProjectD.ECameraMovementType
enum class ECameraMovementType : uint8_t {
	CMT_Indoor = 0,
	CMT_Outdoor = 1,
	CMT_Groggy = 2,
	CMT_Roll = 3,
	CMT_PKRCU100WCamera = 4,
	CMT_PKRCU100RCamera = 5,
	CMT_PKRCU150WCamera1 = 6,
	CMT_PKRCU150WCamera2 = 7,
	CMT_PKRCU150RCamera1 = 8,
	CMT_PKRCU150RCamera2 = 9,
	CMT_PKRCU200WCamera1 = 10,
	CMT_PKRCU200WCamera2 = 11,
	CMT_PKRCU200RCamera1 = 12,
	CMT_PKRCU200RCamera2 = 13,
	CMT_PKRCU250WCamera1 = 14,
	CMT_PKRCU250WCamera2 = 15,
	CMT_PKRCU250RCamera1 = 16,
	CMT_PKRCU250RCamera2 = 17,
	CMT_PKRCU300WCamera1 = 18,
	CMT_PKRCU300WCamera2 = 19,
	CMT_PKRCU300RCamera1 = 20,
	CMT_PKRCU300RCamera2 = 21,
	CMT_PKRVT100WCamera = 22,
	CMT_PKRVT100RCamera = 23,
	CMT_PKRVT150WCamera1 = 24,
	CMT_PKRVT150WCamera2 = 25,
	CMT_PKRVT150RCamera1 = 26,
	CMT_PKRVT150RCamera2 = 27,
	CMT_PKRVT200WCamera1 = 28,
	CMT_PKRVT200WCamera2 = 29,
	CMT_PKRVT200RCamera1 = 30,
	CMT_PKRVT200RCamera2 = 31,
	CMT_PKRVT250WCamera1 = 32,
	CMT_PKRVT250WCamera2 = 33,
	CMT_PKRVT250RCamera1 = 34,
	CMT_PKRVT250RCamera2 = 35,
	CMT_PKRVT300WCamera1 = 36,
	CMT_PKRVT300WCamera2 = 37,
	CMT_PKRVT300RCamera1 = 38,
	CMT_PKRVT300RCamera2 = 39,
	CMT_PKRCloseUpCamera = 40,
	CMT_PKRDefCamera = 41,
	CMT_FirstPerson = 42,
	CMT_FirstPerson_Bow = 43,
	CMT_Aiming = 44,
	CMT_CrouchAiming = 45,
	CMT_Crouch = 46,
	CMT_Aiming_Bow = 47,
	CMT_CrouchAiming_Bow = 48,
	CMT_ForwardRun = 49,
	CMT_Jump = 50,
	CMT_LongJump = 51,
	CMT_Climb = 52,
	CMT_Zipline = 53,
	CMT_Slide = 54,
	CMT_JuggernautDash = 55,
	CMT_Stealth = 56,
	CMT_Seed_Bomb_Install_Defuse = 57,
	CMT_GgoggySeed_Bomb_Install_Defuse = 58,
	CMT_Count = 59,
	CMT_MAX = 60,
};

// Enum ProjectD.ESpectatingParkourCamera
enum class ESpectatingParkourCamera : uint8_t {
	None = 0,
	Following = 1,
	FollowingEnd = 2,
	MAX = 3,
};

// Enum ProjectD.EPDFootStepNotifyType
enum class EPDFootStepNotifyType : uint8_t {
	Run = 0,
	Jump = 1,
	SoftLand = 2,
	HardLand = 3,
	JugDash = 4,
	Roll = 5,
	Max = 6,
};

// Enum ProjectD.EPDTraceChannel
enum class EPDTraceChannel : uint8_t {
	Visibility = 3,
	Parkour = 14,
	Climb = 15,
	Weapon = 16,
	AttackObject = 17,
	Pickup = 18,
	Ladder = 19,
	Projectile = 20,
	Audio = 21,
	Slide = 23,
	AudioOcc = 25,
	EPDTraceChannel_MAX = 26,
};

// Enum ProjectD.EHandsAndFeetBone
enum class EHandsAndFeetBone : uint8_t {
	Palm_L = 0,
	Palm_R = 1,
	bx_L_toe = 2,
	bx_R_toe = 3,
	bx_spine = 4,
	EHandsAndFeetBone_MAX = 5,
};

// Enum ProjectD.EBattleIntensityState
enum class EBattleIntensityState : uint8_t {
	INTENSITY_NORMAL = 0,
	INTENSITY_ALARMED = 1,
	INTENSITY_COMBAT_SIMPLE = 2,
	INTENSITY_COMBAT_HARD = 3,
	INTENSITY_MAX = 4,
};

// Enum ProjectD.EPDTutorialEvent
enum class EPDTutorialEvent : uint8_t {
	CloseShopUI = 0,
	HighlightLoadoutUI = 1,
	HighlightNPC = 2,
	HighlightPartSlotUI = 3,
	HighlightShopItemUI = 4,
	HighlightShopGuideUI = 5,
	HighlightUpgradeUI = 6,
	HighlightVicinityItemUI = 7,
	SpawnItem = 8,
	SpawnNPC = 9,
	EPDTutorialEvent_MAX = 10,
};

// Enum ProjectD.EPDTutorialQuestKeyPressType
enum class EPDTutorialQuestKeyPressType : uint8_t {
	Normal = 0,
	Hold = 1,
	Short = 2,
	Double = 3,
	EPDTutorialQuestKeyPressType_MAX = 4,
};

// Enum ProjectD.ETutorialPhase
enum class ETutorialPhase : uint8_t {
	TP_PHASE_2 = 0,
	TP_PHASE_3 = 1,
	TP_PHASE_4 = 2,
	TP_PHASE_5 = 3,
	TP_PHASE_6 = 4,
	TP_PHASE_7 = 5,
	TP_PHASE_8 = 6,
	TP_PHASE_9 = 7,
	TP_PHASE_10 = 8,
	TP_PHASE_11 = 9,
	TP_PHASE_MAX = 10,
};

// Enum ProjectD.EQuestAction
enum class EQuestAction : uint8_t {
	QA_None = 0,
	QA_OUTGAME_CHA_VOICE = 1,
	QA_HIT = 2,
	QA_RANGE = 3,
	QA_THROW = 4,
	QA_CHA_STATE = 5,
	QA_AREA = 6,
	QA_PING = 7,
	QA_USEITEM = 8,
	QA_INTERACTION = 9,
	QA_MODE_EVENT = 10,
	QA_ADD_ITEM = 11,
	QA_UPGRADE = 12,
	QA_INGAME_MOVIE = 13,
	QA_BATTLE_ASPECT = 14,
	QA_GAME_READY = 15,
	QA_ROUND_END = 16,
	QA_OPERATOR_CHECK = 17,
	QA_ENV_EFFECT = 18,
	QA_MOVE_CHARACTER = 19,
	QA_CHANGE_MOVE_TYPE = 20,
	QA_TRY_ACTION = 21,
	QA_CHANGE_AIM_STATE = 22,
	QA_CHANGE_WEAPON = 23,
	QA_ETC_ACTION = 24,
	QA_START_TUTORIAL = 25,
	QA_COMPLETE_TUTORAL_PHASE = 26,
	QA_BATTLE_INTENSITY = 27,
	QA_RANGE_IN_LOCATION = 28,
	QA_SHOP_READY = 29,
	QA_UNEQUIP_POWERARMOR = 30,
	QA_MAX = 31,
};

// Enum ProjectD.EQuestList
enum class EQuestList : int32_t {
	QL_None = 0,
	QL_VOICE_ENEMY_HIT = 1,
	QL_VOICE_TEAM_HIT = 2,
	QL_VOICE_TEAM_ENEMY_HIT = 3,
	QL_VOICE_TEAM_ME_HIT = 4,
	QL_VOICE_ENEMY_TEAM_HIT = 5,
	QL_VOICE_ENEMY_ME_HIT = 6,
	QL_VOICE_GROGGY = 7,
	QL_VOICE_DEATH = 8,
	QL_VOICE_ENEMY_GROGGY = 9,
	QL_VOICE_ENEMY_DEATH = 10,
	QL_VOICE_DOT_HIT = 11,
	QL_VOICE_SMOKE_AREA = 12,
	QL_VOICE_THROW_GRANADE = 13,
	QL_VOICE_THROW_HEAL = 14,
	QL_VOICE_THROW_GAS = 15,
	QL_VOICE_THROW_SCAN = 16,
	QL_VOICE_JUGGERNAUT = 17,
	QL_VOICE_CHANGE_ARMORPLATE = 18,
	QL_VOICE_RECOVER = 19,
	QL_VOICE_FULL_INVEN = 20,
	QL_VOICE_GET_SEED = 21,
	QL_VOICE_SET_SEED = 22,
	QL_VOICE_RELEASE_SEED = 23,
	QL_VOICE_RELOAD = 24,
	QL_VOICE_SHOP_BUYREQUEST = 25,
	QL_VOICE_SHOP_CANCEL = 26,
	QL_VOICE_SHOP_REFUSE = 27,
	QL_VOICE_INTER_LEDEAR_DELEGATE = 28,
	QL_VOICE_SIGNATURE = 29,
	QL_VOICE_GROGGY_REQUEST = 30,
	QL_VOICE_GROGGY_HEAL = 31,
	QL_VOICE_INTER_BOMB_DELEGATE = 32,
	QL_VOICE_MONOLOGUE = 33,
	QL_VOICE_CHA_INTERACTION_TALK = 34,
	QL_VOICE_OUTGAME_CHA_CREATE = 35,
	QL_VOICE_OUTGAME_CHA_SELECT = 36,
	QL_VOICE_OUTGAME_LOBBY = 37,
	QL_VOICE_OUTGAME_RESULT_WIN = 38,
	QL_VOICE_OUTGAME_RESULT_LOSE = 39,
	QL_VOICE_ENEMY_SNIPER_FIND = 40,
	QL_VOICE_NEAR_GRANADE = 41,
	QL_VOICE_PING_MOVE = 42,
	QL_VOICE_PING_GO = 43,
	QL_VOICE_PING_ASSEMBLE = 44,
	QL_VOICE_PING_RETREAT = 45,
	QL_VOICE_PING_INSTALL = 46,
	QL_VOICE_PING_DEFUSE = 47,
	QL_VOICE_PING_CAUTIONINSTALL = 48,
	QL_VOICE_PING_CAUTIONDEFUSE = 49,
	QL_VOICE_PING_ENEMY = 50,
	QL_VOICE_PING_WATCH = 51,
	QL_VOICE_PING_SUPPORT = 52,
	QL_VOICE_PING_RUSH = 53,
	QL_VOICE_PING_ATTACK = 54,
	QL_VOICE_PING_DEFENSE = 55,
	QL_VOICE_PING_SOS = 56,
	QL_VOICE_PING_ALLYGROGGY = 57,
	QL_VOICE_PING_ENEMYGROGGY = 58,
	QL_VOICE_PING_ENEMYDEAD = 59,
	QL_VOICE_PING_ENEMYJUGGERNAUT = 60,
	QL_VOICE_PING_HELLO = 61,
	QL_VOICE_PING_SORRY = 62,
	QL_VOICE_PING_GREAT = 63,
	QL_VOICE_PING_THANKYOU = 64,
	QL_VOICE_PING_BLAHBLAH = 65,
	QL_VOICE_PING_INVEST = 66,
	QL_VOICE_PING_SAVING = 67,
	QL_VOICE_PING_ALLIN = 68,
	QL_VOICE_PING_RICH = 69,
	QL_VOICE_PING_POOR = 70,
	QL_VOICE_PING_ITEM = 71,
	QL_VOICE_PING_SEED = 72,
	QL_VOICE_PING_WEAPON_AR = 73,
	QL_VOICE_PING_WEAPON_SMG = 74,
	QL_VOICE_PING_WEAPON_SR = 75,
	QL_VOICE_PING_WEAPON_SG = 76,
	QL_VOICE_PING_WEAPON_LMG = 77,
	QL_VOICE_PING_WEAPON_BOW = 78,
	QL_VOICE_PING_WEAPON_SUB = 79,
	QL_VOICE_PING_AMMO_10 = 80,
	QL_VOICE_PING_AMMO_557 = 81,
	QL_VOICE_PING_AMMO_763 = 82,
	QL_VOICE_PING_AMMO_12GAUGE = 83,
	QL_VOICE_PING_AMMO_ARROW = 84,
	QL_VOICE_PING_THROW_GRENADE = 85,
	QL_VOICE_PING_THROW_GAS = 86,
	QL_VOICE_PING_THROW_SCAN = 87,
	QL_VOICE_PING_THROW_HEAL = 88,
	QL_VOICE_PING_BANDAGE = 89,
	QL_VOICE_PING_ARMORPLATE = 90,
	QL_VOICE_PING_ASTRAPI = 91,
	QL_VOICE_PING_SELFREVIVALKIT = 92,
	QL_VOICE_PING_BOMBDEACTIVATEKIT = 93,
	QL_VOICE_PING_JUGGERNAUT = 94,
	QL_VOICE_PING_INVEN_COIN = 95,
	QL_VOICE_PING_INVEN_SEED = 96,
	QL_VOICE_PING_INVEN_WEAPON_MAIN = 97,
	QL_VOICE_PING_INVEN_WEAPON_SUB = 98,
	QL_VOICE_PING_INVEN_AMMO_10 = 99,
	QL_VOICE_PING_INVEN_AMMO_557 = 100,
	QL_VOICE_PING_INVEN_AMMO_763 = 101,
	QL_VOICE_PING_INVEN_AMMO_12GAUGE = 102,
	QL_VOICE_PING_INVEN_AMMO_ARROW = 103,
	QL_VOICE_PING_SHOP = 104,
	QL_VOICE_PING_SHOP_WEAPON_AR = 105,
	QL_VOICE_PING_SHOP_WEAPON_SMG = 106,
	QL_VOICE_PING_SHOP_WEAPON_SR = 107,
	QL_VOICE_PING_SHOP_WEAPON_SG = 108,
	QL_VOICE_PING_SHOP_WEAPON_LMG = 109,
	QL_VOICE_PING_SHOP_WEAPON_BOW = 110,
	QL_VOICE_PING_SHOP_WEAPON_SUB = 111,
	QL_VOICE_PING_SHOP_AMMO_10 = 112,
	QL_VOICE_PING_SHOP_AMMO_557 = 113,
	QL_VOICE_PING_SHOP_AMMO_763 = 114,
	QL_VOICE_PING_SHOP_AMMO_12GAUGE = 115,
	QL_VOICE_PING_SHOP_AMMO_ARROW = 116,
	QL_VOICE_PING_SHOP_THROW_GRENADE = 117,
	QL_VOICE_PING_SHOP_THROW_GAS = 118,
	QL_VOICE_PING_SHOP_THROW_SCAN = 119,
	QL_VOICE_PING_SHOP_THROW_HEAL = 120,
	QL_VOICE_PING_SHOP_BANDAGE = 121,
	QL_VOICE_PING_SHOP_ARMORPLATE = 122,
	QL_VOICE_PING_SHOP_ASTRAPI = 123,
	QL_VOICE_PING_SHOP_SELFREVIVALKIT = 124,
	QL_VOICE_PING_SHOP_BOMBDEACTIVATEKIT = 125,
	QL_VOICE_PING_SHOP_JUGGERNAUT = 126,
	QL_VOICE_PING_SHOP_TEMABUFF = 127,
	QL_VOICE_PING_FUND_ARMORY = 128,
	QL_VOICE_PING_FUND_ORDNANCE = 129,
	QL_VOICE_PING_FUND_TACTICAL = 130,
	QL_VOICE_PING_GROGGY_MOVE = 131,
	QL_VOICE_PING_GROGGY_ENEMY = 132,
	QL_VOICE_PING_AGREE = 133,
	QL_VOICE_PING_DECLINE = 134,
	QL_VOICE_PING_TARGET_CANEL = 135,
	QL_VOICE_PING_CLAIM = 136,
	QL_VOICE_PING_HELP_AGREE = 137,
	QL_VOICE_BREAKINTO_START = 138,
	QL_VOICE_SCAN_ME = 139,
	QL_OPERATOR_ARMORY_UPGRADE = 140,
	QL_OPERATOR_TACTICAL_UPGRADE = 141,
	QL_OPERATOR_EQUIP_UPGRADE = 142,
	QL_OPERATOR_DERAILED_INGAME_MOVIE = 143,
	QL_OPERATOR_SHIPYARD_INGAME_MOVIE = 144,
	QL_OPERATOR_WINDFARM_INGAME_MOVIE = 145,
	QL_OPERATOR_BRIDGE_INGAME_MOVIE = 146,
	QL_OPERATOR_CHANGE_STARTPOINT_ATTACK = 147,
	QL_OPERATOR_CHANGE_STARTPOINT_DEFENCE = 148,
	QL_OPERATOR_REMAIN_TIME = 149,
	QL_OPERATOR_FILED_MOVE = 150,
	QL_OPERATOR_GET_SEED = 151,
	QL_OPERATOR_SEED_INSTALL = 152,
	QL_OPERATOR_SEED_RELEASE = 153,
	QL_OPERATOR_SEED_NOTIFY = 154,
	QL_OPERATOR_RESULT = 155,
	QL_OPERATOR_INTER_START = 156,
	QL_OPERATOR_INTER_END = 157,
	QL_OPERATOR_ARMED_TIME = 158,
	QL_OPERATOR_ALLREADY = 159,
	QL_OPERATOR_AUTO_SUPPLY = 160,
	QL_OPERATOR_ENEMY_INFO_OPEN = 161,
	QL_OPERATOR_ENEMY_INFO_OPEN_S = 162,
	QL_OPERATOR_ENEMY_UPGRADE_OPEN = 163,
	QL_OPERATOR_SEED_DROP = 164,
	QL_OPERATOR_BATTLE_ASPECT_E4_T3 = 165,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_AT = 166,
	QL_OPERATOR_BATTLE_ASPECT_E3_T1_DEF = 167,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_AT = 168,
	QL_OPERATOR_BATTLE_ASPECT_E1_T3_DEF = 169,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_AT = 170,
	QL_OPERATOR_BATTLE_ASPECT_E1_T1_DEF = 171,
	QL_OPERATOR_LAST_ROUND = 172,
	QL_OPERATOR_FIRST_WIN = 173,
	QL_OPERATOR_FIRST_LOSE = 174,
	QL_OPERATOR_WININGSTREAK_3 = 175,
	QL_OPERATOR_LOSINGSTREAK_3 = 176,
	QL_OPERATOR_WININGSTREAK_4 = 177,
	QL_OPERATOR_LOSINGSTREAK_4 = 178,
	QL_OPERATOR_WININGSTREAK_3_N_LOSE = 179,
	QL_OPERATOR_LOSINGSTREAK_3_N_WIN = 180,
	QL_OPERATOR_ENEMY_JUGGERNAUT_2 = 181,
	QL_OPERATOR_ENEMY_JUGGERNAUT_3 = 182,
	QL_OPERATOR_TEAM_JUGGERNAUT_2 = 183,
	QL_OPERATOR_TEAM_JUGGERNAUT_3 = 184,
	QL_OPERATOR_ENEMY_JUGGERNAUT_1 = 185,
	QL_OPERATOR_TEAM_JUGGERNAUT_1 = 186,
	QL_OPERATOR_TEAM_KILL = 187,
	QL_OPERATOR_FIRST_KILL = 188,
	QL_OPERATOR_DOUBLE_KILL = 189,
	QL_OPERATOR_TRIPLE_KILL = 190,
	QL_OPERATOR_ALL_KILL = 191,
	QL_OPERATOR_ALL_KILL_MELEE = 192,
	QL_OPERATOR_HALF_JUG_ARMOR = 193,
	QL_OPERATOR_HALF_JUG_AMMO = 194,
	QL_OPERATOR_ZERO_JUG_AMMO = 195,
	QL_OPERATOR_SHOP_NOTBUY_ARMOR = 196,
	QL_OPERATOR_SHOP_NOTBUY_AMMO = 197,
	QL_OPERATOR_SHOP_NOTBUY_SNIPERSCOPE = 198,
	QL_OPERATOR_30_UNDER_HAVE_HEAL_PACK = 199,
	QL_OPERATOR_30_UNDER_NEED_HEAL_PACK = 200,
	QL_OPERATOR_ARMORPLATE_USE = 201,
	QL_OPERATOR_ARMORPLATE_NEED = 202,
	QL_OPERATOR_SENDSTORM = 203,
	QL_OPERATOR_TUTORIAL_START_2 = 204,
	QL_OPERATOR_TUTORIAL_START_3 = 205,
	QL_OPERATOR_TUTORIAL_PHASE_2 = 206,
	QL_OPERATOR_TUTORIAL_PHASE_3 = 207,
	QL_OPERATOR_TUTORIAL_PHASE_4 = 208,
	QL_OPERATOR_TUTORIAL_PHASE_5 = 209,
	QL_OPERATOR_TUTORIAL_PHASE_6 = 210,
	QL_OPERATOR_TUTORIAL_PHASE_7 = 211,
	QL_OPERATOR_TUTORIAL_PHASE_8 = 212,
	QL_OPERATOR_TUTORIAL_PHASE_9 = 213,
	QL_OPERATOR_TUTORIAL_PHASE_10 = 214,
	QL_OPERATOR_TUTORIAL_PHASE_11 = 215,
	QL_OPERATOR_SIGNATURE_SCAN = 216,
	QL_OPERATOR_SOY_SIGNATURE_SCAN = 217,
	QL_OPERATOR_BREAKINTO_READY = 218,
	QL_OPERATOR_BREAKINTO_START = 219,
	QL_OPERATOR_BREAKINTO_TEAM_ALERT = 220,
	QL_TUTORIAL_OPEN_INVENTORY = 221,
	QL_TUTORIAL_BUY_MP5 = 222,
	QL_TUTORIAL_BUY_AMMO_10 = 223,
	QL_TUTORIAL_INVEST_ARMORY = 224,
	QL_TUTORIAL_ATTACH_WEAPON_PARTS = 225,
	QL_TUTORIAL_SET_LOADOUT = 226,
	QL_TUTORIAL_INVEST_ORDNANCE = 227,
	QL_TUTORIAL_BUY_BANDAGE = 228,
	QL_TUTORIAL_BUY_ARMOR_PLATE = 229,
	QL_TUTORIAL_BUY_GRENADE = 230,
	QL_TUTORIAL_MOVE_FRONT = 231,
	QL_TUTORIAL_MOVE_BACK = 232,
	QL_TUTORIAL_MOVE_LEFT = 233,
	QL_TUTORIAL_MOVE_RIGHT = 234,
	QL_TUTORIAL_CROUCH = 235,
	QL_TUTORIAL_WALK = 236,
	QL_TUTORIAL_JUMP = 237,
	QL_TUTORIAL_LONG_JUMP = 238,
	QL_TUTORIAL_ROLL = 239,
	QL_TUTORIAL_ROLL_LEFT = 240,
	QL_TUTORIAL_ROLL_RIGHT = 241,
	QL_TUTORIAL_FIRE_WEAPON = 242,
	QL_TUTORIAL_RELOAD_WEAPON = 243,
	QL_TUTORIAL_AIMING = 244,
	QL_TUTORIAL_AIM_TO_ADS = 245,
	QL_TUTORIAL_ADS = 246,
	QL_TUTORIAL_LEAN_LEFT = 247,
	QL_TUTORIAL_LEAN_RIGHT = 248,
	QL_TUTORIAL_GROGGY_BULLET = 249,
	QL_TUTORIAL_KILL_BULLET = 250,
	QL_TUTORIAL_MELEE_V = 251,
	QL_TUTORIAL_SWITCH_MELEE_WEAPON = 252,
	QL_TUTORIAL_MELEE_MOUSE = 253,
	QL_TUTORIAL_GROGGY_MELEE = 254,
	QL_TUTORIAL_KILL_MELEE = 255,
	QL_TUTORIAL_LOOT_ITEM = 256,
	QL_TUTORIAL_RESCUE_ALLY = 257,
	QL_TUTORIAL_INTERACT_ITEM_BOX = 258,
	QL_TUTORIAL_GET_DROP_ITEM = 259,
	QL_TUTORIAL_USE_ITEM_RECOVER = 260,
	QL_TUTORIAL_SIGNATURE_ACTION = 261,
	QL_TUTORIAL_USE_ZIPLINE = 262,
	QL_TUTORIAL_SWITCH_THROW_WEAPON = 263,
	QL_TUTORIAL_THROW_WEAPON = 264,
	QL_TUTORIAL_FAST_THROW_WEAPON = 265,
	QL_TUTORIAL_MARK_PING_MOVE = 266,
	QL_TUTORIAL_MARK_PING_ENEMY = 267,
	QL_TUTORIAL_MARK_PING_SUPPORT = 268,
	QL_TUTORIAL_OPEN_STATUS_BOARD = 269,
	QL_TUTORIAL_DRAW_STATUS_BOARD = 270,
	QL_TUTORIAL_PING_STATUS_BOARD = 271,
	QL_TUTORIAL_GET_BOMB = 272,
	QL_TUTORIAL_INSTALL_BOMB = 273,
	QL_TUTORIAL_WAIT_EXPLOSION_BOMB = 274,
	QL_TUTORIAL_USE_ARMOR_PLATE = 275,
	QL_TUTORIAL_STEALTH = 276,
	QL_BI_NORMAL = 277,
	QL_BI_ALARMED = 278,
	QL_BI_COMBAT_SIMPLE = 279,
	QL_BI_COMBAT_HARD = 280,
	QL_Max = 281,
};

// Enum ProjectD.EQuestType
enum class EQuestType : uint8_t {
	QT_VOICE = 0,
	QT_TUTORIAL = 1,
	QT_BATTLE_INTENSITY = 2,
	QT_MAX = 3,
};

// Enum ProjectD.EReloadNotifyType
enum class EReloadNotifyType : uint8_t {
	NONE = 0,
	AttachMagazineToHand = 1,
	HideMagazine = 2,
	All = 3,
	EReloadNotifyType_MAX = 4,
};

// Enum ProjectD.EGuideType
enum class EGuideType : uint8_t {
	ROUND_OFFENSE = 0,
	ROUND_DEFENSE = 1,
	AREA = 2,
	PATH = 3,
	EGuideType_MAX = 4,
};

// Enum ProjectD.ESceneEvent
enum class ESceneEvent : uint8_t {
	SE_None = 0,
	SE_MatchingStarted = 1,
	SE_MatchingCanceled = 2,
	SE_MAX = 3,
};

// Enum ProjectD.ESceneName
enum class ESceneName : uint8_t {
	None = 0,
	Start = 1,
	Login = 2,
	lobby = 3,
	AgentNick = 4,
	AgentCreate = 5,
	AgentInven = 6,
	AgentLobby = 7,
	Custom = 8,
	CustomCharacterPerk = 9,
	CustomCharacterDeco = 10,
	CustomVoice = 11,
	CustomWeapon = 12,
	CustomGameDeco = 13,
	Clan = 14,
	ClanInfo = 15,
	ClanList = 16,
	ClanCreate = 17,
	DebugLog = 18,
	PlayLogReport = 19,
	Loading = 20,
	LoadBase = 21,
	LoadIntro = 22,
	LoadMatch = 23,
	LoadResult = 24,
	Ingame = 25,
	GameResult = 26,
	Scene_Max = 27,
	ESceneName_MAX = 28,
};

// Enum ProjectD.EBowStringAction
enum class EBowStringAction : uint8_t {
	Grab = 0,
	Release = 1,
	PullTight = 2,
	EBowStringAction_MAX = 3,
};

// Enum ProjectD.EPDSlidableType
enum class EPDSlidableType : uint8_t {
	Slidable_None = 0,
	Slidable_Start = 1,
	Slidable_Loop = 2,
	Slidable_End = 3,
	Slidable_MAX = 4,
};

// Enum ProjectD.ESoundTapType
enum class ESoundTapType : int32_t {
	None = -1,
	Sound = 0,
	Voice = 1,
	ESoundTapType_MAX = 2,
};

// Enum ProjectD.ESplineTrace
enum class ESplineTrace : uint8_t {
	ST_None = 0,
	SR_TraceTarget = 1,
	ESplineTrace_MAX = 2,
};

// Enum ProjectD.ESplineRotation
enum class ESplineRotation : uint8_t {
	SR_None = 0,
	SR_LookAtTarget = 1,
	SR_Local = 2,
	SR_World = 3,
	SR_InterpPoint = 4,
	SR_InterpPointLocal = 5,
	SR_MAX = 6,
};

// Enum ProjectD.ESplineMovementType
enum class ESplineMovementType : uint8_t {
	Position = 0,
	OffsetRotateAndPosition = 1,
	RotateAndPosition = 2,
	UseCustomRotation = 3,
	UseCharacterBone = 4,
	FOVOnly = 5,
	ESplineMovementType_MAX = 6,
};

// Enum ProjectD.EMoveInterpolateType
enum class EMoveInterpolateType : uint8_t {
	None = 0,
	PrevPosInclusive = 1,
	EMoveInterpolateType_MAX = 2,
};

// Enum ProjectD.ETabButtonState
enum class ETabButtonState : uint8_t {
	UnSelect = 0,
	Select = 1,
	ETabButtonState_MAX = 2,
};

// Enum ProjectD.ERookieEventState
enum class ERookieEventState : uint8_t {
	FirstLogin = 0,
	Incomplete = 1,
	CompleteTutorial = 2,
	CompletePlayGames = 3,
	CompleteAll = 4,
	ERookieEventState_MAX = 5,
};

// Enum ProjectD.EInvenSortOrder
enum class EInvenSortOrder : uint8_t {
	Property_Mission_ModeItem = 0,
	Property_Coin = 1,
	Property_ArmorPlate = 2,
	Property_Bandage = 3,
	Property_Painkiller = 4,
	Property_Pouchkit = 5,
	Property_FirstAidkit = 6,
	Property_Astrapi = 7,
	Property_SelfRevivalKit = 8,
	Property_Scope = 9,
	Property_FrontSight = 10,
	Property_SideSight = 11,
	Property_RearSight = 12,
	Property_Grip = 13,
	Property_Muzzle = 14,
	Property_Stock = 15,
	Property_Magazine = 16,
	Property_Ammo_10 = 17,
	Property_Ammo_557 = 18,
	Property_Ammo_763 = 19,
	Property_Ammo_12Gauge = 20,
	Property_Ammo_47 = 21,
	Property_Ammo_128 = 22,
	Property_Ammo_762G = 23,
	Property_Ammo_Arrow = 24,
	Property_Ammo_Exosuit = 25,
	Property_AR = 26,
	Property_SMG = 27,
	Property_SR = 28,
	Property_SG = 29,
	Property_LMG = 30,
	Property_BOW = 31,
	Property_RPG = 32,
	Property_MINIGUN = 33,
	Property_EXOSUIT_SMG = 34,
	Property_ETC = 35,
	Property_Pistol = 36,
	Property_Grenade = 37,
	Property_Smoke = 38,
	Property_GasGrenade = 39,
	Property_ScanGrenade = 40,
	Property_HealGrenade = 41,
	Property_Explosive = 42,
	Property_WhitePhosphorus = 43,
	Property_SND_BombDeactivateKit = 44,
	Property_MAX = 45,
};

// Enum ProjectD.EUIEvent
enum class EUIEvent : uint8_t {
	UE_None = 0,
	UE_ClanNameCheck = 1,
	UE_ClanCreate = 2,
	UE_ClanBreakRequested = 3,
	UE_ClanDestroyed = 4,
	UE_ClanInfoUpdated = 5,
	UE_ClanMemberListUpdated = 6,
	UE_ClanWaiterListUpdated = 7,
	UE_ClanListUpdated = 8,
	UE_ClanBreakCanceled = 9,
	UE_ClanJoined = 10,
	UE_ClanMemberRemoved = 11,
	UE_ClanDetailGet = 12,
	UE_ClanListLeftClicked = 13,
	UE_LeptonEquipFailed = 14,
	UE_LeptonSeasonMissionStatusUpdated = 15,
	UE_LeptonEquipListUpdated = 16,
	UE_Mercenary_Notify_Invite = 17,
	UE_InviteParty_Result = 18,
	UE_AcceptInviteParty_Result = 19,
	UE_NotifyBreakParty = 20,
	UE_OnShutDown = 21,
	UE_ReloadFindPartyUI = 22,
	UE_ReloadRegisterMercenaryUI = 23,
	UE_FindPartyPageVisibilityUpdated = 24,
	UE_ShowMatching = 25,
	UE_MatchingTime = 26,
	UE_HideMatching = 27,
	UE_ReloadPenalty = 28,
	UE_DefaultCustomRoom = 29,
	UE_ReloadCustomRoom = 30,
	UE_ReloadCustomRoomOption = 31,
	UE_ReloadHideCode = 32,
	UE_ReloadCustomRoomState = 33,
	UE_ReloadCustomRoomButton = 34,
	UI_MailListUpdate = 35,
	UI_MailUpdateItemStatus = 36,
	UE_NewMailVisibilityUpdated = 37,
	UE_MailUIClosed = 38,
	UE_ReloadOptionPopup = 39,
	MAXUIEvent = 40,
	EUIEvent_MAX = 41,
};

// Enum ProjectD.EChannelRange
enum class EChannelRange : uint8_t {
	None = 0,
	Party = 1,
	Area = 2,
	Team = 3,
	Text = 4,
	Max = 5,
};

// Enum ProjectD.EMapObjectState
enum class EMapObjectState : uint8_t {
	None = 0,
	Normal = 1,
	Groggy = 2,
	Dead = 3,
	Rescue = 4,
	Bandage = 5,
	Astrapi = 6,
	ArmorKit = 7,
	Seed = 8,
	Revive = 9,
	Shop = 10,
	Max = 11,
};

// Enum ProjectD.EMapObjectType
enum class EMapObjectType : uint8_t {
	None = 0,
	MainPlayer = 1,
	Ally = 2,
	Enemy = 3,
	Npc = 4,
	Object = 101,
	Seed = 102,
	Demolition = 103,
	EnemyDamage = 104,
	EnemyDeath = 105,
	SafeZone = 106,
	FireSound = 107,
	Ping = 108,
	Camp = 109,
	Drawing = 110,
	ItemBox = 111,
	Mission_Lepton = 112,
	RecMainPlayer = 201,
	RecAlly = 202,
	RecEnemy = 203,
	YoungsikHacking = 204,
	Max = 205,
};

// Enum ProjectD.EEntryPointType
enum class EEntryPointType : uint8_t {
	EPT_NONE = 0,
	EPT_Entry = 1,
	EPT_Exit = 2,
	EPT_MAX = 3,
};

// Class ProjectD.AnimNotify_PlayFacialMontage
class UAnimNotify_PlayFacialMontage : public UAnimNotify {

public:

	struct FName Name; // 0x38 (8)
};

// Class ProjectD.ExportCharacterSpawn
class AExportCharacterSpawn : public UActor {

public:

	struct UStaticMeshComponent StaticMeshComp; // 0x220 (8)
	enum class ECharacterSpawnGroup Grouptype; // 0x228 (1)
	int32_t Index; // 0x22C (4)
};

// Class ProjectD.ExportMissionScoreModeSpawnSystem
class AExportMissionScoreModeSpawnSystem : public UActor {

public:

	int32_t PcID; // 0x220 (4)
	struct UStaticMeshComponent GroupComp; // 0x228 (8)
	struct FGroupRangeInfo GroupRangeInfo; // 0x230 (36)
	struct UChildActorComponent CCTV_ActorComp; // 0x258 (8)
	bool bInGameDebugDraw; // 0x260 (1)
};

// Class ProjectD.ExportModeSpawnSystem
class AExportModeSpawnSystem : public UActor {

public:

	int32_t PcID; // 0x220 (4)
	bool bInGameLineVisible; // 0x224 (1)
	struct UStaticMeshComponent DefuseBombComp; // 0x228 (8)
	struct UStaticMeshComponent TeamAComp; // 0x230 (8)
	struct UStaticMeshComponent TeamBComp; // 0x238 (8)
	struct UStaticMeshComponent TeamAShopTrigger; // 0x240 (8)
	struct UBoxComponent TeamAShopBoxComp; // 0x248 (8)
	struct UStaticMeshComponent TeamBShopTrigger; // 0x250 (8)
	struct UBoxComponent TeamBShopBoxComp; // 0x258 (8)
	struct UChildActorComponent TeamA_CCTV_ActorComp; // 0x260 (8)
	struct UChildActorComponent TeamB_CCTV_ActorComp; // 0x268 (8)
	struct UChildActorComponent TeamA_IntroCam_ActorComp; // 0x270 (8)
	struct UChildActorComponent TeamB_IntroCam_ActorComp; // 0x278 (8)
};

// Class ProjectD.ExportTeamModeSpawnSystem
class AExportTeamModeSpawnSystem : public UActor {

public:

	int32_t PcID; // 0x220 (4)
	bool bInGameLineVisible; // 0x224 (1)
	struct UStaticMeshComponent DefuseBombComp; // 0x228 (8)
	struct UStaticMeshComponent TeamAComp; // 0x230 (8)
	struct UStaticMeshComponent TeamBComp; // 0x238 (8)
	struct UStaticMeshComponent TeamAShopTrigger; // 0x240 (8)
	struct UBoxComponent TeamAShopBoxComp; // 0x248 (8)
	struct UStaticMeshComponent TeamBShopTrigger; // 0x250 (8)
	struct UBoxComponent TeamBShopBoxComp; // 0x258 (8)
	struct UChildActorComponent TeamA_CCTV_ActorComp; // 0x260 (8)
	struct UChildActorComponent TeamB_CCTV_ActorComp; // 0x268 (8)
	struct UChildActorComponent TeamA_IntroCam_ActorComp; // 0x270 (8)
	struct UChildActorComponent TeamB_IntroCam_ActorComp; // 0x278 (8)
};

// Class ProjectD.ExportTriggerBox
class AExportTriggerBox : public ATriggerBox {

public:

	int32_t TargetType; // 0x228 (4)
	bool EnableExport; // 0x22C (1)
};

// Class ProjectD.ExportWorldItem
class AExportWorldItem : public UActor {

public:

	struct UStaticMeshComponent StaticMeshComp; // 0x220 (8)
	bool bUseItemSpawn; // 0x228 (1)
	bool bRandomZRotation; // 0x229 (1)
	int32_t ModeItemIndex; // 0x22C (4)
	struct TArray<int32_t> ItemsGroupIndexList; // 0x230 (16)
};

// Class ProjectD.IKTargetGetter_Parkour
class UIKTargetGetter_Parkour : public UIKTargetGetter {

public:

	struct UAnimNotify_SetIKTarget IKTargetNotify; // 0x30 (8)
	struct UAnimationAsset Animation; // 0x38 (8)
};

// Class ProjectD.IKTargetGetter_Weapon
class UIKTargetGetter_Weapon : public UIKTargetGetter {

public:

	struct FName SocketName; // 0x30 (8)
};

// Class ProjectD.LiveDataTableAsset
class ULiveDataTableAsset : public UDataAsset {

public:

	struct FName Name; // 0x30 (8)
	struct FFilePath SourcePath; // 0x38 (16)
	struct UScriptStruct DataClass; // 0x48 (8)
	struct ULiveDataTable Table; // 0x50 (8)
};

// Class ProjectD.PDUserWidget
class UPDUserWidget : public UUserWidget {

public:

	struct TMap<struct FName, struct UWidgetAnimation> AnimMap; // 0x238 (80)
};

// Class ProjectD.PD3DIndicatorUI
class UPD3DIndicatorUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_3DIndicator; // 0x290 (8)
	struct UPDImage IMG_Arrow; // 0x298 (8)
	struct UWidgetSwitcher WS_IndicatorType; // 0x2A0 (8)
	float SphereRadius; // 0x2A8 (4)
	struct FVector2D MinScale; // 0x2AC (8)
	float RadiusX; // 0x2B4 (4)
	float MinRadiusY; // 0x2B8 (4)
	float MaxPingDistance; // 0x2BC (4)
	float CreateTime; // 0x2C0 (4)
	float CreateTranslationRate; // 0x2C4 (4)
	float CreateScaleRate; // 0x2C8 (4)
	float HoldTime; // 0x2CC (4)
	float RemoveTime; // 0x2D0 (4)
	float RemoveScaleRate; // 0x2D4 (4)
};

// Class ProjectD.PDActionBase
class UPDActionBase : public Object {

public:

	struct UPDActionComponent OwnerActionComponent; // 0x48 (8)
	struct UPDMainPlayerActionComponent OwnerMainPlayerActionComponent; // 0x50 (8)
	struct UPDStateComponent OwnerStateComponent; // 0x58 (8)
	struct UPDMainPlayerStateComponent OwnerMainPlayerStateComponent; // 0x60 (8)
	struct APDPlayerCharacter OwnerPlayerCharacter; // 0x68 (8)
	struct APDMainPlayerCharacter OwnerMainPlayerCharacter; // 0x70 (8)
	struct UAnimMontage CurrentPlayingMontage; // 0x78 (8)
};

// Class ProjectD.PDAnimInstance
class UPDAnimInstance : public UAnimInstance {

public:

	enum class EPDAnimset AnimSet; // 0x268 (1)
	struct APDPlayerCharacter OwnerPlayerCharacter; // 0x270 (8)
	struct UPDStateComponent OwnerStateComponent; // 0x278 (8)
};

// Class ProjectD.PDPlayerAnimInstance
class UPDPlayerAnimInstance : public UPDAnimInstance {

public:

	enum class EPDLocoType PrevLocoType; // 0x280 (1)
	enum class EPDLocoType LocoType; // 0x281 (1)
	enum class EPDLocoState LocoState; // 0x282 (1)
	enum class EPDMovementState MovementState; // 0x283 (1)
	enum class EPDLeanState LeanState; // 0x284 (1)
	enum class EPDStanceState StanceState; // 0x285 (1)
	enum class EPDClimbStanceState ClimbStanceState; // 0x286 (1)
	enum class EPDThrowStanceState ThrowStanceState; // 0x287 (1)
	enum class EPDSlideStanceState SlideStanceState; // 0x288 (1)
	enum class EPDAimingState AimingState; // 0x289 (1)
	enum class EPDAimingState PrevAimingState; // 0x28A (1)
	enum class EPDGaitsState GaitState; // 0x28B (1)
	float GaitStateValue; // 0x28C (4)
	float GaitValue; // 0x290 (4)
	float Direction; // 0x294 (4)
	float AimPitch; // 0x298 (4)
	float AimYaw; // 0x29C (4)
	float FreeLookYaw; // 0x2A0 (4)
	float AimInterpTime; // 0x2A4 (4)
	float LeanFB; // 0x2A8 (4)
	float LeanLR; // 0x2AC (4)
	float AbsLeanFactor; // 0x2D0 (4)
	float StartPosition; // 0x2D4 (4)
	float PlayRate; // 0x2D8 (4)
	bool WStanceIsValid; // 0x2DC (1)
	bool SWStanceIsValid; // 0x2DD (1)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x2E0 (200)
	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x3A8 (296)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x4D0 (96)
	struct FPDIngameFacialAnimData IngameFacialAnimData; // 0x530 (104)
	bool IsCharacterDead; // 0x598 (1)
	bool bIsExhausted; // 0x599 (1)
	bool bIsStealth; // 0x59A (1)
	bool MirrorFinalPose; // 0x59B (1)
	bool bWeaponN_To_WeaponL; // 0x59C (1)
	bool bOverrideUpper; // 0x59D (1)
	bool bOverrideLower; // 0x59E (1)
	bool bIsRagdoll; // 0x59F (1)
	bool bInSnapshot; // 0x5A0 (1)
	struct UCurveVector YawOffset_FB; // 0x5A8 (8)
	struct UCurveFloat LeanCurve; // 0x5B0 (8)
	struct FPDAnimGraphAimingValues AimingValues; // 0x5B8 (12)
	struct UBlendSpace CurFRAnim; // 0x5C8 (8)
	struct UPDFireRecoilLevel FRLevel; // 0x5D0 (8)
	enum class EPD4DirType StartingDir; // 0x5D8 (1)
	enum class EPD4DirType StoppingDir; // 0x5D9 (1)
	float CrouchPoseStartRatio; // 0x5DC (4)
	float StandPoseStartRatio; // 0x5E0 (4)
};

// Class ProjectD.PDActionAnimNotify
class UPDActionAnimNotify : public UAnimNotify {

public:

	struct FName EventName; // 0x38 (8)
};

// Class ProjectD.PDActionAnimNotifyState
class UPDActionAnimNotifyState : public UAnimNotifyState {

public:

	struct FName BeginEventName; // 0x30 (8)
	struct UCurveBase BeginCurve; // 0x38 (8)
	struct FVector BeginVector; // 0x40 (12)
	struct FName EndEventName; // 0x4C (8)
	struct FVector EndVector; // 0x54 (12)
	enum class ECameraMovementType CameraMovement; // 0x60 (1)
};

// Class ProjectD.PDActionComponent
class UPDActionComponent : public UActorComponent {

public:

	struct TArray<struct UPDActionBase> ActionList; // 0xC8 (16)
	struct TArray<struct UClass*> ActionClassList; // 0xD8 (16)
	struct UDataTable ClimbUpHandOffsets; // 0x100 (8)
	struct UDataTable VaultHandOffsets; // 0x108 (8)
	struct UDataTable LedgeGrapHandOffsets; // 0x110 (8)
};

// Class ProjectD.PDActionParkourBase
class UPDActionParkourBase : public UPDActionBase {

public:

	bool bShowDebug; // 0x1AC (1)
	float HandPointThreshold; // 0x1B0 (4)
	float CapsuleHalfHeightThreshold; // 0x1B4 (4)
	float HandPointGap; // 0x1B8 (4)
	float ForwardOffset; // 0x1BC (4)
	float OverCapsuleHalfHeight; // 0x1C0 (4)
	float OverCollisionThickness; // 0x1C4 (4)
	float VaultHeightThreshold; // 0x1C8 (4)
};

// Class ProjectD.PDAgentCreateUI
class UPDAgentCreateUI : public UPDSceneBaseUI {

public:

	struct UTileView TV_AgentList; // 0x288 (8)
	struct UPDTabButtonGroup AgentTabBtnGroup; // 0x290 (8)
	struct UPDButton CreateBtn; // 0x298 (8)
	struct UPDKeyButton Btn_Back; // 0x2A0 (8)
	struct UWidget IMG_Movie; // 0x2A8 (8)
	struct UPDTextBlock T_Name; // 0x2B0 (8)
	struct UPDTextBlock T_Num; // 0x2B8 (8)
	struct UPDTextBlock T_Nationality; // 0x2C0 (8)
	struct UImage IMG_ProfileBg_Pic; // 0x2C8 (8)
	struct UImage IMG_ProfilePic; // 0x2D0 (8)
	struct UImage IMG_Sign; // 0x2D8 (8)
	struct UImage IMG_Icon_Lepton_01; // 0x2E0 (8)
	struct UImage IMG_Icon_Lepton_02; // 0x2E8 (8)
	struct UImage IMG_Icon_Signature; // 0x2F0 (8)
	struct UPDTextBlock T_Title_Lepton_01; // 0x2F8 (8)
	struct UPDTextBlock T_Desc_Lepton_01; // 0x300 (8)
	struct UPDTextBlock T_Title_Lepton_02; // 0x308 (8)
	struct UPDTextBlock T_Desc_Lepton_02; // 0x310 (8)
	struct UPDTextBlock T_Desc_Signature; // 0x318 (8)
	struct UPDTextBlock T_ProfileDesc_01; // 0x320 (8)
	struct UPDTextBlock T_ProfileDesc_02; // 0x328 (8)
	struct UMediaPlayer AgentMediaPlayer; // 0x330 (8)

	void SetAgentInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos); // Function ProjectD.PDAgentCreateUI.SetAgentInfo(Final|Native|Private|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x18054E0>
	void OnMovieOpened(); // Function ProjectD.PDAgentCreateUI.OnMovieOpened(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnMovieClosed(); // Function ProjectD.PDAgentCreateUI.OnMovieClosed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnInitMediaPlayer(); // Function ProjectD.PDAgentCreateUI.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnCreateAgentClicked(); // Function ProjectD.PDAgentCreateUI.OnCreateAgentClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805420>
	void OnConfirmCreate(int32_t AgentIndex); // Function ProjectD.PDAgentCreateUI.OnConfirmCreate(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18053A0>
	void OnBackClicked(); // Function ProjectD.PDAgentCreateUI.OnBackClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805380>
	void AgentSkillVisible(bool bShow); // Function ProjectD.PDAgentCreateUI.AgentSkillVisible(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805190>
};

// Class ProjectD.PDAgentInvenCustomTarget
class UPDAgentInvenCustomTarget : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_SelectedState; // 0x288 (8)
};

// Class ProjectD.PDAgentInvenPerkListItem
class UPDAgentInvenPerkListItem : public UPDUserWidget {

public:

	struct UImage Img_Bg; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UBorder BD_ItemOutline; // 0x2A0 (8)
	struct UPDButton Btn_GoEquipPerk; // 0x2A8 (8)

	void GotoCharacterPerk(); // Function ProjectD.PDAgentInvenPerkListItem.GotoCharacterPerk(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805300>
};

// Class ProjectD.PDAgentInventoryUI
class UPDAgentInventoryUI : public UPDSceneBaseUI {

public:

	struct UCanvasPanel CP_AgentInventory; // 0x288 (8)
	struct UVerticalBox VB_CharacterSlots; // 0x290 (8)
	struct UPDTabButtonGroup AgentSlotTabBtnGroup; // 0x298 (8)
	struct UImage IMG_Siluet; // 0x2A0 (8)
	struct UPDButton Btn_GotoLobby; // 0x2A8 (8)
	struct UPDTextBlock T_ContractNum; // 0x2B0 (8)
	struct UPDTextBlock T_SelectedAgent_Name; // 0x2B8 (8)
	struct UPDTextBlock T_SelectedAgent_Nationality; // 0x2C0 (8)
	struct UPDTextBlock T_SelectedAgent_CodeName; // 0x2C8 (8)
	struct UCanvasPanel CP_AgentSign; // 0x2D0 (8)
	struct UImage IMG_AgentSign; // 0x2D8 (8)
	struct UPDButton Btn_QuickContract; // 0x2E0 (8)
	struct UCanvasPanel CP_PageInfo; // 0x2E8 (8)
	struct UCanvasPanel CP_SlotChanger_L; // 0x2F0 (8)
	struct UCanvasPanel CP_SlotChanger_R; // 0x2F8 (8)
	struct UPDButton Btn_SlotChanger_L; // 0x300 (8)
	struct UPDButton Btn_SlotChanger_R; // 0x308 (8)
	struct UWidgetSwitcher WS_SlotChanger_L; // 0x310 (8)
	struct UWidgetSwitcher WS_SlotChanger_R; // 0x318 (8)
	struct UPDTextBlock TB_CurPage; // 0x320 (8)
	struct UPDTextBlock TB_MaxPage; // 0x328 (8)
	struct UCanvasPanel CP_AgentPos; // 0x330 (8)
	struct UCanvasPanel CP_GamePos; // 0x338 (8)
	struct UCanvasPanel CP_WeaponPos; // 0x340 (8)
	struct UPDAgentInvenCustomTarget AICT_Agent; // 0x348 (8)
	struct UPDAgentInvenCustomTarget AICT_Game; // 0x350 (8)
	struct UPDAgentInvenCustomTarget AICT_Weapon; // 0x358 (8)
	struct UCanvasPanel CP_CustomAgent; // 0x360 (8)
	struct UCanvasPanel CP_CustomGame; // 0x368 (8)
	struct UCanvasPanel CP_CustomWeapon; // 0x370 (8)
	struct UImage IMG_New_Perk; // 0x378 (8)
	struct UPDButton Btn_CustomAgent_Perk; // 0x380 (8)
	struct UImage IMG_New_Look; // 0x388 (8)
	struct UPDButton Btn_CustomAgent_Look; // 0x390 (8)
	struct UPDButton Btn_CustomAgent_Voice; // 0x398 (8)
	struct UPDButton Btn_CustomGame; // 0x3A0 (8)
	struct UPDButton Btn_CustomWeapon; // 0x3A8 (8)
	struct UCanvasPanel CP_Rental_ToolTip; // 0x3B0 (8)
	struct UCanvasPanel CP_Title; // 0x3B8 (8)
	struct UPDButton Btn_Back; // 0x3C0 (8)
	struct TMap<int32_t, struct FVector> CharacterMenuPositionMap; // 0x3C8 (80)
	struct TMap<int32_t, struct FVector> GameMenuPositionMap; // 0x418 (80)
	struct TMap<int32_t, struct FVector> WeaponMenuPositionMap; // 0x468 (80)
	float RandomLineMin; // 0x4B8 (4)
	float RandomLineMax; // 0x4BC (4)
	struct FLinearColor NormalLineColor; // 0x4C0 (16)
	struct FLinearColor OverLineColor; // 0x4D0 (16)
	struct UPDEquipPerkList EquipPerkList; // 0x4E0 (8)
	struct UCanvasPanel CP_PerkList; // 0x4E8 (8)

	void SlotChangerRight(); // Function ProjectD.PDAgentInventoryUI.SlotChangerRight(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18055C0>
	void SlotChangerLeft(); // Function ProjectD.PDAgentInventoryUI.SlotChangerLeft(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18055A0>
	void QuickContract(); // Function ProjectD.PDAgentInventoryUI.QuickContract(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18054C0>
	void GotoLobby(); // Function ProjectD.PDAgentInventoryUI.GotoLobby(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805360>
	void GotoGameDeco(); // Function ProjectD.PDAgentInventoryUI.GotoGameDeco(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void GotoCharacterWeapon(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterWeapon(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805340>
	void GotoCharacterVoice(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterVoice(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void GotoCharacterPerk(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterPerk(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805320>
	void GotoCharacterDeco(); // Function ProjectD.PDAgentInventoryUI.GotoCharacterDeco(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18052E0>
	void CustomWeaponBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOver(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18052C0>
	void CustomWeaponBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOut(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18052A0>
	void CustomGameBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOver(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805280>
	void CustomGameBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomGameBtnOut(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805260>
	void CustomCharacterPerkBtnOver(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOver(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805240>
	void CustomCharacterPerkBtnOut(); // Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOut(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805220>
};

// Class ProjectD.PDAgentLeptonInfo
class UPDAgentLeptonInfo : public UPDIngameModeWidget {

public:

	struct UImage IMG_UniqueSlot_Perk1; // 0x290 (8)
	struct UPDTextBlock T_UniqueSlot_PerkName1; // 0x298 (8)
	struct UPDTextBlock T_UniqueSlot_PerkDesc1; // 0x2A0 (8)
	struct UImage IMG_UniqueSlot_Perk2; // 0x2A8 (8)
	struct UPDTextBlock T_UniqueSlot_PerkName2; // 0x2B0 (8)
	struct UPDTextBlock T_UniqueSlot_PerkDesc2; // 0x2B8 (8)
	struct UWidgetSwitcher WS_EquipSlot1; // 0x2D0 (8)
	struct UImage IMG_EquipSlot_Perk1; // 0x2D8 (8)
	struct UPDTextBlock T_EquipSlot_PerkName1; // 0x2E0 (8)
	struct UPDTextBlock T_EquipSlot_PerkDesc1; // 0x2E8 (8)
	struct UWidgetSwitcher WS_EquipSlot2; // 0x2F0 (8)
	struct UImage IMG_EquipSlot_Perk2; // 0x2F8 (8)
	struct UPDTextBlock T_EquipSlot_PerkName2; // 0x300 (8)
	struct UPDTextBlock T_EquipSlot_PerkDesc2; // 0x308 (8)
	struct UWidgetSwitcher WS_EquipSlot3; // 0x310 (8)
	struct UImage IMG_EquipSlot_Perk3; // 0x318 (8)
	struct UPDTextBlock T_EquipSlot_PerkName3; // 0x320 (8)
	struct UPDTextBlock T_EquipSlot_PerkDesc3; // 0x328 (8)
	struct UImage IMG_Signature; // 0x340 (8)
	struct UPDTextBlock T_Signature_Name; // 0x348 (8)
	struct UPDTextBlock T_Signature_Desc; // 0x350 (8)
	struct UPDTextBlock T_AgentName; // 0x358 (8)
};

// Class ProjectD.PDAgentListItemUI
class UPDAgentListItemUI : public UPDUserWidget {

public:

	struct UImage IMG_Face; // 0x290 (8)
	struct UPDTextBlock T_Name; // 0x298 (8)
	struct UPDTextBlock T_HoldingText; // 0x2A0 (8)
	struct UPDTabButton Btn_Select; // 0x2A8 (8)
	struct UCanvasPanel CP_Holding; // 0x2B0 (8)
	struct UCanvasPanel CP_Selected; // 0x2B8 (8)
	struct UWidgetSwitcher WS_LockState; // 0x2C0 (8)

	void OnUnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnUnSelectAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18054A0>
	void OnUnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnUnHoverAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805480>
	void OnSelectAgent(); // Function ProjectD.PDAgentListItemUI.OnSelectAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1805460>
	void OnHoverAgent(); // Function ProjectD.PDAgentListItemUI.OnHoverAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
};

// Class ProjectD.PDAgentPresetListItem
class UPDAgentPresetListItem : public UPDUserWidget {

public:

	struct UBorder BD_Normal; // 0x290 (8)
	struct UBorder BD_Hover; // 0x298 (8)
	struct UBorder BD_Select; // 0x2A0 (8)
	struct UPDTextBlock TB_Name; // 0x2A8 (8)
};

// Class ProjectD.PDAgentSkillListUI
class UPDAgentSkillListUI : public UPDUserWidget {

public:

	struct UImage IMG_Icon; // 0x290 (8)
	struct UPDButton Btn_Skill; // 0x298 (8)
	struct UPDTextBlock TB_Name; // 0x2A0 (8)
	struct UPDTextBlock TB_Desc; // 0x2A8 (8)

	void OnUnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnUnHoverAgentSkill(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnHoverAgentSkill(); // Function ProjectD.PDAgentSkillListUI.OnHoverAgentSkill(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
};

// Class ProjectD.PDAgentSlotListItemUI
class UPDAgentSlotListItemUI : public UPDUserWidget {

public:

	struct UImage IMG_New; // 0x290 (8)
	struct UWidgetSwitcher WS_CharacterSlot; // 0x298 (8)
	struct UWidgetSwitcher WS_TagState; // 0x2A0 (8)
	struct UPDButton Btn_CreateButton; // 0x2A8 (8)
	struct UPDButton Btn_AgentSelectButton; // 0x2B0 (8)
	struct UPDTextBlock TB_CharacterName; // 0x2B8 (8)
	struct UPDTextBlock TB_CharacterAncestry; // 0x2C0 (8)
	struct UPDTextBlock TB_Level; // 0x2C8 (8)
	struct UProgressBar PB_Exp; // 0x2D0 (8)
	struct UCanvasPanel CP_CharacterSlot_OverSet; // 0x2D8 (8)
	struct UCanvasPanel CP_CharacterSlot_SelectedSet; // 0x2E0 (8)
	struct UImage IMG_CharacterSlot_Portrait; // 0x2E8 (8)
	struct UCanvasPanel CP_Empty_OverSet; // 0x2F0 (8)
	struct UImage IMG_Signature; // 0x2F8 (8)
	struct UCanvasPanel CP_OverDeco; // 0x300 (8)
	struct UCanvasPanel CP_ExpiredSet; // 0x308 (8)

	void OnUnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverSelectAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1808520>
	void OnUnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnUnHoverCreateAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1808500>
	void OnHoverSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverSelectAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18084E0>
	void OnHoverCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnHoverCreateAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18084C0>
	void OnClickSelectAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickSelectAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18084A0>
	void OnClickCreateAgent(); // Function ProjectD.PDAgentSlotListItemUI.OnClickCreateAgent(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1808480>
};

// Class ProjectD.PDAkEventAnimNotifyState
class UPDAkEventAnimNotifyState : public UAnimNotifyState {

public:

	bool bAutoStopBeginEventPlayingOnEnd; // 0x30 (1)
	struct UAkAudioEvent EventOnBegin; // 0x38 (8)
	struct UAkAudioEvent EventOnEnd; // 0x40 (8)
};

// Class ProjectD.PDAkEventLoadList
class UPDAkEventLoadList : public Object {

public:

	struct TArray<struct UAkAudioEvent> EventsToLoad; // 0x28 (16)
};

// Class ProjectD.PDAkEventTriggerVolume
class APDAkEventTriggerVolume : public ATriggerVolume {

public:

	struct UPDAkComponent PDAkComponent; // 0x258 (8)
	struct TArray<struct UAkAudioEvent> BeginOverlapAkEvents; // 0x260 (16)
	struct TArray<struct UAkAudioEvent> EndOverlapAkEvents; // 0x270 (16)
	struct TArray<struct FPDAudioSwitch> Switches; // 0x280 (16)
	struct FString StateGroup; // 0x290 (16)
	struct FString State; // 0x2A0 (16)
	bool StopWhenOwnerIsDestroyed; // 0x2B0 (1)
};

// Class ProjectD.PDAkReactor
class APDAkReactor : public UActor {

public:

	struct USphereComponent SphereComponent; // 0x2C8 (8)
	struct UPDAkComponent PDAkComponent; // 0x2D0 (8)
};

// Class ProjectD.PDAnimDynamicsInstBase
class UPDAnimDynamicsInstBase : public UPDAnimInstance {

public:

	struct FVector WindVelocity; // 0x280 (12)
	bool UseAnimDynamics; // 0x28C (1)
	bool UseWind; // 0x28D (1)
	float WindInterval; // 0x290 (4)
	float MinWindForce; // 0x294 (4)
	float MaxWindForce; // 0x298 (4)
};

// Class ProjectD.PDAnimNotifyState
class UPDAnimNotifyState : public UAnimNotifyState {

public:

	struct FActionNotifyData BeginNotifyData; // 0x30 (56)
	struct FActionNotifyData EndNotifyData; // 0x68 (56)
};

// Class ProjectD.PDArmorGauge
class UPDArmorGauge : public UPDUserWidget {

public:

	struct FSlateBrush ArmorDisableBrush; // 0x288 (136)
	struct FSlateBrush ArmorBackgroundBrush; // 0x310 (136)
	struct FSlateBrush ArmorFillBrush; // 0x398 (136)
	struct FSlateBrush ArmorMaxBrush; // 0x420 (136)
	struct UCanvasPanel CP_Normal; // 0x4A8 (8)
	struct UHorizontalBox HB_NormalBar; // 0x4B0 (8)
	struct UCanvasPanel CP_Juggernaut; // 0x4B8 (8)
	struct UProgressBar PB_Juggernaut; // 0x4C0 (8)
};

// Class ProjectD.PDArmorGaugeDetail
class UPDArmorGaugeDetail : public UPDArmorGauge {

public:

	struct UHorizontalBox HB_NormalText; // 0x4D0 (8)
	struct UPDMaskedText MT_Juggernaut; // 0x4D8 (8)
	struct FSlateBrush ArmorRecoverBrush; // 0x4E0 (136)
	struct UClass* NormalTextClass; // 0x570 (8)
	float Width; // 0x578 (4)
};

// Class ProjectD.PDAsyncMeshActor
class APDAsyncMeshActor : public UActor {

public:

	struct UBoxComponent BoxComponent; // 0x220 (8)
	struct UPDAsyncMeshComponent AsyncMeshComponent; // 0x228 (8)
};

// Class ProjectD.PDAttackDamageIndicatorUI
class UPDAttackDamageIndicatorUI : public UPDHUDIconBaseUI {

public:

	struct UBorder BD_OutArrow; // 0x2A0 (8)
	struct UOverlay O_Damage; // 0x2A8 (8)
	struct UPDTextBlock TB_TotalDamage; // 0x2B0 (8)
	struct UPDTextBlock TB_TotalArmorDamage; // 0x2B8 (8)
	struct UPDTextBlock TB_TotalGroggyDamage; // 0x2C0 (8)
	struct FSlateColor WeakDamageColor; // 0x2C8 (40)
	struct FSlateColor MediumDamageColor; // 0x2F0 (40)
	struct FSlateColor StrongDamageColor; // 0x318 (40)
	int32_t NormalDamageFontSize; // 0x340 (4)
	struct FSlateColor ArmorDamageColor; // 0x348 (40)
	int32_t ArmorDamageFontSize; // 0x370 (4)
	struct FSlateColor GroggyDamageColor; // 0x378 (40)
	int32_t GroggyDamageFontSize; // 0x3A0 (4)
	struct FVector2D DamageRandBoxSize; // 0x3A4 (8)
	struct FVector2D DamageOffsetSize; // 0x3AC (8)
	float DamageShowTime; // 0x3B4 (4)
};

// Class ProjectD.PDBaseModeUI
class UPDBaseModeUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_GameModeLayer; // 0x288 (8)
	struct TMap<enum class EGameModeWidget, struct UPDIngameModeWidget> ModeWidgetMap; // 0x290 (80)
	struct UPDPlayerInfoUI PlayerInfo; // 0x2E0 (8)
	struct UPDPerkUI PerkUI; // 0x2E8 (8)
	struct UPDPerkNotifyUI PerkNotifyUI; // 0x2F0 (8)
	struct UPDCoinInfoUI CoinInfo; // 0x2F8 (8)
	struct UPDCrossHairUI CrossHair; // 0x300 (8)
	struct UPDInteractionInfoUI InteractionInfo; // 0x308 (8)
	struct UPDDamageScreenIndicatorUI DamageScreenIndicator; // 0x310 (8)
	struct UPD3DIndicatorUI ThreeDIndicator; // 0x318 (8)
	struct UPDTargetScreenUI TargetScreen; // 0x320 (8)
	struct UPDGameTimeUI GameTime; // 0x328 (8)
	struct UPDIngameMapUI IngameMap; // 0x330 (8)
	struct UPDWorldMessageUI WorldMessage; // 0x338 (8)
	struct UPDBattleLogUI BattleLog; // 0x340 (8)
	struct UPDKillLogUI KillLog; // 0x348 (8)
	struct UPDPingLog PingLog; // 0x350 (8)
	struct UPDUnKnownMarket UnKnownMarket; // 0x358 (8)
	struct UPDTutorialQuestListUI TutorialQuest; // 0x360 (8)
	struct UPDSpectatorUI SpectatorUI; // 0x368 (8)
	struct UPDRingCommandUI RingCommand; // 0x370 (8)
	struct UPDMarkerGuide MarkerGuide; // 0x378 (8)
	struct UPDStateGaugeUI StateGauge; // 0x380 (8)
	struct UPDAgentLeptonInfo AgentLeptonInfo; // 0x388 (8)
	struct UPDPersonalMissionUI PersonalMissionUI; // 0x390 (8)
	struct UPDChattingUI Chatting; // 0x398 (8)
	struct UCanvasPanel CP_ChatLayer; // 0x3A0 (8)
	struct UCanvasPanel CP_CCTVLayer; // 0x3A8 (8)
	struct UCanvasPanel CP_IntroCinemaLayer; // 0x3B0 (8)
	struct UCanvasPanel CP_SubtitleLayer; // 0x3B8 (8)
	struct UPDIngameVideoUI IngameVideo; // 0x3C0 (8)
	struct UPDSubtitleUI SubtitleUI; // 0x3C8 (8)
	struct UCanvasPanel CP_EscMenu; // 0x3D0 (8)
	struct UPDEscMenuUI EscMenu; // 0x3D8 (8)
	struct UCanvasPanel CP_BreakIntoLayer; // 0x3E0 (8)
	struct UPDBreakIntoUI BreakInto; // 0x3E8 (8)
	struct UPDRoundWaitUI RoundWait; // 0x3F0 (8)
	struct UPDPlayerSettingUI PlayerSetting; // 0x3F8 (8)
	struct UScaleBox NoneScale_Inventory; // 0x400 (8)
	struct UScaleBox NoneScale_CrossHair; // 0x408 (8)
	struct UScaleBox NoneScale_StatusBoard; // 0x410 (8)
	struct UScaleBox NoneScale_IngameMap; // 0x418 (8)
	struct UScaleBox NoneScale_Replay; // 0x420 (8)
	struct UScaleBox NoneScale_PlayerSetting; // 0x428 (8)
	struct UScaleBox NoneScale_MarketGuide; // 0x430 (8)
	struct UScaleBox NoneScale_RingCommand; // 0x438 (8)
	struct UScaleBox NoneScale_AgentLeptonInfo; // 0x440 (8)
	struct UScaleBox NoneScale_RoundResult; // 0x448 (8)
	struct UScaleBox NoneScale_ReportPopup; // 0x450 (8)
	struct UScaleBox NoneScale_CCTV; // 0x458 (8)
	struct UScaleBox NoneScale_IntroCinema; // 0x460 (8)
	struct UScaleBox NoneScale_Menu; // 0x468 (8)
};

// Class ProjectD.PDBaseUI
class UPDBaseUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_SceneLayer; // 0x288 (8)
	struct UCanvasPanel CP_PopupLayer; // 0x290 (8)
	struct UCanvasPanel CP_GlobalPopupLayer; // 0x298 (8)
	struct UCanvasPanel CP_TopLayer; // 0x2A0 (8)
	struct UCanvasPanel CP_Blind; // 0x2A8 (8)
	struct UImage IMG_Blind; // 0x2B0 (8)
	struct UCanvasPanel CP_DevLayer; // 0x2B8 (8)
	struct UPDMatchingUI MatchingUI; // 0x2C0 (8)
	struct UPDOutGameTopMenu OutGameTopMenu; // 0x2C8 (8)
	struct UPDCustomRoomUI CustomRoom; // 0x2D0 (8)
	struct UPDChattingUI ChattingUI; // 0x2D8 (8)
	struct TMap<enum class EUIName, struct UClass*> UIClassMap; // 0x2E0 (80)
	struct TMap<enum class EUIName, struct UPDSceneBaseUI> SceneUIWidgetMap; // 0x330 (80)
	struct UPDSystemMessageUI SystemMessageUIWidget; // 0x380 (8)
	struct UPDSceneBaseUI MatchSceneUI; // 0x388 (8)
	struct TArray<struct UPDPopupBaseUI> PopupUIStack; // 0x398 (16)
	struct TArray<struct UPDPopupBaseUI> GlobalPopupUIStack; // 0x3A8 (16)
	struct UPDTextBlock Dev_Text; // 0x3B8 (8)
	struct UPDTextBlock Connect_State_Text; // 0x3C0 (8)
	struct UPDTextBlock TB_FPS; // 0x3C8 (8)
	struct UPDTextBlock TB_BuildInfo; // 0x3D0 (8)
	struct UPDTextBlock TB_ConnectInfo; // 0x3D8 (8)
	struct UPDTextBlock TB_MatchID; // 0x3E0 (8)
	struct UPDTextBlock TB_Ping; // 0x3E8 (8)
	struct UImage IMG_Connect; // 0x3F0 (8)
	struct UPDTextBlock TB_Graphics; // 0x3F8 (8)
};

// Class ProjectD.PDBattleLogModule
class UPDBattleLogModule : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Log; // 0x288 (8)
	struct UBorder BD_Bg; // 0x290 (8)
};

// Class ProjectD.PDBattleLogUI
class UPDBattleLogUI : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_EventLog; // 0x298 (8)
	enum class EHorizontalAlignment LogHAlign; // 0x2A0 (1)
	struct FMargin LogPadding; // 0x2A4 (16)
	bool InvertToAdd; // 0x2B4 (1)
	int32_t MaxLogCount; // 0x2B8 (4)
	float DefaultDuration; // 0x2BC (4)
	bool AutoRemove; // 0x2C0 (1)
	struct UVerticalBox VB_WarningList; // 0x2C8 (8)
	struct UVerticalBox VB_FeedbackLog; // 0x2D0 (8)
	enum class EHorizontalAlignment FeedbackHAlign; // 0x2D8 (1)
	struct FMargin FeedbackPadding; // 0x2DC (16)
	int32_t MaxFeedbackCount; // 0x2EC (4)
	float DefaultFeedbackDuration; // 0x2F0 (4)
	bool bAutoRemoveFeedback; // 0x2F4 (1)
	bool bReverseToAddFeedback; // 0x2F5 (1)
	struct UPDNotificationAlert AlertWidget; // 0x2F8 (8)
};

// Class ProjectD.PDBreakableObject
class APDBreakableObject : public UActor {

public:

	struct UChildActorComponent SwitchActor; // 0x288 (8)
	struct USkeletalMeshComponent AnimMesh; // 0x290 (8)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x298 (16)
	int32_t StartHP; // 0x2A8 (4)
	struct FString Start_BaseSocket; // 0x2B0 (16)
	int32_t Start_BaseEffectID; // 0x2C0 (4)
	struct FString DestructSound; // 0x2C8 (16)
	float Middle_Time; // 0x2D8 (4)
	struct FString Middle_ResultSocket; // 0x2E0 (16)
	int32_t Middle_ResultEffectID; // 0x2F0 (4)
	float Middle_Damage; // 0x2F4 (4)
	float End_Time; // 0x2F8 (4)
	struct UStaticMeshComponent BaseMesh; // 0x300 (8)
	struct UStaticMeshComponent ResultMesh; // 0x308 (8)
	struct USphereComponent DamageArea; // 0x310 (8)
};

// Class ProjectD.PDBreakIntoPlayerItem
class UPDBreakIntoPlayerItem : public UPDUserWidget {

public:

	struct UImage IMG_PlayerPic; // 0x288 (8)
	struct UImage IMG_SlotBg_L; // 0x290 (8)
	struct UImage IMG_SlotBg_R; // 0x298 (8)
	struct UImage IMG_Divider; // 0x2A0 (8)
	struct UImage IMG_SlotOutline; // 0x2A8 (8)
	struct UPDTextBlock T_PlayerName; // 0x2B0 (8)
};

// Class ProjectD.PDBreakIntoUI
class UPDBreakIntoUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_PlayTimeMin; // 0x290 (8)
	struct UPDTextBlock TB_PlayTimeSec; // 0x298 (8)
	struct UPDTextBlock TB_Round; // 0x2A0 (8)
	struct UPDGameMapModule GameMap; // 0x2A8 (8)
	struct UImage IMG_TeamBG_Ally; // 0x2B0 (8)
	struct UPDTextBlock TB_TeamName_Ally; // 0x2B8 (8)
	struct UImage IMG_TeamBG_Enemy; // 0x2C0 (8)
	struct UPDTextBlock TB_TeamName_Enemy; // 0x2C8 (8)
	struct UPDBreakIntoPlayerItem AllyPlayer_01; // 0x2D0 (8)
	struct UPDBreakIntoPlayerItem AllyPlayer_02; // 0x2D8 (8)
	struct UPDBreakIntoPlayerItem AllyPlayer_03; // 0x2E0 (8)
	struct UPDBreakIntoPlayerItem AllyPlayer_04; // 0x2E8 (8)
	struct UPDBreakIntoPlayerItem AllyPlayer_05; // 0x2F0 (8)
	struct UPDBreakIntoPlayerItem EnemyPlayer_01; // 0x2F8 (8)
	struct UPDBreakIntoPlayerItem EnemyPlayer_02; // 0x300 (8)
	struct UPDBreakIntoPlayerItem EnemyPlayer_03; // 0x308 (8)
	struct UPDBreakIntoPlayerItem EnemyPlayer_04; // 0x310 (8)
	struct UPDBreakIntoPlayerItem EnemyPlayer_05; // 0x318 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_2; // 0x320 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_3; // 0x328 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_4; // 0x330 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_5; // 0x338 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_6; // 0x340 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_7; // 0x348 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_8; // 0x350 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_9; // 0x358 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_10; // 0x360 (8)
	struct TArray<struct UPDStatusBoardRoundResultItem> RoundResultList; // 0x368 (16)
};

// Class ProjectD.PDBrickListItem
class UPDBrickListItem : public UPDUserWidget {

public:

	struct UImage IMG_Brick; // 0x290 (8)
	struct UPDTextBlock TB_Title; // 0x298 (8)
	struct UBorder BD_ItemOutline; // 0x2A0 (8)
	struct UBorder BD_ItemOverOutline; // 0x2A8 (8)
	struct UBorder BD_ItemSelOutline; // 0x2B0 (8)
};

// Class ProjectD.PDButton
class UPDButton : public UPDUserWidget {

public:

	struct UPDCustomButton Button; // 0x288 (8)
	struct UPDTextBlock Text; // 0x290 (8)
	struct UBorder BD_Outline; // 0x298 (8)
	struct UWidgetSwitcher WS_IMGState; // 0x2A0 (8)
	struct UImage IMG_Normal; // 0x2A8 (8)
	struct UImage IMG_Hover; // 0x2B0 (8)
	struct UImage IMG_Press; // 0x2B8 (8)
	struct UImage IMG_Disable; // 0x2C0 (8)
	struct UImage IMG_Ani1; // 0x2C8 (8)
	struct UImage IMG_Ani2; // 0x2D0 (8)
	struct TArray<struct UImage> AniImages; // 0x2D8 (16)
	struct FButtonStyle ButtonStyle; // 0x2E8 (632)
	struct FText InText; // 0x560 (24)
	struct FSlateFontInfo Font; // 0x578 (80)
	struct FMargin TextMargin; // 0x5C8 (16)
	enum class ETextJustify TextJustfication; // 0x5D8 (1)
	struct FString NormalAniName; // 0x5E0 (16)
	bool IsLoopNormalAni; // 0x5F0 (1)
	struct FString HoverAniName; // 0x5F8 (16)
	bool IsLoopHoverAni; // 0x608 (1)
	struct TArray<struct FSlateBrush> AniImageBrushs; // 0x610 (16)
	struct UAkAudioEvent HoverSound; // 0x620 (8)
	struct UAkAudioEvent ClickSound; // 0x628 (8)
	struct FSlateBrush ButtonNormalStyle; // 0x638 (136)
	struct FSlateBrush ButtonHoverStyle; // 0x6C0 (136)
	struct FSlateBrush ButtonPressStyle; // 0x748 (136)
	struct FSlateBrush ButtonDisableStyle; // 0x7D0 (136)
	bool UseNormalOutline; // 0x858 (1)
	bool UseHoverOutline; // 0x859 (1)
	bool UseClickOutline; // 0x85A (1)
	bool UseDisableOutline; // 0x85B (1)
	struct FPDButtonOutLine NormalOutLineStyle; // 0x860 (200)
	struct FPDButtonOutLine HoverOutLineStyle; // 0x928 (200)
	struct FPDButtonOutLine ClickOutLineStyle; // 0x9F0 (200)
	struct FPDButtonOutLine DisableOutLineStyle; // 0xAB8 (200)
	struct FSlateColor NormalTextColor; // 0xB80 (40)
	struct FSlateColor HoverTextColor; // 0xBA8 (40)
	struct FSlateColor PressTextColor; // 0xBD0 (40)
	struct FSlateColor DisableTextColor; // 0xBF8 (40)

	void OnUnHovered(); // Function ProjectD.PDButton.OnUnHovered(Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x180DB60>
	void OnReleased(); // Function ProjectD.PDButton.OnReleased(Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x180DB40>
	void OnHovered(); // Function ProjectD.PDButton.OnHovered(Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x180DB20>
	void OnClicked(); // Function ProjectD.PDButton.OnClicked(Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x180DB00>
};

// Class ProjectD.PDCamSpline
class APDCamSpline : public UActor {

public:

	struct UPDSplineComponent SplineComp; // 0x220 (8)
	int32_t SplineID; // 0x228 (4)
	int32_t FOVStart; // 0x22C (4)
	int32_t FOVEnd; // 0x230 (4)
	bool ApplyRotation; // 0x234 (1)
	struct FRotator TargetRotation; // 0x238 (12)
	struct UActor LookAtTarget; // 0x248 (8)
};

// Class ProjectD.PDCCTVUI
class UPDCCTVUI : public UPDUserWidget {

public:

	struct UPDTextBlock T_Desc_01; // 0x288 (8)
	struct UPDTextBlock T_Desc_02; // 0x290 (8)
	struct UPDTextBlock T_Desc_03; // 0x298 (8)
	struct UPDTextBlock T_Desc_04; // 0x2A0 (8)
};

// Class ProjectD.PDChattingUI
class UPDChattingUI : public UPDUserWidget {

public:

	struct UImage IMG_ChatBg; // 0x288 (8)
	struct UScrollBox SB_Chatting; // 0x290 (8)
	struct UBorder BD_BlockArea; // 0x298 (8)
	struct UCanvasPanel CP_ChatArea; // 0x2A0 (8)
	struct UCanvasPanel CP_InputType; // 0x2A8 (8)
	struct UCanvasPanel CP_ChatImg; // 0x2B0 (8)
	struct URichTextBlock RTB_ChatType; // 0x2B8 (8)
	struct UEditableText ET_Chatting; // 0x2C0 (8)
	struct URichTextBlock RTB_CopyTextBlock; // 0x2C8 (8)
	struct UCanvasPanel CP_ChattingHelp; // 0x2D0 (8)
	struct UPDButton Btn_WhisperChat; // 0x2D8 (8)
	struct UPDButton Btn_ReplyChat; // 0x2E0 (8)
	struct UPDButton Btn_TeamChat; // 0x2E8 (8)
	struct UPDButton Btn_SquadChat; // 0x2F0 (8)
	struct UPDButton Btn_ClanChat; // 0x2F8 (8)
	struct UPDButton Btn_Hide; // 0x300 (8)
	struct UPDCustomSlider SD_Slider; // 0x308 (8)

	void SendChatMessage(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDChattingUI.SendChatMessage(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1812A90>
	void OnValueChanged(float InValue); // Function ProjectD.PDChattingUI.OnValueChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1812260>
	void OnClickWhisperChatBtn(); // Function ProjectD.PDChattingUI.OnClickWhisperChatBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void OnClickTeamChatBtn(); // Function ProjectD.PDChattingUI.OnClickTeamChatBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void OnClickSquadChatBtn(); // Function ProjectD.PDChattingUI.OnClickSquadChatBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void OnClickReplyChatBtn(); // Function ProjectD.PDChattingUI.OnClickReplyChatBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void OnClickHideBtn(); // Function ProjectD.PDChattingUI.OnClickHideBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void OnClickClanChatBtn(); // Function ProjectD.PDChattingUI.OnClickClanChatBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1811880>
	void ChangeText(struct FText& InText); // Function ProjectD.PDChattingUI.ChangeText(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1810D10>
};

// Class ProjectD.PDCheckBox
class UPDCheckBox : public UPDUserWidget {

public:

	struct UCheckBox CheckBox; // 0x288 (8)
	struct UAkAudioEvent HoverSound; // 0x290 (8)
};

// Class ProjectD.PDCheerMarkFx
class UPDCheerMarkFx : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_Cheer; // 0x288 (8)
};

// Class ProjectD.PDCircleProgress
class UPDCircleProgress : public UPDUserWidget {

public:

	struct UImage Img_Bg; // 0x288 (8)
	struct UImage IMG_Gauge; // 0x290 (8)
	struct UImage IMG_Glow; // 0x298 (8)
	struct Object BGTexture; // 0x2A0 (8)
	struct FLinearColor BGColor; // 0x2A8 (16)
	struct Object GaugeTexture; // 0x2B8 (8)
	struct FLinearColor GaugeColor; // 0x2C0 (16)
	bool UseGlow; // 0x2D0 (1)
	struct Object GlowTexture; // 0x2D8 (8)
	struct FLinearColor GlowColor; // 0x2E0 (16)
	float DefaultPercent; // 0x2F0 (4)
};

// Class ProjectD.PDCircleProgressModule
class UPDCircleProgressModule : public UPDUserWidget {

public:

	struct UImage IMG_CircleProgress; // 0x288 (8)
	struct UPDTextBlock TB_ProgressTime; // 0x290 (8)
	bool IsInverse; // 0x298 (1)
	bool IsClockWise; // 0x299 (1)
	bool IsDivide; // 0x29A (1)
	int32_t DivideNum; // 0x29C (4)
	float DivideAntiAliasing; // 0x2A0 (4)
	float DivideGapSize; // 0x2A4 (4)
	float StartPos; // 0x2A8 (4)
	float CompleteRange; // 0x2AC (4)
	float AntiAliasing; // 0x2B0 (4)
	float CircleSize; // 0x2B4 (4)
	bool IsColorTexture; // 0x2B8 (1)
	struct UTexture ColorTexture; // 0x2C0 (8)
	bool IsMaskTexture; // 0x2C8 (1)
	struct UTexture MaskTexture; // 0x2D0 (8)
	struct FDelegate GetProgressPerDelegate; // 0x2E8 (16)

	void OnSynchronizeProperties(); // Function ProjectD.PDCircleProgressModule.OnSynchronizeProperties(Native|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1811A40>
};

// Class ProjectD.PDClanApplicantListItemUI
class UPDClanApplicantListItemUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Nickname; // 0x290 (8)
	struct UPDTextBlock TB_PassedTime; // 0x298 (8)
	struct UCanvasPanel CP_Normal; // 0x2A0 (8)
	struct UPDButton BTN_Accept; // 0x2A8 (8)
	struct UPDButton BTN_Decline; // 0x2B0 (8)
	struct UCanvasPanel CP_Wait; // 0x2B8 (8)
	struct UPDButton BTN_CancelReqJoin; // 0x2C0 (8)
	struct UBorder BD_Outline; // 0x2C8 (8)

	void OnClickDecline(); // Function ProjectD.PDClanApplicantListItemUI.OnClickDecline(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811800>
	void OnClickCancelReqJoin(); // Function ProjectD.PDClanApplicantListItemUI.OnClickCancelReqJoin(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811800>
	void OnClickAccept(); // Function ProjectD.PDClanApplicantListItemUI.OnClickAccept(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18117C0>
};

// Class ProjectD.PDClanCreateUI
class UPDClanCreateUI : public UPDSceneBaseUI {

public:

	struct UEditableTextBox ET_ClanName; // 0x288 (8)
	struct UPDButton BTN_CheckInUse; // 0x290 (8)
	struct UPDTextBlock T_ClanName_Msg; // 0x298 (8)
	struct UPDTabButtonGroup TabGroupMembership; // 0x2A0 (8)
	struct UPDTabButton TAB_FreeJoin; // 0x2A8 (8)
	struct UPDTabButton TAB_SignUp; // 0x2B0 (8)
	struct UPDTabButtonGroup TabGroupClanStyle; // 0x2B8 (8)
	struct UPDTabButton TAB_Social; // 0x2C0 (8)
	struct UPDTabButton TAB_Normal; // 0x2C8 (8)
	struct UPDTabButton TAB_Competition; // 0x2D0 (8)
	struct UEditableTextBox ET_ClanTagInput1; // 0x2D8 (8)
	struct UEditableTextBox ET_ClanTagInput2; // 0x2E0 (8)
	struct UEditableTextBox ET_ClanTagInput3; // 0x2E8 (8)
	struct UPDButton BTN_CreateClan; // 0x2F0 (8)
	struct UPDTextBlock T_CreateClan_Msg; // 0x2F8 (8)
	struct UImage IMG_ClanMarkBG; // 0x300 (8)
	struct UImage IMG_ClanMarkFG; // 0x308 (8)
	struct UPDButton BTN_RandomMark; // 0x310 (8)
	struct UMultiLineEditableText MET_ClanDesc; // 0x318 (8)

	void OnTextChangedClanTag3(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag3(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1812080>
	void OnTextChangedClanTag2(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag2(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811EC0>
	void OnTextChangedClanTag1(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnTextChangedClanTag1(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811D00>
	void OnTextChangedClanDesc(struct FText& Text); // Function ProjectD.PDClanCreateUI.OnTextChangedClanDesc(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811A60>
	void OnCreateConfirm(); // Function ProjectD.PDClanCreateUI.OnCreateConfirm(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18119E0>
	void OnClickSocialTab(); // Function ProjectD.PDClanCreateUI.OnClickSocialTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickSingUpTab(); // Function ProjectD.PDClanCreateUI.OnClickSingUpTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickRandomMark(); // Function ProjectD.PDClanCreateUI.OnClickRandomMark(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811980>
	void OnClickNormalTab(); // Function ProjectD.PDClanCreateUI.OnClickNormalTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanCreateUI.OnClickFreeJoinTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickCreateClan(); // Function ProjectD.PDClanCreateUI.OnClickCreateClan(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18118E0>
	void OnClickCompetitionTab(); // Function ProjectD.PDClanCreateUI.OnClickCompetitionTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickCheckInUse(); // Function ProjectD.PDClanCreateUI.OnClickCheckInUse(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811840>
	void OnClanNameTextChanged(struct FText& InText); // Function ProjectD.PDClanCreateUI.OnClanNameTextChanged(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x18116E0>
};

// Class ProjectD.PDOKPopupUI
class UPDOKPopupUI : public UPDPopupBaseUI {

public:

	struct UPDTextBlock Desc; // 0x2B8 (8)
	struct UPDButton OKBtn; // 0x2C0 (8)
};

// Class ProjectD.PDClanInfoPopupUI
class UPDClanInfoPopupUI : public UPDOKPopupUI {

public:

	struct UPDTextBlock T_ClanName; // 0x2D0 (8)
	struct UPDTextBlock T_Public; // 0x2D8 (8)
	struct UWidgetSwitcher WS_ClanTrend; // 0x2E0 (8)
	struct UPDTextBlock T_ClanTag; // 0x2E8 (8)
	struct UImage IMG_ClanMarkBG; // 0x2F0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2F8 (8)
	struct UPDTextBlock T_ClanDesc; // 0x300 (8)
	struct UMultiLineEditableText ET_ClanDesc; // 0x308 (8)
	struct UPDTextBlock T_ClanMaster; // 0x310 (8)
	struct UPDTextBlock T_ClanMemberNum; // 0x318 (8)
	struct UPDTextBlock T_ClanCreateDate; // 0x320 (8)
};

// Class ProjectD.PDClanInfoUI
class UPDClanInfoUI : public UPDSceneBaseUI {

public:

	struct UPDButton BTN_ShowClanInfo; // 0x288 (8)
	struct UWidgetSwitcher WS_Info; // 0x290 (8)
	struct UPDTextBlock TB_ClanMsg; // 0x298 (8)
	struct UPDTextBlock T_ClanName; // 0x2A0 (8)
	struct UImage IMG_Info_Hover; // 0x2A8 (8)
	struct UCanvasPanel CP_None; // 0x2B0 (8)
	struct UCanvasPanel CP_Info; // 0x2B8 (8)
	struct UCanvasPanel CP_Member; // 0x2C0 (8)
	struct UCanvasPanel CP_Applicant; // 0x2C8 (8)
	struct UCanvasPanel CP_Manage; // 0x2D0 (8)
	struct UPDButton BTN_Leave; // 0x2D8 (8)
	struct UPDTabButtonGroup TabGroupMenu; // 0x2E0 (8)
	struct UPDTabButton TAB_Member; // 0x2E8 (8)
	struct UPDTabButtonGroup TabGroupMenu_Right; // 0x2F0 (8)
	struct UPDTabButton TAB_Applicant; // 0x2F8 (8)
	struct UPDTabButton TAB_ClanManage; // 0x300 (8)
	struct UPDTabButton TAB_BreakClan; // 0x308 (8)
	struct UListView LV_MemberList; // 0x310 (8)
	struct UListView LV_ApplicantList; // 0x318 (8)
	struct UPDButton BTN_Create; // 0x320 (8)
	struct UPDButton BTN_Search; // 0x328 (8)
	struct UPDButton BTN_ForceClanBreak; // 0x330 (8)
	struct UEditableTextBox ET_ClanName; // 0x338 (8)
	struct UPDButton BTN_CheckInUse; // 0x340 (8)
	struct UPDTabButtonGroup TabGroupMembership; // 0x348 (8)
	struct UPDTabButton TAB_FreeJoin; // 0x350 (8)
	struct UPDTabButton TAB_SignUp; // 0x358 (8)
	struct UPDTabButtonGroup TabGroupClanStyle; // 0x360 (8)
	struct UPDTabButton TAB_Social; // 0x368 (8)
	struct UPDTabButton TAB_Normal; // 0x370 (8)
	struct UPDTabButton TAB_Competition; // 0x378 (8)
	struct UEditableTextBox ET_ClanTagInput1; // 0x380 (8)
	struct UEditableTextBox ET_ClanTagInput2; // 0x388 (8)
	struct UEditableTextBox ET_ClanTagInput3; // 0x390 (8)
	struct UPDButton BTN_ManageChange; // 0x398 (8)
	struct UImage IMG_ClanMarkBG; // 0x3A0 (8)
	struct UImage IMG_ClanMarkFG; // 0x3A8 (8)
	struct UPDButton BTN_ChangeMark; // 0x3B0 (8)
	struct UMultiLineEditableText MET_ClanDesc; // 0x3B8 (8)

	void OnUnhoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnUnhoveredShowClanInfo(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1812240>
	void OnTextChangedClanTag3(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag3(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1812160>
	void OnTextChangedClanTag2(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag2(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811FA0>
	void OnTextChangedClanTag1(struct FText& InText); // Function ProjectD.PDClanInfoUI.OnTextChangedClanTag1(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811DE0>
	void OnTextChangedClanName(struct FText& Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanName(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811C20>
	void OnTextChangedClanDesc(struct FText& Text); // Function ProjectD.PDClanInfoUI.OnTextChangedClanDesc(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1811B40>
	void OnLeaveConfirm(); // Function ProjectD.PDClanInfoUI.OnLeaveConfirm(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811A20>
	void OnHoveredShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnHoveredShowClanInfo(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811A00>
	void OnForceClanBreakButton(); // Function ProjectD.PDClanInfoUI.OnForceClanBreakButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18116C0>
	void OnClickSocialTab(); // Function ProjectD.PDClanInfoUI.OnClickSocialTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickSingUpTab(); // Function ProjectD.PDClanInfoUI.OnClickSingUpTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickShowClanInfo(); // Function ProjectD.PDClanInfoUI.OnClickShowClanInfo(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18119C0>
	void OnClickSearch(); // Function ProjectD.PDClanInfoUI.OnClickSearch(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18119A0>
	void OnClickNormalTab(); // Function ProjectD.PDClanInfoUI.OnClickNormalTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickMemberTab(); // Function ProjectD.PDClanInfoUI.OnClickMemberTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811960>
	void OnClickManageChange(); // Function ProjectD.PDClanInfoUI.OnClickManageChange(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811940>
	void OnClickLeave(); // Function ProjectD.PDClanInfoUI.OnClickLeave(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811920>
	void OnClickFreeJoinTab(); // Function ProjectD.PDClanInfoUI.OnClickFreeJoinTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickDisband(); // Function ProjectD.PDClanInfoUI.OnClickDisband(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811900>
	void OnClickCreate(); // Function ProjectD.PDClanInfoUI.OnClickCreate(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18118C0>
	void OnClickCompetitionTab(); // Function ProjectD.PDClanInfoUI.OnClickCompetitionTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickClanManageTab(); // Function ProjectD.PDClanInfoUI.OnClickClanManageTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18118A0>
	void OnClickCheckInUse(); // Function ProjectD.PDClanInfoUI.OnClickCheckInUse(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811860>
	void OnClickChangeMark(); // Function ProjectD.PDClanInfoUI.OnClickChangeMark(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811820>
	void OnClickApplicantTab(); // Function ProjectD.PDClanInfoUI.OnClickApplicantTab(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18117E0>
	void OnBreakClanConfirmButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanConfirmButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18116C0>
	void OnBreakClanCancelButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanCancelButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18116A0>
	void OnBreakClanButton(); // Function ProjectD.PDClanInfoUI.OnBreakClanButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1811680>
};

// Class ProjectD.PDClanListUI
class UPDClanListUI : public UPDSceneBaseUI {

public:

	struct UPDComboBox CBO_ClanStyle2; // 0x288 (8)
	struct UListView LV_ClanList; // 0x290 (8)
	struct UEditableTextBox ET_Search; // 0x298 (8)
	struct UPDButton BTN_Search; // 0x2A0 (8)
	struct UCanvasPanel CP_ClanListContext; // 0x2A8 (8)
	struct UPDButton BTN_ClanInfo; // 0x2B0 (8)

	void OnEnterSearch(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDClanListUI.OnEnterSearch(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1816D90>
	void OnClickSeach(); // Function ProjectD.PDClanListUI.OnClickSeach(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816AD0>
	void OnClickClanInfo(); // Function ProjectD.PDClanListUI.OnClickClanInfo(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816870>
	void OnClanStyleSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function ProjectD.PDClanListUI.OnClanStyleSelectionChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816700>
	void OnChangeSearchText(struct FText& InText); // Function ProjectD.PDClanListUI.OnChangeSearchText(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1816600>
};

// Class ProjectD.PDClanMainUI
class UPDClanMainUI : public UPDSceneBaseUI {

public:

	struct UPDButton Btn_GotoLobby; // 0x288 (8)
	struct UPDTabButtonGroup MenuTabGroup; // 0x290 (8)
	struct UPDTabButton TAB_ClanInfo; // 0x298 (8)
	struct UPDTabButton TAB_ClanList; // 0x2A0 (8)
	struct UPDTabButton TAB_ClanCreate; // 0x2A8 (8)
	struct TMap<char, struct UPDTabButton> ClanTabs; // 0x2B0 (80)

	void OnClickTabClanList(); // Function ProjectD.PDClanMainUI.OnClickTabClanList(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816BB0>
	void OnClickTabClanInfo(); // Function ProjectD.PDClanMainUI.OnClickTabClanInfo(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816B90>
	void OnClickTabClanCreate(); // Function ProjectD.PDClanMainUI.OnClickTabClanCreate(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816B70>
	void OnClickBtnGotoLobby(); // Function ProjectD.PDClanMainUI.OnClickBtnGotoLobby(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816850>
};

// Class ProjectD.PDClanMemberListItemUI
class UPDClanMemberListItemUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Nickname; // 0x290 (8)
	struct UImage IMG_Agent; // 0x298 (8)
	struct UImage IMG_Master; // 0x2A0 (8)
	struct UPDTextBlock TB_ConnectState; // 0x2A8 (8)
	struct UPDButton BTN_Kick; // 0x2B0 (8)
	struct UBorder BD_Outline; // 0x2B8 (8)

	void OnKickConfirm(); // Function ProjectD.PDClanMemberListItemUI.OnKickConfirm(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1817000>
	void OnClickKick(); // Function ProjectD.PDClanMemberListItemUI.OnClickKick(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18169D0>
};

// Class ProjectD.PDClanOtherListItemUI
class UPDClanOtherListItemUI : public UPDUserWidget {

public:

	struct UImage IMG_ClanMarkBG; // 0x290 (8)
	struct UImage IMG_ClanMarkFG; // 0x298 (8)
	struct UPDTextBlock TB_ClanName; // 0x2A0 (8)
	struct UPDTextBlock TB_MemberCount; // 0x2A8 (8)
	struct UImage IMG_ActivityIndex; // 0x2B0 (8)
	struct UWidgetSwitcher WS_ClanTrend; // 0x2B8 (8)
	struct UPDTextBlock TB_ClanTag; // 0x2C0 (8)
	struct UWidgetSwitcher WS_Membership_Case; // 0x2C8 (8)
	struct UPDImageButton Btn_Bg; // 0x2D0 (8)
	struct UPDButton BTN_Join; // 0x2D8 (8)
	struct UPDButton BTN_Full; // 0x2E0 (8)
	struct UBorder BD_Outline; // 0x2E8 (8)

	void OnDblClicked(); // Function ProjectD.PDClanOtherListItemUI.OnDblClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816D70>
	void OnClickJoin(); // Function ProjectD.PDClanOtherListItemUI.OnClickJoin(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18169B0>
};

// Class ProjectD.PDCommPage
class UPDCommPage : public UPDUserWidget {

public:

	struct UTreeView TV_Display; // 0x288 (8)
};

// Class ProjectD.PDClimbNodeActor
class APDClimbNodeActor : public UActor {

public:

	struct USphereComponent Sphere; // 0x220 (8)
	struct UArrowComponent Arrow; // 0x228 (8)
	struct FNeighborInfo NeighborInfo; // 0x230 (64)
};

// Class ProjectD.PDClimbableActor
class APDClimbableActor : public UActor {

public:

	struct UBoxComponent Box; // 0x230 (8)
	bool bDataOverridden; // 0x250 (1)
	bool bBidirectional; // 0x251 (1)
	struct APDClimbableActor OppositeDirectionActor; // 0x258 (8)
	struct FNeighborInfoArray NeighborInfos; // 0x260 (72)
	struct TArray<struct APDClimbableActor> IgnoreActorsOnBuild; // 0x2A8 (16)
};

// Class ProjectD.PDCoinInfoListItemUI
class UPDCoinInfoListItemUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Coin; // 0x288 (8)
	struct UPDTextBlock TB_HoldingCoin; // 0x290 (8)
	struct UPDTextBlock TB_GetCoin; // 0x298 (8)
	struct UPDTextBlock TB_GetCoin_Back; // 0x2A0 (8)
	float TotalShowTime; // 0x2A8 (4)
};

// Class ProjectD.PDCoinInfoUI
class UPDCoinInfoUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_RoundCoinBoard; // 0x298 (8)
	struct UVerticalBox VB_CoinList; // 0x2A0 (8)
	struct UPDTextBlock TB_TotalCoin; // 0x2A8 (8)
	float ShowDuration; // 0x2B0 (4)
	int32_t MaxListNum; // 0x2B4 (4)
};

// Class ProjectD.PDComboBox
class UPDComboBox : public UPDUserWidget {

public:

	struct UComboBoxString ComboBox; // 0x288 (8)
	struct FSlateFontInfo ComboFontInfo; // 0x290 (80)
	struct FMargin ComboTextMargin; // 0x2E0 (16)
	struct FComboBoxStyle ComboBoxWidgetStyle; // 0x2F0 (1008)
	struct FTableRowStyle ComboBoxItemStyle; // 0x6E0 (1992)
	float ItemHeight; // 0xEA8 (4)
	struct TMap<struct FString, struct USizeBox> ItemBlocks; // 0xEB0 (80)
	struct TMap<struct FString, struct UPDTextBlock> ItemTexts; // 0xF00 (80)

	struct UWidget OnComboBoxGenerateWidget(struct FString Item); // Function ProjectD.PDComboBox.OnComboBoxGenerateWidget(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816C50>
};

// Class ProjectD.PDCommunityPopupUI
class UPDCommunityPopupUI : public UPDPopupBaseUI {

public:

	struct UPDTextBlock T_CCU; // 0x2B8 (8)
	struct UPDImageButton IMG_Btn_Bg; // 0x2C0 (8)
	struct UPDTabButton Btn_FriendTab; // 0x2C8 (8)
	struct UPDTabButton Btn_ClanTab; // 0x2D0 (8)
	struct UPDTabButton Btn_FriendAddTab; // 0x2D8 (8)
	struct UPDTabButtonGroup TabGroup; // 0x2E0 (8)
	struct UPDButton Btn_FriendAdd; // 0x2E8 (8)
	struct UPDButton Btn_FriendRemove; // 0x2F0 (8)
	struct UPDButton Btn_FavoriteAdd; // 0x2F8 (8)
	struct UPDButton Btn_UnFavorite; // 0x300 (8)
	struct UPDButton Btn_PartyInvite; // 0x308 (8)
	struct UPDButton Btn_Whisper; // 0x310 (8)
	struct UPDButton Btn_CustomInvite; // 0x318 (8)
	struct UPDButton BTN_ClanInfo; // 0x320 (8)
	struct UPDButton Btn_WIC; // 0x328 (8)
	struct UPDButton Btn_Close; // 0x330 (8)
	struct UCanvasPanel CP_ContextMenu; // 0x338 (8)
	struct UWidgetSwitcher PageSwitcher; // 0x340 (8)
	struct UPDFriendPage FriendPage; // 0x348 (8)
	struct UPDClanPage ClanPage; // 0x350 (8)
	struct UPDFriendAddPage FriendAddPage; // 0x358 (8)
	struct UPDFindPartyPageUI FindPartyPage; // 0x360 (8)
	struct UPDButton Btn_FindParty; // 0x368 (8)
	struct UCanvasPanel CP_ToolTip; // 0x370 (8)
	struct UPDTextBlock TB_DataName; // 0x378 (8)
	struct UPDTextBlock TB_DataValue; // 0x380 (8)
	struct UCanvasPanel CP_MannerToolTip; // 0x388 (8)
	struct UPDTextBlock TB_PointLevel; // 0x390 (8)
	struct UCanvasPanel CP_FindPartyMannerToolTip; // 0x398 (8)
	struct UPDTextBlock TB_FindPartyPointLevel; // 0x3A0 (8)

	void OnWICClicked(); // Function ProjectD.PDCommunityPopupUI.OnWICClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1817060>
	void OnWhisperClicked(); // Function ProjectD.PDCommunityPopupUI.OnWhisperClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1817080>
	void OnUnFavoriteClicked(); // Function ProjectD.PDCommunityPopupUI.OnUnFavoriteClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1817040>
	void OnPartyInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnPartyInviteClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1817020>
	void OnFriendTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendTabClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816F60>
	void OnFriendRemoveClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendRemoveClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816F40>
	void OnFriendAddTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddTabClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816F20>
	void OnFriendAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFriendAddClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816F00>
	void OnFindPartyClicked(); // Function ProjectD.PDCommunityPopupUI.OnFindPartyClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816EE0>
	void OnFavoriteAddClicked(); // Function ProjectD.PDCommunityPopupUI.OnFavoriteAddClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816EC0>
	void OnCustomInviteClicked(); // Function ProjectD.PDCommunityPopupUI.OnCustomInviteClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816D50>
	void OnClanTabClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanTabClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816830>
	void OnClanInfoClicked(); // Function ProjectD.PDCommunityPopupUI.OnClanInfoClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18166E0>
};

// Class ProjectD.PDOptionUIBase
class UPDOptionUIBase : public UPDUserWidget {

public:

	struct UPDTabButtonGroup MiddleOptionTabBtnGroup; // 0x288 (8)
	struct FSlateFontInfo CategoryFont; // 0x290 (80)
	struct TMap<struct FString, struct UPDOptionContent> MapOptionContents; // 0x2E0 (80)
};

// Class ProjectD.PDControlOptionUI
class UPDControlOptionUI : public UPDOptionUIBase {

public:

	struct UPDTabButton MoveNActionSettingBtn; // 0x338 (8)
	struct UPDTabButton ETCActionSettingBtn; // 0x340 (8)
	struct UScrollBox SB_Controls; // 0x348 (8)

	void OnInputKeySelected(struct UPDOptionContent Content); // Function ProjectD.PDControlOptionUI.OnInputKeySelected(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816F80>
	void OnClickZoom2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2ToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816C30>
	void OnClickZoom2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom2DefaultButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816C10>
	void OnClickZoom1ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1ToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816BF0>
	void OnClickZoom1DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickZoom1DefaultButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816BD0>
	void OnClickShootingRightButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingRightButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816B50>
	void OnClickShootingLeftButton(); // Function ProjectD.PDControlOptionUI.OnClickShootingLeftButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816B30>
	void OnClickSetToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickSetToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816B10>
	void OnClickSetDefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickSetDefaultButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816AF0>
	void OnClickScoreBoardToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816AB0>
	void OnClickScoreBoardHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickScoreBoardHoldeButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A90>
	void OnClickScope2ToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2ToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A70>
	void OnClickScope2DefaultButton(); // Function ProjectD.PDControlOptionUI.OnClickScope2DefaultButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A50>
	void OnClickMoveNActionSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickMoveNActionSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A30>
	void OnClickLeanToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A10>
	void OnClickLeanHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickLeanHoldButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18169F0>
	void OnClickIngameMapSizeToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816990>
	void OnClickIngameMapSizeHoldeButton(); // Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeHoldeButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816970>
	void OnClickETCActionSettingButton(); // Function ProjectD.PDControlOptionUI.OnClickETCActionSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816910>
	void OnClickEnableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange2Button(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816950>
	void OnClickEnableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange1Button(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816930>
	void OnClickDisableWeaponChange2Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange2Button(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18168F0>
	void OnClickDisableWeaponChange1Button(); // Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange1Button(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18168D0>
	void OnClickCrouchToggleButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchToggleButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18168B0>
	void OnClickCrouchHoldButton(); // Function ProjectD.PDControlOptionUI.OnClickCrouchHoldButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816890>
	void OnChangePing1DblClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1DblClickType(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18164D0>
	void OnChangePing1ClickType(struct FString Item, enum class ESelectInfo SelType); // Function ProjectD.PDControlOptionUI.OnChangePing1ClickType(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18163A0>
	void OnAutoReloadEnabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadEnabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816380>
	void OnAutoReloadDisabled(); // Function ProjectD.PDControlOptionUI.OnAutoReloadDisabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816360>
};

// Class ProjectD.PDCrossHairUI
class UPDCrossHairUI : public UPDIngameModeWidget {

public:

	struct UWidgetSwitcher WS_FireIndicator; // 0x290 (8)
	struct UPanelWidget CP_Aim; // 0x298 (8)
	struct UPanelWidget CP_Aim_Offset; // 0x2A0 (8)
	struct UPanelWidget CP_Aim_Crosshair; // 0x2A8 (8)
	struct UPanelWidget CP_Crosshair_Default; // 0x2B0 (8)
	struct UPanelWidget CP_Crosshair_SG; // 0x2B8 (8)
	struct UBorder BD_Kill; // 0x2C0 (8)
	struct UPanelWidget CP_Ammo; // 0x2C8 (8)
	struct UPDCircleProgressModule CPM_Ammo; // 0x2D0 (8)
	struct UPDCircleProgressModule CPM_AmmoBG; // 0x2D8 (8)
	struct UBorder BD_AmmoInfo; // 0x2E0 (8)
	struct USizeBox SB_Key; // 0x2E8 (8)
	struct UPDTextBlock TB_Key; // 0x2F0 (8)
	struct UPDTextBlock TB_AmmoInfo; // 0x2F8 (8)
	struct UImage IMG_CrossHairSight; // 0x300 (8)
	struct UImage IMG_CrossHairC; // 0x308 (8)
	struct UImage IMG_CrossHairL; // 0x310 (8)
	struct UImage IMG_CrossHairR; // 0x318 (8)
	struct UImage IMG_CrossHairT; // 0x320 (8)
	struct UImage IMG_CrossHairB; // 0x328 (8)
	struct UImage IMG_CrossHairC_L; // 0x330 (8)
	struct UImage IMG_CrossHairC_R; // 0x338 (8)
	struct UImage IMG_CrossHairC_T; // 0x340 (8)
	struct UImage IMG_CrossHairC_B; // 0x348 (8)
	struct UImage IMG_CrossHairC_C; // 0x350 (8)
	struct UPanelWidget CP_RedDot; // 0x358 (8)
	struct UImage IMG_RedDot; // 0x360 (8)
	struct UImage IMG_RedDotActive; // 0x368 (8)
	struct UImage IMG_RedDotLine; // 0x370 (8)
	struct UImage IMG_AimWarning; // 0x378 (8)
	struct UPanelWidget CP_Melee; // 0x380 (8)
	struct UImage IMG_CrossHairMelee; // 0x388 (8)
	struct UImage IMG_ReloadIcon; // 0x390 (8)
	struct UBorder BD_Hit; // 0x398 (8)
	struct UImage IMG_Hit_L; // 0x3A0 (8)
	struct UImage IMG_Hit_R; // 0x3A8 (8)
	struct UImage IMG_Hit_T; // 0x3B0 (8)
	struct UImage IMG_Hit_D; // 0x3B8 (8)
	struct UPDHitFeedBackUI HitFeedback_Armor; // 0x3C0 (8)
	struct UPDHitFeedBackUI HitFeedback_kill; // 0x3C8 (8)
	bool bEnableCrosshairLineAlpha; // 0x3D0 (1)
	struct UCurveFloat CrosshairFireCurve; // 0x3D8 (8)
	struct TArray<struct UImage> HitLines; // 0x460 (16)
	struct FSlateBrush CenterDotBrush; // 0x470 (136)
	struct FSlateBrush CrossHairBrush; // 0x4F8 (136)
	struct FSlateBrush HitLineBrush; // 0x580 (136)
	struct FSlateBrush KillLineBrush; // 0x608 (136)
	struct FSlateBrush RedDotBrush; // 0x690 (136)
	struct FSlateBrush OutlineBrush; // 0x718 (136)
	float DefaultOutlineThickness; // 0x7A0 (4)
	enum class ECrossHairDrawStyle DrawStyle; // 0x7A4 (4)
};

// Class ProjectD.PDCursorWidget
class UPDCursorWidget : public UUserWidget {

public:

	struct UCanvasPanel CP_Parent; // 0x230 (8)
	struct UImage IMG_Cursor; // 0x238 (8)

	void SetSize(); // Function ProjectD.PDCursorWidget.SetSize(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181B1D0>
};

// Class ProjectD.PDCustomCategoryListItem
class UPDCustomCategoryListItem : public UPDUserWidget {

public:

	struct UBorder BD_ItemOutline; // 0x290 (8)
	struct UBorder BD_Back; // 0x298 (8)
	struct UPDTextBlock TB_Category; // 0x2A0 (8)
	struct UImage IMG_New; // 0x2A8 (8)
};

// Class ProjectD.PDCustomCharacterDecoUI
class UPDCustomCharacterDecoUI : public UPDSceneBaseUI {

public:

	struct UTileView TV_ClosetCategory; // 0x288 (8)
	struct UTileView TV_ClosetItemList; // 0x290 (8)
	struct UPDButton Btn_Restore; // 0x298 (8)
	struct UPDButton Btn_Save; // 0x2A0 (8)
	struct UBorder BD_Cover; // 0x2A8 (8)
	struct UPDButton Btn_Buy; // 0x2B0 (8)
	struct UPDCheckBox CB_AllSkin; // 0x2B8 (8)
	struct UPDCheckBox CB_HasSkin; // 0x2C0 (8)
	struct UPDCheckBox CB_AllHasSkin; // 0x2C8 (8)
	struct UPDKeyButton Btn_GotoBack; // 0x2D0 (8)
	struct UPDButton Btn_LeftTurn; // 0x2D8 (8)
	struct UPDButton Btn_Zoom; // 0x2E0 (8)
	struct UPDButton Btn_RightTurn; // 0x2E8 (8)
	struct UPDTextBlock TB_AllHasSkin; // 0x2F0 (8)

	void OnZoomReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B090>
	void OnZoomPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnZoomPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B050>
	void OnSelectedCustomItem(struct UPDCustomListItemData InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCustomItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181ADF0>
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData InListItemData); // Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCategoryItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181ACF0>
	void OnSaveAndLeave(); // Function ProjectD.PDCustomCharacterDecoUI.OnSaveAndLeave(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AC90>
	void OnRightTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A5B0>
	void OnRightTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AB20>
	void OnRestore(); // Function ProjectD.PDCustomCharacterDecoUI.OnRestore(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AB00>
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDCustomCharacterDecoUI.OnMenuCoverMouseDown(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x181A720>
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A5B0>
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A570>
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnHasSkinCheckBoxChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A3D0>
	void OnBuyItem(); // Function ProjectD.PDCustomCharacterDecoUI.OnBuyItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A150>
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomCharacterDecoUI.OnAllSkinCheckBoxChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A010>
	void GotoBack(); // Function ProjectD.PDCustomCharacterDecoUI.GotoBack(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1819F20>
};

// Class ProjectD.PDCustomCharacterPerkUI
class UPDCustomCharacterPerkUI : public UPDSceneBaseUI {

public:

	struct UTileView TV_UniqueLeptonList; // 0x298 (8)
	struct UTileView TV_ProgressLeptonList; // 0x2A0 (8)
	struct UTileView TV_OwnLeptonList; // 0x2A8 (8)
	struct UTileView TV_EquipLeptonList; // 0x2B0 (8)
	struct UImage IMG_CostBg1; // 0x2B8 (8)
	struct UImage IMG_Cost1; // 0x2C0 (8)
	struct UImage IMG_CostBg2; // 0x2C8 (8)
	struct UImage IMG_Cost2; // 0x2D0 (8)
	struct UImage IMG_CostBg3; // 0x2D8 (8)
	struct UImage IMG_Cost3; // 0x2E0 (8)
	struct UImage IMG_CostBg4; // 0x2E8 (8)
	struct UImage IMG_Cost4; // 0x2F0 (8)
	struct UImage IMG_CostBg5; // 0x2F8 (8)
	struct UImage IMG_Cost5; // 0x300 (8)
	struct TArray<struct UImage> IMG_CostBgs; // 0x308 (16)
	struct TArray<struct UImage> IMG_Costs; // 0x318 (16)
	struct UPDTextBlock TB_Level; // 0x328 (8)
	struct UPDTextBlock TB_Name; // 0x330 (8)
	struct UCanvasPanel CP_SkillToolTip; // 0x338 (8)
	struct UImage IMG_PerkPreview; // 0x340 (8)
	struct UImage IMG_DescIcon; // 0x348 (8)
	struct UPDTextBlock TB_PerkName; // 0x350 (8)
	struct UPDTextBlock TB_PerkDesc; // 0x358 (8)
	struct UPDTextBlock TB_PerkStory; // 0x360 (8)
	struct UPDKeyButton Btn_GotoBack; // 0x368 (8)
	struct UCanvasPanel CP_Loading; // 0x370 (8)
	struct UPDTabButton TBtn_Preset01; // 0x378 (8)
	struct UPDTabButton TBtn_Preset02; // 0x380 (8)
	struct UPDTabButton TBtn_Preset03; // 0x388 (8)
	struct UPDButton Btn_List01; // 0x390 (8)
	struct UPDButton Btn_List02; // 0x398 (8)
	struct UPDButton Btn_List03; // 0x3A0 (8)
	struct UImage IMG_List01; // 0x3A8 (8)
	struct UImage IMG_List02; // 0x3B0 (8)
	struct UImage IMG_List03; // 0x3B8 (8)
	struct UCanvasPanel CP_PresetList; // 0x3C0 (8)
	struct UListView LV_PresetList; // 0x3C8 (8)
	struct UPDButton Btn_ResetPreset; // 0x3D0 (8)
	struct UPDTabButtonGroup PresetCategoryGroup; // 0x3D8 (8)

	void SeLeptonInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDCustomCharacterPerkUI.SeLeptonInfo(Final|Native|Protected|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x181B0D0>
	void OnSelectedPresetNameList(struct UPDAgentPresetListItemData InListItemData); // Function ProjectD.PDCustomCharacterPerkUI.OnSelectedPresetNameList(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181AEF0>
	void OnSaveAndLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnSaveAndLeaveCustomCharacterLepton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181ACD0>
	void OnLeaveCustomCharacterLepton(); // Function ProjectD.PDCustomCharacterPerkUI.OnLeaveCustomCharacterLepton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A550>
	void OnClickResetPreset(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickResetPreset(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A350>
	void OnClickPresetThird(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetThird(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A330>
	void OnClickPresetSecond(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetSecond(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A310>
	void OnClickPresetFirst(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetFirst(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A2F0>
	void OnClickNameList(); // Function ProjectD.PDCustomCharacterPerkUI.OnClickNameList(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A2D0>
	void LeptonTooltipVisible(bool bShow); // Function ProjectD.PDCustomCharacterPerkUI.LeptonTooltipVisible(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1819F60>
	void GotoBack(); // Function ProjectD.PDCustomCharacterPerkUI.GotoBack(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1819F40>
};

// Class ProjectD.PDCustomJoinPopupUI
class UPDCustomJoinPopupUI : public UPDPopupBaseUI {

public:

	struct UPDButton Btn_Show; // 0x2B8 (8)
	struct UPDButton Btn_Hide; // 0x2C0 (8)
	struct UPDButton Btn_Ok; // 0x2C8 (8)
	struct UEditableTextBox ET_Code; // 0x2D0 (8)

	void OnClickShowBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickShowBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A370>
	void OnClickHideBtn(); // Function ProjectD.PDCustomJoinPopupUI.OnClickHideBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181A2B0>
	void OnChangeText(struct FText& InText); // Function ProjectD.PDCustomJoinPopupUI.OnChangeText(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x181A190>
};

// Class ProjectD.PDCustomListItem
class UPDCustomListItem : public UPDUserWidget {

public:

	struct UAkAudioEvent HoverSound; // 0x290 (8)
	struct UAkAudioEvent ClickSound; // 0x298 (8)
	struct UImage Img_Bg; // 0x2A0 (8)
	struct UImage IMG_Item; // 0x2A8 (8)
	struct UImage IMG_Lock; // 0x2B0 (8)
	struct UImage IMG_New; // 0x2B8 (8)
	struct UImage IMG_Equip; // 0x2C0 (8)
	struct UPDTextBlock TB_Name; // 0x2C8 (8)
	struct UPDTextBlock TB_Count; // 0x2D0 (8)
	struct UBorder BD_ItemOutline; // 0x2D8 (8)
	struct UBorder BD_ItemSelOutline; // 0x2E0 (8)
};

// Class ProjectD.PDCustomMatchCharItem
class UPDCustomMatchCharItem : public UPDUserWidget {

public:

	struct UImage Img_Bg; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UBorder BD_ItemOutline; // 0x2A0 (8)
};

// Class ProjectD.PDCustomMatchListItem
class UPDCustomMatchListItem : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Normal; // 0x290 (8)
	struct UCanvasPanel CP_Add; // 0x298 (8)
	struct UCanvasPanel CP_Join; // 0x2A0 (8)
	struct UCanvasPanel CP_Empty; // 0x2A8 (8)
	struct UBorder Background; // 0x2B0 (8)
	struct UImage IMG_Face; // 0x2B8 (8)
	struct UImage IMG_ClanMarkBG; // 0x2C0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2C8 (8)
	struct UPDTextBlock TB_ClanName; // 0x2D0 (8)
	struct UCanvasPanel CP_ClanMark; // 0x2D8 (8)
	struct UPDButton Btn_Perk; // 0x2E0 (8)
	struct UImage IMG_Leader; // 0x2E8 (8)
	struct UPDTextBlock TB_NickName3; // 0x2F0 (8)
	struct UPDButton Btn_CharChange; // 0x2F8 (8)
	struct UPDButton BTN_Join; // 0x300 (8)

	void OnPerkUnHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkUnHovered(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AAE0>
	void OnPerkHovered(); // Function ProjectD.PDCustomMatchListItem.OnPerkHovered(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AAC0>
	void OnJoinClicked(); // Function ProjectD.PDCustomMatchListItem.OnJoinClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A510>
	void OnCharChangeClicked(); // Function ProjectD.PDCustomMatchListItem.OnCharChangeClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A290>
};

// Class ProjectD.PDCustomMatchTooltip
class UPDCustomMatchTooltip : public UPDUserWidget {

public:

	struct UListView LV_Perks; // 0x288 (8)
	struct UImage Img_Bg; // 0x290 (8)
};

// Class ProjectD.PDCustomPerkListItem
class UPDCustomPerkListItem : public UPDUserWidget {

public:

	struct UImage Img_SignatureBg; // 0x290 (8)
	struct UImage Img_Bg; // 0x298 (8)
	struct UImage IMG_Item; // 0x2A0 (8)
	struct UImage IMG_Lock; // 0x2A8 (8)
	struct UPDTextBlock TB_Name; // 0x2B0 (8)
	struct UPDTextBlock TB_Activate; // 0x2B8 (8)
	struct UBorder BD_ItemOutline; // 0x2C0 (8)
	struct UBorder BD_SignatureItemOutline; // 0x2C8 (8)
	struct UDragDropOperation DragDropOperation; // 0x2D0 (8)
};

// Class ProjectD.PDCustomRoomUI
class UPDCustomRoomUI : public UPDUserWidget {

public:

	struct UPDTextBlock T_Code; // 0x288 (8)
	struct UPDButton Btn_Hide; // 0x290 (8)
	struct UPDButton Btn_Copy; // 0x298 (8)
	struct UCanvasPanel CP_CharChange; // 0x2A0 (8)
	struct UPDCustomMatchTooltip CustomMatchTooltip; // 0x2A8 (8)
	struct UListView LV_Characters; // 0x2B0 (8)
	struct UCanvasPanel CP_ContextMenu; // 0x2B8 (8)
	struct UPDButton Btn_FriendAdd; // 0x2C0 (8)
	struct UPDButton Btn_Whisper; // 0x2C8 (8)
	struct UPDButton Btn_KickUser; // 0x2D0 (8)
	struct UPDButton Btn_TransferMaster; // 0x2D8 (8)
	struct UListView LV_ATeam; // 0x2E0 (8)
	struct UListView LV_BTeam; // 0x2E8 (8)
	struct UListView LV_NTeam; // 0x2F0 (8)
	struct UPDButton Btn_Back; // 0x2F8 (8)
	struct UPDButton Btn_Option; // 0x300 (8)
	struct UPDButton Btn_Comm; // 0x308 (8)
	struct UPDButton Btn_Start; // 0x310 (8)
	struct UPDComboBox CB_Mode; // 0x318 (8)
	struct UPDComboBox CB_Round; // 0x320 (8)
	struct UImage IMG_Disabled; // 0x328 (8)
	struct URichTextBlock RT_StartDesc; // 0x330 (8)

	void OnWhisperUserClicked(); // Function ProjectD.PDCustomRoomUI.OnWhisperUserClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B030>
	void OnTransferMasterClicked(); // Function ProjectD.PDCustomRoomUI.OnTransferMasterClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B010>
	void OnStartClicked(); // Function ProjectD.PDCustomRoomUI.OnStartClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AFF0>
	void OnRoundSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnRoundSelectedChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AB60>
	void OnOptionClicked(); // Function ProjectD.PDCustomRoomUI.OnOptionClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AAA0>
	void OnMapSelectedChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDCustomRoomUI.OnMapSelectedChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A5F0>
	void OnKickUserClicked(); // Function ProjectD.PDCustomRoomUI.OnKickUserClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A530>
	void OnHideClicked(); // Function ProjectD.PDCustomRoomUI.OnHideClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A4F0>
	void OnCopyClicked(); // Function ProjectD.PDCustomRoomUI.OnCopyClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A3B0>
	void OnCommClicked(); // Function ProjectD.PDCustomRoomUI.OnCommClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A390>
	void OnBackClicked(); // Function ProjectD.PDCustomRoomUI.OnBackClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A130>
	void OnAddFriendClicked(); // Function ProjectD.PDCustomRoomUI.OnAddFriendClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1819FF0>
};

// Class ProjectD.PDCustomWeaponAttribute
class UPDCustomWeaponAttribute : public UPDUserWidget {

public:

	struct UPDTextBlock T_StatName; // 0x288 (8)
	struct UPDTextBlock T_Stat_Value; // 0x290 (8)
	struct UProgressBar PB_Stat_Src; // 0x298 (8)
	struct FText InStatName; // 0x2A0 (24)
};

// Class ProjectD.PDCustomWeaponListItem
class UPDCustomWeaponListItem : public UPDUserWidget {

public:

	struct UImage Img_Bg; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UImage IMG_Lock; // 0x2A0 (8)
	struct UImage IMG_Equip; // 0x2A8 (8)
	struct UPDTextBlock TB_Name; // 0x2B0 (8)
	struct UPDTextBlock TB_Count; // 0x2B8 (8)
	struct UBorder BD_ItemOutline; // 0x2C0 (8)
};

// Class ProjectD.PDCustomWeaponUI
class UPDCustomWeaponUI : public UPDSceneBaseUI {

public:

	struct UTileView TV_WeaponCategory; // 0x288 (8)
	struct UTileView TV_WeaponItemList; // 0x290 (8)
	struct UTileView TV_ItemSkinList; // 0x298 (8)
	struct UCanvasPanel CP_Inventory; // 0x2A0 (8)
	struct UPDButton Btn_Restore; // 0x2A8 (8)
	struct UPDButton Btn_Buy; // 0x2B0 (8)
	struct UPDButton Btn_LoadOut; // 0x2B8 (8)
	struct UPDButton Btn_SaveAndOut; // 0x2C0 (8)
	struct UPDButton Btn_ChangeView; // 0x2C8 (8)
	struct UBorder BD_Cover; // 0x2D0 (8)
	struct UPDTextBlock T_FireModeInfo; // 0x2D8 (8)
	struct UPDTextBlock T_BulletInfo; // 0x2E0 (8)
	struct UImage IMG_Info_Bullet; // 0x2E8 (8)
	struct UPDCustomWeaponAttribute WeaponStat1; // 0x2F0 (8)
	struct UPDCustomWeaponAttribute WeaponStat2; // 0x2F8 (8)
	struct UPDCustomWeaponAttribute WeaponStat3; // 0x300 (8)
	struct UPDCustomWeaponAttribute WeaponStat4; // 0x308 (8)
	struct UPDCustomWeaponAttribute WeaponStat5; // 0x310 (8)
	struct UPDCustomWeaponAttribute WeaponStat6; // 0x318 (8)
	struct UPDCheckBox CB_AllSkin; // 0x320 (8)
	struct UPDCheckBox CB_HasSkin; // 0x328 (8)
	struct UPDButton Btn_LeftTurn; // 0x330 (8)
	struct UPDButton Btn_Zoom; // 0x338 (8)
	struct UPDButton Btn_RightTurn; // 0x340 (8)
	struct UPDKeyButton Btn_GotoBack; // 0x348 (8)
	struct UImage IMG_Zoom; // 0x350 (8)
	struct TArray<struct UPDCustomWeaponListItemData> WeaponSkinListItems; // 0x358 (16)
	struct FVector WeaponPivot; // 0x368 (12)

	void OnZoomReleased(); // Function ProjectD.PDCustomWeaponUI.OnZoomReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B0B0>
	void OnZoomPressed(); // Function ProjectD.PDCustomWeaponUI.OnZoomPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181B070>
	void OnSelectedSkinListItem(struct UPDCustomWeaponListItemData InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedSkinListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AF70>
	void OnSelectedItemListItem(struct UPDCustomWeaponListItemData InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedItemListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AE70>
	void OnSelectedCategoryItem(struct UPDCustomCategoryListItemData InListItemData); // Function ProjectD.PDCustomWeaponUI.OnSelectedCategoryItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AD70>
	void OnSaveAndLeave(); // Function ProjectD.PDCustomWeaponUI.OnSaveAndLeave(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181ACB0>
	void OnRightTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A5D0>
	void OnRightTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnRightTurnPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181AB40>
	void OnRestore(); // Function ProjectD.PDCustomWeaponUI.OnRestore(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDCustomWeaponUI.OnMenuCoverMouseDown(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x181A8E0>
	void OnLoadOut(); // Function ProjectD.PDCustomWeaponUI.OnLoadOut(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnLeftTurnReleased(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnReleased(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A5D0>
	void OnLeftTurnPressed(); // Function ProjectD.PDCustomWeaponUI.OnLeftTurnPressed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A590>
	void OnHasSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnHasSkinCheckBoxChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A460>
	void OnChangeView(); // Function ProjectD.PDCustomWeaponUI.OnChangeView(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A270>
	void OnBuyItem(); // Function ProjectD.PDCustomWeaponUI.OnBuyItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A170>
	void OnAllSkinCheckBoxChanged(bool InIsChecked); // Function ProjectD.PDCustomWeaponUI.OnAllSkinCheckBoxChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181A0A0>
	void GotoBack(); // Function ProjectD.PDCustomWeaponUI.GotoBack(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1819F20>
};

// Class ProjectD.PDDamageIndicatorUI
class UPDDamageIndicatorUI : public UPDUserWidget {

public:

	struct UBorder BD_Rotator; // 0x288 (8)
	struct UImage IMG_DamageIndicator; // 0x290 (8)
};

// Class ProjectD.PDDamageScreenIndicatorUI
class UPDDamageScreenIndicatorUI : public UPDIngameModeWidget {

public:

	struct UImage IMG_LeftUp; // 0x290 (8)
	struct UImage IMG_Up; // 0x298 (8)
	struct UImage IMG_RightUp; // 0x2A0 (8)
	struct UImage IMG_Right; // 0x2A8 (8)
	struct UImage IMG_RightDown; // 0x2B0 (8)
	struct UImage IMG_Down; // 0x2B8 (8)
	struct UImage IMG_LeftDown; // 0x2C0 (8)
	struct UImage IMG_Left; // 0x2C8 (8)
	struct UCanvasPanel CP_Impact; // 0x2D0 (8)
};

// Class ProjectD.PDDebugLogUI
class UPDDebugLogUI : public UPDSceneBaseUI {

public:

	struct UPDButton Btn_GotoLobby; // 0x2B8 (8)
	struct UButton BTN_FP_Left; // 0x2C0 (8)
	struct UButton BTN_FP_Right; // 0x2C8 (8)
	struct UMultiLineEditableTextBox MTXT_Content; // 0x2D0 (8)
	struct UTextBlock TXT_FP_Page; // 0x2D8 (8)
	struct TArray<struct UPDButton> FileNameButtonList; // 0x2E0 (16)
	struct UPDButton Filename_1; // 0x2F0 (8)
	struct UPDButton Filename_2; // 0x2F8 (8)
	struct UPDButton Filename_3; // 0x300 (8)
	struct UPDButton Filename_4; // 0x308 (8)
	struct UPDButton Filename_5; // 0x310 (8)
	struct UPDButton Filename_6; // 0x318 (8)
	struct UPDButton Filename_7; // 0x320 (8)
	struct UPDButton Filename_8; // 0x328 (8)
	struct UPDButton Filename_9; // 0x330 (8)
	struct UPDButton Filename_10; // 0x338 (8)
	struct UPDButton Filename_11; // 0x340 (8)
	struct UPDButton Filename_12; // 0x348 (8)
	struct UPDButton Filename_13; // 0x350 (8)
	struct UPDButton Filename_14; // 0x358 (8)
	struct UPDButton Filename_15; // 0x360 (8)
	struct UPDButton Filename_16; // 0x368 (8)
	struct UPDButton Filename_17; // 0x370 (8)
	struct UPDButton Filename_18; // 0x378 (8)
	struct UPDButton Filename_19; // 0x380 (8)

	void OnClickBtnGotoLobby(); // Function ProjectD.PDDebugLogUI.OnClickBtnGotoLobby(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1816850>
	void OnClickBtnFPRight(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPRight(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DDD0>
	void OnClickBtnFPLeft(); // Function ProjectD.PDDebugLogUI.OnClickBtnFPLeft(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DDB0>
	void OnClickBtnFileName_10(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_10(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181E030>
	void OnClickBtnFileName_9(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_9(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181E010>
	void OnClickBtnFileName_8(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_8(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DFF0>
	void OnClickBtnFileName_7(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_7(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DFD0>
	void OnClickBtnFileName_6(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_6(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DFB0>
	void OnClickBtnFileName_5(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_5(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DF90>
	void OnClickBtnFileName_4(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_4(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DF70>
	void OnClickBtnFileName_3(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_3(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DF50>
	void OnClickBtnFileName_19(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_19(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DF10>
	void OnClickBtnFileName_18(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_18(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DEF0>
	void OnClickBtnFileName_17(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_17(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DED0>
	void OnClickBtnFileName_16(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_16(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DEB0>
	void OnClickBtnFileName_15(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_15(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DE90>
	void OnClickBtnFileName_14(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_14(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DE70>
	void OnClickBtnFileName_13(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_13(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DE50>
	void OnClickBtnFileName_12(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_12(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DE30>
	void OnClickBtnFileName_11(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_11(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DE10>
	void OnClickBtnFileName_2(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_2(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DF30>
	void OnClickBtnFileName_1(); // Function ProjectD.PDDebugLogUI.OnClickBtnFileName_1(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181DDF0>
};

// Class ProjectD.PDDefuseBombModeUI
class UPDDefuseBombModeUI : public UPDBaseModeUI {

public:

	struct UPDCCTVUI CCTV; // 0x4C8 (8)
	struct UPDSkyViewUI SkyView; // 0x4D0 (8)
	struct UPDIngameStatusBoardUI IngameStatusBoard; // 0x4D8 (8)
	struct UPDRoundInfoUI RoundInfo; // 0x4E0 (8)
	struct UPDRoundResult RoundResult; // 0x4E8 (8)
	struct UPDKillMessage KillMessage; // 0x4F0 (8)
	struct UPDRoundReplayer RoundReplayer; // 0x4F8 (8)
	struct UPDReportPopupUI ReportPopup; // 0x500 (8)
};

// Class ProjectD.PDDisplayOptionUI
class UPDDisplayOptionUI : public UPDOptionUIBase {

public:

	struct UPDTabButton VideoSettingBtn; // 0x338 (8)
	struct UPDTabButton SystemSettingBtn; // 0x340 (8)
	struct UScrollBox SB_Display; // 0x348 (8)
	struct UEnum EDisplayModePtr; // 0x3A8 (8)
	struct UEnum EFrameRateModePtr; // 0x3B0 (8)
	struct UEnum EGraphicsQualityPtr; // 0x3B8 (8)
	struct UEnum EBlockTypePtr; // 0x3C0 (8)

	void OnWhisperBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnWhisperBlockChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EFD0>
	void OnViewDistanceQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnViewDistanceQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EF50>
	void OnUseVSyncChanged(bool bIsChecked); // Function ProjectD.PDDisplayOptionUI.OnUseVSyncChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EEC0>
	void OnUseAdditionalPostProcessesChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EE30>
	void OnTextureQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnTextureQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EDB0>
	void OnShadowQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnShadowQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181ED30>
	void OnScreenPercentageChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnScreenPercentageChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181ECB0>
	void OnResolutionChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnResolutionChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EB80>
	void OnPostProcessQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EB00>
	void OnPostProcessAAQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnPostProcessAAQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181EA80>
	void OnPartyInviteBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnPartyInviteBlockChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E950>
	void OnOutGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E8D0>
	void OnMaxAnisotropyChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnMaxAnisotropyChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E850>
	void OnLightShaftChanged(bool Value); // Function ProjectD.PDDisplayOptionUI.OnLightShaftChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E7C0>
	void OnLanguageChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnLanguageChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E690>
	void OnInGameBrightnessVolumeChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E610>
	void OnFullScreenModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFullScreenModeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E4E0>
	void OnFrameRateModeChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnFrameRateModeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E3B0>
	void OnFrameRateLimitChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFrameRateLimitChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E330>
	void OnFoliageQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnFoliageQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E2B0>
	void OnEffectsQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnEffectsQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E0F0>
	void OnClickVideoSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickVideoSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A30>
	void OnClickSystemSettingButton(); // Function ProjectD.PDDisplayOptionUI.OnClickSystemSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816910>
	void OnClickMidiumGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickMidiumGraphicButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E0D0>
	void OnClickLowGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickLowGraphicButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E0B0>
	void OnClickHighGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickHighGraphicButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E090>
	void OnClickEpicGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickEpicGraphicButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E070>
	void OnClickCustomGraphicButton(); // Function ProjectD.PDDisplayOptionUI.OnClickCustomGraphicButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181E050>
	void OnBackGroundQualityChanged(float Value); // Function ProjectD.PDDisplayOptionUI.OnBackGroundQualityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181DB40>
	void OnAddFriendBlockChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDDisplayOptionUI.OnAddFriendBlockChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x181DA10>
};

// Class ProjectD.PDDroneSpringArmComponent
class UPDDroneSpringArmComponent : public USpringArmComponent {

public:

	float CrouchTargetOffsetLagSpeed; // 0x280 (4)
};

// Class ProjectD.PDDynamicObjectEvent
class APDDynamicObjectEvent : public UActor {

public:

	int32_t DBID; // 0x240 (4)
	bool UseCollisionBox; // 0x244 (1)

	void OnActorEndOverlapEvent(struct UActor OverlappedActor, struct UActor OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorEndOverlapEvent(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181D950>
	void OnActorBeginOverlapEvent(struct UActor OverlappedActor, struct UActor OtherActor); // Function ProjectD.PDDynamicObjectEvent.OnActorBeginOverlapEvent(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x181D890>
};

// Class ProjectD.PDDynamicObject
class APDDynamicObject : public APDDynamicObjectEvent {

public:

	enum class EDYNAMICOBJECTSTATE DefaultState; // 0x420 (1)
	bool ReverseDirection; // 0x421 (1)
};

// Class ProjectD.PDDynamicObjectSwitchComponent
class UPDDynamicObjectSwitchComponent : public UStaticMeshComponent {

public:

	struct UArrowComponent InteractionArrow; // 0x498 (8)
	struct UBoxComponent SwitchExtentBox; // 0x4A0 (8)
	struct TSet<struct FString> ReactNames; // 0x4A8 (80)
	struct TMap<int32_t, struct UMaterialInstance> ActiveMaterial; // 0x4F8 (80)

	void OnEndTriggerOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x181E170>
	void OnBeginTriggerOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x181DBC0>
};

// Class ProjectD.PDEndAnimNotifyState
class UPDEndAnimNotifyState : public UAnimNotifyState {

public:

	enum class EPDEndAnimationType EndAnimationType; // 0x30 (1)
};

// Class ProjectD.PDEnvEffect
class APDEnvEffect : public UActor {

public:

	enum class EPDEnvEffectClientType EffectType; // 0x220 (1)
	struct UArrowComponent MovingObjectSoundHelper; // 0x228 (8)
	struct UArrowComponent CameraMountedHelper; // 0x230 (8)
	struct UArrowComponent FrontOutdoor; // 0x238 (8)
	struct UMaterialParameterCollection MPC; // 0x240 (8)
	struct UCurveLinearColor SandStormCurve; // 0x248 (8)
	struct UCurveLinearColor SandStormCurve2; // 0x250 (8)
	struct FEnvSetting OrgSetting; // 0x258 (100)
	struct FEnvSetting TargetSetting; // 0x2BC (100)
	float TransitionDistance; // 0x320 (4)
	float EnteringDistance; // 0x324 (4)
	float CameraImpactDistance; // 0x328 (4)
	float IntensityFactor; // 0x32C (4)
	float OutdoornessTransitionTime; // 0x330 (4)
	float VisibilityToggleDistance; // 0x334 (4)
	struct TWeakObjectPtr<struct UExponentialHeightFogComponent> GlobalFog; // 0x33C (8)
	struct TWeakObjectPtr<struct UDirectionalLightComponent> GlobalDirectionalLightComponent; // 0x344 (8)
	struct TWeakObjectPtr<struct USkyLightComponent> GlobalSkyLightComponent; // 0x34C (8)
	struct FVector MovingObjectInitPosition; // 0x4A0 (12)
	struct FVector MovingObjectTargetPosition; // 0x4AC (12)
	struct TWeakObjectPtr<struct UMaterialParameterCollectionInstance> MPCI; // 0x4B8 (8)
	struct TWeakObjectPtr<struct UParticleSystemComponent> MovingEffect; // 0x4C0 (8)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> Particles; // 0x4C8 (16)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> SolidParticles; // 0x4D8 (16)
	struct TArray<struct TWeakObjectPtr<struct UParticleSystemComponent>> SwitchableParticles; // 0x4E8 (16)
	struct TWeakObjectPtr<struct UPostProcessComponent> PostProcessRef; // 0x4F8 (8)
	struct TWeakObjectPtr<struct APDIndoorVolume> IndoorVolume; // 0x500 (8)
	struct TArray<struct TWeakObjectPtr<struct UActor>> ActorsForVisibilityToggleByDistance; // 0x508 (16)
};

// Class ProjectD.PDEquipLeptonListItem
class UPDEquipLeptonListItem : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_EquipLepton; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UPDTextBlock TB_Name; // 0x2A0 (8)
	struct UImage IMG_Cost1; // 0x2A8 (8)
	struct UImage IMG_Cost2; // 0x2B0 (8)
	struct UImage IMG_Cost3; // 0x2B8 (8)
	struct UImage IMG_Cost4; // 0x2C0 (8)
	struct UImage IMG_Cost5; // 0x2C8 (8)
	struct UBorder BD_Outline; // 0x2D0 (8)
	struct UDragDropOperation DragDropOperation; // 0x2D8 (8)
	struct TArray<struct UImage> CostImgArr; // 0x308 (16)
};

// Class ProjectD.PDEquipPerkList
class UPDEquipPerkList : public UPDUserWidget {

public:

	struct UTileView TV_PerkSignatureList; // 0x2A0 (8)
	struct UTileView TV_PerkSocketList; // 0x2A8 (8)
	struct UTileView TV_PerkPassiveList; // 0x2B0 (8)
	struct UCanvasPanel CP_SkillToolTip; // 0x2B8 (8)
	struct UBorder B_SkillToolTip; // 0x2C0 (8)
	struct UImage IMG_DescIcon; // 0x2C8 (8)
	struct UPDTextBlock TB_PerkName; // 0x2D0 (8)
	struct UPDTextBlock TB_PerkDesc; // 0x2D8 (8)
	struct UPDTextBlock TB_PerkStory; // 0x2E0 (8)
	struct UCanvasPanel CP_AlertEquipPerk; // 0x2E8 (8)
	struct UPDButton Btn_GoEquipPerk; // 0x2F0 (8)
	struct UCanvasPanel CP_Perk_Alert; // 0x2F8 (8)
	struct UHorizontalBox HP_PerkList; // 0x300 (8)

	void SetSkillToolTipVisible(bool bShow); // Function ProjectD.PDEquipPerkList.SetSkillToolTipVisible(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1823280>
	void SetSkillInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSkillInfo(Final|Native|Private|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1823180>
	void SetSignatureInfo(int32_t SignatureIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth); // Function ProjectD.PDEquipPerkList.SetSignatureInfo(Final|Native|Private|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1823080>
	void OnListClickItem(struct UPDCustomPerkListItemData InListItemData); // Function ProjectD.PDEquipPerkList.OnListClickItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822EA0>
};

// Class ProjectD.PDEscMenuUI
class UPDEscMenuUI : public UPDUserWidget {

public:

	struct UPDButton ResumeBtn; // 0x288 (8)
	struct UPDButton LeaveGameBtn; // 0x290 (8)
	struct UPDButton QuitBtn; // 0x298 (8)
	struct UPDButton OptionBtn; // 0x2A0 (8)

	void OnClickResumeBtn(); // Function ProjectD.PDEscMenuUI.OnClickResumeBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18228B0>
	void OnClickQuitBtn(); // Function ProjectD.PDEscMenuUI.OnClickQuitBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822850>
	void OnClickOptionBtn(); // Function ProjectD.PDEscMenuUI.OnClickOptionBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822830>
	void OnClickLeaveGameBtn(); // Function ProjectD.PDEscMenuUI.OnClickLeaveGameBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822810>
};

// Class ProjectD.PDExportSafeZoneInitialVertices
class APDExportSafeZoneInitialVertices : public UActor {

public:

	char GroupID; // 0x220 (1)
	char UsageVertexNum; // 0x221 (1)
	struct UStaticMeshComponent Origin; // 0x228 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_00; // 0x230 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_01; // 0x238 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_02; // 0x240 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_03; // 0x248 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_04; // 0x250 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_05; // 0x258 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_06; // 0x260 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_07; // 0x268 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_08; // 0x270 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_09; // 0x278 (8)
	struct UPDExportSafeZoneVertexComponent Vertex_11; // 0x280 (8)
};

// Class ProjectD.PDExportSafeZoneSelectPoint
class APDExportSafeZoneSelectPoint : public UActor {

public:

	struct UStaticMeshComponent Mesh; // 0x220 (8)
	struct TSet<char> UsagePhaseGroupIDs; // 0x228 (80)
};

// Class ProjectD.PDExportSafeZoneVertexComponent
class UPDExportSafeZoneVertexComponent : public UStaticMeshComponent {

public:

	char Index; // 0x498 (1)
};

// Class ProjectD.PDExportSeedArea
class APDExportSeedArea : public UActor {

public:

	int32_t SeedAreaID; // 0x220 (4)
	struct UStaticMeshComponent SeedAComp; // 0x228 (8)
	struct UStaticMeshComponent SeedBComp; // 0x230 (8)

	void OnEndSeedBBoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedBBoxOverlap(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822D40>
	void OnEndSeedABoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDExportSeedArea.OnEndSeedABoxOverlap(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822C00>
	void OnBeginSeedBBoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedBBoxOverlap(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1822500>
	void OnBeginSeedABoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDExportSeedArea.OnBeginSeedABoxOverlap(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1822310>
};

// Class ProjectD.PDFindPartyListItem
class UPDFindPartyListItem : public UPDUserWidget {

public:

	struct UBorder BD_Background; // 0x290 (8)
	struct UWidgetSwitcher WS_State; // 0x298 (8)
	struct UImage IMG_Face; // 0x2A0 (8)
	struct UCanvasPanel CP_ClanMarkInfo; // 0x2A8 (8)
	struct UImage IMG_ClanMarkBG; // 0x2B0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2B8 (8)
	struct UPDTextBlock TB_ClanName; // 0x2C0 (8)
	struct UPDTextBlock TB_Nickname; // 0x2C8 (8)
	struct UWidgetSwitcher WS_UserInfo; // 0x2D0 (8)
	struct UPDTextBlock TB_KD; // 0x2D8 (8)
	struct UPDTextBlock TB_ADR; // 0x2E0 (8)
	struct UWidgetSwitcher WS_BtnState; // 0x2E8 (8)
	struct UPDButton Btn_Recruit; // 0x2F0 (8)
	struct UHorizontalBox HB_UserData; // 0x2F8 (8)
	struct UImage IMG_Manner; // 0x300 (8)
	struct UImage IMG_Medal1; // 0x308 (8)
	struct UImage IMG_Medal2; // 0x310 (8)
	struct UImage IMG_Medal3; // 0x318 (8)
	struct UPDTextBlock TB_Medal1; // 0x320 (8)
	struct UPDTextBlock TB_Medal2; // 0x328 (8)
	struct UPDTextBlock TB_Medal3; // 0x330 (8)
	struct UImage IMG_Ping_01; // 0x338 (8)
	struct UImage IMG_Ping_02; // 0x340 (8)
	struct UImage IMG_Ping_03; // 0x348 (8)
	struct UImage IMG_Ping_04; // 0x350 (8)
	struct UImage IMG_Ping_05; // 0x358 (8)
	struct TArray<struct UImage> PingImgList; // 0x360 (16)

	struct FEventReply OnDoubleClickItem(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDFindPartyListItem.OnDoubleClickItem(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1822A20>
	void OnClickRecruitButton(); // Function ProjectD.PDFindPartyListItem.OnClickRecruitButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822870>
};

// Class ProjectD.PDFindPartyPageUI
class UPDFindPartyPageUI : public UPDUserWidget {

public:

	struct UPDButton Btn_FindParty; // 0x288 (8)
	struct UPDButton BTN_RegisterMercenary; // 0x290 (8)
	struct UPDButton Btn_ResetBrick; // 0x298 (8)
	struct UWidgetSwitcher WS_FindParty; // 0x2A0 (8)
	struct UWidgetSwitcher WS_RegisterMercenary; // 0x2A8 (8)
	struct UWidgetSwitcher WS_Content; // 0x2B0 (8)
	struct UPDTextBlock TB_Title; // 0x2B8 (8)
	struct UTileView TV_Team; // 0x2C0 (8)
	struct UTileView TV_Person; // 0x2C8 (8)
	struct UHorizontalBox HB_Alert; // 0x2D0 (8)
	struct UPDButton BTN_FindPartyHome; // 0x2D8 (8)
	struct UCanvasPanel CP_BackFindParty; // 0x2E0 (8)
	struct UListView LV_PartyList; // 0x2E8 (8)
	struct UListView LV_RecruitList; // 0x2F0 (8)

	void OnSelectedTeamBrick(struct UPDBrickListItemData InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedTeamBrick(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822FE0>
	void OnSelectedPersonBrick(struct UPDBrickListItemData InListItemData); // Function ProjectD.PDFindPartyPageUI.OnSelectedPersonBrick(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822F60>
	void OnResetBrickClicked(); // Function ProjectD.PDFindPartyPageUI.OnResetBrickClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822F20>
	void OnClickRegisterMercenaryButton(); // Function ProjectD.PDFindPartyPageUI.OnClickRegisterMercenaryButton(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x1822890>
	void OnClickFindPartyHomeButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyHomeButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18227F0>
	void OnClickFindPartyButton(); // Function ProjectD.PDFindPartyPageUI.OnClickFindPartyButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18227D0>
};

// Class ProjectD.PDFireRecoilAnimInstance
class UPDFireRecoilAnimInstance : public UPDPlayerAnimInstance {

public:

	struct UBlendSpace CurrentAnim; // 0x5E8 (8)
	struct UPDFireRecoilLevel FireRecoilLevel; // 0x5F0 (8)
};

// Class ProjectD.PDFireRecoilLevelData
class UPDFireRecoilLevelData : public UDataAsset {

public:

	struct UCurveFloat RecoilCurve; // 0x30 (8)
	struct UCurveFloat FractalCurve; // 0x38 (8)
	float PushingForce; // 0x40 (4)
	float PushingTime; // 0x44 (4)
	float RecoveryForce; // 0x48 (4)
	float RecoveryDelay; // 0x4C (4)
	float ZoomRateOnFire; // 0x50 (4)
	float ZoomDelayOnFire; // 0x54 (4)
	float ZoomDelayOnReleaseFire; // 0x58 (4)
	float ZoomInterpTimeOnFire; // 0x5C (4)
	float ZoomInterpTimeOnReleaseFire; // 0x60 (4)
	float MinX; // 0x64 (4)
	float MaxX; // 0x68 (4)
};

// Class ProjectD.PDFireRecoilLevel
class UPDFireRecoilLevel : public Object {

public:

	struct UPDFireRecoilLevelData RecoilData; // 0x28 (8)
	struct UPDFireRecoilLevelData OldRecoilData; // 0x30 (8)
	struct FVector2D Level; // 0x38 (8)
};

// Class ProjectD.PDFPPCamera
class APDFPPCamera : public UActor {

public:

	struct UCameraComponent Cam; // 0x220 (8)
	struct USkeletalMeshComponent CameraMesh; // 0x228 (8)
};

// Class ProjectD.PDFPWeapon
class APDFPWeapon : public UActor {

public:

	struct USceneComponent MoveControlComp; // 0x220 (8)
};

// Class ProjectD.PDFriendAddItemData
class UPDFriendAddItemData : public Object {

public:

	struct TArray<struct UPDFriendAddItemData> TreeChildren; // 0x78 (16)
};

// Class ProjectD.PDFriendAddItem
class UPDFriendAddItem : public UPDUserWidget {

public:

	struct UCanvasPanel CP_User; // 0x290 (8)
	struct UCanvasPanel CP_Category; // 0x298 (8)
	struct UBorder Background; // 0x2A0 (8)
	struct UImage IMG_Face; // 0x2A8 (8)
	struct UPDTextBlock TB_Nickname; // 0x2B0 (8)
	struct UImage IMG_ClanMarkBG; // 0x2B8 (8)
	struct UImage IMG_ClanMarkFG; // 0x2C0 (8)
	struct UPDTextBlock TB_ClanName; // 0x2C8 (8)
	struct UCanvasPanel CP_ClanMark; // 0x2D0 (8)
	struct UPDTextBlock TB_Category; // 0x2D8 (8)
	struct UPDButton BTN_Accept; // 0x2E0 (8)
	struct UPDButton BTN_Decline; // 0x2E8 (8)

	void OnDeclineClicked(); // Function ProjectD.PDFriendAddItem.OnDeclineClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822A00>
	void OnAcceptClicked(); // Function ProjectD.PDFriendAddItem.OnAcceptClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18222F0>
};

// Class ProjectD.PDFriendAddPage
class UPDFriendAddPage : public UPDCommPage {

public:

	struct UEditableTextBox ET_NickName; // 0x290 (8)
	struct UPDButton BTN_Search; // 0x298 (8)

	void OnSearchNickClicked(); // Function ProjectD.PDFriendAddPage.OnSearchNickClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1822F40>
	void OnCommitSearchNick(struct FText& Text, enum class ETextCommit CommitMethod); // Function ProjectD.PDFriendAddPage.OnCommitSearchNick(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x18228D0>
	void OnChangeText(struct FText& InText); // Function ProjectD.PDFriendAddPage.OnChangeText(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x18226F0>
};

// Class ProjectD.PDFriendClanItemData
class UPDFriendClanItemData : public Object {

public:

	struct TArray<struct UPDFriendClanItemData> TreeChildren; // 0x68 (16)
};

// Class ProjectD.PDFriendClanItem
class UPDFriendClanItem : public UPDUserWidget {

public:

	struct UCanvasPanel CP_User; // 0x290 (8)
	struct UCanvasPanel CP_Category; // 0x298 (8)
	struct UBorder Background; // 0x2A0 (8)
	struct UImage IMG_Face; // 0x2A8 (8)
	struct UImage IMG_ClanMarkBG; // 0x2B0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2B8 (8)
	struct UPDTextBlock TB_ClanName; // 0x2C0 (8)
	struct UPDTextBlock TB_Nickname; // 0x2C8 (8)
	struct UPDTextBlock TB_State; // 0x2D0 (8)
	struct UPDTextBlock TB_Category; // 0x2D8 (8)
	struct UHorizontalBox HB_UserData; // 0x2E0 (8)
	struct UImage IMG_Manner; // 0x2E8 (8)
	struct UImage IMG_Medal1; // 0x2F0 (8)
	struct UImage IMG_Medal2; // 0x2F8 (8)
	struct UImage IMG_Medal3; // 0x300 (8)
	struct UCanvasPanel CP_GradeNone; // 0x308 (8)
	struct UPDButton BTN_GradeNone; // 0x310 (8)
	struct UImage IMG_GradeNone; // 0x318 (8)
	struct UCanvasPanel CP_ToolTip; // 0x320 (8)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnUnHoveredGradeNoneBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1823060>
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendClanItem.OnHoveredGradeNoneBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822E80>
};

// Class ProjectD.PDFriendListItemData
class UPDFriendListItemData : public Object {

public:

	struct TArray<struct UPDFriendListItemData> TreeChildren; // 0x90 (16)
};

// Class ProjectD.PDFriendListItem
class UPDFriendListItem : public UPDUserWidget {

public:

	struct UCanvasPanel CP_User; // 0x290 (8)
	struct UCanvasPanel CP_Category; // 0x298 (8)
	struct UBorder Background; // 0x2A0 (8)
	struct UImage IMG_Face; // 0x2A8 (8)
	struct UPDTextBlock TB_Nickname; // 0x2B0 (8)
	struct UImage IMG_ClanMarkBG; // 0x2B8 (8)
	struct UImage IMG_ClanMarkFG; // 0x2C0 (8)
	struct UPDTextBlock TB_ClanName; // 0x2C8 (8)
	struct UPDTextBlock TB_State; // 0x2D0 (8)
	struct UPDTextBlock TB_Category; // 0x2D8 (8)
	struct UHorizontalBox HB_UserData; // 0x2E0 (8)
	struct UImage IMG_Manner; // 0x2E8 (8)
	struct UImage IMG_Medal1; // 0x2F0 (8)
	struct UImage IMG_Medal2; // 0x2F8 (8)
	struct UImage IMG_Medal3; // 0x300 (8)
	struct UCanvasPanel CP_GradeNone; // 0x308 (8)
	struct UPDButton BTN_GradeNone; // 0x310 (8)
	struct UImage IMG_GradeNone; // 0x318 (8)
	struct UCanvasPanel CP_ToolTip; // 0x320 (8)

	void OnUnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnUnHoveredGradeNoneBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1823060>
	void OnHoveredGradeNoneBtn(); // Function ProjectD.PDFriendListItem.OnHoveredGradeNoneBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1822E80>
};

// Class ProjectD.PDGameMapIconModule
class UPDGameMapIconModule : public UPDUserWidget {

public:

	struct UImage IMG_Icon; // 0x288 (8)
	struct UPDTextBlock TB_Label; // 0x290 (8)
};

// Class ProjectD.PDGameMapIconCamp
class UPDGameMapIconCamp : public UPDGameMapIconModule {

public:

	struct UImage IMG_Area; // 0x2A0 (8)
	struct UImage IMG_Shop; // 0x2A8 (8)
	struct UCanvasPanel CP_Info; // 0x2B0 (8)
	struct UPDGameMapIconCampDrawer CampDrawer; // 0x2B8 (8)
};

// Class ProjectD.PDGameMapIconCampDrawer
class UPDGameMapIconCampDrawer : public UPDUserWidget {

public:

	struct FSlateBrush AreaBrush; // 0x2B8 (136)
};

// Class ProjectD.PDGameMapIconDemolition
class UPDGameMapIconDemolition : public UPDGameMapIconModule {

public:

	struct UCanvasPanel CP_Reply; // 0x2A0 (8)
	struct UPDPingReplyUI Reply01; // 0x2A8 (8)
	struct UPDPingReplyUI Reply02; // 0x2B0 (8)
	struct UPDPingReplyUI Reply03; // 0x2B8 (8)
	struct UPDPingReplyUI Reply04; // 0x2C0 (8)
	struct UPDPingReplyUI Reply05; // 0x2C8 (8)
	struct TArray<struct UPDPingReplyUI> ReplyList; // 0x2D0 (16)
};

// Class ProjectD.PDGameMapIconFireSoundUI
class UPDGameMapIconFireSoundUI : public UPDGameMapIconModule {

public:

	struct USizeBox SB_Icon; // 0x2A0 (8)
};

// Class ProjectD.PDGameMapIconPing
class UPDGameMapIconPing : public UPDGameMapIconModule {

public:

	struct UCanvasPanel CP_Normal; // 0x2A0 (8)
	struct UImage IMG_IconFx; // 0x2A8 (8)
	struct UCanvasPanel CP_Item; // 0x2B0 (8)
	struct UImage IMG_Item; // 0x2B8 (8)
	struct UScaleBox SB_Weapon; // 0x2C0 (8)
	struct UImage IMG_Weapon; // 0x2C8 (8)
	struct UCanvasPanel CP_Info; // 0x2D0 (8)
	struct UBorder BD_UserColor; // 0x2D8 (8)
	struct UPDTextBlock TB_UserNum; // 0x2E0 (8)
};

// Class ProjectD.PDGameMapIconPlayerUI
class UPDGameMapIconPlayerUI : public UPDGameMapIconModule {

public:

	struct UCanvasPanel CP_Direction; // 0x2A0 (8)
	struct UCanvasPanel CP_Normal; // 0x2A8 (8)
	struct UBorder BD_Arrow; // 0x2B0 (8)
	struct UBorder BD_View; // 0x2B8 (8)
	struct UWidgetSwitcher WS_State; // 0x2C0 (8)
	struct UProgressBar PB_Groggy; // 0x2C8 (8)
	struct UPDTextBlock TB_Name; // 0x2D0 (8)
	struct UBorder BD_Fire; // 0x2D8 (8)
	struct UImage IMG_Speaking_Normal; // 0x2E0 (8)
	struct UImage IMG_Speaking_Groggy; // 0x2E8 (8)
	struct UImage IMG_Item; // 0x2F0 (8)
	struct UImage IMG_HasSeed; // 0x2F8 (8)
	struct UPaperSprite IMG_Rescue; // 0x300 (8)
	struct UPaperSprite IMG_ItemUse_Bandage; // 0x308 (8)
	struct UPaperSprite IMG_ItemUse_Astrapi; // 0x310 (8)
	struct UPaperSprite IMG_ItemUse_ArmorKit; // 0x318 (8)
};

// Class ProjectD.PDGameMapIconSafeZoneDrawer
class UPDGameMapIconSafeZoneDrawer : public UPDUserWidget {

public:

	enum class ESafeZoneDrawType DrawType; // 0x288 (1)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290 (16)
	bool DrawLineAntialias; // 0x2A0 (1)
	float DrawLineTickness; // 0x2A4 (4)
	bool bEdgeRounding; // 0x2A8 (1)
	float EdgeRoundingLen; // 0x2AC (4)
	int32_t EdgeRoundingSegment; // 0x2B0 (4)
};

// Class ProjectD.PDGameMapIconSafeZoneModule
class UPDGameMapIconSafeZoneModule : public UPDGameMapIconModule {

public:

	struct URetainerBox RB_Mask; // 0x2A0 (8)
	struct UCanvasPanel CP_Mask; // 0x2A8 (8)
	struct UImage IMG_Area; // 0x2B0 (8)
	struct UPDGameMapIconSafeZoneDrawer DrawerCurrent; // 0x2B8 (8)
	struct UPDGameMapIconSafeZoneDrawer DrawerNext; // 0x2C0 (8)
};

// Class ProjectD.PDGameMapModule
class UPDGameMapModule : public UPDUserWidget {

public:

	struct UImage IMG_Map; // 0x288 (8)
	struct UCanvasPanel CP_Map; // 0x290 (8)
	struct UCanvasPanel CP_Restriction; // 0x298 (8)
	enum class EMapShape MapShape; // 0x2A0 (1)
	enum class EWidgetClipping AreaClipping; // 0x2A1 (1)
	struct UClass* IconClassDefault; // 0x2A8 (8)
	struct TMap<enum class EMapObjectType, struct UClass*> IconClassMap; // 0x2B0 (80)
};

// Class ProjectD.PDGameModeSelectItemUI
class UPDGameModeSelectItemUI : public UPDUserWidget {

public:

	struct UImage IMG_Mode; // 0x2A0 (8)
	struct UPDButton GameModeButton; // 0x2A8 (8)

	void OnClick(); // Function ProjectD.PDGameModeSelectItemUI.OnClick(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826650>
};

// Class ProjectD.PDGameModeSelectUI
class UPDGameModeSelectUI : public UPDSceneBaseUI {

public:

	struct UTileView TV_GameModeList; // 0x288 (8)
	struct UPDButton Btn_GotoLobby; // 0x290 (8)

	void GotoLobby(); // Function ProjectD.PDGameModeSelectUI.GotoLobby(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816850>
	void GameModeSelect(int32_t SelectModeID); // Function ProjectD.PDGameModeSelectUI.GameModeSelect(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826530>
};

// Class ProjectD.PDGameplayOptionUI
class UPDGameplayOptionUI : public UPDOptionUIBase {

public:

	struct UScrollBox SB_Gameplay; // 0x338 (8)
	struct UPDTabButton MouseSettingBtn; // 0x340 (8)
	struct UPDTabButton UISettingBtn; // 0x348 (8)

	void Onx80ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx80ZoomScopeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18271A0>
	void Onx40ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx40ZoomScopeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1827120>
	void Onx20ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx20ZoomScopeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18270A0>
	void Onx160ZoomScopeChanged(float Value); // Function ProjectD.PDGameplayOptionUI.Onx160ZoomScopeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1827020>
	void OnSubtitleUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleUseChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826F90>
	void OnSubtitlePlayerNumberUseChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitlePlayerNumberUseChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826F00>
	void OnSubtitleBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnSubtitleBGAlphaChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826E80>
	void OnPingAutoHipFire(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoHipFire(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826E60>
	void OnPingAutoEnabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoEnabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826E40>
	void OnPingAutoDisabled(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoDisabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826E20>
	void OnPingAutoAll(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAll(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826E00>
	void OnPingAutoAim(); // Function ProjectD.PDGameplayOptionUI.OnPingAutoAim(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826DE0>
	void OnParkourVisibilityChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnParkourVisibilityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826D50>
	void OnNormalSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnNormalSensitivityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826CD0>
	void OnMouseSmoothingChanged(bool Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSmoothingChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826C40>
	void OnMouseSensitivityYChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityYChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826BC0>
	void OnMouseSensitivityXChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityXChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826B40>
	void OnMinimapRotationEnabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationEnabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826B20>
	void OnMinimapRotationDisabled(); // Function ProjectD.PDGameplayOptionUI.OnMinimapRotationDisabled(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826B00>
	void OnIronsightSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIronsightSensitivityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826A00>
	void OnIngameMapBGAlphaChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnIngameMapBGAlphaChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826980>
	void OnHUDScaleChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnHUDScaleChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18268A0>
	void OnHitIndicatorChangedBoth(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChangedBoth(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826960>
	void OnHitIndicatorChanged3D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged3D(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826940>
	void OnHitIndicatorChanged2D(); // Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged2D(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826920>
	void OnDamageSumView(); // Function ProjectD.PDGameplayOptionUI.OnDamageSumView(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826880>
	void OnDamageIndividualView(); // Function ProjectD.PDGameplayOptionUI.OnDamageIndividualView(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826860>
	void OnCrossHairColorChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDGameplayOptionUI.OnCrossHairColorChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826730>
	void OnClickUISettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickUISettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826710>
	void OnClickMouseSettingButton(); // Function ProjectD.PDGameplayOptionUI.OnClickMouseSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1826690>
	void OnAimingSensitivityChanged(float Value); // Function ProjectD.PDGameplayOptionUI.OnAimingSensitivityChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18265B0>
};

// Class ProjectD.PDGameResultUI
class UPDGameResultUI : public UPDSceneBaseUI {

public:

	struct UPDTabButtonGroup MenuCategoryGroup; // 0x288 (8)
	struct UPDTabButton TBtn_TabMenu_01; // 0x290 (8)
	struct UPDTabButton TBtn_TabMenu_02; // 0x298 (8)
	struct UPDTabButton TBtn_TabMenu_03; // 0x2A0 (8)
	struct UCanvasPanel CP_Match; // 0x2A8 (8)
	struct UPDTextBlock TB_MatchMessage; // 0x2B0 (8)
	struct UPDTextBlock TB_MatchMessage_Fx_01; // 0x2B8 (8)
	struct UPDTextBlock TB_MatchMessage_Team; // 0x2C0 (8)
	struct UPDTextBlock TB_MatchMessage_Result; // 0x2C8 (8)
	struct UHorizontalBox HB_MatchRoundRoot; // 0x2D0 (8)
	struct UCanvasPanel CP_MatchTeam; // 0x2D8 (8)
	struct UCanvasPanel CP_MatchSolo; // 0x2E0 (8)
	struct UPDTextBlock TB_MatchScore_Rank; // 0x2E8 (8)
	float MatchRoundPadding; // 0x2F0 (4)
	float UserExpDetailPadding; // 0x2F4 (4)
	struct UWidgetSwitcher WS_ExpCase; // 0x2F8 (8)
	struct UWidgetSwitcher WS_StepType; // 0x300 (8)
	struct URichTextBlock RTB_GuideMessage; // 0x308 (8)
	struct UPDKeyButton KBtn_Close; // 0x310 (8)
	struct UPDKeyButton KBtn_Next; // 0x318 (8)
	struct UProgressBar PB_PrevExp; // 0x320 (8)
	struct UProgressBar PB_CurrentExp; // 0x328 (8)
	struct UPDTextBlock T_Level; // 0x330 (8)
	struct UPDTextBlock T_LevelUp; // 0x338 (8)
	struct UPDTextBlock T_Personal_CurrentLevel; // 0x340 (8)
	struct UPDTextBlock T_Personal_NextLevel; // 0x348 (8)
	struct UCanvasPanel CP_CurrentExp; // 0x350 (8)
	struct UCanvasPanel CP_PrevExp; // 0x358 (8)
	struct UPDTextBlock T_CurrentExp; // 0x360 (8)
	struct UPDTextBlock T_MaxExp; // 0x368 (8)
	struct UPDTextBlock T_CurrentExp1; // 0x370 (8)
	struct UHorizontalBox HB_Exp; // 0x378 (8)
	struct UPDResultTitleItem TitleItem0; // 0x380 (8)
	struct UPDResultTitleItem TitleItem1; // 0x388 (8)
	struct UPDResultTitleItem TitleItem2; // 0x390 (8)
	struct UPDResultTitleItem TitleItem3; // 0x398 (8)
	struct UPDResultTitleItem TitleItem4; // 0x3A0 (8)
	struct UPDResultRoundMenuItem RMI_MenuAll; // 0x3A8 (8)
	struct UPDResultRoundMenuItem RMI_Menu1; // 0x3B0 (8)
	struct UPDResultRoundMenuItem RMI_Menu2; // 0x3B8 (8)
	struct UPDResultRoundMenuItem RMI_Menu3; // 0x3C0 (8)
	struct UPDResultRoundMenuItem RMI_Menu4; // 0x3C8 (8)
	struct UPDResultRoundMenuItem RMI_Menu5; // 0x3D0 (8)
	struct UPDResultRoundMenuItem RMI_Menu6; // 0x3D8 (8)
	struct UPDResultRoundMenuItem RMI_Menu7; // 0x3E0 (8)
	struct UPDResultRoundMenuItem RMI_Menu8; // 0x3E8 (8)
	struct UPDResultRoundMenuItem RMI_Menu9; // 0x3F0 (8)
	struct UPDResultTeamScore RTS_List1; // 0x3F8 (8)
	struct UPDResultTeamScore RTS_List2; // 0x400 (8)
	struct UPDResultRankScore RankScore; // 0x408 (8)
	struct UPDRoundReplayer RoundReplayer; // 0x410 (8)
	struct UWidgetSwitcher WS_Summary_ResultCase; // 0x418 (8)
	struct UImage IMG_ScoreBoard_MatchResult; // 0x420 (8)
	struct UPDTextBlock T_MatchInfo_Mode; // 0x428 (8)
	struct UPDTextBlock T_MatchInfo_Match; // 0x430 (8)
	struct UPDTextBlock T_MatchInfo_Level; // 0x438 (8)
	struct UPDTextBlock T_MatchInfo_Time; // 0x440 (8)
	struct UCanvasPanel CP_ScoreBoard_MatchTeam; // 0x448 (8)
	struct UPDTextBlock T_ScoreBoard_MatchScore_Ally; // 0x450 (8)
	struct UPDTextBlock T_ScoreBoard_MatchScore_Enemy; // 0x458 (8)
	struct UCanvasPanel CP_ScoreBoard_MatchSolo; // 0x460 (8)
	struct UPDTextBlock T_ScoreBoard_MatchScore_Rank; // 0x468 (8)
	struct UCanvasPanel CP_ScoreList; // 0x470 (8)
	struct UPDResultRoundPlayerList RRP_List1; // 0x478 (8)
	struct UPDResultRoundPlayerList RRP_List2; // 0x480 (8)
	struct UPDResultRewardItem RRI_Lepton1; // 0x488 (8)
	struct UPDResultRewardItem RRI_Lepton2; // 0x490 (8)
	struct TArray<struct UPDResultRoundMenuItem> RoundMenuItems; // 0x498 (16)
	struct TArray<struct UPDResultTitleItem> TitleItems; // 0x4A8 (16)
	struct UImage IMG_FX_TitleBg_Wings; // 0x4B8 (8)
	struct UImage IMG_FX_TitleBg_LWing_01; // 0x4C0 (8)
	struct UImage IMG_FX_TitleBg_LWing_02; // 0x4C8 (8)
	struct UImage IMG_FX_TitleBg_RWing_01; // 0x4D0 (8)
	struct UImage IMG_FX_TitleBg_RWing_02; // 0x4D8 (8)
	struct UPDTextBlock TB_MatchScore_Ally; // 0x4E0 (8)
	struct UPDTextBlock TB_MatchScore_Enemy; // 0x4E8 (8)
	struct UWidgetSwitcher WS_ScoreBoard_MatchResult; // 0x4F0 (8)
	struct UCanvasPanel CP_ToolTip; // 0x4F8 (8)
	struct UPDTextBlock TB_DataName; // 0x500 (8)
	struct UPDTextBlock TB_DataValue; // 0x508 (8)

	void OnMenuItemClicked(int32_t InMenuIndex); // Function ProjectD.PDGameResultUI.OnMenuItemClicked(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1826A80>
	void OnClickTitle(); // Function ProjectD.PDGameResultUI.OnClickTitle(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18266F0>
	void OnClickScoreBoard(); // Function ProjectD.PDGameResultUI.OnClickScoreBoard(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18266D0>
	void OnClickProgress(); // Function ProjectD.PDGameResultUI.OnClickProgress(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18266B0>
	void OnClickEsc(); // Function ProjectD.PDGameResultUI.OnClickEsc(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1826670>
	void OnChangeNextStep(); // Function ProjectD.PDGameResultUI.OnChangeNextStep(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1826630>
};

// Class ProjectD.PDGameTimeUI
class UPDGameTimeUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_PlayTime; // 0x290 (8)
	struct UPanelWidget PW_PlayTimeNum; // 0x298 (8)
	struct UPDTextBlock TB_PlayTimeMin; // 0x2A0 (8)
	struct UPDTextBlock TB_PlayTimeSec; // 0x2A8 (8)
	struct UPDTextBlock TB_PlayTimeComma; // 0x2B0 (8)
	struct FLinearColor NormalTimeColor; // 0x2B8 (16)
	struct FLinearColor WarningTimeColor1; // 0x2C8 (16)
	struct FLinearColor WarningTimeColor2; // 0x2D8 (16)
	int32_t WarningPlayTime; // 0x2E8 (4)
	int32_t EmergencyPlayTime; // 0x2EC (4)
};

// Class ProjectD.PDGBOChildActorComponent
class UPDGBOChildActorComponent : public UChildActorComponent {

public:

	bool RootNode; // 0x220 (1)
};

// Class ProjectD.PDGrenadeIndicatorUI
class UPDGrenadeIndicatorUI : public UPDHUDIconBaseUI {

public:

	struct UBorder BD_OutArrow; // 0x2A0 (8)
};

// Class ProjectD.PDGroupBreakableObject
class APDGroupBreakableObject : public UActor {

public:

	struct TArray<struct UPDGBOChildActorComponent> ChildActorList; // 0x230 (16)
	struct TArray<struct UStaticMeshComponent> StepMeshList; // 0x240 (16)
	enum class GBOStep EditStep; // 0x250 (1)
};

// Class ProjectD.PDHideWeaponAnimNotify
class UPDHideWeaponAnimNotify : public UPDBaseAnimNotify {

public:

	enum class EInventorySlot TargetSlot; // 0x48 (1)
	bool Hidden; // 0x49 (1)
};

// Class ProjectD.PDHitFeedBackUI
class UPDHitFeedBackUI : public UPDUserWidget {

public:

	struct USizeBox SB_FeedBackIcon; // 0x288 (8)
	struct UImage IMG_FeedBackIcon; // 0x290 (8)
	struct TMap<enum class EPDHitFeedBackType, struct FHitFeedbackIcon> IconMap; // 0x298 (80)
};

// Class ProjectD.PDHitReactionAnimInstance
class UPDHitReactionAnimInstance : public UPDAnimInstance {

public:

	enum class EPDAimingState AimingState; // 0x280 (1)
	enum class EPDStanceState StanceState; // 0x281 (1)
	enum class EPDLocoType LocoType; // 0x282 (1)
	bool bOverrideUpper; // 0x283 (1)
	enum class EPDHitReactionAnimType HitReactionAnimType; // 0x284 (1)
	struct FRotator HitReactionRotation; // 0x288 (12)
	struct UAnimMontage CurrentPlayingHitMontage; // 0x298 (8)
};

// Class ProjectD.PDHitReactionNotifyState
class UPDHitReactionNotifyState : public UAnimNotifyState {

public:

	struct FName BeginEventName; // 0x30 (8)
	struct FName EndEventName; // 0x38 (8)
};

// Class ProjectD.PDIKAnimInstance
class UPDIKAnimInstance : public UPDAnimInstance {

public:

	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x288 (296)
	bool WStanceIsValid; // 0x3B0 (1)
	bool SWStanceIsValid; // 0x3B1 (1)
	struct FPDPerSpecificWeaponAnimDatas PSpecificWeaponAnimDatas; // 0x3B8 (200)
	bool MirrorFinalPose; // 0x480 (1)
	float AimInterpTime; // 0x484 (4)
	bool bAimingIdleState; // 0x488 (1)
	float IKInterpSpeed; // 0x48C (4)
	float MaxLookAtDistance; // 0x490 (4)
	float MinLookAtDistance; // 0x494 (4)
	enum class ECollisionChannel LookAtTraceChannel; // 0x498 (1)
	struct UMeshComponent WeaponMeshComponent; // 0x4B0 (8)
	struct FPDIKAnimInstanceProxy Proxy; // 0x4C0 (2976)
};

// Class ProjectD.PDImage
class UPDImage : public UImage {

public:

	bool bPixelSnapping; // 0x210 (1)

	void SetPixelSnapping(bool bInPixelSnapping); // Function ProjectD.PDImage.SetPixelSnapping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x182B100>
};

// Class ProjectD.PDImageButton
class UPDImageButton : public UPDUserWidget {

public:

	struct UImage IMG_Button; // 0x288 (8)
};

// Class ProjectD.PDIngameLaptonPresetTab
class UPDIngameLaptonPresetTab : public UPDUserWidget {

public:

	struct UPDTabButton Tab_Preset; // 0x298 (8)

	void OnSelectPreset(); // Function ProjectD.PDIngameLaptonPresetTab.OnSelectPreset(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182B030>
};

// Class ProjectD.PDIngameMapModule
class UPDIngameMapModule : public UPDGameMapModule {

public:

	struct UCanvasPanel CP_Area; // 0x3C0 (8)
	struct UCanvasPanel PaintZone; // 0x3C8 (8)
	struct UBorder BD_BackColor; // 0x3D0 (8)
	struct UImage IMG_Sight; // 0x3D8 (8)
	float ZoomStepScale; // 0x3E0 (4)
	int32_t ZoomStepCount; // 0x3E4 (4)
	float ZoomInterval; // 0x3E8 (4)
	float ZoomRate; // 0x3EC (4)
	float PlayerIconSightRadius; // 0x3F0 (4)
};

// Class ProjectD.PDIngameMapUI
class UPDIngameMapUI : public UPDIngameModeWidget {

public:

	struct UPDIngameMapModule GameMap; // 0x290 (8)
	struct UCanvasPanel CP_MapBox; // 0x298 (8)
	struct UCanvasPanel CP_Map; // 0x2A0 (8)
	struct UCanvasPanel CP_GameMap; // 0x2A8 (8)
	struct UPDTextBlock TB_Time; // 0x2B0 (8)
	struct UPDTextBlock TB_Coordinates; // 0x2B8 (8)
	struct UImage IMG_Weather; // 0x2C0 (8)
	struct UHorizontalBox HB_Weather; // 0x2C8 (8)
	struct UWidgetSwitcher WS_Menu; // 0x2D0 (8)
	struct UCanvasPanel CP_Guide; // 0x2D8 (8)
	struct UBorder BD_Menu; // 0x2E0 (8)
	struct UImage IMG_MapShadow; // 0x2E8 (8)
	struct UCanvasPanel CP_NewBadge; // 0x2F0 (8)
	struct UCanvasPanel CP_MouseGuideLine; // 0x2F8 (8)
	struct UImage IMG_MouseX; // 0x300 (8)
	struct UImage IMG_MouseY; // 0x308 (8)
	struct UCheckBox CB_ToggleBoard; // 0x310 (8)
	struct UPDButton Btn_DeleteAllLine; // 0x318 (8)
	struct UPDTextBlock TB_Key_Scale; // 0x320 (8)
	struct UPDTextBlock TB_Key_DeletePing; // 0x328 (8)
	bool DefaultLarge; // 0x330 (1)
	float LargeMapOffset; // 0x334 (4)
	struct FVector2D NormalMapSize; // 0x338 (8)
	struct FVector2D NormalGameMapSize; // 0x340 (8)
	struct FVector2D NormalMapBoxPos; // 0x348 (8)
	struct FVector2D NormalMenuPos; // 0x350 (8)
	struct FVector2D NormalMenuSize; // 0x358 (8)
	struct FVector2D NormalShadowPos; // 0x360 (8)
	struct FVector2D NormalShadowSize; // 0x368 (8)
	struct FVector2D MediumMapSize; // 0x370 (8)
	struct FVector2D MediumGameMapSize; // 0x378 (8)
	struct FVector2D MediumMapBoxPos; // 0x380 (8)
	struct FVector2D MediumMenuPos; // 0x388 (8)
	struct FVector2D MediumMenuSize; // 0x390 (8)
	struct FVector2D MediumShadowPos; // 0x398 (8)
	struct FVector2D MediumShadowSize; // 0x3A0 (8)
	struct FVector2D LargeMapSize; // 0x3A8 (8)
	struct FVector2D LargeGameMapSize; // 0x3B0 (8)
	struct FVector2D LargeMapBoxPos; // 0x3B8 (8)
	struct FVector2D LargeMenuPos; // 0x3C0 (8)
	struct FVector2D LargeMenuSize; // 0x3C8 (8)
	struct FVector2D LargeShadowPos; // 0x3D0 (8)
	struct FVector2D LargeShadowSize; // 0x3D8 (8)
	struct FPDIngameMapPos StatusBoardPos; // 0x3E0 (40)
	struct FPDIngameMapPos BasePos; // 0x408 (40)

	void OnToggleBoardCheckBoxChanged(bool Val); // Function ProjectD.PDIngameMapUI.OnToggleBoardCheckBoxChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182B070>
	void OnClickDeleteAllLines(); // Function ProjectD.PDIngameMapUI.OnClickDeleteAllLines(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182AE50>
};

// Class ProjectD.PDIngameMyCharListItem
class UPDIngameMyCharListItem : public UPDUserWidget {

public:

	struct UPDTabButton Btn_Select; // 0x2A0 (8)
	struct UWidgetSwitcher WS_State; // 0x2A8 (8)
	struct UImage IMG_Face; // 0x2B0 (8)
	struct UImage IMG_NotOwnedFace; // 0x2B8 (8)

	void OnSelectChar(); // Function ProjectD.PDIngameMyCharListItem.OnSelectChar(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182B010>
};

// Class ProjectD.PDIngamePlayerController
class APDIngamePlayerController : public APDPlayerController {

public:

	bool bUseViewTargetWithBlend; // 0x5A0 (1)
	struct UPDInputBuffer InputBuffer; // 0x628 (8)
};

// Class ProjectD.PDIngameStatusBoardUI
class UPDIngameStatusBoardUI : public UPDIngameModeWidget {

public:

	struct UPDKeyButton KBtn_Close; // 0x290 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_2; // 0x298 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_3; // 0x2A0 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_4; // 0x2A8 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_5; // 0x2B0 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_6; // 0x2B8 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_7; // 0x2C0 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_8; // 0x2C8 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_9; // 0x2D0 (8)
	struct UPDStatusBoardRoundResultItem RoundResultItem_10; // 0x2D8 (8)
	struct TArray<struct UPDStatusBoardRoundResultItem> RoundResultList; // 0x2E0 (16)
	struct UPDTextBlock TB_TeamName_Ally; // 0x2F0 (8)
	struct UPDTextBlock TB_TeamName_Enemy; // 0x2F8 (8)
	struct UImage IMG_InfoBoardBg_Ally; // 0x300 (8)
	struct UImage IMG_InfoBoardTLine_Ally; // 0x308 (8)
	struct UImage IMG_InfoBoardBLine_Ally; // 0x310 (8)
	struct UImage IMG_InfoBoardBg_Enemy; // 0x318 (8)
	struct UImage IMG_InfoBoardTLine_Enemy; // 0x320 (8)
	struct UImage IMG_InfoBoardBLine_Enemy; // 0x328 (8)
	struct UPDStatusBoardPlayerInfo_Ally PlayerInfo_Ally_01; // 0x330 (8)
	struct UPDStatusBoardPlayerInfo_Ally PlayerInfo_Ally_02; // 0x338 (8)
	struct UPDStatusBoardPlayerInfo_Ally PlayerInfo_Ally_03; // 0x340 (8)
	struct UPDStatusBoardPlayerInfo_Ally PlayerInfo_Ally_04; // 0x348 (8)
	struct UPDStatusBoardPlayerInfo_Ally PlayerInfo_Ally_05; // 0x350 (8)
	struct TArray<struct UPDStatusBoardPlayerInfo_Ally> MyTeamPlayerInfoList; // 0x358 (16)
	struct UPDStatusBoardPlayerInfo_Enemy PlayerInfo_Enemy_01; // 0x368 (8)
	struct UPDStatusBoardPlayerInfo_Enemy PlayerInfo_Enemy_02; // 0x370 (8)
	struct UPDStatusBoardPlayerInfo_Enemy PlayerInfo_Enemy_03; // 0x378 (8)
	struct UPDStatusBoardPlayerInfo_Enemy PlayerInfo_Enemy_04; // 0x380 (8)
	struct UPDStatusBoardPlayerInfo_Enemy PlayerInfo_Enemy_05; // 0x388 (8)
	struct TArray<struct UPDStatusBoardPlayerInfo_Enemy> EnemyTeamPlayerInfoList; // 0x390 (16)
	struct UPDTextBlock T_AllyTeamCoin; // 0x3A0 (8)
	struct UPDTextBlock T_EnemyTeamCoin; // 0x3A8 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Armory_Ally; // 0x3B0 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Ordnance_Ally; // 0x3B8 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Tactical_Ally; // 0x3C0 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Armory_Enemy; // 0x418 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Ordnance_Enemy; // 0x420 (8)
	struct UPDUnKnownMarketUpgradeSlot Upgrade_Tactical_Enemy; // 0x428 (8)
	struct UPDUnKnownMarketUpgradeTooltip StatusBoardUpgradeTooltip; // 0x480 (8)
	struct UPDButton Btn_Replay; // 0x488 (8)
	struct UPDButton Btn_Replay_Close; // 0x490 (8)
	struct FVector2D AllyUpgradeTooltipPos; // 0x498 (8)
	struct FVector2D AllyUpgradeTooltipAlignment; // 0x4A0 (8)
	struct FVector2D EnemyUpgradeTooltipPos; // 0x4A8 (8)
	struct FVector2D EnemyUpgradeTooltipAlignment; // 0x4B0 (8)

	void OnClickReplayClose(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplayClose(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182AE90>
	void OnClickReplay(); // Function ProjectD.PDIngameStatusBoardUI.OnClickReplay(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182AE70>
	void OnClickCloseBtn(); // Function ProjectD.PDIngameStatusBoardUI.OnClickCloseBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
};

// Class ProjectD.PDIngameUI
class UPDIngameUI : public UPDSceneBaseUI {

public:

	struct UCanvasPanel CP_GameMode; // 0x288 (8)
	struct UPDBaseModeUI ModeUI; // 0x290 (8)
	struct UScaleBox IngameUIScale; // 0x2C8 (8)
	struct TArray<struct UPDTextBlock> KeyTextBlockList; // 0x2D8 (16)
	struct TArray<struct UPDKeyButton> KeyButtonList; // 0x2E8 (16)
	struct TArray<struct UScaleBox> NoneScaleUIList; // 0x2F8 (16)

	void OnTimerRingCommand(); // Function ProjectD.PDIngameUI.OnTimerRingCommand(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182B050>
};

// Class ProjectD.PDIngameVideoUI
class UPDIngameVideoUI : public UPDUserWidget {

public:

	struct UMediaPlayer MediaPlayer; // 0x288 (8)
	struct UMediaPlayer MediaPlayerDestroy; // 0x290 (8)
	struct UPDTextBlock TB_IntroTitle; // 0x298 (8)
	struct UPDTextBlock TB_IntroDesc01; // 0x2A0 (8)
	struct UPDTextBlock TB_IntroDesc02; // 0x2A8 (8)
	struct UProgressBar PB_Skip; // 0x2B0 (8)
	struct UCanvasPanel CP_MovieInfo; // 0x2B8 (8)
	struct UCanvasPanel CP_Skip; // 0x2C0 (8)
	struct UImage IMG_MovieInfo_Divider_01; // 0x2C8 (8)
	struct UImage IMG_Movie; // 0x2D0 (8)
	struct UImage IMG_Blind; // 0x2D8 (8)
	float FirstDelay; // 0x2E0 (4)
	float CharInterval; // 0x2E4 (4)
	float LineInterval; // 0x2E8 (4)

	void OnMovieOpened(); // Function ProjectD.PDIngameVideoUI.OnMovieOpened(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x182AFF0>
	void OnInitMediaPlayer(); // Function ProjectD.PDIngameVideoUI.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class ProjectD.PDInputKeySelector
class UPDInputKeySelector : public UPDUserWidget {

public:

	struct UInputKeySelector IKS_Control; // 0x288 (8)
	char IsPressed : 1; // 0x290 (1)

	void OnInputSelectingKeyChanged(); // Function ProjectD.PDInputKeySelector.OnInputSelectingKeyChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182AFD0>
	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDInputKeySelector.OnInputKeySelected(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182AEB0>
};

// Class ProjectD.PDInteractionInfoUI
class UPDInteractionInfoUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_Progress; // 0x290 (8)
	struct UImage IMG_Icon; // 0x298 (8)
	struct UPDCircleProgressModule CPM_Progress; // 0x2A0 (8)
	struct UCanvasPanel CP_SeedProgress; // 0x2A8 (8)
	struct UPDSeedProgressModule SSM_Progress; // 0x2B0 (8)
	struct UHorizontalBox HB_Info; // 0x2B8 (8)
	struct UPDTextBlock TB_Key; // 0x2C0 (8)
	struct UPDTextBlock TB_Desc; // 0x2C8 (8)
	struct USizeBox SB_ItemInfo; // 0x2D0 (8)
	struct UPDTextBlock TB_Key_3; // 0x2D8 (8)
	struct UPDTextBlock TB_Desc_3; // 0x2E0 (8)
	struct UImage IMG_ItemIcon; // 0x2E8 (8)
	struct USizeBox SB_ItemCount; // 0x2F0 (8)
	struct UPDTextBlock TB_ItemCount; // 0x2F8 (8)
	struct UPDTextBlock TB_ItemName; // 0x300 (8)
	struct UPDTextBlock TB_ItemType; // 0x308 (8)
	struct UImage IMG_BulletType; // 0x310 (8)
	struct UHorizontalBox HB_KeyGuide; // 0x318 (8)
	struct UPDTextBlock TB_Guide_Key; // 0x320 (8)
	struct UPDTextBlock TB_Guide_Desc; // 0x328 (8)
	struct USizeBox SB_KeyGuide; // 0x330 (8)
	struct UImage IMG_GuideMouseLeft; // 0x338 (8)
	struct UHorizontalBox HB_Mode_Info; // 0x348 (8)
	struct UPDTextBlock TB_Mode_Key; // 0x350 (8)
	struct UPDTextBlock TB_Mode_Desc; // 0x358 (8)
	struct UHorizontalBox HB_Info_2; // 0x360 (8)
	struct UPDTextBlock TB_Key_2; // 0x368 (8)
	struct UPDTextBlock TB_Desc_2; // 0x370 (8)
	struct UHorizontalBox HB_Tip; // 0x378 (8)
	struct UPDTextBlock TB_Desc_Tip; // 0x380 (8)
};

// Class ProjectD.PDIntroUI
class UPDIntroUI : public UPDSceneBaseUI {

public:

	struct UBorder B_MovieBG; // 0x288 (8)
	struct UWidget IMG_Movie; // 0x290 (8)
	struct UProgressBar PB_Skip; // 0x298 (8)
	struct UCanvasPanel CP_Skip; // 0x2A0 (8)
	struct UMediaPlayer LoginMediaPlayer; // 0x2A8 (8)
	bool DoorMoviePlay; // 0x2B0 (1)
	float DelayTime; // 0x2B4 (4)
	struct FKey HoldKey; // 0x2B8 (24)

	void OnMovieOpened(); // Function ProjectD.PDIntroUI.OnMovieOpened(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x182E630>
	void OnMovieClosed(); // Function ProjectD.PDIntroUI.OnMovieClosed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x182E610>
	void OnInitMediaPlayer(); // Function ProjectD.PDIntroUI.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class ProjectD.PDInvenDivide
class UPDInvenDivide : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Title; // 0x288 (8)
	struct UImage IMG_BeforeItem; // 0x290 (8)
	struct UPDTextBlock TB_BeforeCount; // 0x298 (8)
	struct UImage IMG_AfterItem; // 0x2A0 (8)
	struct UEditableText ETxt_DividCnt; // 0x2A8 (8)
	struct USlider SD_Count; // 0x2B0 (8)
	struct UPDButton PDBTN_Split; // 0x2B8 (8)
	struct UPDButton PDBTN_Cancel; // 0x2C0 (8)

	void OnDividTextInput(struct FText& InText); // Function ProjectD.PDInvenDivide.OnDividTextInput(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x182E510>
	void OnDividTextChanged(struct FText& InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDInvenDivide.OnDividTextChanged(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x182E3E0>
	void OnClickSplitBtn(); // Function ProjectD.PDInvenDivide.OnClickSplitBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E360>
	void OnClickCancelBtn(); // Function ProjectD.PDInvenDivide.OnClickCancelBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E2E0>
	void ChangeVolume(float InVolume); // Function ProjectD.PDInvenDivide.ChangeVolume(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E070>
};

// Class ProjectD.PDInvenDrag
class UPDInvenDrag : public UPDUserWidget {

public:

	struct UImage IMG_ItemImg; // 0x288 (8)
	struct UBorder BD_DivideDesc; // 0x290 (8)
	struct UTextBlock TB_DivideDesc; // 0x298 (8)
	struct UBorder BD_ItemBg; // 0x2A0 (8)
	struct UVerticalBox VB_DragItem; // 0x2A8 (8)
};

// Class ProjectD.PDInvenListItem
class UPDInvenListItem : public UPDUserWidget {

public:

	struct UDragDropOperation DragDropOperation; // 0x290 (8)
	struct UWidgetSwitcher WS_ListItem; // 0x298 (8)
	struct UImage IMG_ItemImg; // 0x2A0 (8)
	struct UPDTextBlock TB_ItemName; // 0x2A8 (8)
	struct UPDTextBlock TB_ItemNum; // 0x2B0 (8)
	struct UPDTextBlock TB_Title; // 0x2B8 (8)
	struct UPDTextBlock TB_Property; // 0x2C0 (8)
	struct UCanvasPanel CP_Progress; // 0x2C8 (8)
	struct UProgressBar PB_ItemProgress; // 0x2D0 (8)
	struct UBorder BD_ProgressTXT; // 0x2D8 (8)
	struct UImage IMG_Unusable; // 0x2E0 (8)
	struct UImage IMG_Equipped; // 0x2E8 (8)
	struct UBorder BD_Item_Bg; // 0x2F0 (8)
	struct UCanvasPanel CP_Dragable; // 0x2F8 (8)
	struct UCanvasPanel CP_Refund; // 0x300 (8)
	struct UPDButton Btn_Refund; // 0x308 (8)
	struct UImage IMG_Highlight_Tutorial; // 0x310 (8)
	struct UBorder BD_TitleBg; // 0x328 (8)
	struct FLinearColor BasicBGColor; // 0x330 (16)
	struct FLinearColor HoverBGColor; // 0x340 (16)
	struct FLinearColor NormalBunchColor; // 0x350 (16)
	struct FLinearColor MaxBunchColor; // 0x360 (16)

	void RefundItem(); // Function ProjectD.PDInvenListItem.RefundItem(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182E6B0>
};

// Class ProjectD.PDInvenToolTipModule
class UPDInvenToolTipModule : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_ToolTip; // 0x288 (8)
	struct UTextBlock TB_ItemName; // 0x290 (8)
	struct UTextBlock TB_Type; // 0x298 (8)
	struct UImage IMG_Type; // 0x2A0 (8)
	struct UTextBlock TB_ItemDesc; // 0x2A8 (8)
	struct UProgressBar PB_Damage; // 0x2B0 (8)
	struct UProgressBar PB_Range; // 0x2B8 (8)
	struct UProgressBar PB_Precision; // 0x2C0 (8)
	struct UProgressBar PB_Recoil; // 0x2C8 (8)
	struct UProgressBar PB_Firearms; // 0x2D0 (8)
	struct UProgressBar PB_AimingSpeed; // 0x2D8 (8)
	struct UTextBlock TB_Ammo; // 0x2E0 (8)
	struct UTextBlock TB_Magazine; // 0x2E8 (8)
};

// Class ProjectD.PDOKCancelPopupUI
class UPDOKCancelPopupUI : public UPDPopupBaseUI {

public:

	struct UPDTextBlock Desc; // 0x2B8 (8)
	struct UPDTextBlock Desc2; // 0x2C0 (8)
	struct UPDButton OKBtn; // 0x2C8 (8)
	struct UPDButton CancelBtn; // 0x2D0 (8)
};

// Class ProjectD.PDItemModel
class APDItemModel : public UActor {

public:

	struct TArray<struct UMaterialInstanceDynamic> ItemBaseMaterials; // 0x220 (16)
	struct USceneComponent EmptySceneComp; // 0x280 (8)
	struct UStaticMeshComponent StaticMeshComp; // 0x288 (8)
	struct UPDSkeletalMeshComponent SkeletalMeshComp; // 0x290 (8)

	void OnBeginOverlapAssistant(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDItemModel.OnBeginOverlapAssistant(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x182E0F0>
};

// Class ProjectD.PDKeyButton
class UPDKeyButton : public UPDButton {

public:

	struct UPDTextBlock T_SubText; // 0xC50 (8)
	struct USizeBox SB_Btn; // 0xC58 (8)
	struct FText ControlName; // 0xC60 (24)
	struct FText InSubText; // 0xC78 (24)
	struct FSlateFontInfo SubTextFont; // 0xC90 (80)
	struct FSlateColor NormalSubTextColor; // 0xCE0 (40)
	struct FSlateColor HoverSubTextColor; // 0xD08 (40)
	struct FSlateColor PressSubTextColor; // 0xD30 (40)
	struct FSlateColor DisableSubTextColor; // 0xD58 (40)
	struct FMargin SubTextMargin; // 0xD80 (16)
	char bOverride_WidthOverride : 1; // 0xD90 (1)
	char bOverride_HeightOverride : 1; // 0xD90 (1)
	char bOverride_MinDesiredWidth : 1; // 0xD90 (1)
	char bOverride_MinDesiredHeight : 1; // 0xD90 (1)
	char bOverride_MaxDesiredWidth : 1; // 0xD90 (1)
	char bOverride_MaxDesiredHeight : 1; // 0xD90 (1)
	char bOverride_MinAspectRatio : 1; // 0xD90 (1)
	char bOverride_MaxAspectRatio : 1; // 0xD90 (1)
	float WidthOverride; // 0xD94 (4)
	float HeightOverride; // 0xD98 (4)
	float MinDesiredWidth; // 0xD9C (4)
	float MinDesiredHeight; // 0xDA0 (4)
	float MaxDesiredWidth; // 0xDA4 (4)
	float MaxDesiredHeight; // 0xDA8 (4)
	float MinAspectRatio; // 0xDAC (4)
	float MaxAspectRatio; // 0xDB0 (4)
};

// Class ProjectD.PDKillLogModule
class UPDKillLogModule : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Attacker; // 0x290 (8)
	struct UPDTextBlock TB_Victim; // 0x298 (8)
	struct UBorder BD_Attacker; // 0x2A0 (8)
	struct UImage IMG_Attacker; // 0x2A8 (8)
	struct UImage IMG_Victim; // 0x2B0 (8)
	struct UBorder BD_Victim; // 0x2B8 (8)
	struct UPDTextBlock T_Dist; // 0x2C0 (8)
	struct UImage IMG_Cause; // 0x2C8 (8)
	struct USizeBox SB_Cause; // 0x2D0 (8)
	struct UImage IMG_HeadShot; // 0x2D8 (8)
	struct UImage IMG_Groggy; // 0x2E0 (8)
	struct UImage IMG_Death; // 0x2E8 (8)
	struct UImage IMG_Assist; // 0x2F0 (8)
	struct UBorder BD_Background; // 0x2F8 (8)
	struct UBorder BD_PlayerLine; // 0x300 (8)
	struct UImage IMG_MainPlayerBG; // 0x308 (8)

	void AdjustCauseRatio(); // Function ProjectD.PDKillLogModule.AdjustCauseRatio(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x182E050>
};

// Class ProjectD.PDKillLogUI
class UPDKillLogUI : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_LogList; // 0x290 (8)
	int32_t MaxLogCount; // 0x298 (4)
	float LogDuration; // 0x29C (4)
};

// Class ProjectD.PDKillMessage
class UPDKillMessage : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_KillType; // 0x298 (8)
	struct UPDTextBlock TB_UserName; // 0x2A0 (8)
	struct UImage IMG_Portrait; // 0x2A8 (8)
	struct UBorder BD_TeamColor; // 0x2B0 (8)
	struct UImage IMG_Light_BackTop; // 0x2B8 (8)
	struct UImage IMG_Light_BackUnder; // 0x2C0 (8)
	struct UImage IMG_Light_Front; // 0x2C8 (8)
	struct UGridPanel GP_DoubleKill; // 0x2D0 (8)
	struct UGridPanel GP_TripleKill; // 0x2D8 (8)
	struct UGridPanel GP_QuadraKill; // 0x2E0 (8)
	struct UGridPanel GP_PentaKill; // 0x2E8 (8)
	float KillDefaultDuration; // 0x2F0 (4)
};

// Class ProjectD.PDLevelStreamingVolume
class APDLevelStreamingVolume : public AVolume {

public:

	struct TArray<struct FString> HiddenLevelNames; // 0x258 (16)
	struct TArray<struct FString> BeginOverlapConsoleCommands; // 0x268 (16)
	struct TArray<struct FString> EndOverlapConsoleCommands; // 0x278 (16)
};

// Class ProjectD.PDLineItemModel
class APDLineItemModel : public APDItemModel {

public:

	struct USplineComponent Spline; // 0x2E0 (8)
};

// Class ProjectD.PDLoadingUI
class UPDLoadingUI : public UPDSceneBaseUI {

public:

	struct UPDTextBlock Loading_Text; // 0x288 (8)
};

// Class ProjectD.PDLobbyAnimInstance
class UPDLobbyAnimInstance : public UPDAnimInstance {

public:

	struct FPDLobbyAnimData LobbyAnimData; // 0x280 (208)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x350 (1)
	int32_t LobbyAnimPlayIndex; // 0x354 (4)
	int32_t LobbyIdleAnimIndex; // 0x358 (4)
	enum class EPDLobbyAnimStatus ReserveLobbyAnimStatus; // 0x35C (1)
};

// Class ProjectD.PDLobbyAnimNotify
class UPDLobbyAnimNotify : public UPDBaseAnimNotify {

public:

	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0x48 (1)
	bool Hair; // 0x49 (1)
	bool ChangeIdleAnim; // 0x4A (1)
};

// Class ProjectD.PDLobbySceneEventActor
class APDLobbySceneEventActor : public UActor {

public:

	enum class ESceneName TargetSceneName; // 0x220 (1)
	int32_t TargetAgentIndex; // 0x224 (4)
	struct TArray<struct FLobbySceneEventData> EventDataArray; // 0x228 (16)
};

// Class ProjectD.PDLobbyTimelineActor
class APDLobbyTimelineActor : public UActor {

public:

	struct UPDSplineCameraTimelineComponent SplineCameraTimeline; // 0x220 (8)
	int32_t TargetCamSplineID; // 0x228 (4)
	int32_t TargetAgentIndex; // 0x22C (4)
	enum class ESceneName TargetSceneName; // 0x230 (1)
	enum class EPDLobbyAnimStatus TargetAnimStatus; // 0x231 (1)
	bool TestMode; // 0x232 (1)
};

// Class ProjectD.PDLobbyUI
class UPDLobbyUI : public UPDSceneBaseUI {

public:

	struct UPDButton Btn_DebugLog; // 0x288 (8)
	struct UPDTabButton Btn_StartPlay; // 0x290 (8)
	struct UPDTextBlock T_NickName; // 0x298 (8)
	struct UCanvasPanel CP_MainMenu; // 0x2A0 (8)
	struct UPDMatchListUI MatchIDList; // 0x2A8 (8)
	struct UBorder BD_MouseEventCover; // 0x2B0 (8)
	struct UWidgetSwitcher WS_PlayMatching; // 0x2B8 (8)
	struct UWidgetSwitcher WS_PlayBtn; // 0x2C0 (8)
	struct UPDButton Btn_Matching_ForceStart; // 0x2C8 (8)
	struct UPDButton Btn_Matching_Cancel; // 0x2D0 (8)
	struct UCanvasPanel CP_MatchForceStart; // 0x2D8 (8)
	struct UPDEquipPerkList EquipPerkList; // 0x2E0 (8)
	struct UCanvasPanel CP_PerkList; // 0x2E8 (8)
	struct UBorder BD_PerkEventCover; // 0x2F0 (8)
	struct UCanvasPanel CP_AddItemMsg; // 0x2F8 (8)
	struct UPDTextBlock TB_AddItem; // 0x300 (8)
	struct UCanvasPanel CP_Disabled_Reason; // 0x308 (8)
	struct UPDTextBlock TB_PlayDisabled; // 0x310 (8)
	struct UPDButton Btn_News; // 0x318 (8)
	struct UPDButton Btn_Event; // 0x320 (8)
	struct UPDTextBlock T_Desc_Cancel; // 0x328 (8)
	struct UCanvasPanel CP_MatchIDList; // 0x330 (8)
	struct UPDMatchModeList MatchModeList; // 0x338 (8)
	struct UPDButton Btn_Training; // 0x340 (8)
	struct UPDButton Btn_GameGuide; // 0x348 (8)
	struct UWidgetSwitcher WS_QR; // 0x350 (8)
	struct UPDButton Btn_Voice; // 0x358 (8)
	struct UWidgetSwitcher WS_VoiceState; // 0x360 (8)

	void PlayOpenSurvey(); // Function ProjectD.PDLobbyUI.PlayOpenSurvey(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E690>
	void OnUnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnUnHoveredStartPlayBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E670>
	void OnPlayerStatsClosed(); // Function ProjectD.PDLobbyUI.OnPlayerStatsClosed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E650>
	void OnHoveredStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnHoveredStartPlayBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E5F0>
	void OnClickVoiceBtn(); // Function ProjectD.PDLobbyUI.OnClickVoiceBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E3C0>
	void OnClickTrainingBtn(); // Function ProjectD.PDLobbyUI.OnClickTrainingBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E3A0>
	void OnClickStartPlayBtn(); // Function ProjectD.PDLobbyUI.OnClickStartPlayBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E380>
	void OnClickPlayerStats(); // Function ProjectD.PDLobbyUI.OnClickPlayerStats(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickMachingCancel(); // Function ProjectD.PDLobbyUI.OnClickMachingCancel(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E340>
	void OnClickForcePlay(); // Function ProjectD.PDLobbyUI.OnClickForcePlay(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x182E300>
	void OnClickDebugLogBtn(); // Function ProjectD.PDLobbyUI.OnClickDebugLogBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
};

// Class ProjectD.PDLocoDefaultAnimInstance
class UPDLocoDefaultAnimInstance : public UPDPlayerAnimInstance {

public:

	enum class EPDStartingType StartingType; // 0x5E8 (1)
	enum class EPDStoppingType StoppingType; // 0x5E9 (1)
};

// Class ProjectD.PDLoginUI
class UPDLoginUI : public UPDSceneBaseUI {

public:

	struct UWidget IMG_Movie; // 0x2A0 (8)
	struct UCanvasPanel CP_LoginUI; // 0x2A8 (8)
	struct UPDButton Btn_Login; // 0x2B0 (8)
	struct UEditableTextBox ET_ID; // 0x2B8 (8)
	struct UEditableTextBox ET_PW; // 0x2C0 (8)
	struct UPDCheckBox Check_SaveID; // 0x2C8 (8)
	struct UImage IMG_SaveID_Bg; // 0x2D0 (8)
	struct UBorder BD_Alert; // 0x2D8 (8)
	struct UPDTextBlock TB_Alert; // 0x2E0 (8)
	struct UWidget WB_PatchNote; // 0x2E8 (8)
	struct UImage IMG_BtnDeco; // 0x2F0 (8)
	struct UCanvasPanel CP_SaveID; // 0x2F8 (8)
	struct UMediaPlayer LoginMediaPlayer; // 0x300 (8)
	struct FString BgFilePath; // 0x308 (16)
	float MediaStartDelay; // 0x318 (4)

	void OnSplashMovieClosed(); // Function ProjectD.PDLoginUI.OnSplashMovieClosed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnInitMediaPlayer(); // Function ProjectD.PDLoginUI.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnClickGameLoginBtn(); // Function ProjectD.PDLoginUI.OnClickGameLoginBtn(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x182E320>
};

// Class ProjectD.PDMailBoxListItemUI
class UPDMailBoxListItemUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_MailTitle; // 0x290 (8)
	struct UPDTextBlock TB_MailContent; // 0x298 (8)
	struct UPDTextBlock TB_ReceivedDate; // 0x2A0 (8)
	struct UImage IMG_MailIcon; // 0x2A8 (8)
};

// Class ProjectD.PDMailItemListSlotUI
class UPDMailItemListSlotUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Name; // 0x288 (8)
	struct UImage IMG_Item; // 0x290 (8)
	struct UPDButton Btn_ItemSlot; // 0x298 (8)

	void OnUnhoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnUnhoveredItemSlot(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831990>
	void OnHoveredItemSlot(); // Function ProjectD.PDMailItemListSlotUI.OnHoveredItemSlot(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18317F0>
};

// Class ProjectD.PDMailNotificationSlotUI
class UPDMailNotificationSlotUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_MailContent; // 0x288 (8)
	struct UPDButton Btn_NotificationSlot; // 0x290 (8)

	void OnClickNotificationSlot(); // Function ProjectD.PDMailNotificationSlotUI.OnClickNotificationSlot(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831730>
};

// Class ProjectD.PDMailNotificationUI
class UPDMailNotificationUI : public UPDUserWidget {

public:

	struct UVerticalBox VB_MailNotificationList; // 0x288 (8)
	int32_t MaxNotiCount; // 0x290 (4)
	float NotiDuration; // 0x294 (4)
};

// Class ProjectD.PDMailPopupUI
class UPDMailPopupUI : public UPDPopupBaseUI {

public:

	struct UCanvasPanel CP_MailBox; // 0x2B8 (8)
	struct UPDButton Btn_MailBoxClose; // 0x2C0 (8)
	struct UListView LV_MailList; // 0x2C8 (8)
	struct UPDImageButton IMG_Btn_Bg; // 0x2D0 (8)
	struct UPDMailUI MailUI; // 0x2D8 (8)

	void OnSelectedMailListItem(struct UPDMailBoxListItemData InListDataData); // Function ProjectD.PDMailPopupUI.OnSelectedMailListItem(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18318F0>
	void OnScrolledMailListItem(float ItemOffset, float DistanceRemaining); // Function ProjectD.PDMailPopupUI.OnScrolledMailListItem(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831830>
	void OnClickMailBoxCloseBtn(); // Function ProjectD.PDMailPopupUI.OnClickMailBoxCloseBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831690>
};

// Class ProjectD.PDMailUI
class UPDMailUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Popup; // 0x288 (8)
	struct UPDTextBlock TB_MailTitle; // 0x290 (8)
	struct UPDTextBlock TB_MailContent; // 0x298 (8)
	struct UPDButton Btn_MailClose; // 0x2A0 (8)
	struct UPDButton Btn_ReceiveItem; // 0x2A8 (8)
	struct UPDButton Btn_DeleteMail; // 0x2B0 (8)
	struct UImage IMG_MailIcon; // 0x2B8 (8)
	struct UHorizontalBox HB_MailItemList; // 0x2C0 (8)
	struct UPDTextBlock TB_ReceivedDate; // 0x2C8 (8)
	struct UPDTextBlock TB_ExpireDate; // 0x2D0 (8)
	struct UScrollBox SB_MsgScroll; // 0x2D8 (8)

	void OnClickReceiveItemBtn(); // Function ProjectD.PDMailUI.OnClickReceiveItemBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831750>
	void OnClickMailCloseBtn(); // Function ProjectD.PDMailUI.OnClickMailCloseBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18316B0>
	void OnClickDeleteMailBtn(); // Function ProjectD.PDMailUI.OnClickDeleteMailBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831670>
	void DeleteMail(int64_t MailSN); // Function ProjectD.PDMailUI.DeleteMail(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831390>
};

// Class ProjectD.PDPlayerCharacter
class APDPlayerCharacter : public APDCharacterEntity {

public:

	struct FPDPlayerAnimDatas PlayerAnimDatas; // 0x8B8 (20504)
	struct FPDLobbyCharacterAnimData LobbyCharacterAnimData; // 0x58D0 (216)
	struct FPDPlayerAnimDatas JuggernautAnimDatas; // 0x59A8 (20504)
	struct FPDFacialAnimData FacialAnimData; // 0xA9C0 (944)
	struct UStaticMeshComponent CullCheckerComponent; // 0xAD70 (8)
	struct UPDActionComponent PDActionComponent; // 0xAD78 (8)
	struct UPDStateComponent PDStateComponent; // 0xAD80 (8)
	struct UPDWeaponControlComponent PDWeaponCtrlComponent; // 0xAD88 (8)
	struct UPhysicalAnimationComponent PhysicalAnimation; // 0xAD90 (8)
	struct UStaticMeshComponent AttachedPropComponent; // 0xAD98 (8)
	enum class EPDLobbyAnimStatus LobbyAnimStatus; // 0xADA0 (1)
	int32_t LobbyIdleAnimIndex; // 0xADA4 (4)
	struct UPDPlayerAnimInstance BaseAnimInstance; // 0xAE28 (8)
	struct UPDLocoClimbAnimInstance LocoClimbSubAnimInstance; // 0xAE30 (8)
	struct UCapsuleComponent Bodyfence; // 0xAE38 (8)
	float AFKChangeTime; // 0xAE40 (4)
	struct UPDPlayerSpringArmComponent PDPlayerSpringArmComponent; // 0xAE68 (8)
	struct UCameraComponent DefaultCamera; // 0xAE70 (8)
	bool TEST_NoDeathPhysicalAnimation; // 0xAE78 (1)
	bool TEST_NoGroggy; // 0xAE7A (1)
	struct TArray<struct FPDFootstepInfo> Footsteps; // 0xAE80 (16)
	struct TArray<struct UPDDroneSpringArmComponent> DroneSpringArmList; // 0xAFB8 (16)

	void ToggleRagdoll(); // Function ProjectD.PDPlayerCharacter.ToggleRagdoll(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void PlayHitAnim(); // Function ProjectD.PDPlayerCharacter.PlayHitAnim(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x183AF20>
	enum class EPDSpecificWeaponAnimset GetCurrentSpecificWeaponAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentSpecificWeaponAnimset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x183ADF0>
	enum class EPDAnimset GetCurrentAnimset(); // Function ProjectD.PDPlayerCharacter.GetCurrentAnimset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x183ADC0>
};

// Class ProjectD.PDMainPlayerCharacter
class APDMainPlayerCharacter : public APDPlayerCharacter {

public:

	struct UPDMainPlayerMovementComponent PlayerMovementComponent; // 0xAFE8 (8)
	struct UPDMainPlayerSpringArmComponent PDMainPlayerSpringArmComponent; // 0xAFF0 (8)
	struct USpringArmComponent SpringArmComp; // 0xAFF8 (8)
	struct UCapsuleComponent SpringArmCapsule; // 0xB000 (8)
	struct UPDStoppingPowerComponent StoppingPowerComponent; // 0xB008 (8)
	struct USphereComponent UpsideSphereComponent; // 0xB010 (8)
	char SuppressionLevel; // 0xB181 (1)
	float RemainingSuppressionTime; // 0xB184 (4)
	float LastSuppressionTime; // 0xB188 (4)
	float SuppressionKeepTime; // 0xB18C (4)
	float SuppressionDownTime; // 0xB190 (4)
	float CamBlendExp; // 0xB194 (4)
	float DeathCamBlendTime; // 0xB198 (4)
	float aimPosXOffsetLength; // 0xB19C (4)
	float aimPosYOffsetLength; // 0xB1A0 (4)
	float aimPosZOffsetLength; // 0xB1A4 (4)
	bool bAccurateAimPitch; // 0xB1A8 (1)
	struct TArray<struct UClass*> CameraShakeClasses; // 0xB1B0 (16)
	struct APDMainPlayerCharacterFP FPCharacter; // 0xB248 (8)

	void OnUpsideSphereEndOverlap(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereEndOverlap(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1831BA0>
	void OnUpsideSphereBeginOverlap(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereBeginOverlap(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x18319B0>
	void HandMeshLoadingComplete(struct TArray<struct TSoftObjectPtr<Object>>& Data, int32_t Index); // Function ProjectD.PDMainPlayerCharacter.HandMeshLoadingComplete(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1831490>
};

// Class ProjectD.PDMainPlayerCharacterFP
class APDMainPlayerCharacterFP : public ACharacter {

public:

	struct UAnimMontage CurrentPlayingDrawMontage; // 0x4B8 (8)
	struct UPDPlayerAnimInstanceFPDummy FPAnimInstance; // 0x4D0 (8)
	struct APDMainPlayerCharacter MainPlayerCharacter; // 0x4D8 (8)
	struct UPDMainPlayerStateComponent MainPlayerStateComponent; // 0x4E0 (8)
	struct APDFPWeapon FPWeapon; // 0x4E8 (8)
	struct UCurveFloat FPZoomInCameraLocationCurve; // 0x518 (8)
	struct UCurveFloat FPZoomInCameraRotationCurve; // 0x520 (8)
	struct ACameraActor ToggleUsingAimChangeActor; // 0x538 (8)
	struct UCameraComponent BeginCamera; // 0x540 (8)
	struct UCameraComponent EndCamera; // 0x548 (8)
	float ToggleChangeMaxTime; // 0x550 (4)
	struct FTransform WeaponTransform; // 0x560 (48)
	enum class EPDAimingState CurrentAimingState; // 0x590 (1)
};

// Class ProjectD.PDMainPlayerMovementComponent
class UPDMainPlayerMovementComponent : public UCharacterMovementComponent {

public:

	float MaxRunSpeedCrouched; // 0x628 (4)
	float MaxSprintSpeedCrouched; // 0x62C (4)
	float MaxRunSpeed; // 0x630 (4)
	float MaxSprintSpeed; // 0x634 (4)
	float SprintAllowAngle; // 0x638 (4)
	float SprintClampAngle; // 0x63C (4)
	struct UPDMainPlayerStateComponent OwnerPDStateComponent; // 0x770 (8)
};

// Class ProjectD.PDPlayerSpringArmComponent
class UPDPlayerSpringArmComponent : public USpringArmComponent {

public:

	float CameraHitBlendXY; // 0x280 (4)
	struct APDPlayerCharacter pOwnerCharacter; // 0x290 (8)
	struct UPDStateComponent pOwnerStateComponent; // 0x298 (8)
};

// Class ProjectD.PDMainPlayerSpringArmComponent
class UPDMainPlayerSpringArmComponent : public UPDPlayerSpringArmComponent {

public:

	float CrouchTargetOffsetLagSpeed; // 0x680 (4)
	float TargetStartOffset; // 0x684 (4)
	float TraceDistance; // 0x688 (4)
	float TraceRadius; // 0x68C (4)
	float TraceHeight; // 0x690 (4)
};

// Class ProjectD.PDStateComponent
class UPDStateComponent : public UActorComponent {

public:

	struct UPDMainPlayerMovementComponent OwnerPDMainPlayMovementComponent; // 0xB8 (8)
	struct APDPlayerCharacter OwnerPlayer; // 0xC0 (8)
	struct UPDPlayerAnimInstance BaseAnimInstance; // 0xC8 (8)
	enum class EPDLocoType LocoType; // 0xEC (1)
	enum class EPDLocoState LocoState; // 0xED (1)
	enum class EPDMovementState MovementState; // 0xEE (1)
	enum class EPDStanceState StanceState; // 0xEF (1)
	enum class EPDAimingState AimingState; // 0xF0 (1)
	enum class EPDGaitsState GaitState; // 0xF1 (1)
	float GaitValue; // 0xF4 (4)
	float Direction; // 0xF8 (4)
	float AimPitch; // 0xFC (4)
	float AimYaw; // 0x100 (4)
	float FreeLookYaw; // 0x104 (4)
	float LeanFB; // 0x108 (4)
	float LeanLR; // 0x10C (4)
	bool bLeftHandedPose; // 0x110 (1)
	enum class EPDClimbStanceState ClimbStanceState; // 0x120 (1)
	enum class EPDThrowStanceState ThrowStanceState; // 0x121 (1)
	enum class EPDSlideStanceState SlideStanceState; // 0x122 (1)
	enum class EPDLeanState LeanState; // 0x127 (1)
	struct TArray<struct UClass*> StateClassList; // 0x128 (16)
	struct UPDStateBase CurrentState; // 0x140 (8)
	struct TArray<struct UPDStateBase> StateList; // 0x148 (16)
};

// Class ProjectD.PDMainPlayerStateComponent
class UPDMainPlayerStateComponent : public UPDStateComponent {

public:

	struct FVector MoveInputAxis; // 0x3F8 (12)
	bool bMoveInputPressed; // 0x404 (1)
	enum class EPDInputMoveType InputState; // 0x405 (1)
	float CurSpeed; // 0x438 (4)
	float PreviousSpeed; // 0x43C (4)
	float LastInputMoveSpeed; // 0x440 (4)
	struct APDCharacterEntity TargetCharacter; // 0x510 (8)
	float StartingFowardAcceleration; // 0x534 (4)
	float StartingSideAcceleration; // 0x538 (4)
	float StartingBackAcceleration; // 0x53C (4)
	float StartingFowardAcceleration_Crouch; // 0x540 (4)
	float StartingSideAcceleration_Crouch; // 0x544 (4)
	float StartingBackAcceleration_Crouch; // 0x548 (4)
	float StoppingMaxBrakingDeceleration; // 0x54C (4)
	float StoppingMinBrakingDeceleration; // 0x550 (4)
	float StoppingMaxBrakingDeceleration_Crouch; // 0x554 (4)
	float StoppingMinBrakingDeceleration_Crouch; // 0x558 (4)
	float RestoreAccelerationDuration; // 0x55C (4)
	float RestoreAccelerationDuration_Crouch; // 0x560 (4)
	float RestoreBrakingDecelerationDuration; // 0x564 (4)
	float RestoreBrakingDecelerationDuration_Crouch; // 0x568 (4)
	float CurrentRestoreBrakingDecelerationDuration; // 0x56C (4)
	float AimingIdleTime; // 0x5B8 (4)
	float AimingIdleLimitPitchAngle; // 0x5BC (4)
	float AimingIdleLimitYawAngle; // 0x5C0 (4)
	struct UCurveBase AimingIdleMoveCurve; // 0x5C8 (8)
	float AimingIdleHoldingMaxTime; // 0x5D4 (4)
	struct UCurveFloat AimingIdleHoldingCurve; // 0x5D8 (8)
	float AimingIdleDelay; // 0x5E0 (4)
};

// Class ProjectD.PDMarkerGuide
class UPDMarkerGuide : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_Guide; // 0x290 (8)
	struct UImage IMG_Line; // 0x298 (8)
	struct UCanvasPanel CP_Info; // 0x2A0 (8)
	struct UHorizontalBox HB_Key; // 0x2A8 (8)
	struct UWidgetSwitcher WS_Key; // 0x2B0 (8)
	struct UPDTextBlock TB_Key; // 0x2B8 (8)
	struct UPDTextBlock TB_Desc; // 0x2C0 (8)
	struct UHorizontalBox HB_Type; // 0x2C8 (8)
	struct UPDTextBlock TB_Type; // 0x2D0 (8)
	struct UPDTextBlock TB_Distance; // 0x2D8 (8)
	struct USizeBox SB_User; // 0x2E0 (8)
	struct UImage IMG_UserCode; // 0x2E8 (8)
	struct UPDTextBlock TB_UserNum; // 0x2F0 (8)
	struct UPDTextBlock TB_UserName; // 0x2F8 (8)
	struct USizeBox SB_User_Item; // 0x300 (8)
	struct UImage IMG_UserCode_Item; // 0x308 (8)
	struct UPDTextBlock TB_UserNum_Item; // 0x310 (8)
	struct UPDTextBlock TB_UserName_Item; // 0x318 (8)
};

// Class ProjectD.PDMaskedText
class UPDMaskedText : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Left; // 0x288 (8)
	struct UPDTextBlock TB_Left; // 0x290 (8)
	struct UCanvasPanel CP_Right; // 0x298 (8)
	struct UPDTextBlock TB_Right; // 0x2A0 (8)
	float Width; // 0x2A8 (4)
	float Percent; // 0x2AC (4)
};

// Class ProjectD.PDMatchingUI
class UPDMatchingUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Matching; // 0x288 (8)
	struct UPDTextBlock TB_Time; // 0x290 (8)
	struct UPDTextBlock TB_Desc; // 0x298 (8)
};

// Class ProjectD.PDMatchListItem
class UPDMatchListItem : public UPDUserWidget {

public:

	struct UPDButton Btn_MatchListItem; // 0x288 (8)

	void OnClickMatch(); // Function ProjectD.PDMatchListItem.OnClickMatch(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18316D0>
};

// Class ProjectD.PDMatchListUI
class UPDMatchListUI : public UPDUserWidget {

public:

	struct UScrollBox SB_MatchIDList; // 0x288 (8)
};

// Class ProjectD.PDMatchModeList
class UPDMatchModeList : public UPDUserWidget {

public:

	struct UPDButton Btn_Matching; // 0x288 (8)
	struct UHorizontalBox HB_ModeList_3; // 0x290 (8)
	struct UPDButton Btn_Matching_FFA; // 0x298 (8)
	struct UPDButton Btn_Trainning_01; // 0x2A0 (8)
	struct UPDButton Btn_Trainning_02; // 0x2A8 (8)
	struct UPDButton Btn_Trainning_03; // 0x2B0 (8)
	struct UPDButton Btn_Trainning_04; // 0x2B8 (8)
	struct UPDButton Btn_CreateCustom; // 0x2C0 (8)
	struct UPDButton Btn_JoinCustom; // 0x2C8 (8)
	struct UCanvasPanel CP_Disabled; // 0x2D0 (8)
	struct UImage IMG_CreateCustom; // 0x2D8 (8)
	struct UImage IMG_JoinCustom; // 0x2E0 (8)
	struct UWidgetSwitcher WS_Matching_Case; // 0x2E8 (8)
	struct UCanvasPanel CP_MissionScore; // 0x2F0 (8)

	void OnUnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnUnHoveredMatchBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831970>
	void OnHoveredMatchBtn(); // Function ProjectD.PDMatchModeList.OnHoveredMatchBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831810>
	void OnClickTrainningWindfarm(); // Function ProjectD.PDMatchModeList.OnClickTrainningWindfarm(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18317D0>
	void OnClickTrainningShipyard(); // Function ProjectD.PDMatchModeList.OnClickTrainningShipyard(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18317B0>
	void OnClickTrainningDerail(); // Function ProjectD.PDMatchModeList.OnClickTrainningDerail(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831790>
	void OnClickTrainningBridge(); // Function ProjectD.PDMatchModeList.OnClickTrainningBridge(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831770>
	void OnClickMatchFFABtn(); // Function ProjectD.PDMatchModeList.OnClickMatchFFABtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831710>
	void OnClickMatchBtn(); // Function ProjectD.PDMatchModeList.OnClickMatchBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18316F0>
	void OnClickCustomMatchJoin(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchJoin(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831650>
	void OnClickCustomMatchCreate(); // Function ProjectD.PDMatchModeList.OnClickCustomMatchCreate(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1831630>
};

// Class ProjectD.PDMatchUI
class UPDMatchUI : public UPDSceneBaseUI {

public:

	struct UPDTextBlock T_Tip; // 0x288 (8)
	struct UPDTextBlock T_Level; // 0x290 (8)
	struct UCanvasPanel CP_Mode; // 0x298 (8)
	struct UPDTextBlock T_Mode; // 0x2A0 (8)
	struct UPDTextBlock T_Desc_Mode; // 0x2A8 (8)
	struct UPDTextBlock T_Timeout; // 0x2B0 (8)
	struct UWidgetSwitcher WS_AnimIndicator; // 0x2B8 (8)
	struct UWidgetSwitcher WS_SwicherCase; // 0x2C0 (8)
	struct UWidgetSwitcher WS_CharacterCase; // 0x2C8 (8)
	struct UWidgetSwitcher WS_MapCase; // 0x2D0 (8)
};

// Class ProjectD.PDMinimapUI
class UPDMinimapUI : public UPDIngameModeWidget {

public:

	struct UPDGameMapModule GameMap; // 0x290 (8)
	struct URetainerBox RB_Map; // 0x298 (8)
	struct UCanvasPanel CP_Map; // 0x2A0 (8)
	struct UPDTextBlock TB_Time; // 0x2A8 (8)
	struct UPDTextBlock TB_Coordinates; // 0x2B0 (8)
	struct UImage IMG_Weather; // 0x2B8 (8)
	struct UCanvasPanel CP_NewBadge; // 0x2C0 (8)
	float ExpandScale; // 0x2C8 (4)
	float ZoomScaleMax; // 0x2CC (4)
	float ZoomScaleMin; // 0x2D0 (4)
	float ZoomScaleStep; // 0x2D4 (4)
};

// Class ProjectD.PDMissionScoreModeUI
class UPDMissionScoreModeUI : public UPDBaseModeUI {

public:

	struct UPDSkyViewUI SkyView; // 0x4A0 (8)
	struct UPDMissionScoreRoundInfoUI RoundInfo; // 0x4A8 (8)
	struct UPDMissionScoreStatusBoard IngameStatusBoard; // 0x4B0 (8)
	struct UPDMissionScoreRoundResult RoundResult; // 0x4B8 (8)
};

// Class ProjectD.PDMissionScorePlayerEntryItem
class UPDMissionScorePlayerEntryItem : public UPDUserWidget {

public:

	struct UPDTextBlock TB_PlayerName; // 0x288 (8)
	struct UImage IMG_AgentIcon; // 0x290 (8)
	struct UImage IMG_PlayerBack; // 0x298 (8)
	struct UBorder BD_Score; // 0x2A0 (8)
	struct UProgressBar PB_Groggy; // 0x2A8 (8)
	struct UWidgetSwitcher WS_State; // 0x2B0 (8)
	struct UPDTextBlock TB_Score; // 0x2B8 (8)
	struct UPDTextBlock TB_AddScore_2; // 0x2C0 (8)
	struct UPDTextBlock TB_AddScore_3; // 0x2C8 (8)
	struct UPDTextBlock TB_AddScore_4; // 0x2D0 (8)
	struct UPDTextBlock TB_AddScore_5; // 0x2D8 (8)
	struct UPDTextBlock TB_AddScore_6; // 0x2E0 (8)
	struct TArray<struct UPDTextBlock> TB_AddScoreList; // 0x2E8 (16)
	struct UCanvasPanel CP_Item_2; // 0x2F8 (8)
	struct UImage IMG_Item_2; // 0x300 (8)
	struct UCanvasPanel CP_Item_3; // 0x308 (8)
	struct UImage IMG_Item_3; // 0x310 (8)
	struct UCanvasPanel CP_Item_4; // 0x318 (8)
	struct UImage IMG_Item_4; // 0x320 (8)
	struct UCanvasPanel CP_Item_5; // 0x328 (8)
	struct UImage IMG_Item_5; // 0x330 (8)
	struct TArray<struct UCanvasPanel> MissionItemPanelList; // 0x338 (16)
	struct TArray<struct UImage> MissionItemImgList; // 0x348 (16)
};

// Class ProjectD.PDMissionScoreRoundInfoUI
class UPDMissionScoreRoundInfoUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_Round; // 0x290 (8)
	struct UHorizontalBox HB_PlayerEntry; // 0x298 (8)
};

// Class ProjectD.PDMissionScoreRoundResult
class UPDMissionScoreRoundResult : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_RoundTitle; // 0x290 (8)
	struct UHorizontalBox HB_TopRankRoot; // 0x298 (8)
	struct TMap<int32_t, struct UPDMSRoundResultTopRank> TopRankMap; // 0x2A0 (80)
	struct UVerticalBox VB_PlayerInfoRoot; // 0x2F0 (8)
	struct TArray<struct UPDMSRoundResultPlayerInfo> PlayerInfoList; // 0x2F8 (16)
	struct UHorizontalBox HB_RoundRoot; // 0x308 (8)
	struct TArray<struct UPDResultRoundItemUI> RoundItemList; // 0x310 (16)
};

// Class ProjectD.PDMissionScoreStatusBoard
class UPDMissionScoreStatusBoard : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_PlayerList; // 0x290 (8)
	struct UHorizontalBox HB_Round; // 0x298 (8)
};

// Class ProjectD.PDModelEntity
class APDModelEntity : public UActor {

public:

	struct TArray<struct UStaticMeshComponent> StaticMeshCompList; // 0x348 (16)
	struct USkeletalMeshComponent SkeletalMeshComp; // 0x358 (8)
};

// Class ProjectD.PDWeaponControlComponent
class UPDWeaponControlComponent : public UActorComponent {

public:

	struct APDPlayerCharacter OwnerPlayer; // 0xC0 (8)
	struct APDTutorialNPC OwnerTutorialNPC; // 0xC8 (8)
	struct APDCharacterEntity OwnerEntity; // 0xD0 (8)
	struct UPDStateComponent PlayerStateComponent; // 0xD8 (8)
};

// Class ProjectD.PDMPWeaponControlComponent
class UPDMPWeaponControlComponent : public UPDWeaponControlComponent {

public:

	struct APDMainPlayerCharacter OwnerMainPlayer; // 0x108 (8)
	struct UPDMainPlayerStateComponent MainPlayerStateComponent; // 0x110 (8)
};

// Class ProjectD.PDStatusBoardPlayerInfoBase
class UPDStatusBoardPlayerInfoBase : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_PlayerState; // 0x288 (8)
	struct UProgressBar PB_Groggy; // 0x290 (8)
	struct UPDTextBlock T_PlayerName; // 0x298 (8)
	struct UPDTextBlock T_KillCount; // 0x2A0 (8)
	struct UPDTextBlock T_AssistCount; // 0x2A8 (8)
	struct UPDTextBlock T_DefenceCount; // 0x2B0 (8)
	struct UPDTextBlock T_AttackCount; // 0x2B8 (8)
	struct UImage IMG_Ping_01; // 0x2C0 (8)
	struct UImage IMG_Ping_02; // 0x2C8 (8)
	struct UImage IMG_Ping_03; // 0x2D0 (8)
	struct UImage IMG_Ping_04; // 0x2D8 (8)
	struct UImage IMG_Ping_05; // 0x2E0 (8)
	struct UPDButton BTN_Report; // 0x2E8 (8)
	struct TArray<struct UImage> PingImgList; // 0x2F0 (16)
	struct UImage IMG_Clan_BG; // 0x300 (8)
	struct UImage IMG_Clan; // 0x308 (8)
	struct UBorder B_ToggleChat_Line; // 0x310 (8)
	struct UCheckBox CB_ChatBlock; // 0x318 (8)
	struct UBorder B_TogglePing_Line; // 0x320 (8)
	struct UCheckBox CB_PingBlock; // 0x328 (8)
	struct FSlateColor NormalTextColor; // 0x330 (40)
	struct FSlateColor DeathTextColor; // 0x358 (40)

	void OnTogglePingBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1848250>
	void OnToggleChatBlockChanged(bool Val); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18481C0>
	void OnClicked_BTN_Report(); // Function ProjectD.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1848160>
};

// Class ProjectD.PDMSStatusBoardPlayerInfo
class UPDMSStatusBoardPlayerInfo : public UPDStatusBoardPlayerInfoBase {

public:

	struct UImage IMG_SlotBg_Me; // 0x398 (8)
	struct UPDTextBlock T_PlayerRank; // 0x3A0 (8)
	struct UPDTextBlock T_Point; // 0x3A8 (8)
	struct UPDTextBlock T_MissionCount; // 0x3B0 (8)
};

// Class ProjectD.PDMSRoundResultPlayerInfo
class UPDMSRoundResultPlayerInfo : public UPDMSStatusBoardPlayerInfo {

public:

	struct UWidgetSwitcher WS_Rank; // 0x3B8 (8)
	struct UPDTextBlock T_Point_Get; // 0x3C0 (8)
};

// Class ProjectD.PDMSRoundResultTopRank
class UPDMSRoundResultTopRank : public UPDUserWidget {

public:

	struct USizeBox SB_CharacterIcon; // 0x288 (8)
	struct UImage IMG_Portrait; // 0x290 (8)
	struct UImage IMG_MainPlayer; // 0x298 (8)
	struct UImage IMG_Background; // 0x2A0 (8)
	struct UWidgetSwitcher WS_Rank; // 0x2A8 (8)
	struct UPDTextBlock TB_Rank; // 0x2B0 (8)
	struct UCanvasPanel CP_Label; // 0x2B8 (8)
	struct UPDTextBlock TB_Nickname; // 0x2C0 (8)
	struct UImage IMG_ClanMarkBG; // 0x2C8 (8)
	struct UImage IMG_ClanMarkFG; // 0x2D0 (8)
	int32_t RankNumber; // 0x2D8 (4)
};

// Class ProjectD.PDMSStatusBoardRoundItem
class UPDMSStatusBoardRoundItem : public UPDUserWidget {

public:

	struct UPDTextBlock T_RoundInfo; // 0x288 (8)
	struct UWidgetSwitcher WS_ResultType; // 0x290 (8)
	struct UImage IMG_SLotBg; // 0x298 (8)
};

// Class ProjectD.PDMultiSplineComponent
class UPDMultiSplineComponent : public USplineComponent {

public:

	struct TArray<float> SpeedRateList; // 0x4F8 (16)
};

// Class ProjectD.PDNameTagUI
class UPDNameTagUI : public UPDHUDIconBaseUI {

public:

	struct FSlateColor MyTeamColor; // 0x2A0 (40)
	struct FSlateColor EnemyTeamColor; // 0x2C8 (40)
	struct UPDTextBlock TB_UserName; // 0x2F0 (8)
	struct UWidgetSwitcher WS_UserState; // 0x2F8 (8)
	struct UProgressBar PB_Health; // 0x300 (8)
	struct UPDAttackDamageIndicatorUI AttackDamageIndicator; // 0x308 (8)
};

// Class ProjectD.PDNameTagAllyUI
class UPDNameTagAllyUI : public UPDNameTagUI {

public:

	struct UCanvasPanel CP_InScreen; // 0x320 (8)
	struct UCanvasPanel CP_OutScreen; // 0x328 (8)
	struct UWidgetSwitcher WS_UserSubState; // 0x330 (8)
	struct UImage IMG_UserCode; // 0x338 (8)
	struct UImage IMG_Height; // 0x340 (8)
	struct UPDTextBlock TB_UserNum; // 0x348 (8)
	struct USizeBox SB_StateItem; // 0x350 (8)
	struct UImage IMG_StateItem; // 0x358 (8)
	struct UImage IMG_StateItem_FX1; // 0x360 (8)
	struct UImage IMG_StateItem_FX2; // 0x368 (8)
	struct UImage IMG_Bomb; // 0x370 (8)
	struct UPDArmorGauge ArmorGauge; // 0x378 (8)
	struct UPDCircleProgressModule CPM_Groggy; // 0x380 (8)
	struct UProgressBar PB_Groggy; // 0x388 (8)
	struct UCanvasPanel CP_SelfRevivalKit; // 0x390 (8)
	struct UPDCheerMarkFx CheerFx; // 0x398 (8)
	struct UBorder BD_OutArrow; // 0x3A0 (8)
	struct UImage IMG_OutArrow; // 0x3A8 (8)
	struct UImage IMG_OutDamage; // 0x3B0 (8)
	struct UPDCircleProgressModule CPM_OutGroggy; // 0x3B8 (8)
	struct UImage IMG_OutGroggy; // 0x3C0 (8)
	struct UImage IMG_OutBomb; // 0x3C8 (8)
	struct UCanvasPanel CP_Medal; // 0x3D0 (8)
	struct UImage IMG_Medal; // 0x3D8 (8)

	void AdjustStateImageRatio(); // Function ProjectD.PDNameTagAllyUI.AdjustStateImageRatio(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835450>
};

// Class ProjectD.PDNameTagEnemyUI
class UPDNameTagEnemyUI : public UPDNameTagUI {

public:

	struct UCanvasPanel CP_InScreen; // 0x320 (8)
	struct UCanvasPanel CP_OutScreen; // 0x328 (8)
	struct UCanvasPanel CP_MissionLeptonOwner; // 0x330 (8)
	struct UCanvasPanel CP_MissionTarget; // 0x338 (8)
};

// Class ProjectD.PDNeutralObject
class APDNeutralObject : public UActor {

public:

	struct UPDSkeletalMeshComponent Mesh; // 0x230 (8)

	void OnAssetsLoaded(struct TArray<struct TSoftObjectPtr<Object>>& InAssets); // Function ProjectD.PDNeutralObject.OnAssetsLoaded(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1835470>
};

// Class ProjectD.PDNeutralObjectGroup
class APDNeutralObjectGroup : public UActor {

public:

	struct TArray<struct FVector> SpawnPoints; // 0x220 (16)
	struct TMap<uint64_t, char> SpawnNumByIndex; // 0x240 (80)
	float PatrollRadius; // 0x290 (4)
	float EventHeight; // 0x294 (4)
	float LandableRadius; // 0x298 (4)
	bool bAutoActive; // 0x29C (1)
	bool bDisablePatroll; // 0x29D (1)
	bool bShowDebugLines; // 0x29E (1)
};

// Class ProjectD.PDNickNameCreateUI
class UPDNickNameCreateUI : public UPDSceneBaseUI {

public:

	struct UPDButton OKBtn; // 0x290 (8)
	struct UEditableTextBox ET_NickName; // 0x298 (8)
	struct UCanvasPanel CP_Alert; // 0x2A0 (8)
	struct UPDTextBlock TB_Alert; // 0x2A8 (8)

	void OnClickOKBtn(); // Function ProjectD.PDNickNameCreateUI.OnClickOKBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1835610>
	void OnChangeText(struct FText& InText); // Function ProjectD.PDNickNameCreateUI.OnChangeText(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1816600>
};

// Class ProjectD.PDNotificationAlert
class UPDNotificationAlert : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Alert; // 0x290 (8)
	struct UPDTextBlock TB_Text; // 0x298 (8)
	struct UProgressBar PB_Alert; // 0x2A0 (8)
	struct UBorder BD_Desc; // 0x2A8 (8)
	struct UPDTextBlock TB_Desc; // 0x2B0 (8)
};

// Class ProjectD.PDNPCAnimInstance
class UPDNPCAnimInstance : public UAnimInstance {

public:

	struct APDTutorialNPC Owner; // 0x268 (8)
	enum class EPDLocoType LocoType; // 0x270 (1)
	bool bIsRagdoll; // 0x271 (1)
	struct UAnimMontage Groggy_Enter_Random_Hit_Head; // 0x278 (8)
	struct UAnimMontage Groggy_Enter_Random_Hit_Chest; // 0x280 (8)
	struct UAnimMontage Groggy_Enter_Random_Hit_Abdomen; // 0x288 (8)
	struct UAnimMontage Groggy_Enter_Random_Hit_LeftLeg; // 0x290 (8)
	struct UAnimMontage Groggy_Enter_Random_Hit_RightLeg; // 0x298 (8)
	struct UAnimMontage Groggy_Exit; // 0x2A0 (8)
	struct UAnimMontage Death_Random; // 0x2A8 (8)
	struct UAnimMontage Death_GROGGY_Random; // 0x2B0 (8)
	struct UAnimMontage Hit_A; // 0x2B8 (8)
	struct UAnimMontage Hit_B; // 0x2C0 (8)
	struct UAnimMontage Hit_C; // 0x2C8 (8)
};

// Class ProjectD.PDObjectTagSiteUI
class UPDObjectTagSiteUI : public UPDScreenMarkerInteractive {

public:

	struct UImage IMG_ObjectIcon; // 0x2A8 (8)
	struct UPDTextBlock TB_Distance; // 0x2B0 (8)
	struct UCanvasPanel CP_OutArrow; // 0x2B8 (8)
	struct UPDTextBlock TB_Tag; // 0x2C0 (8)
	struct UWidgetSwitcher WS_Type; // 0x2C8 (8)
	struct UCanvasPanel CP_Reply; // 0x2D0 (8)
	struct UPDPingReplyUI Reply01; // 0x2D8 (8)
	struct UPDPingReplyUI Reply02; // 0x2E0 (8)
	struct UPDPingReplyUI Reply03; // 0x2E8 (8)
	struct UPDPingReplyUI Reply04; // 0x2F0 (8)
	struct UPDPingReplyUI Reply05; // 0x2F8 (8)
	struct TArray<struct UPDPingReplyUI> ReplyList; // 0x300 (16)
};

// Class ProjectD.PDObjectTagUI
class UPDObjectTagUI : public UPDScreenMarkerInteractive {

public:

	struct UImage IMG_ObjectIcon; // 0x2A8 (8)
	struct UPDTextBlock TB_Distance; // 0x2B0 (8)
	struct UCanvasPanel CP_OutArrow; // 0x2B8 (8)
};

// Class ProjectD.PDOptionContent
class UPDOptionContent : public UPDUserWidget {

public:

	struct USizeBox SB_OptionContents; // 0x298 (8)
	struct UHorizontalBox HB_Contents; // 0x2A0 (8)
	struct UVerticalBox VB_Image; // 0x2A8 (8)
	struct UCanvasPanel CP_ToolTip; // 0x2B0 (8)
	struct UCanvasPanel CP_Overlap; // 0x2B8 (8)
	struct UPDTextBlock TB_OverlapToolTip; // 0x2C0 (8)
	struct UPDImage IMG_OverlapEnable; // 0x2C8 (8)
	struct UPDImage IMG_OverlapWarning; // 0x2D0 (8)
	struct UPDImage IMG_OverlapWarningToggle; // 0x2D8 (8)
	struct UWidgetSwitcher WS_Contents; // 0x2E0 (8)
	struct UPDComboBox ComboBoxCtrl; // 0x2E8 (8)
	struct UPDSlider SliderCtrl; // 0x2F0 (8)
	struct UPDInputKeySelector NewInputKeySelectorCtrl; // 0x2F8 (8)
	struct UHorizontalBox HB_ToggleTabs; // 0x300 (8)
	struct UPDInputKeySelector NewToggleInputKeySelectorCtrl; // 0x308 (8)
	struct UPDCheckBox CheckBoxCtrl; // 0x310 (8)
	struct UPDTabButton BaseTabBtn; // 0x318 (8)
	struct UPDTextBlock TB_ContentName; // 0x320 (8)
	struct UHorizontalBox HB_Tabs; // 0x328 (8)
	struct UPDButton OneBtn; // 0x330 (8)
	struct UBorder BD_MainImage; // 0x338 (8)
	struct UImage Img_Underline; // 0x340 (8)
	struct UPDTabButtonGroup TabBtnGroup; // 0x358 (8)

	void OnInputKeySelected(struct FInputChord InInputChord); // Function ProjectD.PDOptionContent.OnInputKeySelected(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835670>
};

// Class ProjectD.PDOptionPopupUI
class UPDOptionPopupUI : public UPDPopupBaseUI {

public:

	struct UPDButton DefaultBtn; // 0x2B8 (8)
	struct UPDButton TabDefaultBtn; // 0x2C0 (8)
	struct UPDButton ConfirmBtn; // 0x2C8 (8)
	struct UPDButton CancelBtn; // 0x2D0 (8)
	struct UPDTabButton DisplaySettingBtn; // 0x2D8 (8)
	struct UPDTabButton SoundSettingBtn; // 0x2E0 (8)
	struct UPDTabButton ControlSettingBtn; // 0x2E8 (8)
	struct UPDTabButton GameplaySettingBtn; // 0x2F0 (8)
	struct UPDTabButtonGroup OptionTabBtnGroup; // 0x2F8 (8)
	struct UWidgetSwitcher OptionPageSwitcher; // 0x300 (8)
	struct UPDDisplayOptionUI DisplayOption; // 0x308 (8)
	struct UPDSoundOptionUI SoundOption; // 0x310 (8)
	struct UPDControlOptionUI ControlOption; // 0x318 (8)
	struct UPDGameplayOptionUI GamePlayOption; // 0x320 (8)
	struct UPDTextBlock TB_DisableTooltip; // 0x328 (8)
	struct UPDImage IMG_DisableConfirm; // 0x330 (8)
	struct UHorizontalBox HB_Ratings; // 0x338 (8)
	struct TMap<enum class EOptionType, struct UPDOptionUIBase> OptionPages; // 0x340 (80)

	void OnClickTabDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickTabDefaultButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835650>
	void OnClickSoundButton(); // Function ProjectD.PDOptionPopupUI.OnClickSoundButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835630>
	void OnClickGameplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickGameplayButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18355F0>
	void OnClickDisplayButton(); // Function ProjectD.PDOptionPopupUI.OnClickDisplayButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18355D0>
	void OnClickDefaultButton(); // Function ProjectD.PDOptionPopupUI.OnClickDefaultButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18355B0>
	void OnClickControlsButton(); // Function ProjectD.PDOptionPopupUI.OnClickControlsButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835590>
	void OnClickConfirmButton(); // Function ProjectD.PDOptionPopupUI.OnClickConfirmButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835570>
	void OnClickCancelButton(); // Function ProjectD.PDOptionPopupUI.OnClickCancelButton(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1835550>
};

// Class ProjectD.PDOutGameCameraActor
class APDOutGameCameraActor : public ACameraActor {

public:

	enum class EOutGameCameraType ECameraType; // 0x7B0 (1)
};

// Class ProjectD.PDOutgameCharacterSpawn
class APDOutgameCharacterSpawn : public UActor {

public:

	struct UStaticMeshComponent StaticMeshComp; // 0x220 (8)
	enum class EOutgameCharacterSpawnGroup Grouptype; // 0x228 (1)
	int32_t Index; // 0x22C (4)
};

// Class ProjectD.PDOutGameTopMenu
class UPDOutGameTopMenu : public UPDUserWidget {

public:

	struct UPDButton BTN_GoToFindPartyPage; // 0x288 (8)
	struct UWidgetSwitcher WS_RegisterMercenary; // 0x290 (8)
	struct UImage IMG_NewInvite; // 0x298 (8)
	struct UCanvasPanel CP_TopMenu; // 0x2A0 (8)
	struct UCanvasPanel CP_InfoMenu; // 0x2A8 (8)
	struct UCanvasPanel CP_ContextMenu; // 0x2B0 (8)
	struct UImage IMG_New; // 0x2B8 (8)
	struct UPDButton Btn_Customize; // 0x2C0 (8)
	struct UPDButton Btn_AgentReport; // 0x2C8 (8)
	struct UPDButton Btn_Record; // 0x2D0 (8)
	struct UPDButton Btn_Clan; // 0x2D8 (8)
	struct UImage IMG_BtnActiveBar_Customizing; // 0x2E0 (8)
	struct UImage IMG_BtnActiveBar_Training; // 0x2E8 (8)
	struct UImage IMG_BtnActiveBar_GameGuide; // 0x2F0 (8)
	struct UImage IMG_BtnActiveBar_Clan; // 0x2F8 (8)
	struct UPDButton Btn_Community; // 0x300 (8)
	struct UPDButton Btn_Option; // 0x308 (8)
	struct UPDButton Btn_BattlePass; // 0x310 (8)
	struct UPDButton Btn_Tutorial; // 0x318 (8)
	struct UPDButton Btn_Setting; // 0x320 (8)
	struct UPDButton Btn_Exit; // 0x328 (8)
	struct USizeBox SB_BattlePass; // 0x330 (8)
	struct UImage IMG_SlotDivider_1; // 0x338 (8)
	struct UPDTextBlock TB_Money; // 0x340 (8)
	struct UPDPartySlotListItemUI PartySlot_2; // 0x348 (8)
	struct UPDPartySlotListItemUI PartySlot_3; // 0x350 (8)
	struct UPDPartySlotListItemUI PartySlot_4; // 0x358 (8)
	struct UPDPartySlotListItemUI PartySlot_5; // 0x360 (8)
	struct UPDPartySlotListItemUI PartySlot_6; // 0x368 (8)
	struct UCanvasPanel CP_MainMenu; // 0x370 (8)
	struct UImage IMG_ClanMarkBG; // 0x378 (8)
	struct UImage IMG_ClanMarkFG; // 0x380 (8)
	struct UPDTextBlock TB_Name; // 0x388 (8)
	struct UPDTextBlock TB_ClanName; // 0x390 (8)
	struct UHorizontalBox HB_ClanInfo; // 0x398 (8)
	struct UCanvasPanel CP_ClanImg; // 0x3A0 (8)
	struct UHorizontalBox HB_UserData; // 0x3B0 (8)
	struct UImage IMG_Manner; // 0x3B8 (8)
	struct UImage IMG_Medal1; // 0x3C0 (8)
	struct UImage IMG_Medal2; // 0x3C8 (8)
	struct UImage IMG_Medal3; // 0x3D0 (8)
	struct UCanvasPanel CP_ToolTip; // 0x3D8 (8)
	struct UPDTextBlock TB_DataName; // 0x3E0 (8)
	struct UPDTextBlock TB_DataValue; // 0x3E8 (8)
	struct UPDButton Btn_MailBox; // 0x3F0 (8)
	struct UImage IMG_NewMail; // 0x3F8 (8)
	struct UPDMailNotificationUI MailNotificationUI; // 0x400 (8)
	struct UPDButton Btn_LeaveParty; // 0x408 (8)
	struct UCanvasPanel CP_MannerToolTip; // 0x410 (8)
	struct UPDTextBlock TB_PointLevel; // 0x418 (8)
	struct TArray<struct UPDPartySlotListItemUI> PartySlotArray; // 0x420 (16)

	void SetNewMailLabelVisible(bool bShow); // Function ProjectD.PDOutGameTopMenu.SetNewMailLabelVisible(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838E70>
	void SendPartyInviteInfo(bool bAccept, struct FString PartyID, int64_t USN, struct FString Nickname); // Function ProjectD.PDOutGameTopMenu.SendPartyInviteInfo(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838C60>
	void SendCustomRoomInviteInfo(bool bAccept); // Function ProjectD.PDOutGameTopMenu.SendCustomRoomInviteInfo(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838BD0>
	void QuitGame(); // Function ProjectD.PDOutGameTopMenu.QuitGame(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838BB0>
	void OnUnhoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverRecordBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838B90>
	void OnUnhoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverClanBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838B70>
	void OnUnhoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentReportBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838B50>
	void OnUnhoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838B30>
	void OnHoverRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverRecordBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838B10>
	void OnHoverClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverClanBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838AF0>
	void OnHoverAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentReportBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838AD0>
	void OnHoverAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnHoverAgentBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838AB0>
	void OnGuidePageClosed(); // Function ProjectD.PDOutGameTopMenu.OnGuidePageClosed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838A90>
	void OnClickSettingBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickSettingBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838A70>
	void OnClickRecordBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickRecordBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838A50>
	void OnClickOptionBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickOptionBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838A30>
	void OnClickMailBoxBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickMailBoxBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838A10>
	void OnClickLeavePartyBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickLeavePartyBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18389F0>
	void OnClickGoToFindPartyPageButton(); // Function ProjectD.PDOutGameTopMenu.OnClickGoToFindPartyPageButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18389D0>
	void OnClickExitBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickExitBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18389B0>
	void OnClickCommunityBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickCommunityBtn(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x181A390>
	void OnClickClanBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickClanBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838990>
	void OnClickBattlePassBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickBattlePassBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1838970>
	void OnClickAgentReportBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentReportBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickAgentBtn(); // Function ProjectD.PDOutGameTopMenu.OnClickAgentBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1819F20>
	void ExitParty(); // Function ProjectD.PDOutGameTopMenu.ExitParty(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18388B0>
};

// Class ProjectD.PDOwnLeptonListItem
class UPDOwnLeptonListItem : public UPDUserWidget {

public:

	struct UImage IMG_Item; // 0x290 (8)
	struct UImage IMG_Lock; // 0x298 (8)
	struct UImage IMG_New; // 0x2A0 (8)
	struct UImage IMG_PermanentIcon; // 0x2A8 (8)
	struct UCanvasPanel CP_Unlock; // 0x2B0 (8)
	struct UPDTextBlock TB_Name; // 0x2B8 (8)
	struct UPDTextBlock TB_Cost; // 0x2C0 (8)
	struct UBorder BD_Outline; // 0x2C8 (8)
	struct UBorder BD_EquipOutline; // 0x2D0 (8)
	struct UDragDropOperation DragDropOperation; // 0x2D8 (8)
};

// Class ProjectD.PDParticleModule_Collision
class UPDParticleModule_Collision : public UParticleModuleCollision {

public:

	float BounceOffsetWhenStuck; // 0x190 (4)
};

// Class ProjectD.PDPartySlotListItemUI
class UPDPartySlotListItemUI : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_Leader; // 0x2C0 (8)
	struct UWidgetSwitcher WS_SlotState; // 0x2C8 (8)
	struct UWidgetSwitcher WS_Voice; // 0x2D0 (8)
	struct UImage IMG_Face; // 0x2D8 (8)
	struct UPDTextBlock T_Name; // 0x2E0 (8)
	struct UPDButton SlotButton; // 0x2E8 (8)
	struct UImage IMG_Hover; // 0x2F0 (8)
	struct UPDTextBlock T_InviteName; // 0x2F8 (8)

	void OnClickSlot(); // Function ProjectD.PDPartySlotListItemUI.OnClickSlot(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x180DB20>
	void KickPartyMember(int64_t InPartyUSN); // Function ProjectD.PDPartySlotListItemUI.KickPartyMember(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18388D0>
};

// Class ProjectD.PDPerkEntryItem
class UPDPerkEntryItem : public UPDUserWidget {

public:

	struct UImage IMG_Icon; // 0x288 (8)
	struct UPDTextBlock TB_Name; // 0x290 (8)
	struct UPDCircleProgress PDCP_ActiveTime; // 0x298 (8)
	struct UPDCircleProgress PDCP_Cooltime; // 0x2A0 (8)
	struct UBorder BD_Ready; // 0x2A8 (8)
	struct UBorder BD_Stack; // 0x2B0 (8)
	struct UPDTextBlock TB_Num; // 0x2B8 (8)
	struct UBorder BD_PerkKey; // 0x2C0 (8)
	struct UPDTextBlock TB_Key; // 0x2C8 (8)
	struct UPDTextBlock TB_CoolTime; // 0x2D0 (8)
};

// Class ProjectD.PDPerkNotifySlot
class UPDPerkNotifySlot : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Message; // 0x288 (8)
};

// Class ProjectD.PDPerkNotifyUI
class UPDPerkNotifyUI : public UPDIngameModeWidget {

public:

	struct UVerticalBox HB_PerkNotifyContainer; // 0x290 (8)
	struct UImage IMG_Icon; // 0x298 (8)
	struct FMargin SlotPadding; // 0x2A0 (16)
	int32_t MaxSlotCount; // 0x2B0 (4)
	float DefaultDuration; // 0x2B4 (4)
};

// Class ProjectD.PDPerkTooltipItem
class UPDPerkTooltipItem : public UPDUserWidget {

public:

	struct UImage IMG_DescIcon; // 0x290 (8)
	struct UPDTextBlock T_PerkName; // 0x298 (8)
	struct UPDTextBlock T_PerkDesc; // 0x2A0 (8)
	struct UCanvasPanel CP_Empty; // 0x2A8 (8)
	struct UCanvasPanel CP_Normal; // 0x2B0 (8)
};

// Class ProjectD.PDPerkUI
class UPDPerkUI : public UPDIngameModeWidget {

public:

	struct UImage IMG_Icon; // 0x290 (8)
	struct UPDTextBlock TB_PerkAlert; // 0x298 (8)
	struct UPDTextBlock TB_PerkDesc; // 0x2A0 (8)
	struct UHorizontalBox HB_PerkAlert; // 0x2A8 (8)
	struct UHorizontalBox HB_PerkContainer; // 0x2B0 (8)
	float PerkDetailPadding; // 0x2B8 (4)
	struct UHorizontalBox HB_Signature; // 0x2C0 (8)
	struct UPDTextBlock TB_SignatureDesc; // 0x2C8 (8)
	struct UCanvasPanel CP_SIG_Key; // 0x2D0 (8)
	struct UPDTextBlock TB_SIG_KeyName; // 0x2D8 (8)
	struct USizeBox SB_Mouse; // 0x2E0 (8)
	struct UWidgetSwitcher WS_Mouse; // 0x2E8 (8)
	struct UCanvasPanel CP_Buff01; // 0x2F0 (8)
	struct UCanvasPanel CP_Buff02; // 0x2F8 (8)
	struct UCanvasPanel CP_Buff03; // 0x300 (8)
	struct UCanvasPanel CP_Buff04; // 0x308 (8)
	struct UCanvasPanel CP_Buff05; // 0x310 (8)
	struct UCanvasPanel CP_Buff06; // 0x318 (8)
	struct UImage IMG_BIcon01; // 0x330 (8)
	struct UImage IMG_BIcon02; // 0x338 (8)
	struct UImage IMG_BIcon03; // 0x340 (8)
	struct UImage IMG_BIcon04; // 0x348 (8)
	struct UImage IMG_BIcon05; // 0x350 (8)
	struct UImage IMG_BIcon06; // 0x358 (8)
	struct TArray<struct UImage> CP_BuffIMGList; // 0x360 (16)
	struct TArray<struct UPDPerkEntryItem> PerkEntryItems; // 0x3C0 (16)
};

// Class ProjectD.PDPersonalMissionModule
class UPDPersonalMissionModule : public UPDUserWidget {

public:

	struct FSlateColor MissionClearColor; // 0x290 (40)
	struct FSlateColor MissionFailColor; // 0x2B8 (40)
	struct FSlateColor MissionErrorColor; // 0x2E0 (40)
	struct UProgressBar PB_MissionTimer; // 0x308 (8)
	struct UCanvasPanel CP_MissionInfo; // 0x310 (8)
	struct UPDTextBlock TB_StateTitle; // 0x318 (8)
	struct UPDTextBlock TB_StateDesc; // 0x320 (8)
	struct UCanvasPanel CP_StateInfo; // 0x328 (8)
	struct UPDTextBlock TB_MissionCount; // 0x330 (8)
	struct UPDTextBlock TB_MissionDesc; // 0x338 (8)
	struct UPDTextBlock TB_MissionTime; // 0x340 (8)
	struct UHorizontalBox HB_RewardItem; // 0x348 (8)
};

// Class ProjectD.PDPersonalMissionRewardModule
class UPDPersonalMissionRewardModule : public UPDUserWidget {

public:

	struct UCanvasPanel CP_RewardCoin; // 0x288 (8)
	struct UCanvasPanel CP_RewardScore; // 0x290 (8)
	struct UImage IMG_RewardItem; // 0x298 (8)
	struct UPDTextBlock TB_RewardText; // 0x2A0 (8)
};

// Class ProjectD.PDPersonalMissionUI
class UPDPersonalMissionUI : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_MissionList; // 0x290 (8)
	enum class EHorizontalAlignment MissionHAlign; // 0x298 (1)
	struct FMargin MissionPadding; // 0x29C (16)
};

// Class ProjectD.PDPingIndicatorUI
class UPDPingIndicatorUI : public UPDScreenMarkerInteractive {

public:

	struct UCanvasPanel CP_Normal; // 0x2A8 (8)
	struct UImage IMG_Icon; // 0x2B0 (8)
	struct UImage IMG_IconFx; // 0x2B8 (8)
	struct UImage IMG_Pole; // 0x2C0 (8)
	struct UImage IMG_Point; // 0x2C8 (8)
	struct UCanvasPanel CP_Info; // 0x2D0 (8)
	struct UCanvasPanel CP_Item; // 0x2D8 (8)
	struct UImage IMG_Item; // 0x2E0 (8)
	struct UScaleBox SB_Weapon; // 0x2E8 (8)
	struct UImage IMG_Weapon; // 0x2F0 (8)
	struct USizeBox SB_ItemFx; // 0x2F8 (8)
	struct UScaleBox SB_WeaponFx; // 0x300 (8)
	struct UImage IMG_ItemFx; // 0x308 (8)
	struct UCanvasPanel CP_OutArrow; // 0x310 (8)
	struct UBorder BD_Distance; // 0x318 (8)
	struct UPDTextBlock TB_Distance; // 0x320 (8)
	struct UBorder BD_UserColor; // 0x328 (8)
	struct UPDTextBlock TB_UserNum; // 0x330 (8)
};

// Class ProjectD.PDPingLog
class UPDPingLog : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_LogList; // 0x298 (8)
	enum class EHorizontalAlignment LogHAlign; // 0x2A0 (1)
	struct FMargin LogPadding; // 0x2A4 (16)
	bool InvertToAdd; // 0x2B4 (1)
	int32_t MaxLogCount; // 0x2B8 (4)
	float DefaultDuration; // 0x2BC (4)
	bool AutoRemove; // 0x2C0 (1)
};

// Class ProjectD.PDPingLogItem
class UPDPingLogItem : public UPDUserWidget {

public:

	struct URichTextBlock RTB_Content; // 0x288 (8)
	struct UBorder BD_Background; // 0x290 (8)
};

// Class ProjectD.PDPingReplyUI
class UPDPingReplyUI : public UPDUserWidget {

public:

	struct UImage IMG_Mark; // 0x288 (8)
	struct UImage IMG_Mark_FX; // 0x290 (8)
	struct UCanvasPanel CP_Fx; // 0x298 (8)
};

// Class ProjectD.PDPlayerAnimInstanceFPDummy
class UPDPlayerAnimInstanceFPDummy : public UAnimInstance {

public:

	struct FPDPWUsingInABPAnimDatas PWAnimDatas; // 0x268 (296)
	struct FPDPCUsingInABPAnimDatas PCAnimDatas; // 0x390 (96)
	enum class EPDAnimset AnimSet; // 0x3F0 (1)
	enum class EPDLocoState LocoState; // 0x3F1 (1)
	enum class EPDMovementState MovementState; // 0x3F2 (1)
	enum class EPDStanceState StanceState; // 0x3F3 (1)
	float GaitValue; // 0x3F4 (4)
	float Direction; // 0x3F8 (4)
	struct FRotator ControllRotation; // 0x3FC (12)
	struct FVector ControllLocation; // 0x408 (12)
	struct FRotator WeaponRotation; // 0x414 (12)
	struct FVector WeaponAddOffset; // 0x420 (12)
	struct FRotator LeanRotationOffset; // 0x42C (12)
	struct FRotator CameraLeanRotationOffset; // 0x438 (12)
	struct FVector R_Translate; // 0x444 (12)
	float DefaultRBoneYOffset; // 0x450 (4)
	bool bAimingIdleHolding; // 0x454 (1)
	struct APDPlayerCharacter OwnerPlayerCharacter; // 0x458 (8)
	struct UPDStateComponent OwnerStateComponent; // 0x460 (8)
	bool bDrawWeaponMontagePlayed; // 0x468 (1)
	struct UBlendSpace FireAnim; // 0x470 (8)
	struct UPDFireRecoilLevel FireRecoilLevel; // 0x478 (8)
	struct UPDFireRecoilLevelData RecoilData; // 0x480 (8)
	float LeanBlendMaxTime; // 0x490 (4)
	struct FVector LeanOffset; // 0x494 (12)
	float LeanWeaponAngle; // 0x4A0 (4)
	float LeanCameraAngle; // 0x4A4 (4)
	struct UCurveBase LeanOffsetCurve; // 0x4A8 (8)
	struct UCurveFloat LeanWeaponCurve; // 0x4B0 (8)
	struct UCurveFloat LeanCameraCurve; // 0x4B8 (8)
	float WeaponRollAtMove_Angle; // 0x508 (4)
	struct UCurveFloat WeaponRollAtMove_InCurve; // 0x510 (8)
	struct UCurveFloat WeaponRollAtMove_OutCurve; // 0x518 (8)
	float WeaponRollAtMove_InTime; // 0x520 (4)
	float WeaponRollAtMove_OutTime; // 0x524 (4)
	struct UCurveFloat WeaponRollAtMove_CurrCurve; // 0x528 (8)
	struct FVector StoppingPowerLocation; // 0x548 (12)
	struct FRotator StoppingPowerRotation; // 0x554 (12)
	struct FRotator StoppingPowerRotationWeapon; // 0x560 (12)
};

// Class ProjectD.PDPlayerCheer
class UPDPlayerCheer : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Cheer1; // 0x288 (8)
	struct UCanvasPanel CP_Cheer2; // 0x290 (8)
	struct UCanvasPanel CP_Cheer3; // 0x298 (8)
	struct UPDTextBlock TB_CheerCount1; // 0x2A0 (8)
	struct UPDTextBlock TB_CheerCount2; // 0x2A8 (8)
	struct UPDTextBlock TB_CheerCount3; // 0x2B0 (8)
	struct UPDTextBlock TB_CheerCount1_2; // 0x2B8 (8)
	struct UPDTextBlock TB_CheerCount2_2; // 0x2C0 (8)
	struct UPDTextBlock TB_CheerCount3_2; // 0x2C8 (8)
};

// Class ProjectD.PDPlayerEntryItemBaseUI
class UPDPlayerEntryItemBaseUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_PlayerName; // 0x288 (8)
	struct UImage IMG_AgentIcon; // 0x290 (8)
	struct UImage IMG_PlayerBack; // 0x298 (8)
	struct UProgressBar PB_Groggy; // 0x2A0 (8)
	struct UWidgetSwitcher WS_State; // 0x2A8 (8)
};

// Class ProjectD.PDPlayerEntryItemAllyUI
class UPDPlayerEntryItemAllyUI : public UPDPlayerEntryItemBaseUI {

public:

	struct UPDTextBlock TB_UserNum; // 0x2C8 (8)
	struct UProgressBar PB_Health; // 0x2D0 (8)
	struct UImage IMG_State; // 0x2D8 (8)
	struct UWidgetSwitcher WS_Voice; // 0x2E0 (8)
	struct UPDPingIndicatorUI PingState; // 0x2E8 (8)
};

// Class ProjectD.PDPlayerEquipmentDetail
class UPDPlayerEquipmentDetail : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Num_Active; // 0x288 (8)
	struct UPDTextBlock TB_ItemName; // 0x290 (8)
	struct UImage IMG_Logo; // 0x298 (8)
	struct UImage IMG_Icon_ActiveWp; // 0x2A0 (8)
	struct UImage IMG_Icon_ActiveMelee; // 0x2A8 (8)
	struct UImage IMG_Icon_ActiveSub; // 0x2B0 (8)
	struct USizeBox SB_ActiveMain; // 0x2B8 (8)
	struct USizeBox SB_ActiveSub; // 0x2C0 (8)
	struct UPDTextBlock TB_CurrentCount; // 0x2C8 (8)
	struct UPDTextBlock TB_TotalCount; // 0x2D0 (8)
	struct UPDTextBlock TB_FireMode; // 0x2D8 (8)
	struct UHorizontalBox HB_Count; // 0x2E0 (8)
	struct UHorizontalBox HB_FireMode; // 0x2E8 (8)
	struct UHorizontalBox HB_Juggernaut; // 0x2F0 (8)
	struct UPDTextBlock TB_Num_Active_2; // 0x2F8 (8)
	struct URetainerBox RB_Progress; // 0x300 (8)
	struct UImage IMG_Progress; // 0x308 (8)
};

// Class ProjectD.PDPlayerEquipmentSlotBase
class UPDPlayerEquipmentSlotBase : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_State; // 0x288 (8)
	struct UBorder BD_Interaction; // 0x290 (8)
	struct UImage IMG_BasicBack; // 0x298 (8)
	struct UPDTextBlock TB_Num_Empty; // 0x2A0 (8)
	struct UPDTextBlock TB_Num; // 0x2A8 (8)
	struct UImage IMG_Icon_Wp; // 0x2B0 (8)
	struct UImage IMG_Icon_Sub; // 0x2B8 (8)
	struct UHorizontalBox HB_Count; // 0x2C0 (8)
	struct UPDTextBlock TB_Current; // 0x2C8 (8)
	struct UPDTextBlock TB_Total; // 0x2D0 (8)
	struct UPDTextBlock TB_ItemName; // 0x2D8 (8)
};

// Class ProjectD.PDPlayerEquipmentSlot
class UPDPlayerEquipmentSlot : public UPDPlayerEquipmentSlotBase {

public:

	struct UPDTextBlock TB_Num_Active; // 0x2F0 (8)
	struct UImage IMG_Logo; // 0x2F8 (8)
	struct UImage IMG_Icon_ActiveWp; // 0x300 (8)
	struct UImage IMG_Icon_ActiveMelee; // 0x308 (8)
	struct UImage IMG_Icon_ActiveSub; // 0x310 (8)
	struct USizeBox SB_ActiveMain; // 0x318 (8)
	struct USizeBox SB_ActiveSub; // 0x320 (8)
	struct UPDTextBlock TB_CurrentRounds; // 0x328 (8)
	struct UPDTextBlock TB_TotalRounds; // 0x330 (8)
	struct UPDTextBlock TB_FireMode; // 0x338 (8)
	struct UPDTextBlock TB_StackCount; // 0x340 (8)
	struct UHorizontalBox HB_FireMode; // 0x348 (8)
	struct UHorizontalBox HB_AimMode; // 0x350 (8)
	struct UProgressBar PB_Progress_Wp; // 0x358 (8)
	struct UProgressBar PB_Progress_Sub; // 0x360 (8)
};

// Class ProjectD.PDPlayerEquipmentSlotMulti
class UPDPlayerEquipmentSlotMulti : public UPDPlayerEquipmentSlotBase {

public:

	struct UImage IMG_Icon_Sub2; // 0x2F0 (8)
	struct UHorizontalBox HB_Count2; // 0x2F8 (8)
	struct UPDTextBlock TB_Current2; // 0x300 (8)
	struct UPDTextBlock TB_Total2; // 0x308 (8)
	struct UCanvasPanel CP_Equip1; // 0x310 (8)
	struct UCanvasPanel CP_Equip2; // 0x318 (8)
	struct UUniformGridPanel UGP_Selected1; // 0x320 (8)
	struct UUniformGridPanel UGP_Selected2; // 0x328 (8)
};

// Class ProjectD.PDPlayerInfoUI
class UPDPlayerInfoUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel HPBox; // 0x290 (8)
	struct UProgressBar PB_Health; // 0x298 (8)
	struct UProgressBar PB_Health_Expect; // 0x2A0 (8)
	struct UProgressBar PB_Health_Inc; // 0x2A8 (8)
	struct UProgressBar PB_Health_Dec; // 0x2B0 (8)
	struct UPDTextBlock TB_Health; // 0x2B8 (8)
	struct UPDTextBlock TB_TotalHealth; // 0x2C0 (8)
	struct UPDTextBlock TB_Health_w; // 0x2C8 (8)
	struct UPDTextBlock TB_TotalHealth_w; // 0x2D0 (8)
	struct UCanvasPanel CP_BlackMask; // 0x2D8 (8)
	struct UCanvasPanel CP_WhiteMask; // 0x2E0 (8)
	struct FVector2D HealthSize; // 0x2E8 (8)
	struct UPDPlayerCheer PlayerCheer; // 0x308 (8)
	struct USizeBox SB_DM; // 0x310 (8)
	struct UImage IMG_BombIcon; // 0x318 (8)
	struct UCanvasPanel CP_Juggernaut; // 0x320 (8)
	struct UCanvasPanel CP_ActiveJuggernaut; // 0x328 (8)
	struct UCanvasPanel CP_InactiveJuggernaut; // 0x330 (8)
	struct UImage IM_Juggernaut; // 0x338 (8)
	struct UImage IM_Exosuit; // 0x340 (8)
	struct UPDTextBlock TB_ActiveJuggernaut; // 0x348 (8)
	struct UPDTextBlock TB_InactiveJuggernaut; // 0x350 (8)
	struct UPDPlayerEquipmentDetail EquipmentDetail; // 0x358 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot01; // 0x360 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot02; // 0x368 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot03; // 0x370 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot04; // 0x378 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot05; // 0x380 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot06; // 0x388 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot07; // 0x390 (8)
	struct UPDPlayerEquipmentSlotBase ES_Slot08; // 0x398 (8)
	struct UPDPlayerEquipmentSlotBase ES_SlotMelee; // 0x3A0 (8)
	struct UPDPlayerEquipmentSlotBase ES_SlotThrowable; // 0x3A8 (8)
	struct UCanvasPanel CP_EquipmentSlide; // 0x3B0 (8)
	struct USpacer SP_EquipLeft; // 0x3B8 (8)
	struct USpacer SP_EquipRight; // 0x3C0 (8)
	struct UPDArmorGaugeDetail ArmorGauge; // 0x420 (8)
	struct UCanvasPanel CP_ItemSkillGaugeDurationTime; // 0x428 (8)
	struct UImage IMG_ItemSkillIcon; // 0x430 (8)
	struct UProgressBar PB_SpeedIncreaseTime; // 0x438 (8)
	struct UCanvasPanel CP_BowCharge; // 0x448 (8)
	struct UCanvasPanel CP_ChargeEf; // 0x450 (8)
	struct UProgressBar PB_BowCharge; // 0x458 (8)
	struct UImage IMG_ChargeFx; // 0x460 (8)
};

// Class ProjectD.PDPlayerSettingUI
class UPDPlayerSettingUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock T_Desc_Mode; // 0x290 (8)
	struct UPDTextBlock T_Map; // 0x298 (8)
	struct UCanvasPanel CP_TeamMode; // 0x2A0 (8)
	struct UImage IMG_TeamMode; // 0x2A8 (8)
	struct UPDTextBlock T_TeamMode; // 0x2B0 (8)
	struct UPaperSprite AttackImg; // 0x2B8 (8)
	struct UPaperSprite DefenceImg; // 0x2C0 (8)
	struct UCanvasPanel CP_LoadingChar; // 0x2C8 (8)
	struct UPDTextBlock TB_MissionScoreTitle; // 0x2D0 (8)
	struct UCanvasPanel CP_TeamChar; // 0x2D8 (8)
	struct UHorizontalBox HP_TeamCharList; // 0x2E0 (8)
	struct UCanvasPanel CP_Char; // 0x2E8 (8)
	struct UCanvasPanel CP_Lepton; // 0x2F0 (8)
	struct UCanvasPanel CP_UniqueLeptonInfo; // 0x2F8 (8)
	struct UImage IMG_UniqueLepton1; // 0x300 (8)
	struct UImage IMG_UniqueLepton2; // 0x308 (8)
	struct TArray<struct UImage> IMG_UniqueLepton_List; // 0x310 (16)
	struct UPDTextBlock T_UniqueLepton1; // 0x320 (8)
	struct UPDTextBlock T_UniqueLepton2; // 0x328 (8)
	struct TArray<struct UPDTextBlock> T_UniqueLepton_List; // 0x330 (16)
	struct UImage IMG_SelectChar; // 0x340 (8)
	struct UPDTextBlock T_Name; // 0x348 (8)
	struct UImage IMG_Signature; // 0x350 (8)
	struct UPDTextBlock T_Signature; // 0x358 (8)
	struct UTileView TV_CharList; // 0x360 (8)
	struct UPDTabButtonGroup CharTabBtnGroup; // 0x368 (8)
	struct UVerticalBox VB_PresetTabs; // 0x370 (8)
	struct UPDTextBlock T_LeptonInfo_Title; // 0x378 (8)
	struct UWidgetSwitcher WS_EquipSlot1; // 0x380 (8)
	struct UImage IMG_EquipSlot_Perk1; // 0x388 (8)
	struct UPDTextBlock T_EquipSlot_PerkName1; // 0x390 (8)
	struct UWidgetSwitcher WS_EquipSlot2; // 0x398 (8)
	struct UImage IMG_EquipSlot_Perk2; // 0x3A0 (8)
	struct UPDTextBlock T_EquipSlot_PerkName2; // 0x3A8 (8)
	struct UWidgetSwitcher WS_EquipSlot3; // 0x3B0 (8)
	struct UImage IMG_EquipSlot_Perk3; // 0x3B8 (8)
	struct UPDTextBlock T_EquipSlot_PerkName3; // 0x3C0 (8)
	struct UPDTabButtonGroup PresetTabBtnGroup; // 0x3C8 (8)
	struct TArray<struct UWidgetSwitcher> WS_LeptonList; // 0x3D0 (16)
	struct TArray<struct UImage> IMG_LeptonIconList; // 0x3E0 (16)
	struct TArray<struct UPDTextBlock> TB_LeptonNameList; // 0x3F0 (16)

	void OnSelectLaptonPreset(int32_t SelectIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectLaptonPreset(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x183AEA0>
	void OnSelectChar(int32_t SelectAgentIndex); // Function ProjectD.PDPlayerSettingUI.OnSelectChar(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x183AE20>
};

// Class ProjectD.PDPlayLogListItem
class UPDPlayLogListItem : public UPDUserWidget {

public:

	struct UPDTextBlock TB_FileName; // 0x290 (8)
	struct UPDTextBlock TB_FileDate; // 0x298 (8)
	struct UPDTextBlock TB_Round; // 0x2A0 (8)
	struct UWidgetSwitcher WS_PlayLog; // 0x2A8 (8)
	struct UBorder BD_Bg; // 0x2B0 (8)
	struct UAkAudioEvent HoverSound; // 0x2B8 (8)
	struct UAkAudioEvent ClickSound; // 0x2C0 (8)
};

// Class ProjectD.PDPlayLogMapIconPlayerModule
class UPDPlayLogMapIconPlayerModule : public UPDGameMapIconModule {

public:

	struct UCanvasPanel CP_Normal; // 0x2A0 (8)
	struct UImage IMG_State_Groggy; // 0x2A8 (8)
	struct UImage IMG_State_Death; // 0x2B0 (8)
	struct UPDPlayLogTrackLine TrackLine; // 0x2B8 (8)
	struct UBorder BD_Direction; // 0x2C0 (8)
	struct UImage IMG_TeamColor; // 0x2C8 (8)
	struct UImage IMG_UserDirection; // 0x2D0 (8)
	struct UPDTextBlock TB_PlayerName; // 0x2D8 (8)
	struct UWidgetSwitcher WS_PlayerBack; // 0x2E0 (8)
	struct UImage IMG_MVPColor; // 0x2E8 (8)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneDrawer
class UPDPlayLogMapIconSafeZoneDrawer : public UPDUserWidget {

public:

	enum class ESafeZoneDrawType DrawType; // 0x288 (1)
	struct TArray<struct FSafeZoneDrawing> Drawings; // 0x290 (16)
	bool DrawLineAntialias; // 0x2A0 (1)
	float DrawLineTickness; // 0x2A4 (4)
	bool bEdgeRounding; // 0x2A8 (1)
	float EdgeRoundingLen; // 0x2AC (4)
	int32_t EdgeRoundingSegment; // 0x2B0 (4)
};

// Class ProjectD.PDPlayLogMapIconSafeZoneModule
class UPDPlayLogMapIconSafeZoneModule : public UPDGameMapIconModule {

public:

	struct URetainerBox RB_Mask; // 0x2A0 (8)
	struct UCanvasPanel CP_Mask; // 0x2A8 (8)
	struct UImage IMG_Area; // 0x2B0 (8)
	struct UPDPlayLogMapIconSafeZoneDrawer DrawerCurrent; // 0x2B8 (8)
	struct UPDPlayLogMapIconSafeZoneDrawer DrawerNext; // 0x2C0 (8)
	bool RenewalVersion; // 0x2DC (1)
};

// Class ProjectD.PDPlayLogMapIconThrownModule
class UPDPlayLogMapIconThrownModule : public UPDGameMapIconModule {

public:

	struct UImage IMG_Area; // 0x2A0 (8)
	struct UCanvasPanel CP_Replay_Thrown; // 0x2A8 (8)
	struct USizeBox SB_Area; // 0x2B0 (8)
};

// Class ProjectD.PDPlayLogPlayerInfo
class UPDPlayLogPlayerInfo : public UPDUserWidget {

public:

	struct UPDPlayLogMapIconPlayerModule PLMI_Icon; // 0x288 (8)
	struct UPDTextBlock TB_Name; // 0x290 (8)
	struct UImage IMG_CharacterIcon; // 0x298 (8)
	struct UBorder BD_Bg; // 0x2A0 (8)
	struct UPDTextBlock TB_Kill; // 0x2A8 (8)
	struct UPDTextBlock TB_Death; // 0x2B0 (8)
	struct UBorder BD_Outline; // 0x2B8 (8)
	struct UPDCheckBox CB_PlayerView; // 0x2C0 (8)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDPlayLogPlayerInfo.OnChangedCheckBox(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x183EB20>
};

// Class ProjectD.PDPlayLogTrackLine
class UPDPlayLogTrackLine : public UPDUserWidget {

public:

	struct UImage IMG_DeathArrow; // 0x288 (8)
};

// Class ProjectD.PDPlayLogUI
class UPDPlayLogUI : public UPDSceneBaseUI {

public:

	struct UPDButton Btn_GotoLobby; // 0x288 (8)
	struct UPDButton Btn_DeleteAll; // 0x290 (8)
	struct UCanvasPanel CP_Map; // 0x298 (8)
	struct UPDPlayLogMapModule PlayLogMap; // 0x2A0 (8)
	struct UPDSlider PDSlider; // 0x2A8 (8)
	struct UPDTextBlock TB_CurMin; // 0x2B0 (8)
	struct UPDTextBlock TB_CurSec; // 0x2B8 (8)
	struct UPDTextBlock TB_MaxMin; // 0x2C0 (8)
	struct UPDTextBlock TB_MaxSec; // 0x2C8 (8)
	struct UListView LV_PlayList; // 0x2D0 (8)
	struct UListView LV_RoundList; // 0x2D8 (8)
	struct UVerticalBox VB_AllyPlayInfo; // 0x2E0 (8)
	struct UVerticalBox VB_EnemyPlayInfo; // 0x2E8 (8)
	struct UPDTabButton TBTN_Normal; // 0x2F0 (8)
	struct UPDTabButton TBTN_Double; // 0x2F8 (8)
	struct UPDTabButton TBTN_Quadruple; // 0x300 (8)
	struct UPDTabButton TBTN_Play; // 0x308 (8)
	struct UPDTabButton TBTN_Stop; // 0x310 (8)
	struct UPDTabButton TBTN_Pause; // 0x318 (8)
	struct UPDTextBlock TB_AtWinType; // 0x320 (8)
	struct UPDTextBlock TB_DeWinType; // 0x328 (8)
	struct UBorder BD_AtWinTypeBg; // 0x330 (8)
	struct UBorder BD_DeWinTypeBg; // 0x338 (8)
	struct UCanvasPanel CP_Loading; // 0x340 (8)
	struct UPDTabButtonGroup SpeedCategoryGroup; // 0x348 (8)
	struct UPDTabButtonGroup PlayCategoryGroup; // 0x350 (8)
	struct UPDKillLogUI KillLog; // 0x358 (8)
	struct UPDTextBlock TB_MapName; // 0x360 (8)
	struct UPDCheckBox CB_VisibleTrack; // 0x368 (8)
	struct UProgressBar PB_PlayerBar; // 0x370 (8)
	float ZoomScaleDefault; // 0x378 (4)
	struct UVerticalBox VB_LogList; // 0x380 (8)
	enum class EHorizontalAlignment LogHAlign; // 0x388 (1)
	struct FMargin LogPadding; // 0x38C (16)
	int32_t MaxLogCount; // 0x39C (4)
	float DefaultDuration; // 0x3A0 (4)
	bool AutoRemove; // 0x3A4 (1)

	void PlayLogStop(); // Function ProjectD.PDPlayLogUI.PlayLogStop(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EEC0>
	void PlayLogStart(); // Function ProjectD.PDPlayLogUI.PlayLogStart(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EEA0>
	void PlayLogPause(); // Function ProjectD.PDPlayLogUI.PlayLogPause(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EE80>
	void OnVisibleTrackChanged(bool Value); // Function ProjectD.PDPlayLogUI.OnVisibleTrackChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EDF0>
	void OnValueChanged(float InValue); // Function ProjectD.PDPlayLogUI.OnValueChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183ED70>
	void OnSelectedRoundListItem(struct UPDPlayLogListItemData InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedRoundListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183ECF0>
	void OnSelectedListItem(struct UPDPlayLogListItemData InListItemData); // Function ProjectD.PDPlayLogUI.OnSelectedListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EC70>
	void OnQuadrupleSpeed(); // Function ProjectD.PDPlayLogUI.OnQuadrupleSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EC50>
	void OnNormalSpeed(); // Function ProjectD.PDPlayLogUI.OnNormalSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EC10>
	void OnMouseCaptureBegin(); // Function ProjectD.PDPlayLogUI.OnMouseCaptureBegin(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EBF0>
	void OnDoubleSpeed(); // Function ProjectD.PDPlayLogUI.OnDoubleSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EBD0>
	void OnDeleteAllFile(); // Function ProjectD.PDPlayLogUI.OnDeleteAllFile(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EBB0>
	void MouseCaptureEnd(); // Function ProjectD.PDPlayLogUI.MouseCaptureEnd(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EAE0>
	void GotoLobby(); // Function ProjectD.PDPlayLogUI.GotoLobby(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EAC0>
	void DeleteAllFile(); // Function ProjectD.PDPlayLogUI.DeleteAllFile(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EAA0>
};

// Class ProjectD.PDPostAkEventAnimNotify
class UPDPostAkEventAnimNotify : public UPDBaseAnimNotify {

public:

	struct UAkAudioEvent EventToPost; // 0x48 (8)
};

// Class ProjectD.PDFootstepAkAnimNotify
class UPDFootstepAkAnimNotify : public UPDPostAkEventAnimNotify {

public:

	enum class EHandsAndFeetBone Bone; // 0x50 (1)
	enum class EPDTraceChannel TraceType; // 0x54 (4)
	enum class EPDFootStepNotifyType FootStepNotifyType; // 0x58 (1)
};

// Class ProjectD.PDProgress
class UPDProgress : public UPDUserWidget {

public:

	struct UImage IMG_Progress; // 0x288 (8)
	struct FSlateBrush ProgressMaterial; // 0x290 (136)
	float Percent; // 0x318 (4)
};

// Class ProjectD.PDProgressLeptonListItem
class UPDProgressLeptonListItem : public UPDUserWidget {

public:

	struct UImage IMG_Item; // 0x290 (8)
	struct UPDTextBlock TB_Name; // 0x298 (8)
	struct UPDTextBlock TB_Desc; // 0x2A0 (8)
	struct UPDTextBlock TB_Count; // 0x2A8 (8)
	struct UProgressBar PB_Per; // 0x2B0 (8)
	struct UBorder BD_ItemOutline; // 0x2B8 (8)
};

// Class ProjectD.PDPropActor
class APDPropActor : public UActor {

public:

	struct TArray<struct FName> TargetNameList; // 0x220 (16)
	struct UMaterialParameterCollection Collection; // 0x230 (8)
	bool UseSineGraph; // 0x238 (1)
	float SignGraphRange; // 0x23C (4)
	float SignGraphPeriod; // 0x240 (4)
	float RotatorRoll; // 0x244 (4)
	float RotatorPitch; // 0x248 (4)
	float RotatorYaw; // 0x24C (4)
	float RotationFactor; // 0x250 (4)
	bool IsLamp; // 0x254 (1)
	struct TArray<struct FName> TargetNameList2; // 0x258 (16)
	float RotatorRoll2; // 0x268 (4)
	float RotatorPitch2; // 0x26C (4)
	float RotatorYaw2; // 0x270 (4)
};

// Class ProjectD.PDPulseLight
class APDPulseLight : public UActor {

public:

	struct UPointLightComponent PointLight; // 0x220 (8)
};

// Class ProjectD.PDPurchaseMsg
class UPDPurchaseMsg : public UPDUserWidget {

public:

	struct UBorder B_MessageBg; // 0x288 (8)
	struct UPDTextBlock T_Message; // 0x290 (8)
	struct FLinearColor SuccessBGColor; // 0x298 (16)
	struct FLinearColor FailBGColor; // 0x2A8 (16)
	struct FSlateColor SuccessTextColor; // 0x2B8 (40)
	struct FSlateColor FailTextColor; // 0x2E0 (40)
};

// Class ProjectD.PDRagdollAnimInstance
class UPDRagdollAnimInstance : public UPDAnimInstance {

public:

	bool bIsRagdoll; // 0x280 (1)
};

// Class ProjectD.PDRecruitListItem
class UPDRecruitListItem : public UPDUserWidget {

public:

	struct UBorder BD_Background; // 0x290 (8)
	struct UWidgetSwitcher WS_State; // 0x298 (8)
	struct UImage IMG_Face; // 0x2A0 (8)
	struct UCanvasPanel CP_ClanMarkInfo; // 0x2A8 (8)
	struct UImage IMG_ClanMarkBG; // 0x2B0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2B8 (8)
	struct UPDTextBlock TB_ClanName; // 0x2C0 (8)
	struct UPDTextBlock TB_Nickname; // 0x2C8 (8)
	struct UPDButton Btn_Ok; // 0x2D0 (8)
	struct UPDButton Btn_Cancel; // 0x2D8 (8)
	struct UBorder BD_Disable; // 0x2E0 (8)

	void OnOKClicked(); // Function ProjectD.PDRecruitListItem.OnOKClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EC30>
	void OnCancelClicked(); // Function ProjectD.PDRecruitListItem.OnCancelClicked(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EB00>
};

// Class ProjectD.PDReloadAnimNotifyState
class UPDReloadAnimNotifyState : public UAnimNotifyState {

public:

	struct FName MagazineAttachedBone; // 0x30 (8)
	int32_t NotifyType; // 0x38 (4)
};

// Class ProjectD.PDReportPopupUI
class UPDReportPopupUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock T_Name; // 0x290 (8)
	struct UPDComboBox CB_Category; // 0x298 (8)
	struct UPDComboBox CB_SubCategory; // 0x2A0 (8)
	struct UMultiLineEditableText MET_Opinion; // 0x2A8 (8)
	struct UPDButton ConfirmBtn; // 0x2B0 (8)
	struct UPDButton CancelBtn; // 0x2B8 (8)

	void OnTextChanged_MET_Opinion(struct FText& Text); // Function ProjectD.PDReportPopupUI.OnTextChanged_MET_Opinion(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1841530>
	void OnSelectionChanged_CB_SubCategory(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_SubCategory(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1841400>
	void OnSelectionChanged_CB_Category(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_Category(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18412D0>
	void OnReportConfirmed(); // Function ProjectD.PDReportPopupUI.OnReportConfirmed(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClick_ConfirmBtn(); // Function ProjectD.PDReportPopupUI.OnClick_ConfirmBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18412B0>
	void OnClick_CancelBtn(); // Function ProjectD.PDReportPopupUI.OnClick_CancelBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1841290>
};

// Class ProjectD.PDResultExpItemUI
class UPDResultExpItemUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_ContentName; // 0x288 (8)
	struct UPDTextBlock TB_ContentName_Fx01; // 0x290 (8)
	struct UPDTextBlock TB_ContentName_Fx02; // 0x298 (8)
	struct UPDTextBlock TB_ExpValue; // 0x2A0 (8)
	struct UPDTextBlock TB_ExpValue_Fx01; // 0x2A8 (8)
	struct UPDTextBlock TB_ExpValue_Fx02; // 0x2B0 (8)
};

// Class ProjectD.PDResultMedalItem
class UPDResultMedalItem : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Title; // 0x288 (8)
	struct UPDTextBlock TB_Score; // 0x290 (8)
	struct URetainerBox RB_Mask; // 0x298 (8)
	struct UImage IMG_Medal; // 0x2A0 (8)
	struct UImage IMG_Fx_Smoke; // 0x2A8 (8)
	struct UImage IMG_Fx; // 0x2B0 (8)
	struct UTexture GoldTexture; // 0x2B8 (8)
	struct UTexture SilverTexture; // 0x2C0 (8)
	struct UTexture BronzeTexture; // 0x2C8 (8)
};

// Class ProjectD.PDResultRankScore
class UPDResultRankScore : public UPDUserWidget {

public:

	struct UImage IMG_ScoreBoard_Line01; // 0x288 (8)
	struct UImage IMG_ScoreBoard_Line02; // 0x290 (8)
	struct UImage IMG_ScoreBoard_TopBg01; // 0x298 (8)
	struct UPDTextBlock TB_TeamName; // 0x2A0 (8)
	struct UCanvasPanel CP_PlayerScoreRoot; // 0x2A8 (8)
};

// Class ProjectD.PDResultRankScoreItem
class UPDResultRankScoreItem : public UPDUserWidget {

public:

	struct UImage IMG_SLotBg; // 0x288 (8)
	struct UImage IMG_Agent; // 0x290 (8)
	struct UImage IMG_Lepton1; // 0x298 (8)
	struct UImage IMG_Lepton2; // 0x2A0 (8)
	struct UImage IMG_Lepton3; // 0x2A8 (8)
	struct UImage IMG_Lepton4; // 0x2B0 (8)
	struct UImage IMG_Lepton5; // 0x2B8 (8)
	struct UPDTextBlock TB_Rank; // 0x2C0 (8)
	struct UPDTextBlock TB_Name; // 0x2C8 (8)
	struct UPDTextBlock TB_Point; // 0x2D0 (8)
	struct UPDTextBlock TB_Mission; // 0x2D8 (8)
	struct UPDTextBlock TB_Kill; // 0x2E0 (8)
	struct UPDTextBlock TB_Death; // 0x2E8 (8)
	struct UPDTextBlock TB_AttackDamage; // 0x2F0 (8)
	struct UPDTextBlock TB_Damage; // 0x2F8 (8)
	struct UPDTextBlock TB_UseCoin; // 0x300 (8)
	struct UPDTextBlock TB_Invest; // 0x308 (8)
	struct UCanvasPanel CP_ClanMark; // 0x310 (8)
	struct UImage IMG_ClanMarkBG; // 0x318 (8)
	struct UImage IMG_ClanMark; // 0x320 (8)
};

// Class ProjectD.PDResultRewardItem
class UPDResultRewardItem : public UPDUserWidget {

public:

	struct UImage IMG_Lepton; // 0x288 (8)
	struct UPDTextBlock T_RewardName; // 0x290 (8)
};

// Class ProjectD.PDResultRoundItemUI
class UPDResultRoundItemUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Round; // 0x290 (8)
	struct UPDTextBlock TB_ModeName; // 0x298 (8)
	struct UImage IMG_ModeIcon; // 0x2A0 (8)
	struct UWidgetSwitcher WS_ResultType; // 0x2A8 (8)
	struct UBorder BD_Win; // 0x2B0 (8)
	struct UBorder BD_OWin; // 0x2B8 (8)
	struct UBorder BD_Rank; // 0x2C0 (8)
	struct UPDTextBlock TB_Rank; // 0x2C8 (8)
};

// Class ProjectD.PDResultRoundMenuItem
class UPDResultRoundMenuItem : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_ResultType; // 0x298 (8)
	struct UImage IMG_ModeIcon; // 0x2A0 (8)
	struct UImage IMG_SLotBg; // 0x2A8 (8)
	struct UImage IMG_SLotBg_Solo; // 0x2B0 (8)
	struct UImage IMG_SLotBg_BM; // 0x2B8 (8)
	struct UCanvasPanel CP_Result_Selected; // 0x2C0 (8)
	struct UImage IMG_Result_SelectedFx_Blue; // 0x2C8 (8)
	struct UImage IMG_Result_SelectedFx_Orange; // 0x2D0 (8)
	struct UImage IMG_Result_SelectedBar; // 0x2D8 (8)
	struct UPDTextBlock T_RoundInfo; // 0x2E0 (8)
	struct UPDTextBlock T_Win; // 0x2E8 (8)
	struct UPDTextBlock T_Draw; // 0x2F0 (8)
	struct UPDTextBlock T_Lose; // 0x2F8 (8)
	struct UPDTextBlock T_Rank; // 0x300 (8)
	struct UBorder B_Scheduled; // 0x308 (8)
	struct UBorder B_ResultCause; // 0x310 (8)
	struct UImage IMG_CauseIcon; // 0x318 (8)
	struct UBorder B_All; // 0x320 (8)
	struct UPDButton BTN_Area; // 0x328 (8)
	struct UPaperSprite AttackImg; // 0x330 (8)
	struct UPaperSprite DefenceImg; // 0x338 (8)
	struct UPaperSprite InstallImg; // 0x340 (8)
	struct UPaperSprite DeactiveImg; // 0x348 (8)
	struct UPaperSprite KilledImg; // 0x350 (8)
	struct UPaperSprite TimeOutImg; // 0x358 (8)

	void OnClickMenu(); // Function ProjectD.PDResultRoundMenuItem.OnClickMenu(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1841270>
};

// Class ProjectD.PDResultRoundPlayerItem
class UPDResultRoundPlayerItem : public UPDUserWidget {

public:

	struct UImage IMG_SLotBg; // 0x288 (8)
	struct UImage IMG_AgnetPic; // 0x290 (8)
	struct UImage IMG_ClanMark; // 0x298 (8)
	struct UImage IMG_ClanMark_Bg; // 0x2A0 (8)
	struct UPDTextBlock TB_Name; // 0x2A8 (8)
	struct UPDTextBlock T_PlayerNum; // 0x2B0 (8)
	struct UPDTextBlock TB_Kill; // 0x2B8 (8)
	struct UPDTextBlock TB_Death; // 0x2C0 (8)
	struct UPDCheckBox CB_PlayerView; // 0x2C8 (8)
	struct UCanvasPanel CP_ClanMark; // 0x2D0 (8)

	void OnChangedCheckBox(bool InValue); // Function ProjectD.PDResultRoundPlayerItem.OnChangedCheckBox(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18411E0>
};

// Class ProjectD.PDResultRoundPlayerList
class UPDResultRoundPlayerList : public UPDUserWidget {

public:

	struct UImage IMG_Attack; // 0x288 (8)
	struct UImage IMG_Defense; // 0x290 (8)
	struct UBorder BD_ResultBg; // 0x298 (8)
	struct UPDTextBlock TB_TeamName; // 0x2A0 (8)
	struct UPDTextBlock TB_Result; // 0x2A8 (8)
	struct UPDResultRoundPlayerItem RRP_Item1; // 0x2B0 (8)
	struct UPDResultRoundPlayerItem RRP_Item2; // 0x2B8 (8)
	struct UPDResultRoundPlayerItem RRP_Item3; // 0x2C0 (8)
	struct UPDResultRoundPlayerItem RRP_Item4; // 0x2C8 (8)
	struct UPDResultRoundPlayerItem RRP_Item5; // 0x2D0 (8)
	struct TArray<struct UPDResultRoundPlayerItem> RoundPlayerItems; // 0x2D8 (16)
};

// Class ProjectD.PDResultScoreItem
class UPDResultScoreItem : public UPDUserWidget {

public:

	struct UPDTextBlock T_ScoreName; // 0x288 (8)
	struct UPDTextBlock T_Score; // 0x290 (8)
};

// Class ProjectD.PDResultTeamMemberUI
class UPDResultTeamMemberUI : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Nickname; // 0x288 (8)
	struct UImage IMG_Icon; // 0x290 (8)
	struct UPDTextBlock TB_Status; // 0x298 (8)
	struct UPDTextBlock TB_Record; // 0x2A0 (8)
	struct UPDTextBlock TB_Postfix; // 0x2A8 (8)
	struct UCanvasPanel CP_MVP; // 0x2B0 (8)
	struct UImage IMG_MVP_FxBg; // 0x2B8 (8)
};

// Class ProjectD.PDResultTeamScore
class UPDResultTeamScore : public UPDUserWidget {

public:

	struct UImage IMG_ScoreBoard_Line01; // 0x288 (8)
	struct UImage IMG_ScoreBoard_Line02; // 0x290 (8)
	struct UImage IMG_ScoreBoard_TopBg01; // 0x298 (8)
	struct UPDTextBlock TB_TeamName; // 0x2A0 (8)
	struct UPDTextBlock TB_TotalMVP; // 0x2A8 (8)
	struct UPDTextBlock TB_TotalKill; // 0x2B0 (8)
	struct UPDTextBlock TB_TotalDeath; // 0x2B8 (8)
	struct UPDTextBlock TB_TotalAssist; // 0x2C0 (8)
	struct UPDTextBlock TB_TotalRescue; // 0x2C8 (8)
	struct UPDTextBlock TB_TotalMission; // 0x2D0 (8)
	struct UPDTextBlock TB_TotalAlive; // 0x2D8 (8)
	struct UPDTextBlock TB_TotalAttackDamage; // 0x2E0 (8)
	struct UPDTextBlock TB_TotalDamage; // 0x2E8 (8)
	struct UPDTextBlock TB_TotalUseCoin; // 0x2F0 (8)
	struct UPDTextBlock TB_TotalInvest; // 0x2F8 (8)
	struct UPDResultTeamScoreItem RTSI_List1; // 0x300 (8)
	struct UPDResultTeamScoreItem RTSI_List2; // 0x308 (8)
	struct UPDResultTeamScoreItem RTSI_List3; // 0x310 (8)
	struct UPDResultTeamScoreItem RTSI_List4; // 0x318 (8)
	struct UPDResultTeamScoreItem RTSI_List5; // 0x320 (8)
	struct TArray<struct UPDResultTeamScoreItem> PlayerScoreItems; // 0x328 (16)
};

// Class ProjectD.PDResultTeamScoreItem
class UPDResultTeamScoreItem : public UPDUserWidget {

public:

	struct UImage IMG_SLotBg; // 0x288 (8)
	struct UImage IMG_Agent; // 0x290 (8)
	struct UImage IMG_Lepton1; // 0x298 (8)
	struct UImage IMG_Lepton2; // 0x2A0 (8)
	struct UImage IMG_Lepton3; // 0x2A8 (8)
	struct UImage IMG_Lepton4; // 0x2B0 (8)
	struct UImage IMG_Lepton5; // 0x2B8 (8)
	struct UPDTextBlock TB_Name; // 0x2C0 (8)
	struct UPDTextBlock TB_MVP; // 0x2C8 (8)
	struct UPDTextBlock TB_Kill; // 0x2D0 (8)
	struct UPDTextBlock TB_Death; // 0x2D8 (8)
	struct UPDTextBlock TB_Assist; // 0x2E0 (8)
	struct UPDTextBlock TB_Rescue; // 0x2E8 (8)
	struct UPDTextBlock TB_Mission; // 0x2F0 (8)
	struct UPDTextBlock TB_Alive; // 0x2F8 (8)
	struct UPDTextBlock TB_AttackDamage; // 0x300 (8)
	struct UPDTextBlock TB_Damage; // 0x308 (8)
	struct UPDTextBlock TB_UseCoin; // 0x310 (8)
	struct UPDTextBlock TB_Invest; // 0x318 (8)
	struct UCanvasPanel CP_ClanMark; // 0x320 (8)
	struct UImage IMG_ClanMarkBG; // 0x328 (8)
	struct UImage IMG_ClanMark; // 0x330 (8)
};

// Class ProjectD.PDResultTitleAchieveItem
class UPDResultTitleAchieveItem : public UPDUserWidget {

public:

	struct UPDTextBlock T_Achieve_Title; // 0x288 (8)
	struct UPDTextBlock T_Achieve_Desc; // 0x290 (8)
	struct UPDTextBlock T_Achieve_DescInfo; // 0x298 (8)
	struct UPDTextBlock T_Achieve_RecordName; // 0x2A0 (8)
	struct UPDTextBlock T_Achieve_Record; // 0x2A8 (8)
	struct UImage IMG_TopBg; // 0x2B0 (8)
	struct UImage IMG_BottomBg; // 0x2B8 (8)
};

// Class ProjectD.PDResultTitleAgentNameItem
class UPDResultTitleAgentNameItem : public UPDUserWidget {

public:

	struct UPDTextBlock T_UserName; // 0x288 (8)
	struct UPDTextBlock T_ClanName; // 0x290 (8)
	struct UImage IMG_Medal_01; // 0x298 (8)
	struct UImage IMG_Medal_02; // 0x2A0 (8)
	struct UImage IMG_Medal_03; // 0x2A8 (8)
	struct UImage IMG_Medal_04; // 0x2B0 (8)
	struct UImage IMG_Medal_05; // 0x2B8 (8)
	struct UBorder B_ClanMark_Bg; // 0x2C0 (8)
	struct UImage IMG_ClanMark; // 0x2C8 (8)
};

// Class ProjectD.PDResultTitleItem
class UPDResultTitleItem : public UPDUserWidget {

public:

	struct UPDResultTitleAgentNameItem RTANI_Agent; // 0x288 (8)
	struct UPDResultTitleAchieveItem RTAI_Title; // 0x290 (8)
	struct UCanvasPanel CP_RankNumber; // 0x298 (8)
	struct UCanvasPanel CP_RankRecord; // 0x2A0 (8)
	struct UImage IMG_RankRecordBg; // 0x2A8 (8)
	struct UPDTextBlock TB_RankRecordPoint; // 0x2B0 (8)
	struct UWidgetSwitcher WS_Rank; // 0x2B8 (8)
	struct UHorizontalBox HB_UserData; // 0x2C0 (8)
	struct UImage IMG_Medal1; // 0x2C8 (8)
	struct UImage IMG_Medal2; // 0x2D0 (8)
	struct UImage IMG_Medal3; // 0x2D8 (8)
};

// Class ProjectD.PDRingCommandUI
class UPDRingCommandUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_Category; // 0x290 (8)
	struct UCanvasPanel CP_Menu; // 0x298 (8)
	struct URetainerBox RB_Menu; // 0x2A0 (8)
	struct UCanvasPanel CP_Inner; // 0x2A8 (8)
	struct UBorder W_DirectionRing; // 0x2B0 (8)
	struct UCanvasPanel CP_Ring1; // 0x2B8 (8)
	struct UCanvasPanel CP_Ring2; // 0x2C0 (8)
	struct UCanvasPanel CP_Ring3; // 0x2C8 (8)
	struct UCanvasPanel CP_Ring6; // 0x2D0 (8)
	struct UImage IMG_Hovered1; // 0x2D8 (8)
	struct UImage IMG_Hovered2_1; // 0x2E0 (8)
	struct UImage IMG_Hovered2_2; // 0x2E8 (8)
	struct UImage IMG_Hovered3_1; // 0x2F0 (8)
	struct UImage IMG_Hovered3_2; // 0x2F8 (8)
	struct UImage IMG_Hovered3_3; // 0x300 (8)
	struct UImage IMG_Hovered6_1; // 0x308 (8)
	struct UImage IMG_Hovered6_2; // 0x310 (8)
	struct UImage IMG_Hovered6_3; // 0x318 (8)
	struct UImage IMG_Hovered6_4; // 0x320 (8)
	struct UImage IMG_Hovered6_5; // 0x328 (8)
	struct UImage IMG_Hovered6_6; // 0x330 (8)
	struct UImage IMG_Icon0; // 0x338 (8)
	struct UImage IMG_Icon1; // 0x340 (8)
	struct UImage IMG_Icon2; // 0x348 (8)
	struct UImage IMG_Icon3; // 0x350 (8)
	struct UImage IMG_Icon4; // 0x358 (8)
	struct UImage IMG_Icon5; // 0x360 (8)
	struct UPDTextBlock TB_Text0; // 0x368 (8)
	struct UPDTextBlock TB_Text1; // 0x370 (8)
	struct UPDTextBlock TB_Text2; // 0x378 (8)
	struct UPDTextBlock TB_Text3; // 0x380 (8)
	struct UPDTextBlock TB_Text4; // 0x388 (8)
	struct UPDTextBlock TB_Text5; // 0x390 (8)
	struct USizeBox SB_Key0; // 0x398 (8)
	struct USizeBox SB_Key1; // 0x3A0 (8)
	struct USizeBox SB_Key2; // 0x3A8 (8)
	struct USizeBox SB_Key3; // 0x3B0 (8)
	struct USizeBox SB_Key4; // 0x3B8 (8)
	struct USizeBox SB_Key5; // 0x3C0 (8)
	struct UPDTextBlock TB_Key0; // 0x3C8 (8)
	struct UPDTextBlock TB_Key1; // 0x3D0 (8)
	struct UPDTextBlock TB_Key2; // 0x3D8 (8)
	struct UPDTextBlock TB_Key3; // 0x3E0 (8)
	struct UPDTextBlock TB_Key4; // 0x3E8 (8)
	struct UPDTextBlock TB_Key5; // 0x3F0 (8)
	struct UBorder BD_Category1; // 0x3F8 (8)
	struct UBorder BD_Category2; // 0x400 (8)
	struct UBorder BD_Category3; // 0x408 (8)
	struct UBorder BD_Category4; // 0x410 (8)
	struct UBorder BD_Category5; // 0x418 (8)
	struct TArray<struct UBorder> CategoryList; // 0x420 (16)
	float GlitchIntensity; // 0x430 (4)
	float GlitchDuration; // 0x434 (4)
};

// Class ProjectD.PDRoadActor
class APDRoadActor : public UActor {

public:

	enum class EGuideType GuideType; // 0x220 (1)
	struct UArrowComponent StartArrow; // 0x228 (8)
	struct UPDSplineComponent MainSpline; // 0x230 (8)
	struct APDRoadActor Parent; // 0x238 (8)
};

// Class ProjectD.PDRoundInfoUI
class UPDRoundInfoUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_PlayTimeBomb; // 0x290 (8)
	struct UCanvasPanel CP_RoundScore; // 0x298 (8)
	struct UImage IMG_Defuse; // 0x2A0 (8)
	struct UPDTextBlock TB_ShopNoti; // 0x2A8 (8)
	struct UPDTextBlock TB_Round; // 0x2B0 (8)
	struct UPanelWidget PW_ShopGuide; // 0x2B8 (8)
	struct UPDTextBlock T_ShopKey; // 0x2C0 (8)
	struct UHorizontalBox HB_EntryA; // 0x2C8 (8)
	struct UHorizontalBox HB_EntryB; // 0x2D0 (8)
	struct UPDTextBlock TB_ScoreA; // 0x2D8 (8)
	struct UPDTextBlock TB_ScoreB; // 0x2E0 (8)
	struct UImage IMG_TeamStateA; // 0x2E8 (8)
	struct UImage IMG_TeamStateB; // 0x2F0 (8)
	struct UBorder BD_ScoreBackL; // 0x2F8 (8)
	struct UBorder BD_ScoreBackR; // 0x300 (8)
	struct UPDSeedProgressModule SSM_SeedProgress; // 0x308 (8)
	struct UImage IMG_Highlight_Tutorial; // 0x310 (8)
	int32_t WarningShopTime; // 0x318 (4)
	struct FMargin EntryPadding; // 0x31C (16)
};

// Class ProjectD.PDRoundRecord
class UPDRoundRecord : public UPDUserWidget {

public:

	struct UImage IMG_MVPBack; // 0x288 (8)
	struct UImage IMG_MVP; // 0x290 (8)
	struct UImage IMG_GlowFx; // 0x298 (8)
	struct UImage IMG_ClanMarkBG; // 0x2A0 (8)
	struct UImage IMG_ClanMarkFG; // 0x2A8 (8)
	struct UPDTextBlock TB_Character; // 0x2B0 (8)
	struct UPDTextBlock TB_Player; // 0x2B8 (8)
	struct UPDRoundRecordItem MVPRecord01; // 0x2C0 (8)
	struct UPDRoundRecordItem MVPRecord02; // 0x2C8 (8)
	struct UPDRoundRecordItem MVPRecord03; // 0x2D0 (8)
	struct UPDRoundRecordItem MVPRecord04; // 0x2D8 (8)
	struct UPDRoundRecordItem MVPRecord05; // 0x2E0 (8)
	struct TArray<struct UPDRoundRecordItem> MVPRecords; // 0x2E8 (16)
};

// Class ProjectD.PDRoundRecordItem
class UPDRoundRecordItem : public UPDUserWidget {

public:

	struct UPDTextBlock TB_Title; // 0x288 (8)
	struct UPDTextBlock TB_Content; // 0x290 (8)
	struct UImage IMG_Coin; // 0x298 (8)
	bool VisibleCoinIcon; // 0x2A0 (1)
	struct UImage IMG_Glow; // 0x2A8 (8)
};

// Class ProjectD.PDRoundReplayer
class UPDRoundReplayer : public UPDIngameModeWidget {

public:

	struct UPDKillLogUI KillLog; // 0x290 (8)
	struct UPDPlayLogMapModule ReplayGameMap; // 0x298 (8)
	struct UPDTabButton Btn_Play; // 0x2A0 (8)
	struct UPDTabButton Btn_Stop; // 0x2A8 (8)
	struct UPDTabButton Btn_Pause; // 0x2B0 (8)
	struct UPDTextBlock TB_CurMin; // 0x2B8 (8)
	struct UPDTextBlock TB_CurSec; // 0x2C0 (8)
	struct UPDTextBlock TB_MaxMin; // 0x2C8 (8)
	struct UPDTextBlock TB_MaxSec; // 0x2D0 (8)
	struct UPDTextBlock T_Replay; // 0x2D8 (8)
	struct UPDSlider S_TimePicker; // 0x2E0 (8)
	struct UPDTabButton Btn_Normal; // 0x2E8 (8)
	struct UPDTabButton Btn_Double; // 0x2F0 (8)
	struct UPDTabButton Btn_Quadruple; // 0x2F8 (8)
	struct UPDButton Btn_Round; // 0x300 (8)
	struct UBorder BD_PlayerBarCover; // 0x308 (8)
	struct UPDTextBlock T_Dropdown_Round; // 0x310 (8)
	struct UPDTextBlock T_Dropdown_Match; // 0x318 (8)
	struct UPDTextBlock T_Dropdown_Time; // 0x320 (8)
	struct UImage IMG_Dropdown_Arrow; // 0x328 (8)
	struct UPDStatusBoardRoundList StatusBoardRoundList; // 0x330 (8)
	struct UCanvasPanel CP_ReplayerScreen; // 0x338 (8)
	struct UProgressBar PB_PlayerBar; // 0x340 (8)
	struct UCanvasPanel CP_ReplayMenu; // 0x348 (8)
	struct UPDButton Btn_Replay_Close; // 0x350 (8)
	struct UCanvasPanel CP_PlaySpeedView; // 0x358 (8)
	struct UPDTextBlock TB_PlayerSpeed; // 0x360 (8)
	struct UPDTabButtonGroup SpeedCategoryGroup; // 0x368 (8)
	struct UPDTabButtonGroup PlayCategoryGroup; // 0x370 (8)

	void OnValueChanged(float InValue); // Function ProjectD.PDRoundReplayer.OnValueChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845240>
	void OnMouseCaptureBegin(); // Function ProjectD.PDRoundReplayer.OnMouseCaptureBegin(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x183EBF0>
	void OnClickQuadrupleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickQuadrupleSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844AC0>
	void OnClickPlayLogStop(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStop(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844AA0>
	void OnClickPlayLogStart(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogStart(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844A80>
	void OnClickPlayLogPause(); // Function ProjectD.PDRoundReplayer.OnClickPlayLogPause(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844A60>
	void OnClickNormalSpeed(); // Function ProjectD.PDRoundReplayer.OnClickNormalSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844A40>
	void OnClickDoubleSpeed(); // Function ProjectD.PDRoundReplayer.OnClickDoubleSpeed(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844A20>
	void MouseCaptureEnd(); // Function ProjectD.PDRoundReplayer.MouseCaptureEnd(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844870>
};

// Class ProjectD.PDRoundResult
class UPDRoundResult : public UPDIngameModeWidget {

public:

	struct UBorder BD_ResultContent02; // 0x290 (8)
	struct UImage IMG_RR_TitleColorR_4; // 0x298 (8)
	struct UPDTextBlock TB_ResultText00; // 0x2A0 (8)
	struct UPDTextBlock TB_ResultText01; // 0x2A8 (8)
	struct UPDTextBlock TB_Count; // 0x2B0 (8)
	struct UImage IMG_TitleBack00; // 0x2B8 (8)
	struct UImage IMG_TitleBack01; // 0x2C0 (8)
	struct UImage IMG_TitleBack02; // 0x2C8 (8)
	struct UImage IMG_TitleReusltColor; // 0x2D0 (8)
	struct UImage IMG_Dot01; // 0x2D8 (8)
	struct UPDTextBlock TB_EndRound; // 0x2E0 (8)
	struct UImage IMG_RR_LeftTeamBack; // 0x2E8 (8)
	struct UPDTextBlock TB_LeftTeam; // 0x2F0 (8)
	struct UImage IMG_RightTeamBack; // 0x2F8 (8)
	struct UPDTextBlock TB_FoeName; // 0x300 (8)
	struct UHorizontalBox HB_RoundRoot; // 0x308 (8)
	struct TArray<struct UPDResultRoundItemUI> RoundItems; // 0x310 (16)
	struct UPDRoundReview Review; // 0x320 (8)
};

// Class ProjectD.PDRoundReview
class UPDRoundReview : public UPDUserWidget {

public:

	struct UImage IMG_MVP_Text; // 0x290 (8)
	struct UImage IMG_Fx; // 0x298 (8)
	struct UImage IMG_GlowFx; // 0x2A0 (8)
	struct UImage IMG_KEY; // 0x2A8 (8)
	struct UImage IMG_Rating; // 0x2B0 (8)
	struct UImage IMG_ClanMarkBG_Ally; // 0x2B8 (8)
	struct UImage IMG_ClanMarkFG_Ally; // 0x2C0 (8)
	struct UPDTextBlock TB_UserName; // 0x2C8 (8)
	struct UPDRoundRecordItem AllyRecord01; // 0x2D0 (8)
	struct UPDRoundRecordItem AllyRecord02; // 0x2D8 (8)
	struct UPDRoundRecordItem AllyRecord03; // 0x2E0 (8)
	struct UPDRoundRecordItem AllyRecord04; // 0x2E8 (8)
	struct UPDRoundRecordItem AllyRecord05; // 0x2F0 (8)
	struct UPDRoundRecordItem AllyRecord06; // 0x2F8 (8)
	struct TArray<struct UPDRoundRecordItem> AllyKeyRecords; // 0x300 (16)
	struct UImage IMG_FX_Foe; // 0x310 (8)
	struct UImage IMG_GlowFx_Foe; // 0x318 (8)
	struct UImage IMG_KEY_foe; // 0x320 (8)
	struct UImage IMG_Rating_Foe; // 0x328 (8)
	struct UImage IMG_ClanMarkBG_Enemy; // 0x330 (8)
	struct UImage IMG_ClanMarkFG_Enemy; // 0x338 (8)
	struct UPDTextBlock TB_UserName_Foe; // 0x340 (8)
	struct UPDRoundRecordItem EnemyRecord01; // 0x348 (8)
	struct UPDRoundRecordItem EnemyRecord02; // 0x350 (8)
	struct UPDRoundRecordItem EnemyRecord03; // 0x358 (8)
	struct UPDRoundRecordItem EnemyRecord04; // 0x360 (8)
	struct UPDRoundRecordItem EnemyRecord05; // 0x368 (8)
	struct UPDRoundRecordItem EnemyRecord06; // 0x370 (8)
	struct UPDRoundReplayer RoundReplayer; // 0x378 (8)
	struct TArray<struct UPDRoundRecordItem> EnemyKeyRecords; // 0x380 (16)
};

// Class ProjectD.PDRoundWaitUI
class UPDRoundWaitUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_Desc; // 0x290 (8)
};

// Class ProjectD.PDScreenMarkerLoot
class UPDScreenMarkerLoot : public UPDHUDIconBaseUI {

public:

	struct UCanvasPanel CP_Root; // 0x2A0 (8)
	struct UPDCircleProgressModule PB_LootTime; // 0x2A8 (8)
};

// Class ProjectD.PDSeedProgressModule
class UPDSeedProgressModule : public UPDUserWidget {

public:

	struct FDelegate GetProgressPerDelegate; // 0x288 (16)
	struct UPDTextBlock TB_SeedDesc; // 0x298 (8)
	struct UPDTextBlock TB_PerText; // 0x2A0 (8)
	struct UProgressBar PRG_SeedSet; // 0x2A8 (8)
	struct UImage IMG_Icon; // 0x2B0 (8)
	struct UImage IMG_GaugeLight; // 0x2B8 (8)
	struct UCanvasPanel CP_Gauge; // 0x2C0 (8)
};

// Class ProjectD.PDShowBowStringNotify
class UPDShowBowStringNotify : public UPDBaseAnimNotify {

public:

	enum class EBowStringAction Action; // 0x48 (1)
};

// Class ProjectD.PDSkeletalMeshComponent
class UPDSkeletalMeshComponent : public USkeletalMeshComponent {

public:

	char bEnableLag : 1; // 0xAC8 (1)
	float LagSpeed; // 0xACC (4)
	float LagMaxTimeStep; // 0xAD0 (4)
	float DistanceThreashold; // 0xAD4 (4)
	char m_bEnableSystemLag : 1; // 0xAD8 (1)
	char m_bEnableLag : 1; // 0xAD8 (1)
	char m_bUpdateLag : 1; // 0xAD8 (1)
	char pad_ADC_4 : 4; // 0xADC (1)
	float m_OrgRelativeLocationZ; // 0xAE4 (4)
	struct FVector PreviousDesiredLoc; // 0xAE8 (12)
	struct FVector CurrentCharacterLoc; // 0xAF4 (12)
	float m_fCurrentRelativeZOffset; // 0xB00 (4)
	struct FVector RelativeSocketLocation; // 0xB04 (12)
	struct ACharacter m_pOwnerCharacter; // 0xB10 (8)
	struct USkeletalMeshComponent m_pTargetSkeletalMesh; // 0xB18 (8)
};

// Class ProjectD.PDSkyViewUI
class UPDSkyViewUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Map; // 0x288 (8)
	struct UCanvasPanel CP_DefuseBomb; // 0x290 (8)
	struct UCanvasPanel CP_MissionScore; // 0x298 (8)
	struct UWidgetSwitcher WS_BattleStyle; // 0x2A0 (8)
	struct URichTextBlock RTB_SeedAlert; // 0x2A8 (8)
	struct UPDTextBlock TB_AtkStr; // 0x2B0 (8)
	struct UPDTextBlock TB_DefStr; // 0x2B8 (8)
	struct UPDGameMapModule GameMap; // 0x2C0 (8)
	struct UImage IMG_Agent; // 0x2C8 (8)
	struct UImage IMG_PlayerNum; // 0x2D0 (8)
	struct UTexture PlayerTextureNum01; // 0x2D8 (8)
	struct UTexture PlayerTextureNum02; // 0x2E0 (8)
	struct UTexture PlayerTextureNum03; // 0x2E8 (8)
	struct UTexture PlayerTextureNum04; // 0x2F0 (8)
	struct UTexture PlayerTextureNum05; // 0x2F8 (8)
	struct UCanvasPanel CP_Recently01; // 0x300 (8)
	struct UCanvasPanel CP_Recently02; // 0x308 (8)
	struct UImage IMG_DamageAgent; // 0x310 (8)
	struct UImage IMG_FundAgent; // 0x318 (8)
	struct UImage IMG_PlayerNum01; // 0x320 (8)
	struct UImage IMG_PlayerNum02; // 0x328 (8)
	struct UPDTextBlock TB_DamageAgent; // 0x330 (8)
	struct UPDTextBlock TB_FundAgent; // 0x338 (8)
};

// Class ProjectD.PDSlidableActor
class APDSlidableActor : public UActor {

public:

	enum class EPDSlidableType SlidableType; // 0x230 (1)
	float ArrowDegree; // 0x234 (4)
	struct UBoxComponent Box; // 0x238 (8)
};

// Class ProjectD.PDSlider
class UPDSlider : public UPDUserWidget {

public:

	struct UPDCustomSlider Slider; // 0x288 (8)
	struct UPDTextBlock Value; // 0x290 (8)
	struct UEditableText EB_Value; // 0x298 (8)
	struct FSlateFontInfo Font; // 0x2A0 (80)
	struct FLinearColor BarColor; // 0x2F0 (16)
	struct FSlateColor TextColor; // 0x300 (40)
	struct FSliderStyle SliderStyle; // 0x328 (832)
	float StepSize; // 0x668 (4)

	void OnSliderTextCommitted(struct FText& InText, enum class ETextCommit CommitMethod); // Function ProjectD.PDSlider.OnSliderTextCommitted(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1844F50>
	void OnSliderTextChanged(struct FText& InText); // Function ProjectD.PDSlider.OnSliderTextChanged(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1844E70>
};

// Class ProjectD.PDSoloModeComponent
class UPDSoloModeComponent : public UStaticMeshComponent {

public:

	struct FActiveRangeInfo ArraySpawnInfo; // 0x498 (36)
};

// Class ProjectD.PDSoundOptionUI
class UPDSoundOptionUI : public UPDOptionUIBase {

public:

	struct UPDTabButton SoundSettingBtn; // 0x338 (8)
	struct UPDTabButton VoiceSettingBtn; // 0x340 (8)
	struct UScrollBox SB_Sounds; // 0x348 (8)

	void OnVoiceChatTeamPushToTalk(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamPushToTalk(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845570>
	void OnVoiceChatTeamOpenMic(); // Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamOpenMic(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845550>
	void OnVoiceChatSensitiveChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatSensitiveChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18454D0>
	void OnVoiceChatOutputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845450>
	void OnVoiceChatNoiseFloorChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18453D0>
	void OnVoiceChatInputVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatInputVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845350>
	void OnVoiceChatEnableChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnVoiceChatEnableChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18452C0>
	void OnSpatialChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnSpatialChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18451B0>
	void OnSoundPresetChanged(struct FString sItem, enum class ESelectInfo SelType); // Function ProjectD.PDSoundOptionUI.OnSoundPresetChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1845080>
	void OnSfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnSfxVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844DF0>
	void OnOperatorVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnOperatorVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844D70>
	void OnMasterVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnMasterVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844CF0>
	void OnLobbySfxVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbySfxVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844C70>
	void OnLobbyBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnLobbyBgmVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844BF0>
	void OnInputKeySelected(struct UPDOptionContent Content); // Function ProjectD.PDSoundOptionUI.OnInputKeySelected(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844B70>
	void OnHRTFChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnHRTFChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844AE0>
	void OnClickVoiceSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickVoiceSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816910>
	void OnClickSoundSettingButton(); // Function ProjectD.PDSoundOptionUI.OnClickSoundSettingButton(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1816A30>
	void OnCharacterVoiceVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnCharacterVoiceVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x18449A0>
	void OnBgmVolumeChanged(float Value); // Function ProjectD.PDSoundOptionUI.OnBgmVolumeChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844920>
	void OnBackGroundVolumePlayChanged(bool Value); // Function ProjectD.PDSoundOptionUI.OnBackGroundVolumePlayChanged(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1844890>
};

// Class ProjectD.PDSpectatorPlayerEntry
class UPDSpectatorPlayerEntry : public UPDUserWidget {

public:

	struct UImage IMG_PlayerPic; // 0x288 (8)
	struct UImage IMG_PlayerPic_Dead; // 0x290 (8)
	struct UPDTextBlock T_PlayerName; // 0x298 (8)
	struct UBorder B_PlayerCode; // 0x2A0 (8)
	struct UPDTextBlock T_PlayerNum; // 0x2A8 (8)
	struct UWidgetSwitcher WS_PlayerState; // 0x2B0 (8)
	struct UWidgetSwitcher WS_IconState; // 0x2B8 (8)
	struct UProgressBar PB_HP; // 0x2C0 (8)
	struct UProgressBar PB_Groggy; // 0x2C8 (8)
	struct UWidgetSwitcher WS_Weapon_01; // 0x2D0 (8)
	struct UImage IMG_Weapon_01; // 0x2D8 (8)
	struct UWidgetSwitcher WS_Weapon_02; // 0x2E0 (8)
	struct UImage IMG_Weapon_02; // 0x2E8 (8)
	struct UWidgetSwitcher WS_Weapon_03; // 0x2F0 (8)
	struct UImage IMG_Weapon_03; // 0x2F8 (8)
	struct UWidgetSwitcher WS_Weapon_Melee; // 0x300 (8)
	struct UImage IMG_Weapon_Melee; // 0x308 (8)
	struct UImage IMG_SlotBG01; // 0x310 (8)
	struct UImage IMG_SlotBG02; // 0x318 (8)
	struct UImage IMG_SlotBG03; // 0x320 (8)
	struct UImage IMG_SlotBGMelee; // 0x328 (8)
	struct TArray<struct UImage> IMG_BGList; // 0x488 (16)
};

// Class ProjectD.PDSpectatorEntryAlly
class UPDSpectatorEntryAlly : public UPDSpectatorPlayerEntry {

public:

	struct UImage IMG_PlayerState; // 0x498 (8)
	struct UPDArmorGauge ArmorGauge; // 0x4A0 (8)
	struct UWidgetSwitcher WS_Weapon_04; // 0x4A8 (8)
	struct UWidgetSwitcher WS_Weapon_Th1; // 0x4B0 (8)
	struct UImage IMG_Weapon_Th1; // 0x4B8 (8)
	struct UPDTextBlock TB_Weapon_Th1; // 0x4C0 (8)
	struct UWidgetSwitcher WS_Weapon_Th2; // 0x4C8 (8)
	struct UImage IMG_Weapon_Th2; // 0x4D0 (8)
	struct UPDTextBlock TB_Weapon_Th2; // 0x4D8 (8)
	struct UWidgetSwitcher WS_Weapon_05; // 0x4E0 (8)
	struct UImage IMG_Weapon_05; // 0x4E8 (8)
	struct UPDTextBlock TB_Weapon_05; // 0x4F0 (8)
	struct UWidgetSwitcher WS_Weapon_06; // 0x4F8 (8)
	struct UImage IMG_Weapon_06; // 0x500 (8)
	struct UPDTextBlock TB_Weapon_06; // 0x508 (8)
	struct UWidgetSwitcher WS_Weapon_07; // 0x510 (8)
	struct UImage IMG_Weapon_07; // 0x518 (8)
	struct UPDTextBlock TB_Weapon_07; // 0x520 (8)
	struct UImage IMG_ModeItem; // 0x528 (8)
	struct UPDTextBlock TB_ModeItem_Empty; // 0x530 (8)
	struct UImage IMG_PowerArmor; // 0x538 (8)
	struct UPDTextBlock TB_PowerArmor_Empty; // 0x540 (8)
	struct UImage IMG_RevivalKit; // 0x548 (8)
	struct UPDTextBlock TB_RevivalKit_Empty; // 0x550 (8)
	struct UImage IMG_Outline_Self; // 0x558 (8)
	struct UImage IMG_Outline_Target; // 0x560 (8)
	struct UImage IMG_SlotBG04; // 0x568 (8)
	struct UImage IMG_SlotBG05; // 0x570 (8)
	struct UImage IMG_SlotBG06; // 0x578 (8)
	struct UImage IMG_SlotBG07; // 0x580 (8)
	struct UImage IMG_SlotBGSeed; // 0x588 (8)
	struct UImage IMG_SlotBGRevival; // 0x590 (8)
	struct UImage IMG_SlotBGAgent; // 0x598 (8)
};

// Class ProjectD.PDSpectatorTargetInfo
class UPDSpectatorTargetInfo : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Health; // 0x288 (8)
	struct UProgressBar PB_Health; // 0x290 (8)
	struct UProgressBar PB_Health_Expect; // 0x298 (8)
	struct UProgressBar PB_Health_Inc; // 0x2A0 (8)
	struct UProgressBar PB_Health_Dec; // 0x2A8 (8)
	struct UPDTextBlock TB_Health; // 0x2B0 (8)
	struct UPDTextBlock TB_TotalHealth; // 0x2B8 (8)
	struct UPDTextBlock TB_Health_w; // 0x2C0 (8)
	struct UPDTextBlock TB_TotalHealth_w; // 0x2C8 (8)
	struct UCanvasPanel CP_BlackMask; // 0x2D0 (8)
	struct UCanvasPanel CP_WhiteMask; // 0x2D8 (8)
	struct FVector2D HealthSize; // 0x2E0 (8)
	struct UCanvasPanel CP_GroggyHP; // 0x300 (8)
	struct UProgressBar PB_GroggyHP; // 0x308 (8)
	struct UPDArmorGaugeDetail ArmorGauge; // 0x310 (8)
	struct UPDPlayerEquipmentDetail EquipmentDetail; // 0x318 (8)
	struct UImage IMG_KeyFill_Q; // 0x320 (8)
	struct UImage IMG_KeyFill_W; // 0x328 (8)
	struct UImage IMG_KeyFill_E; // 0x330 (8)
	struct UImage IMG_KeyFill_R; // 0x338 (8)
	struct UImage IMG_KeyFill_A; // 0x340 (8)
	struct UImage IMG_KeyFill_S; // 0x348 (8)
	struct UImage IMG_KeyFill_D; // 0x350 (8)
	struct UImage IMG_KeyFill_F; // 0x358 (8)
	struct UImage IMG_KeyFill_Z; // 0x360 (8)
	struct UImage IMG_KeyFill_X; // 0x368 (8)
	struct UImage IMG_KeyFill_C; // 0x370 (8)
	struct UImage IMG_KeyFill_V; // 0x378 (8)
	struct UImage IMG_KeyFill_LShift; // 0x380 (8)
	struct UImage IMG_KeyFill_LCtrl; // 0x388 (8)
	struct UImage IMG_KeyFill_Space; // 0x390 (8)
	struct UImage IMG_KeyFill_MLB; // 0x398 (8)
	struct UImage IMG_KeyFill_MRB; // 0x3A0 (8)
	struct UImage IMG_KeyFill_MMB; // 0x3A8 (8)
	struct UImage IMG_KeyFill_MWU; // 0x3B0 (8)
	struct UImage IMG_KeyFill_MWD; // 0x3B8 (8)
	struct UPDTextBlock TB_Key_Q; // 0x3C0 (8)
	struct UPDTextBlock TB_Key_W; // 0x3C8 (8)
	struct UPDTextBlock TB_Key_E; // 0x3D0 (8)
	struct UPDTextBlock TB_Key_R; // 0x3D8 (8)
	struct UPDTextBlock TB_Key_A; // 0x3E0 (8)
	struct UPDTextBlock TB_Key_S; // 0x3E8 (8)
	struct UPDTextBlock TB_Key_D; // 0x3F0 (8)
	struct UPDTextBlock TB_Key_F; // 0x3F8 (8)
	struct UPDTextBlock TB_Key_Z; // 0x400 (8)
	struct UPDTextBlock TB_Key_X; // 0x408 (8)
	struct UPDTextBlock TB_Key_C; // 0x410 (8)
	struct UPDTextBlock TB_Key_V; // 0x418 (8)
	struct UPDTextBlock TB_Key_LShift; // 0x420 (8)
	struct UPDTextBlock TB_Key_LCtrl; // 0x428 (8)
	struct UPDTextBlock TB_Key_Space; // 0x430 (8)
};

// Class ProjectD.PDSpectatorUI
class UPDSpectatorUI : public UPDIngameModeWidget {

public:

	struct UPDTextBlock TB_Name; // 0x290 (8)
	struct UPDSpectatorTargetInfo TargetInfo; // 0x298 (8)
	struct UVerticalBox VB_AllyTeam; // 0x2A0 (8)
	struct UVerticalBox VB_EnemyTeam; // 0x2A8 (8)
	struct UPanelWidget PW_CheerList; // 0x2B0 (8)
	struct UCanvasPanel CP_CheerTarget; // 0x2B8 (8)
	struct UHorizontalBox HB_UserData; // 0x2C0 (8)
	struct UImage IMG_Medal1; // 0x2C8 (8)
	struct UImage IMG_Medal2; // 0x2D0 (8)
	struct UImage IMG_Medal3; // 0x2D8 (8)
	struct TArray<struct UPDSpectatorPlayerEntry> AllyPlayers; // 0x2E0 (16)
	struct TArray<struct UPDSpectatorPlayerEntry> EnemyPlayers; // 0x2F0 (16)
	struct TArray<struct UWidget> Cheers; // 0x300 (16)
};

// Class ProjectD.PDSplineCamera
class APDSplineCamera : public ACameraActor {

public:

	struct USplineComponent SplineComp; // 0x7B0 (8)
	struct UStaticMeshComponent OriginComp; // 0x7B8 (8)
	float PlayingTime; // 0x7C0 (4)
	float TotalTime; // 0x7C4 (4)
	bool IsLoop; // 0x7C8 (1)
	bool IsPlaying; // 0x7C9 (1)
	enum class ESplineRotation RotationType; // 0x7CA (1)
	struct UActor LookAtTarget; // 0x7D0 (8)
	enum class ESplineTrace TraceMode; // 0x7D8 (1)
};

// Class ProjectD.PDSplineCameraTimelineComponent
class UPDSplineCameraTimelineComponent : public UPDTimelineBaseComponent {

public:

	struct TArray<struct FEventData> EventDataArray; // 0xB0 (16)
};

// Class ProjectD.PDSplineComponent
class UPDSplineComponent : public USplineComponent {

public:

	struct TArray<struct FRuntimeFloatCurve> TimelineCurveList; // 0x4F8 (16)
};

// Class ProjectD.PDSplitObject
class APDSplitObject : public UActor {

public:

	struct TArray<struct UPDSplitObjectComponent> SplitObjectCompList; // 0x230 (16)
	struct TArray<enum class EDamageType> EffectiveDamages; // 0x240 (16)
	struct FString DestructSound; // 0x250 (16)
};

// Class ProjectD.PDSplitObjectComponent
class UPDSplitObjectComponent : public UStaticMeshComponent {

public:

	bool RootNode; // 0x498 (1)
	int32_t HP; // 0x49C (4)
	int32_t DestructEffectID; // 0x4A0 (4)
};

// Class ProjectD.PDStartUI
class UPDStartUI : public UPDSceneBaseUI {

public:

	struct UCanvasPanel CP_Ratings; // 0x288 (8)
	struct UBorder B_MovieBG; // 0x290 (8)
	struct UWidget IMG_Movie; // 0x298 (8)
	struct UMediaPlayer SplashMediaPlayer; // 0x2A0 (8)
	struct FString SplashFilePath; // 0x2A8 (16)

	void OnSplashMovieOpened(); // Function ProjectD.PDStartUI.OnSplashMovieOpened(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x18481A0>
	void OnSplashMovieClosed(); // Function ProjectD.PDStartUI.OnSplashMovieClosed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1848180>
	void OnInitMediaPlayer(); // Function ProjectD.PDStartUI.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class ProjectD.PDStateBase
class UPDStateBase : public Object {

public:

	struct UPDStateComponent OwnerStateComponent; // 0x30 (8)
	struct APDPlayerCharacter OwnerPlayerCharacter; // 0x38 (8)
};

// Class ProjectD.PDStateGaugeUI
class UPDStateGaugeUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_GroggyHP; // 0x290 (8)
	struct UProgressBar PB_GroggyHP; // 0x298 (8)
	struct UCanvasPanel CP_StaminaGauge; // 0x2A0 (8)
	struct UProgressBar PB_StaminaGauge; // 0x2A8 (8)
};

// Class ProjectD.PDStatusBoardGameMap
class UPDStatusBoardGameMap : public UPDGameMapModule {

public:

	struct UCanvasPanel PaintZone; // 0x3C0 (8)
};

// Class ProjectD.PDStatusBoardPlayerInfo_Ally
class UPDStatusBoardPlayerInfo_Ally : public UPDStatusBoardPlayerInfoBase {

public:

	struct UPDTextBlock T_PlayerNum; // 0x398 (8)
	struct UImage IMG_SlotBg_Me; // 0x3A0 (8)
	struct UCanvasPanel CP_Voice; // 0x3A8 (8)
	struct UPDButton Btn_Voice_Active; // 0x3B0 (8)
	struct UPDButton Btn_Voice_Mute; // 0x3B8 (8)
	struct UWidgetSwitcher WS_VoiceState; // 0x3C0 (8)
	struct UWidgetSwitcher WS_VolumeState; // 0x3C8 (8)
	struct USlider Sd_Volume_Active; // 0x3D0 (8)
	struct UPDTextBlock T_Volume_Active; // 0x3D8 (8)
	struct USlider Sd_Volume_Muted; // 0x3E0 (8)
	struct UPDTextBlock T_Volume_Muted; // 0x3E8 (8)

	void OnVoiceVolumeChanged(float Value); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnVoiceVolumeChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x18482E0>
	void OnClickVoiceMute(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceMute(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1848140>
	void OnClickVoiceAvtive(); // Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceAvtive(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1848120>
};

// Class ProjectD.PDStatusBoardRoundList
class UPDStatusBoardRoundList : public UPDUserWidget {

public:

	struct UVerticalBox VB_Container; // 0x288 (8)
};

// Class ProjectD.PDStatusBoardRoundListItem
class UPDStatusBoardRoundListItem : public UPDUserWidget {

public:

	struct UPDButton BTN_Slot; // 0x288 (8)
	struct UPDTextBlock T_Round; // 0x290 (8)
	struct UPDTextBlock T_Match; // 0x298 (8)
	struct UPDTextBlock T_Time; // 0x2A0 (8)

	void OnClickRoundListItem(); // Function ProjectD.PDStatusBoardRoundListItem.OnClickRoundListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B560>
};

// Class ProjectD.PDStatusBoardRoundResultItem
class UPDStatusBoardRoundResultItem : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_ResultType; // 0x288 (8)
	struct UImage IMG_ModeIcon; // 0x290 (8)
	struct UImage IMG_SLotBg; // 0x298 (8)
	struct UPDTextBlock T_RoundInfo; // 0x2A0 (8)
	struct UPDTextBlock T_Win; // 0x2A8 (8)
	struct UImage IMG_CauseIcon; // 0x2B0 (8)
	struct UHorizontalBox HB_ModePlayer; // 0x2B8 (8)
	struct UPDTextBlock T_PlayerName; // 0x2C0 (8)
	struct UPDTextBlock T_Desc; // 0x2C8 (8)
	struct UPaperSprite AttackImg; // 0x2D0 (8)
	struct UPaperSprite DefenceImg; // 0x2D8 (8)
	struct UPaperSprite InstallImg; // 0x2E0 (8)
	struct UPaperSprite DeactiveImg; // 0x2E8 (8)
	struct UPaperSprite KilledImg; // 0x2F0 (8)
	struct UPaperSprite TimeOutImg; // 0x2F8 (8)
};

// Class ProjectD.PDStatusBoardSeedSlot
class UPDStatusBoardSeedSlot : public UPDUserWidget {

public:

	struct UImage IMG_SEED; // 0x288 (8)
	struct UBorder B_SEED; // 0x290 (8)
	struct FLinearColor MouseNormalColor; // 0x298 (16)
	struct FLinearColor MouseOverColor; // 0x2A8 (16)
	struct UDragDropOperation DragDropOperation; // 0x2B8 (8)
	struct UPDInvenDrag InvenDrag; // 0x2C0 (8)
};

// Class ProjectD.PDStatusBoardUpgradeSlot
class UPDStatusBoardUpgradeSlot : public UPDUserWidget {

public:

	struct UPDTextBlock T_Level; // 0x288 (8)
	struct UPDTextBlock T_Name; // 0x290 (8)
	struct UImage IMG_SlotShadow; // 0x298 (8)
	struct UImage IMG_SLotBg; // 0x2A0 (8)
	struct UImage IMG_SlotOutline; // 0x2A8 (8)
	struct UProgressBar PB_Upgrade_01; // 0x2B0 (8)
	struct UProgressBar PB_Upgrade_02; // 0x2B8 (8)
	struct UProgressBar PB_Upgrade_03; // 0x2C0 (8)
	struct UProgressBar PB_Upgrade_04; // 0x2C8 (8)
	struct UProgressBar PB_Upgrade_05; // 0x2D0 (8)
	struct TArray<struct UProgressBar> GaugeList; // 0x2D8 (16)
	struct FLinearColor GaugeColor; // 0x2E8 (16)
	struct FText UpgradeGroup; // 0x2F8 (24)
	struct FText UpgradeGroupName; // 0x310 (24)
	bool IsEnemy; // 0x328 (1)
};

// Class ProjectD.PDStoppingPowerComponent
class UPDStoppingPowerComponent : public USceneComponent {

public:

	struct UAnimSequence SP_HitFrontAnim; // 0x1F0 (8)
	struct UAnimSequence SP_HitBackAnim; // 0x1F8 (8)
	struct UAnimSequence SP_HitLeftAnim; // 0x200 (8)
	struct UAnimSequence SP_HitRightAnim; // 0x208 (8)
};

// Class ProjectD.PDSubtitleUI
class UPDSubtitleUI : public UPDUserWidget {

public:

	struct UVerticalBox VB_Subtitle; // 0x288 (8)
	struct UPDTextBlock TB_CopyTextBlock; // 0x290 (8)
	struct UImage IMG_SubtitleBG; // 0x298 (8)
	int32_t MaxSubtitleNum; // 0x2A0 (4)
	float SubtitleDestroyTime; // 0x2A4 (4)
};

// Class ProjectD.PDSystemMessageUI
class UPDSystemMessageUI : public UPDUserWidget {

public:

	struct UCanvasPanel CP_SysMsg; // 0x288 (8)
	struct UPDTextBlock TB_Text; // 0x290 (8)
	float DefaultDuration; // 0x298 (4)
	float RollInterval; // 0x29C (4)
	float RollSpeed; // 0x2A0 (4)
	float StartOffset; // 0x2A4 (4)
};

// Class ProjectD.PDTabButton
class UPDTabButton : public UPDButton {

public:

	struct UWidgetSwitcher TabBtnStateSwitcher; // 0xC70 (8)
	struct UBorder SelectBG; // 0xC78 (8)
	struct UPDTextBlock SelectText; // 0xC80 (8)
	struct UBorder Selected_Outline; // 0xC88 (8)
	struct FSlateBrush SelectedBGStyle; // 0xC90 (136)
	struct FSlateColor SelectedTextColor; // 0xD18 (40)
	bool UseSelectedOutline; // 0xD40 (1)
	struct FPDButtonOutLine SelectedOutLineStyle; // 0xD48 (200)
	struct UPDTabButtonGroup Parent; // 0xE18 (8)
};

// Class ProjectD.PDTabButtonGroup
class UPDTabButtonGroup : public Object {

public:

	struct TArray<struct UPDTabButton> TabButtons; // 0x28 (16)
};

// Class ProjectD.PDTargetScreenUI
class UPDTargetScreenUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_Root; // 0x290 (8)
	struct TMap<int32_t, struct UPDHUDIconBaseUI> MarkerMap; // 0x298 (80)
};

// Class ProjectD.PDTeamCharListItem
class UPDTeamCharListItem : public UPDUserWidget {

public:

	struct UPDTextBlock T_PlayerName; // 0x288 (8)
	struct UImage IMG_Face; // 0x290 (8)
};

// Class ProjectD.PDTextBlock
class UPDTextBlock : public UTextBlock {

public:

	struct FMargin TextMargin; // 0x2A0 (16)
	bool IsKeyButton; // 0x2B0 (1)
	struct FText ControlName; // 0x2B8 (24)
};

// Class ProjectD.PDTutorialNPC
class APDTutorialNPC : public APDNpc {

public:

	struct UPDWeaponControlComponent PDWeaponCtrlComponent; // 0x808 (8)
	struct UPhysicalAnimationComponent PhysicalAnimation; // 0x810 (8)
};

// Class ProjectD.PDTutorialPopupUI
class UPDTutorialPopupUI : public UPDOKCancelPopupUI {

public:

	struct UWidgetSwitcher WS_Title; // 0x2F8 (8)
	struct URichTextBlock RT_Desc; // 0x300 (8)
	struct UWidgetSwitcher WS_Reward_01; // 0x308 (8)
	struct UImage IMG_Reward_01; // 0x310 (8)
	struct UPDTextBlock T_Reward_01; // 0x318 (8)
	struct UPDTextBlock T_Desc_Reward_01; // 0x320 (8)
	struct UWidgetSwitcher WS_Reward_02; // 0x328 (8)
	struct UImage IMG_Reward_02; // 0x330 (8)
	struct UPDTextBlock T_Reward_02; // 0x338 (8)
	struct UPDTextBlock T_Desc_Reward_02; // 0x340 (8)
};

// Class ProjectD.PDTutorialQuestItem
class UPDTutorialQuestItem : public UPDUserWidget {

public:

	struct UVerticalBox VB_OptionContents; // 0x290 (8)
	struct UBorder BD_TutoList; // 0x298 (8)
	struct UImage IMG_CHK; // 0x2A0 (8)
	struct UPDTextBlock TB_ContentName; // 0x2A8 (8)
	struct UHorizontalBox HB_Keys; // 0x2B0 (8)
	struct UWidgetSwitcher WS_KeyBase; // 0x2B8 (8)
	struct UWidgetSwitcher WS_PressType; // 0x2C0 (8)
	struct USizeBox SB_CommaBase; // 0x2C8 (8)
	struct UPDImage ScanLine; // 0x2D0 (8)
	struct UWidgetAnimation WA_Complete; // 0x2D8 (8)
	struct UWidgetAnimation WA_Initialize; // 0x2E0 (8)

	void OnInitializeAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnInitializeAnimationFinished(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B600>
	void OnCompleteAnimationFinished(); // Function ProjectD.PDTutorialQuestItem.OnCompleteAnimationFinished(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B580>
};

// Class ProjectD.PDTutorialQuestListUI
class UPDTutorialQuestListUI : public UPDIngameModeWidget {

public:

	struct UVerticalBox VB_List; // 0x290 (8)
	struct UPDTextBlock TB_QuestList; // 0x298 (8)
	struct UPDTextBlock TB_CurrentPhase; // 0x2A0 (8)
	struct UPDTextBlock TB_TotalPhase; // 0x2A8 (8)
	struct UListView LV_Quest; // 0x2B0 (8)
	struct UWidgetAnimation WA_Intro; // 0x2B8 (8)

	void ShowNextQuestListItem(); // Function ProjectD.PDTutorialQuestListUI.ShowNextQuestListItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B720>
	void OnIntroAnimationFinished(); // Function ProjectD.PDTutorialQuestListUI.OnIntroAnimationFinished(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B620>
};

// Class ProjectD.PDUniqueLeptonListItem
class UPDUniqueLeptonListItem : public UPDUserWidget {

public:

	struct UImage IMG_Item; // 0x290 (8)
	struct UPDTextBlock TB_Name; // 0x298 (8)
	struct UPDTextBlock TB_Desc; // 0x2A0 (8)
};

// Class ProjectD.PDUnKnowMarketCoinSlot
class UPDUnKnowMarketCoinSlot : public UPDUserWidget {

public:

	struct UDragDropOperation DragDropOperation; // 0x288 (8)
	struct UPDTextBlock TB_Name; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UPDTextBlock TB_CurNum; // 0x2A0 (8)
	struct UPDTextBlock TB_GetCoin; // 0x2A8 (8)
	struct UPDTextBlock TB_GetCoin_Fx; // 0x2B0 (8)
	struct UImage IMG_Empty; // 0x2B8 (8)
	struct UBorder BD_Bg; // 0x2C0 (8)
	struct UPaperSprite EmptyPaperSprite; // 0x2C8 (8)
	struct UCanvasPanel CP_Dragable; // 0x2D0 (8)
	struct FLinearColor MouseNormalColor; // 0x2D8 (16)
	struct FLinearColor MouseOverColor; // 0x2E8 (16)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketCoinSlot.OnSynchronizeProperties(Native|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1811A40>
};

// Class ProjectD.PDUnKnowMarketModeSlot
class UPDUnKnowMarketModeSlot : public UPDUserWidget {

public:

	struct UDragDropOperation DragDropOperation; // 0x288 (8)
	struct UPDTextBlock TB_Name; // 0x290 (8)
	struct UImage IMG_Item; // 0x298 (8)
	struct UPDTextBlock TB_CurNum; // 0x2A0 (8)
	struct UImage IMG_Empty; // 0x2A8 (8)
	struct UBorder BD_Bg; // 0x2B0 (8)
	struct UPaperSprite EmptyPaperSprite; // 0x2B8 (8)
	struct FLinearColor MouseNormalColor; // 0x2C0 (16)
	struct FLinearColor MouseOverColor; // 0x2D0 (16)
	struct UCanvasPanel CP_Dragable; // 0x2E0 (8)

	void OnSynchronizeProperties(); // Function ProjectD.PDUnKnowMarketModeSlot.OnSynchronizeProperties(Native|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1811A40>
};

// Class ProjectD.PDUnKnownMarket
class UPDUnKnownMarket : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_InvenArea; // 0x290 (8)
	struct UListView LV_PickupList; // 0x298 (8)
	struct UCanvasPanel CP_PickupListArea; // 0x2A0 (8)
	struct UPDInvenListItem InvenListTitle; // 0x2A8 (8)
	struct UListView LV_InvenList; // 0x2B0 (8)
	struct UCanvasPanel CP_InvenListArea; // 0x2B8 (8)
	struct UPDUnKnownMarketEquipSlot Main1EquipSlot; // 0x2C0 (8)
	struct UPDUnKnownMarketEquipSlot Main2EquipSlot; // 0x2C8 (8)
	struct UPDUnKnownMarketEquipSlot SubEquipSlot; // 0x2D0 (8)
	struct USizeBox SB_Throw_2; // 0x2D8 (8)
	struct UPDUnKnownMarketItemSlot ThrowSlot1; // 0x2E0 (8)
	struct USizeBox SB_Throw_3; // 0x2E8 (8)
	struct UPDUnKnownMarketItemSlot ThrowSlot2; // 0x2F0 (8)
	struct USizeBox SB_Recover_2; // 0x2F8 (8)
	struct UPDUnKnownMarketItemSlot RecoverSlot1; // 0x300 (8)
	struct USizeBox SB_Recover_3; // 0x308 (8)
	struct UPDUnKnownMarketItemSlot RecoverSlot2; // 0x310 (8)
	struct USizeBox SB_Recover_4; // 0x318 (8)
	struct UPDUnKnownMarketItemSlot RecoverSlot3; // 0x320 (8)
	struct UPDUnKnowMarketModeSlot ModeSlot; // 0x328 (8)
	struct UPDUnKnowMarketCoinSlot CoinSlot; // 0x330 (8)
	struct UPDInvenDivide InvenDivide; // 0x338 (8)
	struct UPDTextBlock T_Coin; // 0x340 (8)
	struct UPDTextBlock TB_GetCoin; // 0x348 (8)
	struct UPDTextBlock TB_GetCoin_Fx; // 0x350 (8)
	struct UPDTextBlock T_TeamCoinTitle; // 0x358 (8)
	struct UHorizontalBox HB_TeamCoinNum; // 0x360 (8)
	struct UPDTextBlock T_TeamCoin; // 0x368 (8)
	struct UCanvasPanel CP_CoinTooltip; // 0x370 (8)
	struct UPDTextBlock T_TooltipCoin; // 0x378 (8)
	struct UPDTextBlock T_InvenRemain; // 0x380 (8)
	struct UPDTextBlock T_InvenRemain_Slash; // 0x388 (8)
	struct UPDTextBlock T_InvenRemain_Max; // 0x390 (8)
	struct UScrollBox SB_InvenList; // 0x398 (8)
	struct UVerticalBox VB_MissionItem; // 0x3A0 (8)
	struct UListView LV_MissionItemList; // 0x3A8 (8)
	struct UPDInvenListItem AmmoListTitle; // 0x3B0 (8)
	struct UListView LV_AmmoList; // 0x3B8 (8)
	struct TArray<struct UPDUnKnownMarketEquipSlot> WeaponSlots; // 0x3D0 (16)
	struct TArray<struct Object> ItemStorageList; // 0x430 (16)
	struct UGridPanel CP_Market; // 0x4C8 (8)
	struct UCanvasPanel CP_Upgrade; // 0x4D0 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_All; // 0x4D8 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_Pistol; // 0x4E0 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_SMG; // 0x4E8 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_SG; // 0x4F0 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_AR; // 0x4F8 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_LMG; // 0x500 (8)
	struct UPDUnKnownMarketWeaponCategory Tab_SR; // 0x508 (8)
	struct UPDTabButtonGroup WeaponCategoryGroup; // 0x518 (8)
	struct UPDUnKnownMarketUpgradeSlot UpgradeSlot_ARMORY; // 0x520 (8)
	struct UPDUnKnownMarketUpgradeSlot UpgradeSlot_ORDNANCE; // 0x528 (8)
	struct UPDUnKnownMarketUpgradeSlot UpgradeSlot_TACTICAL; // 0x530 (8)
	struct UPDUnKnownMarketUpgradeSlot UpgradeSlot_DEFENCE; // 0x538 (8)
	struct UPDUnKnownMarketFundingTooltip FundingTooltip; // 0x590 (8)
	struct UCanvasPanel CP_Reward; // 0x598 (8)
	struct UPDUnKnownMarketFundingProgress FundingReward_01; // 0x5A0 (8)
	struct UPDUnKnownMarketFundingProgress FundingReward_02; // 0x5A8 (8)
	struct UPDUnKnownMarketFundingProgress FundingReward_03; // 0x5B0 (8)
	struct UCanvasPanel CP_UpgradeTooltip; // 0x5C8 (8)
	struct UPDUnKnownMarketUpgradeTooltip UpgradeTooltip; // 0x5D0 (8)
	struct UTileView TV_WeaponList; // 0x5D8 (8)
	struct UTileView TV_ThrowItem; // 0x5E0 (8)
	struct UTileView TV_RecoverItem; // 0x5E8 (8)
	struct UTileView TV_TacticalItem; // 0x5F0 (8)
	struct UTileView TV_AmmoItem; // 0x5F8 (8)
	struct UPDUnKnownMarketTooltip MarketTooltip; // 0x600 (8)
	struct UCanvasPanel CP_InvenListDragable; // 0x608 (8)
	struct UCanvasPanel CP_PickupListDragable; // 0x610 (8)
	struct UPDKeyButton KBtn_Close; // 0x618 (8)
	struct UHorizontalBox HB_RespawnGuide; // 0x620 (8)
	struct URichTextBlock RTB_GuideMessage; // 0x628 (8)
	struct UProgressBar PB_Skip; // 0x630 (8)
	struct UPDKeyButton KBtn_Respawn; // 0x638 (8)
	struct TArray<struct UPDUnKnownMarketListItemData> ListItemDataList; // 0x7E0 (16)
	struct TArray<struct UPDUnKnownMarketListItemData> EmptyListItemData; // 0x7F0 (16)

	void SelectWeaponCategory(int32_t ItemProp); // Function ProjectD.PDUnKnownMarket.SelectWeaponCategory(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184B6A0>
	void OnClickRespawnBtn(); // Function ProjectD.PDUnKnownMarket.OnClickRespawnBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	void OnClickCloseBtn(); // Function ProjectD.PDUnKnownMarket.OnClickCloseBtn(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B4E0>
	void DivideBgMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ProjectD.PDUnKnownMarket.DivideBgMouseDown(Final|Native|Private|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x184B320>
};

// Class ProjectD.PDUnKnownMarketEquipSlot
class UPDUnKnownMarketEquipSlot : public UPDUserWidget {

public:

	struct UDragDropOperation DragDropOperation; // 0x288 (8)
	struct UCanvasPanel CP_TooltipArea; // 0x290 (8)
	struct URetainerBox RT_EquipSlot; // 0x298 (8)
	struct UCanvasPanel CP_EquipState; // 0x2A0 (8)
	struct UCanvasPanel CP_EmptyState; // 0x2A8 (8)
	struct UPDTextBlock T_EmptySlotTitle; // 0x300 (8)
	struct UPDTextBlock TB_EmptyName; // 0x308 (8)
	struct UPDTextBlock TB_Name; // 0x310 (8)
	struct UPDTextBlock T_BulletAmount; // 0x318 (8)
	struct UPDTextBlock T_InvenBulletAmount; // 0x320 (8)
	struct UImage IMG_Item; // 0x328 (8)
	struct UImage IMG_Empty; // 0x330 (8)
	struct UImage IMG_Bullet; // 0x338 (8)
	struct UPDTextBlock T_BulletInfo; // 0x340 (8)
	struct UImage IMG_SLotBg; // 0x348 (8)
	struct UWidgetSwitcher WS_SellState; // 0x350 (8)
	struct UPDTextBlock T_ResellPrice; // 0x358 (8)
	struct UCanvasPanel CP_Parts; // 0x360 (8)
	struct UCanvasPanel CP_Dragable; // 0x368 (8)
	struct UCanvasPanel CP_Equipped; // 0x370 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Muzzle; // 0x378 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Barrel; // 0x380 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Laser; // 0x388 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_UnderBarrel; // 0x390 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Scope; // 0x398 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Magazine; // 0x3A0 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Grip; // 0x3A8 (8)
	struct UPDUnKnownMarketWeaponPartSlot PartSlot_Stock; // 0x3B0 (8)
	struct UHorizontalBox HB_Loadout; // 0x408 (8)
	struct UPDTextBlock T_LoadoutTitle; // 0x410 (8)
	struct USizeBox SB_Loadout_A; // 0x418 (8)
	struct UPDTabButton Tab_LoadoutA; // 0x420 (8)
	struct USizeBox SB_Loadout_B; // 0x428 (8)
	struct UPDTabButton Tab_LoadoutB; // 0x430 (8)
	struct USizeBox SB_Loadout_C; // 0x438 (8)
	struct UPDTabButton Tab_LoadoutC; // 0x440 (8)
	struct UPDTabButtonGroup LoadoutTabGroup; // 0x448 (8)
	struct UPDButton Btn_Refund; // 0x450 (8)
	struct UPDButton Btn_Sell; // 0x458 (8)
	struct UImage IMG_LoadoutHighlight_Tutorial; // 0x460 (8)
	struct TArray<struct USizeBox> LoadoutUIList; // 0x468 (16)
	struct FText InSlotNumber; // 0x478 (24)
	struct FText InSlotEmptyTitle; // 0x490 (24)
	struct FText InWeaponClass; // 0x4A8 (24)
	struct FSlateBrush InEmptyIconBrush; // 0x4C0 (136)
	struct FLinearColor MouseNormalColor; // 0x548 (16)
	struct FLinearColor MouseOverColor; // 0x558 (16)
	struct FVector2D PartSlotStartPos; // 0x568 (8)
	struct FVector2D PartSlotPadding; // 0x570 (8)
	struct FVector2D PartSlotSize; // 0x578 (8)

	void ResellItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.ResellItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B680>
	void RefundItem(); // Function ProjectD.PDUnKnownMarketEquipSlot.RefundItem(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B660>
	void OnUnHoverLoadout(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnUnHoverLoadout(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B640>
	void OnHoverLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutC(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B5E0>
	void OnHoverLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutB(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B5C0>
	void OnHoverLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutA(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B5A0>
	void OnClickLoadoutC(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutC(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B540>
	void OnClickLoadoutB(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutB(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B520>
	void OnClickLoadoutA(); // Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutA(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x184B500>
};

// Class ProjectD.PDUnKnownMarketFundingProgress
class UPDUnKnownMarketFundingProgress : public UPDUserWidget {

public:

	struct UProgressBar PB_Reward; // 0x288 (8)
	struct UPDTextBlock T_RewardCoin; // 0x290 (8)
};

// Class ProjectD.PDUnKnownMarketFundingTooltip
class UPDUnKnownMarketFundingTooltip : public UPDUserWidget {

public:

	struct UBorder B_Title_01; // 0x288 (8)
	struct UBorder B_Title_02; // 0x290 (8)
	struct UBorder B_Title_03; // 0x298 (8)
	struct TArray<struct UBorder> B_Title_List; // 0x2A0 (16)
	struct UPDTextBlock T_Desc_01; // 0x2B0 (8)
	struct UPDTextBlock T_Desc_02; // 0x2B8 (8)
	struct UPDTextBlock T_Desc_03; // 0x2C0 (8)
	struct TArray<struct UPDTextBlock> T_Desc_List; // 0x2C8 (16)
	struct UImage IMG_Icon_01; // 0x2D8 (8)
	struct UImage IMG_Icon_02; // 0x2E0 (8)
	struct UImage IMG_Icon_03; // 0x2E8 (8)
	struct TArray<struct UImage> IMG_Icon_List; // 0x2F0 (16)
	struct UPDTextBlock T_Lv_01; // 0x300 (8)
	struct UPDTextBlock T_Lv_02; // 0x308 (8)
	struct UPDTextBlock T_Lv_03; // 0x310 (8)
	struct TArray<struct UPDTextBlock> T_Lv_List; // 0x318 (16)
};

// Class ProjectD.PDUnKnownMarketItemSlot
class UPDUnKnownMarketItemSlot : public UPDUserWidget {

public:

	struct UDragDropOperation DragDropOperation; // 0x288 (8)
	struct UCanvasPanel CP_EmptyState; // 0x290 (8)
	struct UCanvasPanel CP_EquipState; // 0x298 (8)
	struct UPDTextBlock TB_Name; // 0x2F0 (8)
	struct UPDTextBlock TB_EmptyName; // 0x2F8 (8)
	struct UImage IMG_Item; // 0x300 (8)
	struct UImage IMG_SLotBg; // 0x308 (8)
	struct UPDTextBlock T_Amount; // 0x310 (8)
	struct UCanvasPanel CP_Dragable; // 0x318 (8)
	struct UCanvasPanel CP_Refund; // 0x320 (8)
	struct UPDButton Btn_Refund; // 0x328 (8)
	struct FText InSlotNumber; // 0x330 (24)
	struct FText InSlotName; // 0x348 (24)
	struct FSlateBrush InEmptyIconBrush; // 0x360 (136)
	struct FLinearColor MouseNormalColor; // 0x3E8 (16)
	struct FLinearColor MouseOverColor; // 0x3F8 (16)
	struct FLinearColor NormalBunchColor; // 0x408 (16)
	struct FLinearColor MaxBunchColor; // 0x418 (16)
	struct UProgressBar PB_ItemProgress; // 0x428 (8)

	void RefundItem(); // Function ProjectD.PDUnKnownMarketItemSlot.RefundItem(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184EA90>
};

// Class ProjectD.PDUnKnownMarketListItem
class UPDUnKnownMarketListItem : public UPDUserWidget {

public:

	struct UCanvasPanel CP_Empty; // 0x290 (8)
	struct UCanvasPanel CP_Sell; // 0x298 (8)
	struct UCanvasPanel CP_SoldOut; // 0x2A0 (8)
	struct UCanvasPanel CP_Lock; // 0x2A8 (8)
	struct UCanvasPanel CP_Owned; // 0x2B0 (8)
	struct UCanvasPanel CP_EventArea; // 0x2B8 (8)
	struct UImage IMG_Item; // 0x310 (8)
	struct UImage IMG_HoverClick; // 0x318 (8)
	struct UHorizontalBox HB_Price; // 0x320 (8)
	struct UPDTextBlock T_Price; // 0x328 (8)
	struct UPDTextBlock T_Price_Shortage; // 0x330 (8)
	struct UPDTextBlock T_Price_Sale; // 0x338 (8)
	struct UPDTextBlock T_UnLock_Level; // 0x340 (8)
	struct UImage IMG_Lock_Icon; // 0x348 (8)
	struct USizeBox SB_EquippedSlot_01; // 0x350 (8)
	struct USizeBox SB_EquippedSlot_02; // 0x358 (8)
	struct USizeBox SB_EquippedSlot_03; // 0x360 (8)
	struct UBorder B_Request; // 0x3B8 (8)
	struct UPDTextBlock T_WeaponName; // 0x3C0 (8)
	struct UCanvasPanel CP_Blink; // 0x3C8 (8)
	struct UPDTextBlock T_InstanceCnt; // 0x3D0 (8)
	struct UBorder B_WeaponSale; // 0x3D8 (8)
	struct UPDTextBlock T_WeaponSale; // 0x3E0 (8)
	struct UCanvasPanel CP_AvailableCounter; // 0x3E8 (8)
	struct UPDCircleProgress Cpr_Gauge; // 0x3F0 (8)
	struct UPDTextBlock T_AvailableCounter; // 0x3F8 (8)
	struct UCanvasPanel CP_BuyBtn; // 0x400 (8)
	struct UCanvasPanel CP_BtnEventArea; // 0x408 (8)
	struct UImage IMG_BtnHover; // 0x410 (8)
	struct UBorder B_Cancel; // 0x418 (8)
	struct UCanvasPanel CP_Activate; // 0x420 (8)
	struct UImage IMG_Highlight_Tutorial; // 0x428 (8)
	struct UDragDropOperation DragDropOperation; // 0x430 (8)
	struct TArray<struct FText> LockImagePath; // 0x438 (16)
	struct TArray<struct FSlateColor> LockTextColor; // 0x448 (16)

	void OnClickBuy(); // Function ProjectD.PDUnKnownMarketListItem.OnClickBuy(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184EA10>
};

// Class ProjectD.PDUnKnownMarketPartListItem
class UPDUnKnownMarketPartListItem : public UPDUserWidget {

public:

	struct UImage IMG_ItemIcon; // 0x288 (8)
	struct UImage IMG_Slot_Hover; // 0x290 (8)
	struct UImage IMG_HoverBg; // 0x298 (8)
	struct UPDTextBlock T_PartsName; // 0x2A0 (8)
	struct UPDTextBlock T_Ability; // 0x2A8 (8)
	struct UPDTextBlock T_Equiped; // 0x2B0 (8)
	struct UCanvasPanel CP_Lock; // 0x2B8 (8)
	struct UImage IMG_Lock_Icon; // 0x2C0 (8)
	struct UPDTextBlock T_UnLock_Level; // 0x2C8 (8)
	struct TArray<struct FText> LockImagePath; // 0x2D0 (16)
	struct TArray<struct FSlateColor> LockTextColor; // 0x2E0 (16)

	void OnClickPart(); // Function ProjectD.PDUnKnownMarketPartListItem.OnClickPart(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184EA30>
};

// Class ProjectD.PDUnKnownMarketTooltip
class UPDUnKnownMarketTooltip : public UPDUserWidget {

public:

	struct UPDTextBlock T_WeaponName; // 0x288 (8)
	struct UPDTextBlock T_LoadoutName; // 0x290 (8)
	struct UPDTextBlock T_BulletInfo; // 0x298 (8)
	struct UPDTextBlock T_FireModeInfo; // 0x2A0 (8)
	struct UPDTextBlock T_ItemName; // 0x2A8 (8)
	struct UWidgetSwitcher WS_ItemType; // 0x2B0 (8)
	struct UImage IMG_Weapon; // 0x2B8 (8)
	struct UImage IMG_Info_Bullet; // 0x2C0 (8)
	struct UImage IMG_Logo; // 0x2C8 (8)
	struct UPDTextBlock T_Description; // 0x2D0 (8)
	struct UWidgetSwitcher WS_StatCase; // 0x2D8 (8)
	struct UWidgetSwitcher WS_InfoCase; // 0x2E0 (8)
	struct URetainerBox RT_Tooltip; // 0x2E8 (8)
	struct UImage IMG_MouseGuideBg; // 0x2F0 (8)
	struct UCanvasPanel Cp_Stat_Weapon; // 0x2F8 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat1; // 0x300 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat2; // 0x308 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat3; // 0x310 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat4; // 0x318 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat5; // 0x320 (8)
	struct UPDUnKnownWeaponStatProgress WeaponStat6; // 0x328 (8)
	struct UCanvasPanel CP_Stat_Part; // 0x330 (8)
	struct URichTextBlock RT_TooltipPartStat; // 0x338 (8)
	struct UCanvasPanel CP_MouseGuide; // 0x340 (8)
	struct UHorizontalBox HB_GuideCase_01; // 0x348 (8)
	struct UPDTextBlock T_GuideCase_01; // 0x350 (8)
	struct UHorizontalBox HB_GuideCase_02; // 0x358 (8)
	struct UPDTextBlock T_GuideCase_02; // 0x360 (8)
	struct UHorizontalBox HB_GuideCase_03; // 0x368 (8)
	struct UPDTextBlock T_GuideCase_03; // 0x370 (8)
	struct UPDTextBlock T_Magazine; // 0x378 (8)
	struct UHorizontalBox HB_Parts; // 0x380 (8)
	struct UImage IMG_Part1; // 0x388 (8)
	struct UImage IMG_Part2; // 0x390 (8)
	struct UImage IMG_Part3; // 0x398 (8)
	struct UImage IMG_Part4; // 0x3A0 (8)
	struct UImage IMG_Part5; // 0x3A8 (8)
	struct UImage IMG_Part6; // 0x3B0 (8)
	struct UImage IMG_Part7; // 0x3B8 (8)
	struct UImage IMG_Part8; // 0x3C0 (8)
	struct TArray<struct UImage> LoadoutPartImgList; // 0x3C8 (16)
};

// Class ProjectD.PDUnKnownMarketUpgradeItemSlot
class UPDUnKnownMarketUpgradeItemSlot : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_SlotBg; // 0x288 (8)
	struct UWidgetSwitcher WS_UpgradeType; // 0x290 (8)
	struct UWidgetSwitcher WS_LockType; // 0x298 (8)
	struct UWidgetSwitcher WS_Activation; // 0x2A0 (8)
	struct UWidgetSwitcher WS_UpgradeCase; // 0x2A8 (8)
	struct UImage IMG_Icon; // 0x2B0 (8)
	struct UImage IMG_Icon_Off; // 0x2B8 (8)
	struct UPDTextBlock T_Level; // 0x2C0 (8)
	struct UPDTextBlock T_LevelTitle; // 0x2C8 (8)
	struct UPDTextBlock T_Description_ARMORY; // 0x2D0 (8)
	struct UPDTextBlock T_Description_ORDNANCE; // 0x2D8 (8)
	struct UPDTextBlock T_Description_TACTICAL; // 0x2E0 (8)
	struct UPDTextBlock T_Description_DEFENCE; // 0x2E8 (8)
	struct UProgressBar PB_Pogress_ARMORY; // 0x340 (8)
	struct UProgressBar PB_Pogress_ORDNANCE; // 0x348 (8)
	struct UProgressBar PB_Pogress_TACTICAL; // 0x350 (8)
	struct UProgressBar PB_Pogress_DEFENCE; // 0x358 (8)
	struct UPDTextBlock T_Percent_ARMORY; // 0x3B0 (8)
	struct UPDTextBlock T_Percent_ORDNANCE; // 0x3B8 (8)
	struct UPDTextBlock T_Percent_TACTICAL; // 0x3C0 (8)
	struct UPDTextBlock T_Percent_DEFENCE; // 0x3C8 (8)
	struct UCanvasPanel CP_GlowBox_ARMORY; // 0x420 (8)
	struct UCanvasPanel CP_GlowBox_ORDNANCE; // 0x428 (8)
	struct UCanvasPanel CP_GlowBox_TACTICAL; // 0x430 (8)
	struct UCanvasPanel CP_GlowBox_DEFENCE; // 0x438 (8)
	struct UPDTextBlock T_Description_Off; // 0x490 (8)
};

// Class ProjectD.PDUnKnownMarketUpgradeSlot
class UPDUnKnownMarketUpgradeSlot : public UPDUserWidget {

public:

	struct UPDTextBlock T_UpgradeLevel; // 0x288 (8)
	struct UPDTextBlock T_UpgradeGroupDelay; // 0x290 (8)
	struct UPDTextBlock T_UpgradeGroupName; // 0x298 (8)
	struct UPDProgress UpgradeProgress; // 0x2A0 (8)
	struct UImage Img_Bg; // 0x2A8 (8)
	struct UImage IMG_MAX; // 0x2B0 (8)
	struct UImage IMG_Highlight_Tutorial; // 0x2B8 (8)
	struct UImage IMG_Divider; // 0x2C0 (8)
	struct UPDTextBlock T_UpgradeUp; // 0x2C8 (8)
	bool IsEnemy; // 0x2D0 (1)
	bool IsShop; // 0x2D1 (1)
	struct FLinearColor GaugeColor; // 0x2D4 (16)
	struct FSlateColor GroupTextColor; // 0x2E8 (40)
	struct FSlateColor MaxTextColor; // 0x310 (40)
	struct FLinearColor HoverBGColor; // 0x338 (16)
	struct FLinearColor MaxGlowColor; // 0x348 (16)
	struct FLinearColor DividerColor; // 0x358 (16)
	struct FText UpgradeGroup; // 0x368 (24)
	struct FText UpgradeGroupName; // 0x380 (24)

	void OnClickRequest(); // Function ProjectD.PDUnKnownMarketUpgradeSlot.OnClickRequest(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184EA50>
};

// Class ProjectD.PDUnKnownMarketUpgradeTooltip
class UPDUnKnownMarketUpgradeTooltip : public UPDUserWidget {

public:

	struct UPDTextBlock T_RemainCoin; // 0x288 (8)
	struct UPDTextBlock T_GuideCase_01; // 0x290 (8)
	struct UPDUnKnownMarketUpgradeItemSlot UpgradeItem_2; // 0x298 (8)
	struct UPDUnKnownMarketUpgradeItemSlot UpgradeItem_3; // 0x2A0 (8)
	struct UPDUnKnownMarketUpgradeItemSlot UpgradeItem_4; // 0x2A8 (8)
	struct UPDUnKnownMarketUpgradeItemSlot UpgradeItem_5; // 0x2B0 (8)
	struct UPDUnKnownMarketUpgradeItemSlot UpgradeItem_6; // 0x2B8 (8)
	struct TArray<struct UPDUnKnownMarketUpgradeItemSlot> UpgradeItemList; // 0x2C0 (16)
	struct UWidgetSwitcher WS_ConditionCase; // 0x2D0 (8)
	struct UWidgetSwitcher WS_UpgradeGroup; // 0x2D8 (8)
	struct UPDTextBlock T_RemianLevel_ARMORY; // 0x2E0 (8)
	struct UPDTextBlock T_RemianLevel_ORDNANCE; // 0x2E8 (8)
	struct UPDTextBlock T_RemianLevel_TACTICAL; // 0x2F0 (8)
	struct UPDTextBlock T_RemianLevel_DEFENCE; // 0x2F8 (8)
	struct UCanvasPanel CP_MouseGuide; // 0x300 (8)
	bool UseMouseGuide; // 0x35C (1)
};

// Class ProjectD.PDUnKnownMarketWeaponCategory
class UPDUnKnownMarketWeaponCategory : public UPDUserWidget {

public:

	struct UPDTabButton TabBtn_Category; // 0x298 (8)
	struct FText InCategoryText; // 0x2A0 (24)

	void OnSelectCategory(); // Function ProjectD.PDUnKnownMarketWeaponCategory.OnSelectCategory(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x184EA70>
};

// Class ProjectD.PDUnKnownMarketWeaponPartSlot
class UPDUnKnownMarketWeaponPartSlot : public UPDUserWidget {

public:

	struct UWidgetSwitcher WS_State; // 0x288 (8)
	struct UWidgetSwitcher WS_BgStyle; // 0x290 (8)
	struct UImage IMG_Icon; // 0x298 (8)
	struct UImage IMG_EmptyIcon; // 0x2A0 (8)
	struct UImage IMG_Icon_Lock; // 0x2A8 (8)
	struct UImage IMG_New; // 0x2B0 (8)
	struct UImage IMG_Highlight; // 0x2B8 (8)
	struct UImage IMG_NonUse; // 0x2C0 (8)
	struct UVerticalBox VB_MarketList; // 0x2C8 (8)
	struct UPaperSprite EmptyImageResource; // 0x2D0 (8)
	struct FText PartProperty; // 0x2D8 (24)
	struct UDragDropOperation DragDropOperation; // 0x2F0 (8)
	struct UCanvasPanel CP_Blink; // 0x2F8 (8)
	struct UImage IMG_Highlight_Tutorial; // 0x300 (8)
	struct TArray<struct UPDUnKnownMarketPartListItem> CurrentPartList; // 0x358 (16)
};

// Class ProjectD.PDUnKnownWeaponStatProgress
class UPDUnKnownWeaponStatProgress : public UPDUserWidget {

public:

	struct UPDTextBlock T_StatName; // 0x288 (8)
	struct UPDTextBlock T_Stat_Value; // 0x290 (8)
	struct UCanvasPanel CP_StatProgress; // 0x298 (8)
	struct UCanvasPanel CP_Stat_Dest; // 0x2A0 (8)
	struct UProgressBar PB_Stat_Dest; // 0x2A8 (8)
	struct UCanvasPanel CP_Stat_Src; // 0x2B0 (8)
	struct UProgressBar PB_Stat_Src; // 0x2B8 (8)
	struct FText InStatName; // 0x2C0 (24)
};

// Class ProjectD.PDUpperAnimInstance
class UPDUpperAnimInstance : public UPDPlayerAnimInstance {

public:

	char bIsCrouching : 1; // 0x5E8 (1)
};

// Class ProjectD.PDWebButton
class UPDWebButton : public UPDButton {

public:

	int32_t WIC_Id; // 0xC50 (4)
};

// Class ProjectD.PDWebPopupUI
class UPDWebPopupUI : public UPDOKPopupUI {

public:

	struct UPDWebBrowser WB_WebPage; // 0x2D0 (8)
	struct UPDTextBlock TB_Title; // 0x2D8 (8)
	struct USizeBox SB_SizeClamper; // 0x2E0 (8)
	struct FString WebURL; // 0x2E8 (16)

	void OpenWebPage(); // Function ProjectD.PDWebPopupUI.OpenWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void CloseWebPage(); // Function ProjectD.PDWebPopupUI.CloseWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class ProjectD.PDWebTermsOfServicePopupUI
class UPDWebTermsOfServicePopupUI : public UPDOKCancelPopupUI {

public:

	struct UPDWebBrowser WB_WebPage; // 0x2F8 (8)
	struct USizeBox SB_SizeClamper; // 0x300 (8)
	struct UCheckBox CB_TermsOfService; // 0x308 (8)
	struct UPDButton Btn_TermsOfService; // 0x310 (8)
	struct FString WebURL; // 0x318 (16)

	void OpenTermsWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.OpenTermsWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnToggleTermsOfServiceChanged(bool Val); // Function ProjectD.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1850960>
	void OnTermsOfServiceBtn(); // Function ProjectD.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0x1850940>
	void CloseTermaWebPage(); // Function ProjectD.PDWebTermsOfServicePopupUI.CloseTermaWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class ProjectD.PDWorldBoundaryChecker
class APDWorldBoundaryChecker : public UActor {

public:

	struct FBox AdjustValue; // 0x220 (28)
	struct FBox ResultBound; // 0x23C (28)
	struct FBox BoundToTest; // 0x258 (28)
};

// Class ProjectD.PDWorldMapUI
class UPDWorldMapUI : public UPDUserWidget {

public:

	struct UPDGameMapModule GameMap; // 0x288 (8)
	float ZoomScaleMin; // 0x290 (4)
	float ZoomScaleMax; // 0x294 (4)
	float ZoomScaleStep; // 0x298 (4)
};

// Class ProjectD.PDWorldMessageUI
class UPDWorldMessageUI : public UPDIngameModeWidget {

public:

	struct UCanvasPanel CP_Text; // 0x298 (8)
	struct UPDTextBlock TB_Text; // 0x2A0 (8)
	struct UCanvasPanel CP_Count; // 0x2A8 (8)
	struct UPDTextBlock TB_Count; // 0x2B0 (8)
	struct UPDTextBlock TB_CountDesc; // 0x2B8 (8)
	struct UCanvasPanel CP_Mission; // 0x2C0 (8)
	struct UPDTextBlock TB_MissionText; // 0x2C8 (8)
	struct UCanvasPanel CP_Alarm; // 0x2D0 (8)
	struct UPDTextBlock TB_AlarmText; // 0x2D8 (8)
	float DefaultTextDuration; // 0x2E0 (4)
};

// Class ProjectD.PDZipLine
class APDZipLine : public UActor {

public:

	uint32_t ZiplineIndex; // 0x280 (4)
	bool bItemToActive; // 0x284 (1)
	bool bItemToUse; // 0x285 (1)
	float PathMovementVelocity; // 0x288 (4)
	struct UPDSplineComponent SplineComp; // 0x348 (8)
	struct USplineMeshComponent SplineMeshComp; // 0x350 (8)
	struct UStaticMeshComponent EntryMesh; // 0x358 (8)
	struct UArrowComponent EntryInteractArrow; // 0x360 (8)
	struct UStaticMeshComponent ExitMesh; // 0x368 (8)
	struct UArrowComponent ExitInteractArrow; // 0x370 (8)
	struct UStaticMeshComponent SubEntryMesh; // 0x378 (8)
	struct UStaticMeshComponent SubExitMesh; // 0x380 (8)
	struct UStaticMeshComponent EntryPulley; // 0x388 (8)
	struct UStaticMeshComponent ExitPulley; // 0x390 (8)
	struct UBoxComponent EntryTriggerBox; // 0x398 (8)
	struct UBoxComponent ExitTriggerBox; // 0x3A0 (8)

	void OnExitTriggerEndOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnExitTriggerEndOverlap(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x1850800>
	void OnExitTriggerBeginOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDZipLine.OnExitTriggerBeginOverlap(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1850610>
	void OnEntryTriggerEndOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Function ProjectD.PDZipLine.OnEntryTriggerEndOverlap(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x18504D0>
	void OnEntryTriggerBeginOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function ProjectD.PDZipLine.OnEntryTriggerBeginOverlap(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x18502E0>
};

// Class ProjectD.TurningAnimNotifyState
class UTurningAnimNotifyState : public UAnimNotifyState {

public:

	struct UAnimMontage Montage; // 0x30 (8)
};

// Class ProjectD.TurnInPlaceAnimNotifyState
class UTurnInPlaceAnimNotifyState : public UAnimNotifyState {

public:

	struct UCurveFloat RotationCurveAsset; // 0x30 (8)
	struct UCurveFloat RotationCurveAsset_Mirror; // 0x38 (8)
	bool bIsRightTurn; // 0x40 (1)
};

// ScriptStruct ProjectD.EnvSetting
struct FEnvSetting {
	char bApplyLightIntensity : 1; // 0x0 (1)
	char pad_0_1 : 7; // 0x0 (1)
	float SkyLightIntensity; // 0x4 (4)
	float DirectionalLightIntensity; // 0x8 (4)
	struct FColor SkyLightColor; // 0xC (4)
	struct FColor DirectionalLightColor; // 0x10 (4)
	char bUseFogSetting : 1; // 0x14 (1)
	char pad_11_1 : 7; // 0x11 (1)
	struct FLinearColor FogInscatteringColor; // 0x18 (16)
	float FogMaxOpacity; // 0x28 (4)
	float FogDensity; // 0x2C (4)
	float FogHeightFalloff; // 0x30 (4)
	float FogStartDistance; // 0x34 (4)
	float FogDensity2; // 0x38 (4)
	float FogHeightFalloff2; // 0x3C (4)
	float FogHeightOffset2; // 0x40 (4)
	char bUseVolumetricFogSetting : 1; // 0x44 (1)
	char pad_3E_1 : 7; // 0x3E (1)
	struct FColor VolumetricFogAlbedo; // 0x48 (4)
	float VolumetricFogScatteringDistribution; // 0x4C (4)
	float VolumetricFogExtinctionScale; // 0x50 (4)
	float VolumetricFogDistance; // 0x54 (4)
	struct FVector MovingObjectPosition; // 0x58 (12)
};

// ScriptStruct ProjectD.GroupRangeInfo
struct FGroupRangeInfo {
	int32_t DefScore; // 0x0 (4)
	int32_t PlayerExistWeight; // 0x4 (4)
	int32_t PlayerNoneWeight; // 0x8 (4)
	float Height; // 0xC (4)
	float ARadius; // 0x10 (4)
	float BRadius; // 0x14 (4)
	struct FColor AColor; // 0x18 (4)
	struct FColor BColor; // 0x1C (4)
	float Bold; // 0x20 (4)
};

// ScriptStruct ProjectD.ActionNotifyData
struct FActionNotifyData {
	struct FName EventName; // 0x0 (8)
	struct UCurveBase Curve; // 0x8 (8)
	struct FVector EventVector; // 0x10 (12)
	float TotalDuration; // 0x1C (4)
	float StartOffset; // 0x20 (4)
	struct UAnimSequenceBase NotifyAnimSequence; // 0x28 (8)
	enum class ECameraMovementType CameraMovement; // 0x30 (1)
};

// ScriptStruct ProjectD.ParkourHandOffset
struct FParkourHandOffset : FTableRowBase {
	float LeftHandOffset; // 0x8 (4)
	float RightHandOffset; // 0xC (4)
};

// ScriptStruct ProjectD.PDAudioSwitch
struct FPDAudioSwitch {
	struct FString Group; // 0x0 (16)
	struct FString Switch; // 0x10 (16)
};

// ScriptStruct ProjectD.PDButtonOutLine
struct FPDButtonOutLine {
	struct FAnchors Anchors; // 0x0 (16)
	struct FMargin Offsets; // 0x10 (16)
	struct FVector2D Alignment; // 0x20 (8)
	bool bSizeToContent; // 0x28 (1)
	struct FSlateBrush OutLineStyle; // 0x30 (136)
	struct FLinearColor BrushColor; // 0xB8 (16)
};

// ScriptStruct ProjectD.ActionTaskData
struct FActionTaskData {
	bool BoolValue0; // 0x0 (1)
	bool BoolValue1; // 0x1 (1)
	int32_t IntValue0; // 0x4 (4)
	int32_t IntValue1; // 0x8 (4)
	float FloatValue0; // 0xC (4)
	float FloatValue1; // 0x10 (4)
	struct FVector VectorValue0; // 0x14 (12)
	struct FVector VectorValue1; // 0x20 (12)
	struct FTransform TransformValue; // 0x30 (48)
	struct Object ObjectValue0; // 0x60 (8)
	struct Object ObjectValue1; // 0x68 (8)
};

// ScriptStruct ProjectD.PDAnimGraphAimingValues
struct FPDAnimGraphAimingValues {
	struct FRotator SpineRotation; // 0x0 (12)
};

// ScriptStruct ProjectD.WeaponAnimDataSet
struct FWeaponAnimDataSet {
	struct UAnimMontage Fire; // 0x0 (8)
};

// ScriptStruct ProjectD.BulletWeaponAnimDataSet
struct FBulletWeaponAnimDataSet : FWeaponAnimDataSet {
	struct UAnimMontage Reload; // 0x8 (8)
};

// ScriptStruct ProjectD.PDPlayerAnimDatas
struct FPDPlayerAnimDatas : FTableRowBase {
	struct FPDPerCharacterAnimDatas PerCharacterAnimDatas; // 0x8 (2976)
	struct FPDPerWeaponAnimDatas PerWeaponAnimDatas[0x14]; // 0xBA8 (12320)
	struct FPDPerSpecificWeaponAnimDatas PerSpecificWeaponAnimDatas[0x1a]; // 0x3BC8 (5200)
};

// ScriptStruct ProjectD.PDPerSpecificWeaponAnimDatas
struct FPDPerSpecificWeaponAnimDatas {
	struct UAnimSequence Stance; // 0x0 (8)
	struct UAnimMontage ReloadWeapon_Stand; // 0x8 (8)
	struct UAnimMontage ReloadWeapon_Crouch; // 0x10 (8)
	struct UAnimMontage QuickReloadWeapon_Stand; // 0x18 (8)
	struct UAnimMontage QuickReloadWeapon_Crouch; // 0x20 (8)
	struct UAnimMontage SlowReloadWeapon_Stand; // 0x28 (8)
	struct UAnimMontage SlowReloadWeapon_Crouch; // 0x30 (8)
	struct UAnimMontage FireWeapon_FP; // 0x38 (8)
	struct UAnimMontage BoltActionFP; // 0x40 (8)
	struct UAnimSequence Weapon_ReloadEmpty; // 0x48 (8)
	struct UAnimSequence Weapon_ReloadNotEmpty; // 0x50 (8)
	struct UAnimSequence Weapon_FireEmpty; // 0x58 (8)
	struct UAnimSequence Weapon_FireNotEmpty; // 0x60 (8)
	struct UAnimSequence Weapon_BoltAction; // 0x68 (8)
	struct UAnimSequence Weapon_ReloadEmptyEnd; // 0x70 (8)
	struct UAnimSequence Weapon_Idle; // 0x78 (8)
	struct UAnimSequence Weapon_QuickReloadEmpty; // 0x80 (8)
	struct UAnimSequence Weapon_QuickReloadEmptyEnd; // 0x88 (8)
	struct UAnimSequence Weapon_Slow_Reload_Empty; // 0x90 (8)
	struct UAnimSequence Weapon_Slow_Reload_EmptyEnd; // 0x98 (8)
	struct UAnimSequence Weapon_Slow_Reload_NotEmpty; // 0xA0 (8)
	float ADSAimYaw; // 0xA8 (4)
	float ADSPlusAimPitch_Stn; // 0xAC (4)
	float ADSPlusAimPitch_Cro; // 0xB0 (4)
	float ADSPlusAimPitch_CroWalk; // 0xB4 (4)
	float ADSPlusAimPitch_Stn_Lean; // 0xB8 (4)
	float ADSPlusAimPitch_Cro_Lean; // 0xBC (4)
	float ADSPlusAimPitch_CroWalk_Lean; // 0xC0 (4)
};

// ScriptStruct ProjectD.PDPerWeaponAnimDatas
struct FPDPerWeaponAnimDatas {
	struct FPDPWUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0 (296)
	struct FPDLandActionAnimDatas LandAnimDatas; // 0x128 (8)
	struct FPDMeleeActionAnimDatas MeleeActionAnimDatas; // 0x130 (32)
	struct FPDWeaponHandlingAnimDatas WeaponHandlingAnimDatas; // 0x150 (208)
	struct FPDPWParkourAnimDatas ParkourDatas; // 0x220 (72)
};

// ScriptStruct ProjectD.PDPWParkourAnimDatas
struct FPDPWParkourAnimDatas {
	struct UAnimMontage Roll_F; // 0x0 (8)
	struct UAnimMontage Roll_F02; // 0x8 (8)
	struct UAnimMontage Roll_F03; // 0x10 (8)
	struct UAnimMontage Roll_F04; // 0x18 (8)
	struct UAnimMontage Roll_B; // 0x20 (8)
	struct UAnimMontage Roll_L; // 0x28 (8)
	struct UAnimMontage Roll_R; // 0x30 (8)
	struct UAnimMontage Jump_FP; // 0x38 (8)
	struct UAnimMontage Land_FP; // 0x40 (8)
};

// ScriptStruct ProjectD.PDWeaponHandlingAnimDatas
struct FPDWeaponHandlingAnimDatas {
	struct UAnimMontage Stand_FireWeapon; // 0x0 (8)
	struct UAnimMontage Crouch_FireWeapon; // 0x8 (8)
	struct UAnimMontage Stand_Fire_HipFire; // 0x10 (8)
	struct UAnimMontage Crouch_Fire_HipFire; // 0x18 (8)
	struct UAnimMontage Stand_FireWeapon_FP; // 0x20 (8)
	struct UAnimMontage Crouch_FireWeapon_FP; // 0x28 (8)
	struct UAnimMontage Crouch_Walk_Fire_HipFire; // 0x30 (8)
	struct UAnimMontage Crouch_Walk_Fire_ADS; // 0x38 (8)
	struct UBlendSpace Stand_FireRecoil_HipFire; // 0x40 (8)
	struct UBlendSpace Crouch_FireRecoil_HipFire; // 0x48 (8)
	struct UBlendSpace Stand_FireRecoil_ADS; // 0x50 (8)
	struct UBlendSpace Crouch_FireRecoil_ADS; // 0x58 (8)
	struct UBlendSpace Stand_FireRecoil_ADS_FP; // 0x60 (8)
	struct UBlendSpace Crouch_FireRecoil_ADS_FP; // 0x68 (8)
	struct UBlendSpace Crouch_Walk_FireRecoil_HipFire; // 0x70 (8)
	struct UPDFireRecoilLevelData FireRecoilLeveldata; // 0x78 (8)
	struct UPDFireRecoilLevelData FireRecoilLeveldata_FP; // 0x80 (8)
	struct UAnimMontage ReloadWeapon_Stand; // 0x88 (8)
	struct UAnimMontage ReloadWeapon_Crouch; // 0x90 (8)
	struct UAnimMontage ReloadWeapon_Groggy; // 0x98 (8)
	struct UAnimMontage HolsterWeapon; // 0xA0 (8)
	struct UAnimMontage DrawWeapon; // 0xA8 (8)
	struct UAnimMontage DrawWeapon_FP; // 0xB0 (8)
	struct UAnimMontage BoltAction; // 0xB8 (8)
	struct UAnimMontage BoltAction_Crouch; // 0xC0 (8)
	struct UAnimMontage BoltAction_Groggy; // 0xC8 (8)
};

// ScriptStruct ProjectD.PDMeleeActionAnimDatas
struct FPDMeleeActionAnimDatas {
	struct UAnimMontage Melee_Attack_DefAtt; // 0x0 (8)
	struct UAnimMontage Melee_Attack_LBTAtt; // 0x8 (8)
	struct UAnimMontage Melee_Attack_RBTAtt; // 0x10 (8)
	struct UAnimMontage Melee_Attack_FallAtt; // 0x18 (8)
};

// ScriptStruct ProjectD.PDLandActionAnimDatas
struct FPDLandActionAnimDatas {
	struct UAnimMontage SoftLand; // 0x0 (8)
};

// ScriptStruct ProjectD.PDPWUsingInABPAnimDatas
struct FPDPWUsingInABPAnimDatas {
	struct UAnimSequence Loco_Stand_Idle; // 0x0 (8)
	struct UAnimSequence Loco_Crouch_Idle; // 0x8 (8)
	struct UAnimSequence Loco_Stand_HipFireIdle; // 0x10 (8)
	struct UAnimSequence Loco_Crouch_HipFireIdle; // 0x18 (8)
	struct UAnimSequence Loco_Stand_ADSIdle; // 0x20 (8)
	struct UAnimSequence Loco_Crouch_ADSIdle; // 0x28 (8)
	struct UAnimSequence Loco_Stand_Fall; // 0x30 (8)
	struct UAnimSequence Loco_Crouch_Fall; // 0x38 (8)
	struct UAnimSequence StandToCrouch; // 0x40 (8)
	struct UAnimSequence CrouchToStand; // 0x48 (8)
	struct UAnimSequence StandToCrouch_ADS; // 0x50 (8)
	struct UAnimSequence CrouchToStand_ADS; // 0x58 (8)
	struct UAnimSequence Loco_Crouch_Walk_HipFireIdle; // 0x60 (8)
	struct UBlendSpace Loco_Stand_Run; // 0x68 (8)
	struct UBlendSpace Loco_Crouch_Run; // 0x70 (8)
	struct UBlendSpace Loco_Stand_Run_ADS; // 0x78 (8)
	struct UBlendSpace Loco_Crouch_Run_ADS; // 0x80 (8)
	struct UBlendSpace Loco_Stand_RunStart; // 0x88 (8)
	struct UAnimSequence Loco_Stand_RunStart_L; // 0x90 (8)
	struct UAnimSequence Loco_Stand_RunStart_R; // 0x98 (8)
	struct UBlendSpace Loco_Crouch_RunStart; // 0xA0 (8)
	struct UAnimSequence Loco_Stand_Fall_FP; // 0xA8 (8)
	struct UBlendSpace Loco_Stand_Walk_FP; // 0xB0 (8)
	struct UAnimSequence WaitBeforePlay_Stand_FP; // 0xB8 (8)
	struct UAnimSequence Stance; // 0xC0 (8)
	struct UBlendSpaceBase AO_Lean_Stand; // 0xC8 (8)
	struct UBlendSpaceBase AO_Lean_Crouch; // 0xD0 (8)
	struct UBlendSpaceBase AO_Stand_HipFire; // 0xD8 (8)
	struct UBlendSpaceBase AO_Crouch_HipFire; // 0xE0 (8)
	struct UBlendSpaceBase AO_Stand_ADS; // 0xE8 (8)
	struct UBlendSpaceBase AO_Crouch_ADS; // 0xF0 (8)
	struct UBlendSpaceBase AO_Crouch_Walk_HipFire; // 0xF8 (8)
	struct UAnimSequence Stand_LeanR_ADS; // 0x100 (8)
	struct UAnimSequence Crouch_LeanR_ADS; // 0x108 (8)
	struct UAnimSequence Stand_LeanR_HF; // 0x110 (8)
	struct UAnimSequence Crouch_LeanR_HF; // 0x118 (8)
	struct UAnimSequence Crouch_LeanR_Walk_HF; // 0x120 (8)
};

// ScriptStruct ProjectD.PDPerCharacterAnimDatas
struct FPDPerCharacterAnimDatas {
	struct FPDPCUsingInABPAnimDatas UsingInABPAnimDatas; // 0x0 (96)
	struct FPDLeanAnimDatas LeanAnimData; // 0x60 (8)
	struct FPDTurnAnimDatas TurnAnimDatas; // 0x68 (112)
	struct FPDParkourActionAnimDatas ParkourAnimDatas; // 0xD8 (432)
	struct FPDClimbActionAnimDatas ClimbActionAnimDatas; // 0x288 (104)
	struct FPDGroggyActionAnimDatas GroggyActionAnimDatas; // 0x2F0 (128)
	struct FPDInteractionActionAnimDatas InteractionActionAnimDatas; // 0x370 (72)
	struct FPDItemUseActionAnimDatas ItemUseActionAnimDatas; // 0x3B8 (48)
	struct FPDDeathAnimData DeathAnimData; // 0x3E8 (64)
	struct FPDKnockbackAnimData KnockbackAnimData; // 0x428 (80)
	struct FPDPerkAnimDatas PerkAnimData; // 0x478 (32)
	struct FPDZiplineAnimData ZipLineAnimData; // 0x498 (8)
	struct FPDSignatureAnimDatas SignatureAnimData; // 0x4A0 (80)
	struct FPDSlideAnimDatas SlideAnimData; // 0x4F0 (32)
	struct FPDHitReactionAnimData HitReactionAnimData; // 0x510 (336)
	struct FPDWearJuggernautAnimData WearJuggernautAnimData[0x2]; // 0x660 (48)
	struct FPDPerAgentAnimData PerAgentAnimData[0x9]; // 0x690 (1296)
};

// ScriptStruct ProjectD.PDPerAgentAnimData
struct FPDPerAgentAnimData {
	struct FPDAFKAnimData AFKAnimData; // 0x0 (88)
	struct FPDSceneDirectionAnimData SceneDirectionAnimData; // 0x58 (48)
	struct FPDAttackAnimData AttackAnimData; // 0x88 (8)
};

// ScriptStruct ProjectD.PDAttackAnimData
struct FPDAttackAnimData {
	struct UAnimMontage Execution; // 0x0 (8)
};

// ScriptStruct ProjectD.PDSceneDirectionAnimData
struct FPDSceneDirectionAnimData {
	struct UAnimMontage RoundEnterSeriousAnim; // 0x0 (8)
	struct TArray<int32_t> SeriousAnimLinkedKeyType; // 0x8 (16)
	struct UAnimMontage RoundEnterLightAnim; // 0x18 (8)
	struct TArray<int32_t> LightAnimLinkedKeyType; // 0x20 (16)
};

// ScriptStruct ProjectD.PDAFKAnimData
struct FPDAFKAnimData {
	struct UAnimMontage RifleStand; // 0x0 (8)
	struct UAnimMontage RifleCrouch; // 0x8 (8)
	uint32_t RiflePercentTypeD; // 0x10 (4)
	struct UAnimMontage HGStand; // 0x18 (8)
	struct UAnimMontage HGCrouch; // 0x20 (8)
	struct UAnimMontage ThrowStand; // 0x28 (8)
	struct UAnimMontage ThrowCrouch; // 0x30 (8)
	struct UAnimMontage MeleeStand; // 0x38 (8)
	struct UAnimMontage MeleeCrouch; // 0x40 (8)
	struct UAnimMontage BowStand; // 0x48 (8)
	struct UAnimMontage BowCrouch; // 0x50 (8)
};

// ScriptStruct ProjectD.PDWearJuggernautAnimData
struct FPDWearJuggernautAnimData {
	struct UAnimMontage WearJuggernaut; // 0x0 (8)
	struct UAnimMontage JuggernautDash; // 0x8 (8)
	struct UAnimMontage JuggernautLauncher; // 0x10 (8)
};

// ScriptStruct ProjectD.PDHitReactionAnimData
struct FPDHitReactionAnimData {
	struct UAnimMontage AM_BurnReactionAnim; // 0x0 (8)
	struct UAnimMontage AM_NormalHitAnimA; // 0x8 (8)
	struct UAnimMontage AM_NormalHitAnimB; // 0x10 (8)
	struct UAnimMontage AM_NormalHitAnimC; // 0x18 (8)
	struct TArray<struct UAnimMontage> FowardNormalHitAnims; // 0x20 (16)
	struct TArray<struct UAnimMontage> BackNormalHitAnims; // 0x30 (16)
	struct TArray<struct UAnimMontage> LeftNormalHitAnims; // 0x40 (16)
	struct TArray<struct UAnimMontage> RightNormalHitAnims; // 0x50 (16)
	struct TArray<struct UAnimMontage> HitHeadAnims; // 0x60 (16)
	struct TArray<struct UAnimMontage> BulletGrazeAnimsStand; // 0x70 (16)
	struct TArray<struct UAnimMontage> BulletGrazeAnimsCrouch; // 0x80 (16)
	struct TArray<struct UAnimMontage> BombGrazeAnimsStand; // 0x90 (16)
	struct TArray<struct UAnimMontage> BombGrazeAnimsCrouch; // 0xA0 (16)
	struct UAnimMontage AM_RunHitAnimA; // 0xB0 (8)
	struct UAnimMontage AM_RunHitAnimB; // 0xB8 (8)
	struct UAnimMontage AM_RunHitAnimC; // 0xC0 (8)
	struct FRotator HitReactionRotation; // 0xC8 (12)
	float HitReactionAngleFoward; // 0xD4 (4)
	float HitReactionAngleLeft; // 0xD8 (4)
	float HitReactionAngleRight; // 0xDC (4)
	float HitReactionAngleBack; // 0xE0 (4)
	struct UCurveFloat HitReactionRotationCurve; // 0xE8 (8)
	float NoramlHitMotionFrequency_Local; // 0xF0 (4)
	float NoramlHitMotionFrequency_Remote; // 0xF4 (4)
	float RunHitMotionFrequency_Local; // 0xF8 (4)
	float RunHitMotionFrequency_Remote; // 0xFC (4)
	float FirstHitTime; // 0x100 (4)
	struct UAnimMontage AM_Lower_Right_HitAnim; // 0x108 (8)
	struct UAnimMontage AM_Lower_Left_HitAnim; // 0x110 (8)
	float HitDelay; // 0x118 (4)
	struct UAnimMontage AM_UpperBody_WeakCenter; // 0x120 (8)
	struct UAnimMontage AM_UpperBody_WeakLeft; // 0x128 (8)
	struct UAnimMontage AM_UpperBody_WeakRight; // 0x130 (8)
	struct UAnimMontage AM_UpperBody_StrongCenter; // 0x138 (8)
	struct UAnimMontage AM_UpperBody_StrongLeft; // 0x140 (8)
	struct UAnimMontage AM_UpperBody_StrongRight; // 0x148 (8)
};

// ScriptStruct ProjectD.PDSlideAnimDatas
struct FPDSlideAnimDatas {
	struct UAnimMontage SlideEnter; // 0x0 (8)
	struct UAnimMontage SlideExitDefault; // 0x8 (8)
	struct UAnimMontage SlideExitRoll; // 0x10 (8)
	struct UAnimMontage SlideExitGroggy; // 0x18 (8)
};

// ScriptStruct ProjectD.PDSignatureAnimDatas
struct FPDSignatureAnimDatas {
	struct UAnimMontage RevolverSpinning; // 0x0 (8)
	struct UAnimMontage DrinkBottle; // 0x8 (8)
	struct UAnimMontage EatHotDog; // 0x10 (8)
	struct UAnimMontage LickKnife; // 0x18 (8)
	struct UAnimMontage CoinToss; // 0x20 (8)
	struct UAnimMontage GlassesScan; // 0x28 (8)
	struct UAnimMontage LookMagnifier; // 0x30 (8)
	struct UAnimMontage ShootFlare; // 0x38 (8)
	struct UAnimMontage SprayMoney; // 0x40 (8)
	struct UAnimMontage Warcry; // 0x48 (8)
};

// ScriptStruct ProjectD.PDZiplineAnimData
struct FPDZiplineAnimData {
	struct UAnimMontage ZiplineRide; // 0x0 (8)
};

// ScriptStruct ProjectD.PDPerkAnimDatas
struct FPDPerkAnimDatas {
	struct UAnimMontage RobCoin; // 0x0 (8)
	struct UAnimMontage ReviveInGroggy; // 0x8 (8)
	struct UAnimMontage Hacking; // 0x10 (8)
	struct UAnimMontage Maintenance; // 0x18 (8)
};

// ScriptStruct ProjectD.PDKnockbackAnimData
struct FPDKnockbackAnimData {
	struct UAnimMontage Knockback_WeakCenter; // 0x0 (8)
	struct UAnimMontage Knockback_WeakLeft; // 0x8 (8)
	struct UAnimMontage Knockback_WeakRight; // 0x10 (8)
	struct UAnimMontage Knockback_MidCenter; // 0x18 (8)
	struct UAnimMontage Knockback_MidLeft; // 0x20 (8)
	struct UAnimMontage Knockback_MidRight; // 0x28 (8)
	struct UAnimMontage Knockback_StrongCenter; // 0x30 (8)
	struct UAnimMontage Knockback_StrongLeft; // 0x38 (8)
	struct UAnimMontage Knockback_StrongRight; // 0x40 (8)
	struct UAnimMontage Knockback_FallingObject; // 0x48 (8)
};

// ScriptStruct ProjectD.PDDeathAnimData
struct FPDDeathAnimData {
	struct UAnimMontage Death_Random; // 0x0 (8)
	struct UAnimMontage Death_GROGGY_Random; // 0x8 (8)
	struct UAnimMontage Death_Groggy_By_Soccer_Kick; // 0x10 (8)
	struct UAnimMontage Death_GROGGY_Fall; // 0x18 (8)
	struct UAnimMontage Death_CLIMB_2P; // 0x20 (8)
	struct UAnimMontage Death_CLIMB_4P; // 0x28 (8)
	struct UAnimMontage Death_Front_KnockBack; // 0x30 (8)
	struct UAnimMontage Death_Back_KnockBack; // 0x38 (8)
};

// ScriptStruct ProjectD.PDItemUseActionAnimDatas
struct FPDItemUseActionAnimDatas {
	struct UAnimMontage Bandage; // 0x0 (8)
	struct UAnimMontage Painkiller; // 0x8 (8)
	struct UAnimMontage ArmorPlateReplaceKit; // 0x10 (8)
	struct UAnimMontage Bandage_CLI; // 0x18 (8)
	struct UAnimMontage Painkiller_CLI; // 0x20 (8)
	struct UAnimMontage ArmorPlateReplaceKit_CLI; // 0x28 (8)
};

// ScriptStruct ProjectD.PDInteractionActionAnimDatas
struct FPDInteractionActionAnimDatas {
	struct UAnimMontage PickItem_Crouch_Left; // 0x0 (8)
	struct UAnimMontage PickItem_Crouch_Right; // 0x8 (8)
	struct UAnimMontage PickItem_Stand_Left; // 0x10 (8)
	struct UAnimMontage PickItem_Stand_Right; // 0x18 (8)
	struct UAnimMontage Door_HingeOpen; // 0x20 (8)
	struct UAnimMontage GroggyRescue; // 0x28 (8)
	struct UAnimMontage Bomb; // 0x30 (8)
	struct UAnimMontage Bomb_Crouch; // 0x38 (8)
	struct UAnimMontage Bomb_Groggy; // 0x40 (8)
};

// ScriptStruct ProjectD.PDGroggyActionAnimDatas
struct FPDGroggyActionAnimDatas {
	struct UAnimMontage Enter_MeleeHit; // 0x0 (8)
	struct UAnimMontage Enter_Random_Hit_Head; // 0x8 (8)
	struct UAnimMontage Enter_Random_Hit_Chest; // 0x10 (8)
	struct UAnimMontage Enter_Random_Hit_Abdomen; // 0x18 (8)
	struct UAnimMontage Enter_Random_Hit_LeftLeg; // 0x20 (8)
	struct UAnimMontage Enter_Random_Hit_RightLeg; // 0x28 (8)
	struct UAnimMontage Exit; // 0x30 (8)
	struct UAnimMontage FallEnter; // 0x38 (8)
	struct UAnimMontage FallLand; // 0x40 (8)
	struct UAnimMontage Climb2PEnter; // 0x48 (8)
	struct UAnimMontage Climb4PEnter; // 0x50 (8)
	struct UAnimMontage SlideEnter; // 0x58 (8)
	struct UAnimMontage InertiaEnter; // 0x60 (8)
	struct UAnimMontage FrontKnockBackEnter; // 0x68 (8)
	struct UAnimMontage BackKnockBackEnter; // 0x70 (8)
	struct UAnimMontage BurnEnter; // 0x78 (8)
};

// ScriptStruct ProjectD.PDClimbActionAnimDatas
struct FPDClimbActionAnimDatas {
	struct UAnimMontage ClimbEnter; // 0x0 (8)
	struct UAnimMontage ClimbLedgeGrap; // 0x8 (8)
	struct UAnimMontage ClimbExit; // 0x10 (8)
	struct UAnimMontage ClimbExit_2PJump; // 0x18 (8)
	struct UAnimMontage ClimbExit_4PJump; // 0x20 (8)
	struct UAnimMontage ClimbMove_Turn; // 0x28 (8)
	struct UAnimMontage ClimbMove_2P; // 0x30 (8)
	struct UAnimMontage ClimbMove_2PWide; // 0x38 (8)
	struct UAnimMontage ClimbMove_4P; // 0x40 (8)
	struct UAnimMontage ClimbMove_4PWide; // 0x48 (8)
	struct UAnimMontage ClimbJump_2P; // 0x50 (8)
	struct UAnimMontage ClimbJump_4P; // 0x58 (8)
	struct UAnimMontage ClimbLongJump_4P; // 0x60 (8)
};

// ScriptStruct ProjectD.PDParkourActionAnimDatas
struct FPDParkourActionAnimDatas {
	struct UAnimMontage Jump; // 0x0 (8)
	struct UAnimMontage Jump_Sprint; // 0x8 (8)
	struct UAnimMontage Jump_Long01; // 0x10 (8)
	struct UAnimMontage Jump_Long02; // 0x18 (8)
	struct UAnimMontage Jump_Long03; // 0x20 (8)
	struct UAnimMontage Jump_Long04; // 0x28 (8)
	struct UAnimMontage SoftLand; // 0x30 (8)
	struct UAnimMontage AutoRollLand; // 0x38 (8)
	struct UAnimMontage HardLand; // 0x40 (8)
	struct UAnimMontage HardLand1; // 0x48 (8)
	struct UAnimMontage HardLand2; // 0x50 (8)
	struct UAnimMontage HardLand1_Move; // 0x58 (8)
	struct UAnimMontage HardLand2_Move; // 0x60 (8)
	struct UAnimMontage groggyland; // 0x68 (8)
	struct UAnimMontage DamageLand; // 0x70 (8)
	struct UAnimMontage Roll_F01; // 0x78 (8)
	struct UAnimMontage Roll_F02; // 0x80 (8)
	struct UAnimMontage Roll_F03; // 0x88 (8)
	struct UAnimMontage Roll_F04; // 0x90 (8)
	struct UAnimMontage Roll_B; // 0x98 (8)
	struct UAnimMontage Roll_L; // 0xA0 (8)
	struct UAnimMontage Roll_R; // 0xA8 (8)
	struct UAnimMontage GRO_Roll_F; // 0xB0 (8)
	struct UAnimMontage GRO_Roll_B; // 0xB8 (8)
	struct UAnimMontage GRO_Roll_L; // 0xC0 (8)
	struct UAnimMontage GRO_Roll_R; // 0xC8 (8)
	struct UAnimMontage Vault_100_Walk; // 0xD0 (8)
	struct UAnimMontage Vault_100_Run; // 0xD8 (8)
	struct UAnimMontage Vault_150_Walk; // 0xE0 (8)
	struct UAnimMontage Vault_150_Run; // 0xE8 (8)
	struct UAnimMontage Vault_200_Walk; // 0xF0 (8)
	struct UAnimMontage Vault_200_Run; // 0xF8 (8)
	struct UAnimMontage Vault_250_Walk; // 0x100 (8)
	struct UAnimMontage Vault_250_Run; // 0x108 (8)
	struct UAnimMontage Vault_300_Walk; // 0x110 (8)
	struct UAnimMontage Vault_300_Run; // 0x118 (8)
	struct UAnimMontage Climbup_51; // 0x120 (8)
	struct UAnimMontage Climbup_100_Walk; // 0x128 (8)
	struct UAnimMontage Climbup_100_Run; // 0x130 (8)
	struct UAnimMontage Climbup_150_Walk; // 0x138 (8)
	struct UAnimMontage Climbup_150_Run; // 0x140 (8)
	struct UAnimMontage Climbup_200_Walk; // 0x148 (8)
	struct UAnimMontage Climbup_200_Run; // 0x150 (8)
	struct UAnimMontage Climbup_250_Walk; // 0x158 (8)
	struct UAnimMontage Climbup_250_Run; // 0x160 (8)
	struct UAnimMontage Climbup_300_Walk; // 0x168 (8)
	struct UAnimMontage Climbup_300_Run; // 0x170 (8)
	struct UAnimMontage Climbup_2P_Walk; // 0x178 (8)
	struct UAnimMontage Climbup_2P_Run; // 0x180 (8)
	struct UAnimMontage ClimbupMoveStart_101; // 0x188 (8)
	struct UAnimMontage ClimbupMoveStart_200_301; // 0x190 (8)
	struct UAnimMontage LedgeGrapVault; // 0x198 (8)
	struct UAnimMontage LedgeGrapClimbupFull; // 0x1A0 (8)
	struct UAnimMontage LedgeGrapClimbupHalf; // 0x1A8 (8)
};

// ScriptStruct ProjectD.PDTurnAnimDatas
struct FPDTurnAnimDatas {
	struct UAnimMontage Loco_Stand_TurnInPlaceLeft; // 0x0 (8)
	struct UAnimMontage Loco_Stand_TurnInPlaceRight; // 0x8 (8)
	struct UAnimMontage Loco_Stand_TurnInPlaceLeft_GunStance; // 0x10 (8)
	struct UAnimMontage Loco_Stand_TurnInPlaceRight_GunStance; // 0x18 (8)
	struct UAnimMontage Loco_Crouch_TurnInPlaceLeft; // 0x20 (8)
	struct UAnimMontage Loco_Crouch_TurnInPlaceRight; // 0x28 (8)
	struct UAnimMontage Loco_Crouch_TurnInPlaceLeft_GunStance; // 0x30 (8)
	struct UAnimMontage Loco_Crouch_TurnInPlaceRight_GunStance; // 0x38 (8)
	struct UAnimMontage Loco_Groggy_TurnInPlaceLeft; // 0x40 (8)
	struct UAnimMontage Loco_Groggy_TurnInPlaceRight; // 0x48 (8)
	struct UAnimMontage Stand_AlignRotation_TurnLeft; // 0x50 (8)
	struct UAnimMontage Stand_AlignRoatation_TurnRight; // 0x58 (8)
	struct UAnimMontage Crouch_AlignRoatation_TurnLeft; // 0x60 (8)
	struct UAnimMontage Crouch_AlignRotation_TurnRight; // 0x68 (8)
};

// ScriptStruct ProjectD.PDLeanAnimDatas
struct FPDLeanAnimDatas {
	struct UAnimMontage Lean_Loop; // 0x0 (8)
};

// ScriptStruct ProjectD.PDPCUsingInABPAnimDatas
struct FPDPCUsingInABPAnimDatas {
	struct UBlendSpace Loco_Climb_2P; // 0x0 (8)
	struct UBlendSpace Loco_Climb_4P; // 0x8 (8)
	struct UAnimSequence Loco_Groggy_Idle_Bare; // 0x10 (8)
	struct UAnimSequence Loco_Groggy_Idle_HG; // 0x18 (8)
	struct UBlendSpace Loco_Groggy_Run_Bare; // 0x20 (8)
	struct UBlendSpace Loco_Groggy_Run_HG; // 0x28 (8)
	struct UAnimSequence Loco_Fall_Groggy_Idle_Bare; // 0x30 (8)
	struct UAnimSequence Loco_Climb_Groggy_Idle_Bare; // 0x38 (8)
	struct UBlendSpaceBase AO_Groggy_Bare; // 0x40 (8)
	struct UBlendSpaceBase AO_Groggy_HG; // 0x48 (8)
	struct UBlendSpace Loco_Slide_Default; // 0x50 (8)
	struct UBlendSpace Loco_Slide_Groggy; // 0x58 (8)
};

// ScriptStruct ProjectD.PDLobbyCharacterAnimData
struct FPDLobbyCharacterAnimData : FTableRowBase {
	struct FPDLobbyAnimData LobbyAnimData; // 0x8 (208)
};

// ScriptStruct ProjectD.PDLobbyAnimData
struct FPDLobbyAnimData {
	struct UAnimSequence Lobby_Scene_Select; // 0x0 (8)
	struct UAnimSequence Lobby_Scene_Idle_2; // 0x8 (8)
	int32_t Lobby_Scene_Idle_1_Select_Percent; // 0x10 (4)
	struct UAnimSequence Lobby_Scene_Idle_3; // 0x18 (8)
	int32_t Lobby_Scene_Idle_2_Select_Percent; // 0x20 (4)
	struct UAnimSequence Lobby_Scene_Matching_Start; // 0x28 (8)
	struct UAnimSequence Lobby_Scene_Matching_Idle; // 0x30 (8)
	struct UAnimSequence Lobby_Scene_Customizing; // 0x38 (8)
	struct UAnimSequence Lobby_Scene_Shop; // 0x40 (8)
	struct UAnimSequence Create_Scene_Select; // 0x48 (8)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Win; // 0x50 (16)
	struct TArray<struct FPDResultAnimSequence> Result_Scene_Lose; // 0x60 (16)
	struct UAnimSequence Lobby_Scene_Select_Hair; // 0x70 (8)
	struct UAnimSequence Lobby_Scene_Idle_Hair_2; // 0x78 (8)
	struct UAnimSequence Lobby_Scene_Idle_Hair_3; // 0x80 (8)
	struct UAnimSequence Lobby_Scene_Matching_Start_Hair; // 0x88 (8)
	struct UAnimSequence Lobby_Scene_Matching_Idle_Hair; // 0x90 (8)
	struct UAnimSequence Lobby_Scene_Customizing_Hair; // 0x98 (8)
	struct UAnimSequence Lobby_Scene_Shop_Hair; // 0xA0 (8)
	struct UAnimSequence Create_Scene_Select_Hair; // 0xA8 (8)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Win_Hair; // 0xB0 (16)
	struct TArray<struct FPDResultHairAnimSequence> Result_Scene_Lose_Hair; // 0xC0 (16)
};

// ScriptStruct ProjectD.PDResultHairAnimSequence
struct FPDResultHairAnimSequence {
	struct UAnimSequence ActionAnimData; // 0x0 (8)
	struct UAnimSequence IdleAnimData; // 0x8 (8)
};

// ScriptStruct ProjectD.PDResultAnimSequence
struct FPDResultAnimSequence {
	struct UAnimSequence ActionAnimData; // 0x0 (8)
	struct UAnimSequence IdleAnimData; // 0x8 (8)
	int32_t EquipWeaponIndex; // 0x10 (4)
};

// ScriptStruct ProjectD.PDFacialAnimData
struct FPDFacialAnimData : FTableRowBase {
	struct FPDIngameFacialAnimData IngameFacialAnimData[0x9]; // 0x8 (936)
};

// ScriptStruct ProjectD.PDIngameFacialAnimData
struct FPDIngameFacialAnimData {
	struct UAnimSequence Idle; // 0x0 (8)
	struct UAnimSequence Crouch; // 0x8 (8)
	struct UAnimSequence Exhauted; // 0x10 (8)
	struct UAnimSequence ads; // 0x18 (8)
	struct UAnimSequence Groggy; // 0x20 (8)
	struct UAnimSequence Dead; // 0x28 (8)
	struct UAnimSequence Env1; // 0x30 (8)
	struct UAnimMontage Melee; // 0x38 (8)
	struct UAnimMontage Hipfire; // 0x40 (8)
	struct UAnimMontage ADSFire; // 0x48 (8)
	struct UAnimMontage Reload; // 0x50 (8)
	struct UAnimMontage Painful; // 0x58 (8)
	struct UAnimMontage Parkour; // 0x60 (8)
};

// ScriptStruct ProjectD.PDHitReactionBSAnimData
struct FPDHitReactionBSAnimData {
	struct UBlendSpaceBase HitReaction_BS; // 0x0 (8)
};

// ScriptStruct ProjectD.TakeHitInfo
struct FTakeHitInfo {
	float ActualDamage; // 0x0 (4)
	struct UClass* DamageTypeClass; // 0x8 (8)
	struct TWeakObjectPtr<struct APawn> PawnInstigator; // 0x10 (8)
	struct TWeakObjectPtr<struct UActor> DamageCauser; // 0x18 (8)
	int32_t DamageEventClassID; // 0x20 (4)
	bool bKilled; // 0x24 (1)
	bool bBlackOut; // 0x25 (1)
	char EnsureReplicationByte; // 0x26 (1)
	struct FDamageEvent GeneralDamageEvent; // 0x28 (16)
	struct FPointDamageEvent PointDamageEvent; // 0x38 (168)
	struct FRadialDamageEvent RadialDamageEvent; // 0xE0 (64)
};

// ScriptStruct ProjectD.NeighborInfoArray
struct FNeighborInfoArray {
	struct TArray<struct APDClimbNodeActor> ClimbNodeActors; // 0x0 (16)
	struct APDClimbableActor ClimbableActor; // 0x18 (8)
	struct FVector BoxExtent; // 0x20 (12)
	struct FVector LeftLocation; // 0x2C (12)
	struct FVector RightLocation; // 0x38 (12)
};

// ScriptStruct ProjectD.NeighborInfo
struct FNeighborInfo {
	struct FClimbNodeInfo Self; // 0x0 (32)
	struct TArray<struct FClimbNodeInfo> NeighborActors; // 0x20 (16)
	struct TArray<struct FClimbNodeInfo> NeighborActorsToJump; // 0x30 (16)
};

// ScriptStruct ProjectD.ClimbNodeInfo
struct FClimbNodeInfo {
	bool bDataOverridden; // 0x0 (1)
	struct APDClimbableActor ClimbableActor; // 0x8 (8)
	enum class EPDClimbStanceState ClimbType; // 0x10 (1)
	enum class EPDClimbMoveType MoveType; // 0x11 (1)
	enum class EPDClimbPointUptype ClimbUpType; // 0x12 (1)
};

// ScriptStruct ProjectD.SafeZoneDrawing
struct FSafeZoneDrawing {
	enum class ESafeZoneDrawStyle Style; // 0x0 (1)
	struct FColor Color; // 0x4 (4)
};

// ScriptStruct ProjectD.HitFeedbackIcon
struct FHitFeedbackIcon {
	struct UPaperSprite Sprite; // 0x0 (8)
	struct FLinearColor Color; // 0x8 (16)
	struct FVector2D Size; // 0x18 (8)
};

// ScriptStruct ProjectD.PDIKAnimInstanceProxy
struct FPDIKAnimInstanceProxy : FIKAnimInstanceProxy {
	struct FPDHandIKData HandIKData; // 0xAB0 (160)
	float StanceExplicitTime; // 0xB50 (4)
	struct UPDIKAnimInstance IKAnimInstance; // 0xB58 (8)
	struct UPDStateComponent OwnerStateComponent; // 0xB60 (8)
	struct APDPlayerCharacter OwnerPlayerCharacter; // 0xB68 (8)
	float AimClampedYaw; // 0xB70 (4)
};

// ScriptStruct ProjectD.PDIngameMapPos
struct FPDIngameMapPos {
	struct FAnchors Anchors; // 0x0 (16)
	struct FMargin Offsets; // 0x10 (16)
	struct FVector2D Alignment; // 0x20 (8)
};

// ScriptStruct ProjectD.LobbySceneEventData
struct FLobbySceneEventData {
	enum class ESceneEvent TargetSceneEvent; // 0x0 (1)
	float Duration; // 0x4 (4)
	struct FVector CameraDeltaPos; // 0x8 (12)
};

// ScriptStruct ProjectD.SmoothMoveInfo
struct FSmoothMoveInfo {
	struct UPrimitiveComponent TargetRotationComponent; // 0x90 (8)
	struct UPrimitiveComponent TargetLocationComponent; // 0x98 (8)
	struct UActor TargetRotationActor; // 0xA0 (8)
	struct UActor TargetLocationActor; // 0xA8 (8)
	struct UCurveFloat CurrentSmoothRotationCurve; // 0xE8 (8)
	struct UCurveFloat CurrentSmoothLocationCurveFloat; // 0xF0 (8)
	struct UCurveVector CurrentSmoothLocationCurveVector; // 0xF8 (8)
};

// ScriptStruct ProjectD.PDBirdAnimData
struct FPDBirdAnimData : FTableRowBase {
	struct TArray<struct UAnimSequence> Idles; // 0x8 (16)
	struct UAnimSequence Walk; // 0x18 (8)
	struct UAnimSequence FlyStart; // 0x20 (8)
	struct UAnimSequence Fly; // 0x28 (8)
	struct UAnimSequence Wing; // 0x30 (8)
	struct UAnimSequence Landing_Loop; // 0x38 (8)
	struct UAnimSequence Landing_End; // 0x40 (8)
};

// ScriptStruct ProjectD.CameraMoveInfo
struct FCameraMoveInfo {
	float ArmLength; // 0x0 (4)
	struct FVector SocketOffset; // 0x4 (12)
	struct FVector TargetOffset; // 0x10 (12)
	struct FRotator RelativeRotation; // 0x1C (12)
	float FOV; // 0x28 (4)
	float InterpTime; // 0x2C (4)
	float ReturnTime; // 0x30 (4)
	float DelayTime; // 0x34 (4)
	struct TWeakObjectPtr<struct UCurveFloat> BlendingCurve; // 0x38 (8)
	struct TWeakObjectPtr<struct UCurveFloat> ReturnCurve; // 0x40 (8)
};

// ScriptStruct ProjectD.PDFootstepInfo
struct FPDFootstepInfo {
	struct UDecalComponent decal; // 0x0 (8)
};

// ScriptStruct ProjectD.SkeletalMeshMergeParams
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x0 (16)
	struct TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10 (16)
	struct TArray<struct USkeletalMesh> MeshesToMerge; // 0x20 (16)
	int32_t StripTopLODS; // 0x30 (4)
	char bNeedsCpuAccess : 1; // 0x34 (1)
	char bSkeletonBefore : 1; // 0x34 (1)
	char pad_34_2 : 6; // 0x34 (1)
	struct USkeleton Skeleton; // 0x38 (8)
	struct UPhysicsAsset PhysicsAsset; // 0x40 (8)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransformMapping
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x0 (16)
};

// ScriptStruct ProjectD.SkelMeshMergeUVTransform
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x0 (16)
};

// ScriptStruct ProjectD.SkelMeshMergeSectionMapping_BP
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x0 (16)
};

// ScriptStruct ProjectD.ActiveRangeInfo
struct FActiveRangeInfo {
	int32_t DefScore; // 0x0 (4)
	int32_t PlayerExistWeight; // 0x4 (4)
	int32_t PlayerNoneWeight; // 0x8 (4)
	float Height; // 0xC (4)
	float ARadius; // 0x10 (4)
	float BRadius; // 0x14 (4)
	struct FColor AColor; // 0x18 (4)
	struct FColor BColor; // 0x1C (4)
	float Bold; // 0x20 (4)
};

// ScriptStruct ProjectD.EventData
struct FEventData {
	float ExecuteTime; // 0x0 (4)
	float StartKey; // 0x4 (4)
	float EndKey; // 0x8 (4)
	float Duration; // 0xC (4)
	float FOV; // 0x10 (4)
	enum class ESplineMovementType SplineMoveType; // 0x14 (4)
	struct FRotator CustomRotation; // 0x18 (12)
	struct FName CharacterBone; // 0x24 (8)
};

// Function ProjectD.PDAgentCreateUI.SetAgentInfo
inline void UPDAgentCreateUI::SetAgentInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.SetAgentInfo");

	struct SetAgentInfo_Params {
		int32_t SkillIndex;
		struct FVector2D InfoAbsolutePos;
	}; SetAgentInfo_Params Params;

	Params.SkillIndex = SkillIndex;
	Params.InfoAbsolutePos = InfoAbsolutePos;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnMovieOpened
inline void UPDAgentCreateUI::OnMovieOpened() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnMovieOpened");

	struct OnMovieOpened_Params {
		
	}; OnMovieOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnMovieClosed
inline void UPDAgentCreateUI::OnMovieClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnMovieClosed");

	struct OnMovieClosed_Params {
		
	}; OnMovieClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnInitMediaPlayer
inline void UPDAgentCreateUI::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnCreateAgentClicked
inline void UPDAgentCreateUI::OnCreateAgentClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnCreateAgentClicked");

	struct OnCreateAgentClicked_Params {
		
	}; OnCreateAgentClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnConfirmCreate
inline void UPDAgentCreateUI::OnConfirmCreate(int32_t AgentIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnConfirmCreate");

	struct OnConfirmCreate_Params {
		int32_t AgentIndex;
	}; OnConfirmCreate_Params Params;

	Params.AgentIndex = AgentIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.OnBackClicked
inline void UPDAgentCreateUI::OnBackClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.OnBackClicked");

	struct OnBackClicked_Params {
		
	}; OnBackClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentCreateUI.AgentSkillVisible
inline void UPDAgentCreateUI::AgentSkillVisible(bool bShow) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentCreateUI.AgentSkillVisible");

	struct AgentSkillVisible_Params {
		bool bShow;
	}; AgentSkillVisible_Params Params;

	Params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInvenPerkListItem.GotoCharacterPerk
inline void UPDAgentInvenPerkListItem::GotoCharacterPerk() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInvenPerkListItem.GotoCharacterPerk");

	struct GotoCharacterPerk_Params {
		
	}; GotoCharacterPerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.SlotChangerRight
inline void UPDAgentInventoryUI::SlotChangerRight() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.SlotChangerRight");

	struct SlotChangerRight_Params {
		
	}; SlotChangerRight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.SlotChangerLeft
inline void UPDAgentInventoryUI::SlotChangerLeft() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.SlotChangerLeft");

	struct SlotChangerLeft_Params {
		
	}; SlotChangerLeft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.QuickContract
inline void UPDAgentInventoryUI::QuickContract() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.QuickContract");

	struct QuickContract_Params {
		
	}; QuickContract_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoLobby
inline void UPDAgentInventoryUI::GotoLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoLobby");

	struct GotoLobby_Params {
		
	}; GotoLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoGameDeco
inline void UPDAgentInventoryUI::GotoGameDeco() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoGameDeco");

	struct GotoGameDeco_Params {
		
	}; GotoGameDeco_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoCharacterWeapon
inline void UPDAgentInventoryUI::GotoCharacterWeapon() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoCharacterWeapon");

	struct GotoCharacterWeapon_Params {
		
	}; GotoCharacterWeapon_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoCharacterVoice
inline void UPDAgentInventoryUI::GotoCharacterVoice() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoCharacterVoice");

	struct GotoCharacterVoice_Params {
		
	}; GotoCharacterVoice_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoCharacterPerk
inline void UPDAgentInventoryUI::GotoCharacterPerk() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoCharacterPerk");

	struct GotoCharacterPerk_Params {
		
	}; GotoCharacterPerk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.GotoCharacterDeco
inline void UPDAgentInventoryUI::GotoCharacterDeco() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.GotoCharacterDeco");

	struct GotoCharacterDeco_Params {
		
	}; GotoCharacterDeco_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOver
inline void UPDAgentInventoryUI::CustomWeaponBtnOver() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOver");

	struct CustomWeaponBtnOver_Params {
		
	}; CustomWeaponBtnOver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOut
inline void UPDAgentInventoryUI::CustomWeaponBtnOut() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomWeaponBtnOut");

	struct CustomWeaponBtnOut_Params {
		
	}; CustomWeaponBtnOut_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomGameBtnOver
inline void UPDAgentInventoryUI::CustomGameBtnOver() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomGameBtnOver");

	struct CustomGameBtnOver_Params {
		
	}; CustomGameBtnOver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomGameBtnOut
inline void UPDAgentInventoryUI::CustomGameBtnOut() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomGameBtnOut");

	struct CustomGameBtnOut_Params {
		
	}; CustomGameBtnOut_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOver
inline void UPDAgentInventoryUI::CustomCharacterPerkBtnOver() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOver");

	struct CustomCharacterPerkBtnOver_Params {
		
	}; CustomCharacterPerkBtnOver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOut
inline void UPDAgentInventoryUI::CustomCharacterPerkBtnOut() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentInventoryUI.CustomCharacterPerkBtnOut");

	struct CustomCharacterPerkBtnOut_Params {
		
	}; CustomCharacterPerkBtnOut_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentListItemUI.OnUnSelectAgent
inline void UPDAgentListItemUI::OnUnSelectAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentListItemUI.OnUnSelectAgent");

	struct OnUnSelectAgent_Params {
		
	}; OnUnSelectAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentListItemUI.OnUnHoverAgent
inline void UPDAgentListItemUI::OnUnHoverAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentListItemUI.OnUnHoverAgent");

	struct OnUnHoverAgent_Params {
		
	}; OnUnHoverAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentListItemUI.OnSelectAgent
inline void UPDAgentListItemUI::OnSelectAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentListItemUI.OnSelectAgent");

	struct OnSelectAgent_Params {
		
	}; OnSelectAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentListItemUI.OnHoverAgent
inline void UPDAgentListItemUI::OnHoverAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentListItemUI.OnHoverAgent");

	struct OnHoverAgent_Params {
		
	}; OnHoverAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSkillListUI.OnUnHoverAgentSkill
inline void UPDAgentSkillListUI::OnUnHoverAgentSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSkillListUI.OnUnHoverAgentSkill");

	struct OnUnHoverAgentSkill_Params {
		
	}; OnUnHoverAgentSkill_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSkillListUI.OnHoverAgentSkill
inline void UPDAgentSkillListUI::OnHoverAgentSkill() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSkillListUI.OnHoverAgentSkill");

	struct OnHoverAgentSkill_Params {
		
	}; OnHoverAgentSkill_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnUnHoverSelectAgent
inline void UPDAgentSlotListItemUI::OnUnHoverSelectAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnUnHoverSelectAgent");

	struct OnUnHoverSelectAgent_Params {
		
	}; OnUnHoverSelectAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnUnHoverCreateAgent
inline void UPDAgentSlotListItemUI::OnUnHoverCreateAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnUnHoverCreateAgent");

	struct OnUnHoverCreateAgent_Params {
		
	}; OnUnHoverCreateAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnHoverSelectAgent
inline void UPDAgentSlotListItemUI::OnHoverSelectAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnHoverSelectAgent");

	struct OnHoverSelectAgent_Params {
		
	}; OnHoverSelectAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnHoverCreateAgent
inline void UPDAgentSlotListItemUI::OnHoverCreateAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnHoverCreateAgent");

	struct OnHoverCreateAgent_Params {
		
	}; OnHoverCreateAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnClickSelectAgent
inline void UPDAgentSlotListItemUI::OnClickSelectAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnClickSelectAgent");

	struct OnClickSelectAgent_Params {
		
	}; OnClickSelectAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDAgentSlotListItemUI.OnClickCreateAgent
inline void UPDAgentSlotListItemUI::OnClickCreateAgent() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDAgentSlotListItemUI.OnClickCreateAgent");

	struct OnClickCreateAgent_Params {
		
	}; OnClickCreateAgent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDButton.OnUnHovered
inline void UPDButton::OnUnHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDButton.OnUnHovered");

	struct OnUnHovered_Params {
		
	}; OnUnHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDButton.OnReleased
inline void UPDButton::OnReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDButton.OnReleased");

	struct OnReleased_Params {
		
	}; OnReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDButton.OnHovered
inline void UPDButton::OnHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDButton.OnHovered");

	struct OnHovered_Params {
		
	}; OnHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDButton.OnClicked
inline void UPDButton::OnClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDButton.OnClicked");

	struct OnClicked_Params {
		
	}; OnClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.SendChatMessage
inline void UPDChattingUI::SendChatMessage(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.SendChatMessage");

	struct SendChatMessage_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; SendChatMessage_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDChattingUI.OnValueChanged
inline void UPDChattingUI::OnValueChanged(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnValueChanged");

	struct OnValueChanged_Params {
		float InValue;
	}; OnValueChanged_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickWhisperChatBtn
inline void UPDChattingUI::OnClickWhisperChatBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickWhisperChatBtn");

	struct OnClickWhisperChatBtn_Params {
		
	}; OnClickWhisperChatBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickTeamChatBtn
inline void UPDChattingUI::OnClickTeamChatBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickTeamChatBtn");

	struct OnClickTeamChatBtn_Params {
		
	}; OnClickTeamChatBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickSquadChatBtn
inline void UPDChattingUI::OnClickSquadChatBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickSquadChatBtn");

	struct OnClickSquadChatBtn_Params {
		
	}; OnClickSquadChatBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickReplyChatBtn
inline void UPDChattingUI::OnClickReplyChatBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickReplyChatBtn");

	struct OnClickReplyChatBtn_Params {
		
	}; OnClickReplyChatBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickHideBtn
inline void UPDChattingUI::OnClickHideBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickHideBtn");

	struct OnClickHideBtn_Params {
		
	}; OnClickHideBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.OnClickClanChatBtn
inline void UPDChattingUI::OnClickClanChatBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.OnClickClanChatBtn");

	struct OnClickClanChatBtn_Params {
		
	}; OnClickClanChatBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDChattingUI.ChangeText
inline void UPDChattingUI::ChangeText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDChattingUI.ChangeText");

	struct ChangeText_Params {
		struct FText& InText;
	}; ChangeText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDCircleProgressModule.OnSynchronizeProperties
inline void UPDCircleProgressModule::OnSynchronizeProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCircleProgressModule.OnSynchronizeProperties");

	struct OnSynchronizeProperties_Params {
		
	}; OnSynchronizeProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanApplicantListItemUI.OnClickDecline
inline void UPDClanApplicantListItemUI::OnClickDecline() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanApplicantListItemUI.OnClickDecline");

	struct OnClickDecline_Params {
		
	}; OnClickDecline_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanApplicantListItemUI.OnClickCancelReqJoin
inline void UPDClanApplicantListItemUI::OnClickCancelReqJoin() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanApplicantListItemUI.OnClickCancelReqJoin");

	struct OnClickCancelReqJoin_Params {
		
	}; OnClickCancelReqJoin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanApplicantListItemUI.OnClickAccept
inline void UPDClanApplicantListItemUI::OnClickAccept() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanApplicantListItemUI.OnClickAccept");

	struct OnClickAccept_Params {
		
	}; OnClickAccept_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnTextChangedClanTag3
inline void UPDClanCreateUI::OnTextChangedClanTag3(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnTextChangedClanTag3");

	struct OnTextChangedClanTag3_Params {
		struct FText& InText;
	}; OnTextChangedClanTag3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanCreateUI.OnTextChangedClanTag2
inline void UPDClanCreateUI::OnTextChangedClanTag2(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnTextChangedClanTag2");

	struct OnTextChangedClanTag2_Params {
		struct FText& InText;
	}; OnTextChangedClanTag2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanCreateUI.OnTextChangedClanTag1
inline void UPDClanCreateUI::OnTextChangedClanTag1(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnTextChangedClanTag1");

	struct OnTextChangedClanTag1_Params {
		struct FText& InText;
	}; OnTextChangedClanTag1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanCreateUI.OnTextChangedClanDesc
inline void UPDClanCreateUI::OnTextChangedClanDesc(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnTextChangedClanDesc");

	struct OnTextChangedClanDesc_Params {
		struct FText& Text;
	}; OnTextChangedClanDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDClanCreateUI.OnCreateConfirm
inline void UPDClanCreateUI::OnCreateConfirm() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnCreateConfirm");

	struct OnCreateConfirm_Params {
		
	}; OnCreateConfirm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickSocialTab
inline void UPDClanCreateUI::OnClickSocialTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickSocialTab");

	struct OnClickSocialTab_Params {
		
	}; OnClickSocialTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickSingUpTab
inline void UPDClanCreateUI::OnClickSingUpTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickSingUpTab");

	struct OnClickSingUpTab_Params {
		
	}; OnClickSingUpTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickRandomMark
inline void UPDClanCreateUI::OnClickRandomMark() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickRandomMark");

	struct OnClickRandomMark_Params {
		
	}; OnClickRandomMark_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickNormalTab
inline void UPDClanCreateUI::OnClickNormalTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickNormalTab");

	struct OnClickNormalTab_Params {
		
	}; OnClickNormalTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickFreeJoinTab
inline void UPDClanCreateUI::OnClickFreeJoinTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickFreeJoinTab");

	struct OnClickFreeJoinTab_Params {
		
	}; OnClickFreeJoinTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickCreateClan
inline void UPDClanCreateUI::OnClickCreateClan() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickCreateClan");

	struct OnClickCreateClan_Params {
		
	}; OnClickCreateClan_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickCompetitionTab
inline void UPDClanCreateUI::OnClickCompetitionTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickCompetitionTab");

	struct OnClickCompetitionTab_Params {
		
	}; OnClickCompetitionTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClickCheckInUse
inline void UPDClanCreateUI::OnClickCheckInUse() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClickCheckInUse");

	struct OnClickCheckInUse_Params {
		
	}; OnClickCheckInUse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanCreateUI.OnClanNameTextChanged
inline void UPDClanCreateUI::OnClanNameTextChanged(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanCreateUI.OnClanNameTextChanged");

	struct OnClanNameTextChanged_Params {
		struct FText& InText;
	}; OnClanNameTextChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanInfoUI.OnUnhoveredShowClanInfo
inline void UPDClanInfoUI::OnUnhoveredShowClanInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnUnhoveredShowClanInfo");

	struct OnUnhoveredShowClanInfo_Params {
		
	}; OnUnhoveredShowClanInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnTextChangedClanTag3
inline void UPDClanInfoUI::OnTextChangedClanTag3(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnTextChangedClanTag3");

	struct OnTextChangedClanTag3_Params {
		struct FText& InText;
	}; OnTextChangedClanTag3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanInfoUI.OnTextChangedClanTag2
inline void UPDClanInfoUI::OnTextChangedClanTag2(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnTextChangedClanTag2");

	struct OnTextChangedClanTag2_Params {
		struct FText& InText;
	}; OnTextChangedClanTag2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanInfoUI.OnTextChangedClanTag1
inline void UPDClanInfoUI::OnTextChangedClanTag1(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnTextChangedClanTag1");

	struct OnTextChangedClanTag1_Params {
		struct FText& InText;
	}; OnTextChangedClanTag1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanInfoUI.OnTextChangedClanName
inline void UPDClanInfoUI::OnTextChangedClanName(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnTextChangedClanName");

	struct OnTextChangedClanName_Params {
		struct FText& Text;
	}; OnTextChangedClanName_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDClanInfoUI.OnTextChangedClanDesc
inline void UPDClanInfoUI::OnTextChangedClanDesc(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnTextChangedClanDesc");

	struct OnTextChangedClanDesc_Params {
		struct FText& Text;
	}; OnTextChangedClanDesc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDClanInfoUI.OnLeaveConfirm
inline void UPDClanInfoUI::OnLeaveConfirm() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnLeaveConfirm");

	struct OnLeaveConfirm_Params {
		
	}; OnLeaveConfirm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnHoveredShowClanInfo
inline void UPDClanInfoUI::OnHoveredShowClanInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnHoveredShowClanInfo");

	struct OnHoveredShowClanInfo_Params {
		
	}; OnHoveredShowClanInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnForceClanBreakButton
inline void UPDClanInfoUI::OnForceClanBreakButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnForceClanBreakButton");

	struct OnForceClanBreakButton_Params {
		
	}; OnForceClanBreakButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickSocialTab
inline void UPDClanInfoUI::OnClickSocialTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickSocialTab");

	struct OnClickSocialTab_Params {
		
	}; OnClickSocialTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickSingUpTab
inline void UPDClanInfoUI::OnClickSingUpTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickSingUpTab");

	struct OnClickSingUpTab_Params {
		
	}; OnClickSingUpTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickShowClanInfo
inline void UPDClanInfoUI::OnClickShowClanInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickShowClanInfo");

	struct OnClickShowClanInfo_Params {
		
	}; OnClickShowClanInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickSearch
inline void UPDClanInfoUI::OnClickSearch() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickSearch");

	struct OnClickSearch_Params {
		
	}; OnClickSearch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickNormalTab
inline void UPDClanInfoUI::OnClickNormalTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickNormalTab");

	struct OnClickNormalTab_Params {
		
	}; OnClickNormalTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickMemberTab
inline void UPDClanInfoUI::OnClickMemberTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickMemberTab");

	struct OnClickMemberTab_Params {
		
	}; OnClickMemberTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickManageChange
inline void UPDClanInfoUI::OnClickManageChange() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickManageChange");

	struct OnClickManageChange_Params {
		
	}; OnClickManageChange_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickLeave
inline void UPDClanInfoUI::OnClickLeave() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickLeave");

	struct OnClickLeave_Params {
		
	}; OnClickLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickFreeJoinTab
inline void UPDClanInfoUI::OnClickFreeJoinTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickFreeJoinTab");

	struct OnClickFreeJoinTab_Params {
		
	}; OnClickFreeJoinTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickDisband
inline void UPDClanInfoUI::OnClickDisband() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickDisband");

	struct OnClickDisband_Params {
		
	}; OnClickDisband_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickCreate
inline void UPDClanInfoUI::OnClickCreate() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickCreate");

	struct OnClickCreate_Params {
		
	}; OnClickCreate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickCompetitionTab
inline void UPDClanInfoUI::OnClickCompetitionTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickCompetitionTab");

	struct OnClickCompetitionTab_Params {
		
	}; OnClickCompetitionTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickClanManageTab
inline void UPDClanInfoUI::OnClickClanManageTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickClanManageTab");

	struct OnClickClanManageTab_Params {
		
	}; OnClickClanManageTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickCheckInUse
inline void UPDClanInfoUI::OnClickCheckInUse() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickCheckInUse");

	struct OnClickCheckInUse_Params {
		
	}; OnClickCheckInUse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickChangeMark
inline void UPDClanInfoUI::OnClickChangeMark() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickChangeMark");

	struct OnClickChangeMark_Params {
		
	}; OnClickChangeMark_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnClickApplicantTab
inline void UPDClanInfoUI::OnClickApplicantTab() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnClickApplicantTab");

	struct OnClickApplicantTab_Params {
		
	}; OnClickApplicantTab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnBreakClanConfirmButton
inline void UPDClanInfoUI::OnBreakClanConfirmButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnBreakClanConfirmButton");

	struct OnBreakClanConfirmButton_Params {
		
	}; OnBreakClanConfirmButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnBreakClanCancelButton
inline void UPDClanInfoUI::OnBreakClanCancelButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnBreakClanCancelButton");

	struct OnBreakClanCancelButton_Params {
		
	}; OnBreakClanCancelButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanInfoUI.OnBreakClanButton
inline void UPDClanInfoUI::OnBreakClanButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanInfoUI.OnBreakClanButton");

	struct OnBreakClanButton_Params {
		
	}; OnBreakClanButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanListUI.OnEnterSearch
inline void UPDClanListUI::OnEnterSearch(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanListUI.OnEnterSearch");

	struct OnEnterSearch_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnEnterSearch_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDClanListUI.OnClickSeach
inline void UPDClanListUI::OnClickSeach() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanListUI.OnClickSeach");

	struct OnClickSeach_Params {
		
	}; OnClickSeach_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanListUI.OnClickClanInfo
inline void UPDClanListUI::OnClickClanInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanListUI.OnClickClanInfo");

	struct OnClickClanInfo_Params {
		
	}; OnClickClanInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanListUI.OnClanStyleSelectionChanged
inline void UPDClanListUI::OnClanStyleSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanListUI.OnClanStyleSelectionChanged");

	struct OnClanStyleSelectionChanged_Params {
		struct FString SelectedItem;
		enum class ESelectInfo SelectionType;
	}; OnClanStyleSelectionChanged_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanListUI.OnChangeSearchText
inline void UPDClanListUI::OnChangeSearchText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanListUI.OnChangeSearchText");

	struct OnChangeSearchText_Params {
		struct FText& InText;
	}; OnChangeSearchText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDClanMainUI.OnClickTabClanList
inline void UPDClanMainUI::OnClickTabClanList() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMainUI.OnClickTabClanList");

	struct OnClickTabClanList_Params {
		
	}; OnClickTabClanList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanMainUI.OnClickTabClanInfo
inline void UPDClanMainUI::OnClickTabClanInfo() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMainUI.OnClickTabClanInfo");

	struct OnClickTabClanInfo_Params {
		
	}; OnClickTabClanInfo_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanMainUI.OnClickTabClanCreate
inline void UPDClanMainUI::OnClickTabClanCreate() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMainUI.OnClickTabClanCreate");

	struct OnClickTabClanCreate_Params {
		
	}; OnClickTabClanCreate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanMainUI.OnClickBtnGotoLobby
inline void UPDClanMainUI::OnClickBtnGotoLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMainUI.OnClickBtnGotoLobby");

	struct OnClickBtnGotoLobby_Params {
		
	}; OnClickBtnGotoLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanMemberListItemUI.OnKickConfirm
inline void UPDClanMemberListItemUI::OnKickConfirm() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMemberListItemUI.OnKickConfirm");

	struct OnKickConfirm_Params {
		
	}; OnKickConfirm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanMemberListItemUI.OnClickKick
inline void UPDClanMemberListItemUI::OnClickKick() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanMemberListItemUI.OnClickKick");

	struct OnClickKick_Params {
		
	}; OnClickKick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanOtherListItemUI.OnDblClicked
inline void UPDClanOtherListItemUI::OnDblClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanOtherListItemUI.OnDblClicked");

	struct OnDblClicked_Params {
		
	}; OnDblClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDClanOtherListItemUI.OnClickJoin
inline void UPDClanOtherListItemUI::OnClickJoin() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDClanOtherListItemUI.OnClickJoin");

	struct OnClickJoin_Params {
		
	}; OnClickJoin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDComboBox.OnComboBoxGenerateWidget
inline struct UWidget UPDComboBox::OnComboBoxGenerateWidget(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDComboBox.OnComboBoxGenerateWidget");

	struct OnComboBoxGenerateWidget_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; OnComboBoxGenerateWidget_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ProjectD.PDCommunityPopupUI.OnWICClicked
inline void UPDCommunityPopupUI::OnWICClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnWICClicked");

	struct OnWICClicked_Params {
		
	}; OnWICClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnWhisperClicked
inline void UPDCommunityPopupUI::OnWhisperClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnWhisperClicked");

	struct OnWhisperClicked_Params {
		
	}; OnWhisperClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnUnFavoriteClicked
inline void UPDCommunityPopupUI::OnUnFavoriteClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnUnFavoriteClicked");

	struct OnUnFavoriteClicked_Params {
		
	}; OnUnFavoriteClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnPartyInviteClicked
inline void UPDCommunityPopupUI::OnPartyInviteClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnPartyInviteClicked");

	struct OnPartyInviteClicked_Params {
		
	}; OnPartyInviteClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFriendTabClicked
inline void UPDCommunityPopupUI::OnFriendTabClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFriendTabClicked");

	struct OnFriendTabClicked_Params {
		
	}; OnFriendTabClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFriendRemoveClicked
inline void UPDCommunityPopupUI::OnFriendRemoveClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFriendRemoveClicked");

	struct OnFriendRemoveClicked_Params {
		
	}; OnFriendRemoveClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFriendAddTabClicked
inline void UPDCommunityPopupUI::OnFriendAddTabClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFriendAddTabClicked");

	struct OnFriendAddTabClicked_Params {
		
	}; OnFriendAddTabClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFriendAddClicked
inline void UPDCommunityPopupUI::OnFriendAddClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFriendAddClicked");

	struct OnFriendAddClicked_Params {
		
	}; OnFriendAddClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFindPartyClicked
inline void UPDCommunityPopupUI::OnFindPartyClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFindPartyClicked");

	struct OnFindPartyClicked_Params {
		
	}; OnFindPartyClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnFavoriteAddClicked
inline void UPDCommunityPopupUI::OnFavoriteAddClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnFavoriteAddClicked");

	struct OnFavoriteAddClicked_Params {
		
	}; OnFavoriteAddClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnCustomInviteClicked
inline void UPDCommunityPopupUI::OnCustomInviteClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnCustomInviteClicked");

	struct OnCustomInviteClicked_Params {
		
	}; OnCustomInviteClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnClanTabClicked
inline void UPDCommunityPopupUI::OnClanTabClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnClanTabClicked");

	struct OnClanTabClicked_Params {
		
	}; OnClanTabClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCommunityPopupUI.OnClanInfoClicked
inline void UPDCommunityPopupUI::OnClanInfoClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCommunityPopupUI.OnClanInfoClicked");

	struct OnClanInfoClicked_Params {
		
	}; OnClanInfoClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnInputKeySelected
inline void UPDControlOptionUI::OnInputKeySelected(struct UPDOptionContent Content) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnInputKeySelected");

	struct OnInputKeySelected_Params {
		struct UPDOptionContent Content;
	}; OnInputKeySelected_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickZoom2ToggleButton
inline void UPDControlOptionUI::OnClickZoom2ToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickZoom2ToggleButton");

	struct OnClickZoom2ToggleButton_Params {
		
	}; OnClickZoom2ToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickZoom2DefaultButton
inline void UPDControlOptionUI::OnClickZoom2DefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickZoom2DefaultButton");

	struct OnClickZoom2DefaultButton_Params {
		
	}; OnClickZoom2DefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickZoom1ToggleButton
inline void UPDControlOptionUI::OnClickZoom1ToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickZoom1ToggleButton");

	struct OnClickZoom1ToggleButton_Params {
		
	}; OnClickZoom1ToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickZoom1DefaultButton
inline void UPDControlOptionUI::OnClickZoom1DefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickZoom1DefaultButton");

	struct OnClickZoom1DefaultButton_Params {
		
	}; OnClickZoom1DefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickShootingRightButton
inline void UPDControlOptionUI::OnClickShootingRightButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickShootingRightButton");

	struct OnClickShootingRightButton_Params {
		
	}; OnClickShootingRightButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickShootingLeftButton
inline void UPDControlOptionUI::OnClickShootingLeftButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickShootingLeftButton");

	struct OnClickShootingLeftButton_Params {
		
	}; OnClickShootingLeftButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickSetToggleButton
inline void UPDControlOptionUI::OnClickSetToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickSetToggleButton");

	struct OnClickSetToggleButton_Params {
		
	}; OnClickSetToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickSetDefaultButton
inline void UPDControlOptionUI::OnClickSetDefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickSetDefaultButton");

	struct OnClickSetDefaultButton_Params {
		
	}; OnClickSetDefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickScoreBoardToggleButton
inline void UPDControlOptionUI::OnClickScoreBoardToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickScoreBoardToggleButton");

	struct OnClickScoreBoardToggleButton_Params {
		
	}; OnClickScoreBoardToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickScoreBoardHoldeButton
inline void UPDControlOptionUI::OnClickScoreBoardHoldeButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickScoreBoardHoldeButton");

	struct OnClickScoreBoardHoldeButton_Params {
		
	}; OnClickScoreBoardHoldeButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickScope2ToggleButton
inline void UPDControlOptionUI::OnClickScope2ToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickScope2ToggleButton");

	struct OnClickScope2ToggleButton_Params {
		
	}; OnClickScope2ToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickScope2DefaultButton
inline void UPDControlOptionUI::OnClickScope2DefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickScope2DefaultButton");

	struct OnClickScope2DefaultButton_Params {
		
	}; OnClickScope2DefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickMoveNActionSettingButton
inline void UPDControlOptionUI::OnClickMoveNActionSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickMoveNActionSettingButton");

	struct OnClickMoveNActionSettingButton_Params {
		
	}; OnClickMoveNActionSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickLeanToggleButton
inline void UPDControlOptionUI::OnClickLeanToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickLeanToggleButton");

	struct OnClickLeanToggleButton_Params {
		
	}; OnClickLeanToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickLeanHoldButton
inline void UPDControlOptionUI::OnClickLeanHoldButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickLeanHoldButton");

	struct OnClickLeanHoldButton_Params {
		
	}; OnClickLeanHoldButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeToggleButton
inline void UPDControlOptionUI::OnClickIngameMapSizeToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeToggleButton");

	struct OnClickIngameMapSizeToggleButton_Params {
		
	}; OnClickIngameMapSizeToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeHoldeButton
inline void UPDControlOptionUI::OnClickIngameMapSizeHoldeButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickIngameMapSizeHoldeButton");

	struct OnClickIngameMapSizeHoldeButton_Params {
		
	}; OnClickIngameMapSizeHoldeButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickETCActionSettingButton
inline void UPDControlOptionUI::OnClickETCActionSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickETCActionSettingButton");

	struct OnClickETCActionSettingButton_Params {
		
	}; OnClickETCActionSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange2Button
inline void UPDControlOptionUI::OnClickEnableWeaponChange2Button() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange2Button");

	struct OnClickEnableWeaponChange2Button_Params {
		
	}; OnClickEnableWeaponChange2Button_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange1Button
inline void UPDControlOptionUI::OnClickEnableWeaponChange1Button() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickEnableWeaponChange1Button");

	struct OnClickEnableWeaponChange1Button_Params {
		
	}; OnClickEnableWeaponChange1Button_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange2Button
inline void UPDControlOptionUI::OnClickDisableWeaponChange2Button() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange2Button");

	struct OnClickDisableWeaponChange2Button_Params {
		
	}; OnClickDisableWeaponChange2Button_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange1Button
inline void UPDControlOptionUI::OnClickDisableWeaponChange1Button() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickDisableWeaponChange1Button");

	struct OnClickDisableWeaponChange1Button_Params {
		
	}; OnClickDisableWeaponChange1Button_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickCrouchToggleButton
inline void UPDControlOptionUI::OnClickCrouchToggleButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickCrouchToggleButton");

	struct OnClickCrouchToggleButton_Params {
		
	}; OnClickCrouchToggleButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnClickCrouchHoldButton
inline void UPDControlOptionUI::OnClickCrouchHoldButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnClickCrouchHoldButton");

	struct OnClickCrouchHoldButton_Params {
		
	}; OnClickCrouchHoldButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnChangePing1DblClickType
inline void UPDControlOptionUI::OnChangePing1DblClickType(struct FString Item, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnChangePing1DblClickType");

	struct OnChangePing1DblClickType_Params {
		struct FString Item;
		enum class ESelectInfo SelType;
	}; OnChangePing1DblClickType_Params Params;

	Params.Item = Item;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnChangePing1ClickType
inline void UPDControlOptionUI::OnChangePing1ClickType(struct FString Item, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnChangePing1ClickType");

	struct OnChangePing1ClickType_Params {
		struct FString Item;
		enum class ESelectInfo SelType;
	}; OnChangePing1ClickType_Params Params;

	Params.Item = Item;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnAutoReloadEnabled
inline void UPDControlOptionUI::OnAutoReloadEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnAutoReloadEnabled");

	struct OnAutoReloadEnabled_Params {
		
	}; OnAutoReloadEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDControlOptionUI.OnAutoReloadDisabled
inline void UPDControlOptionUI::OnAutoReloadDisabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDControlOptionUI.OnAutoReloadDisabled");

	struct OnAutoReloadDisabled_Params {
		
	}; OnAutoReloadDisabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCursorWidget.SetSize
inline void UPDCursorWidget::SetSize() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCursorWidget.SetSize");

	struct SetSize_Params {
		
	}; SetSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnZoomReleased
inline void UPDCustomCharacterDecoUI::OnZoomReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnZoomReleased");

	struct OnZoomReleased_Params {
		
	}; OnZoomReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnZoomPressed
inline void UPDCustomCharacterDecoUI::OnZoomPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnZoomPressed");

	struct OnZoomPressed_Params {
		
	}; OnZoomPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCustomItem
inline void UPDCustomCharacterDecoUI::OnSelectedCustomItem(struct UPDCustomListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCustomItem");

	struct OnSelectedCustomItem_Params {
		struct UPDCustomListItemData InListItemData;
	}; OnSelectedCustomItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCategoryItem
inline void UPDCustomCharacterDecoUI::OnSelectedCategoryItem(struct UPDCustomCategoryListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnSelectedCategoryItem");

	struct OnSelectedCategoryItem_Params {
		struct UPDCustomCategoryListItemData InListItemData;
	}; OnSelectedCategoryItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnSaveAndLeave
inline void UPDCustomCharacterDecoUI::OnSaveAndLeave() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnSaveAndLeave");

	struct OnSaveAndLeave_Params {
		
	}; OnSaveAndLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnReleased
inline void UPDCustomCharacterDecoUI::OnRightTurnReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnReleased");

	struct OnRightTurnReleased_Params {
		
	}; OnRightTurnReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnPressed
inline void UPDCustomCharacterDecoUI::OnRightTurnPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnRightTurnPressed");

	struct OnRightTurnPressed_Params {
		
	}; OnRightTurnPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnRestore
inline void UPDCustomCharacterDecoUI::OnRestore() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnRestore");

	struct OnRestore_Params {
		
	}; OnRestore_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnMenuCoverMouseDown
inline void UPDCustomCharacterDecoUI::OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnMenuCoverMouseDown");

	struct OnMenuCoverMouseDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMenuCoverMouseDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnReleased
inline void UPDCustomCharacterDecoUI::OnLeftTurnReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnReleased");

	struct OnLeftTurnReleased_Params {
		
	}; OnLeftTurnReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnPressed
inline void UPDCustomCharacterDecoUI::OnLeftTurnPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnLeftTurnPressed");

	struct OnLeftTurnPressed_Params {
		
	}; OnLeftTurnPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnHasSkinCheckBoxChanged
inline void UPDCustomCharacterDecoUI::OnHasSkinCheckBoxChanged(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnHasSkinCheckBoxChanged");

	struct OnHasSkinCheckBoxChanged_Params {
		bool InIsChecked;
	}; OnHasSkinCheckBoxChanged_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnBuyItem
inline void UPDCustomCharacterDecoUI::OnBuyItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnBuyItem");

	struct OnBuyItem_Params {
		
	}; OnBuyItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.OnAllSkinCheckBoxChanged
inline void UPDCustomCharacterDecoUI::OnAllSkinCheckBoxChanged(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.OnAllSkinCheckBoxChanged");

	struct OnAllSkinCheckBoxChanged_Params {
		bool InIsChecked;
	}; OnAllSkinCheckBoxChanged_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterDecoUI.GotoBack
inline void UPDCustomCharacterDecoUI::GotoBack() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterDecoUI.GotoBack");

	struct GotoBack_Params {
		
	}; GotoBack_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.SeLeptonInfo
inline void UPDCustomCharacterPerkUI::SeLeptonInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.SeLeptonInfo");

	struct SeLeptonInfo_Params {
		int32_t SkillIndex;
		struct FVector2D InfoAbsolutePos;
		int32_t IconWidth;
	}; SeLeptonInfo_Params Params;

	Params.SkillIndex = SkillIndex;
	Params.InfoAbsolutePos = InfoAbsolutePos;
	Params.IconWidth = IconWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnSelectedPresetNameList
inline void UPDCustomCharacterPerkUI::OnSelectedPresetNameList(struct UPDAgentPresetListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnSelectedPresetNameList");

	struct OnSelectedPresetNameList_Params {
		struct UPDAgentPresetListItemData InListItemData;
	}; OnSelectedPresetNameList_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnSaveAndLeaveCustomCharacterLepton
inline void UPDCustomCharacterPerkUI::OnSaveAndLeaveCustomCharacterLepton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnSaveAndLeaveCustomCharacterLepton");

	struct OnSaveAndLeaveCustomCharacterLepton_Params {
		
	}; OnSaveAndLeaveCustomCharacterLepton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnLeaveCustomCharacterLepton
inline void UPDCustomCharacterPerkUI::OnLeaveCustomCharacterLepton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnLeaveCustomCharacterLepton");

	struct OnLeaveCustomCharacterLepton_Params {
		
	}; OnLeaveCustomCharacterLepton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnClickResetPreset
inline void UPDCustomCharacterPerkUI::OnClickResetPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnClickResetPreset");

	struct OnClickResetPreset_Params {
		
	}; OnClickResetPreset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetThird
inline void UPDCustomCharacterPerkUI::OnClickPresetThird() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetThird");

	struct OnClickPresetThird_Params {
		
	}; OnClickPresetThird_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetSecond
inline void UPDCustomCharacterPerkUI::OnClickPresetSecond() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetSecond");

	struct OnClickPresetSecond_Params {
		
	}; OnClickPresetSecond_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetFirst
inline void UPDCustomCharacterPerkUI::OnClickPresetFirst() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnClickPresetFirst");

	struct OnClickPresetFirst_Params {
		
	}; OnClickPresetFirst_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.OnClickNameList
inline void UPDCustomCharacterPerkUI::OnClickNameList() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.OnClickNameList");

	struct OnClickNameList_Params {
		
	}; OnClickNameList_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.LeptonTooltipVisible
inline void UPDCustomCharacterPerkUI::LeptonTooltipVisible(bool bShow) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.LeptonTooltipVisible");

	struct LeptonTooltipVisible_Params {
		bool bShow;
	}; LeptonTooltipVisible_Params Params;

	Params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomCharacterPerkUI.GotoBack
inline void UPDCustomCharacterPerkUI::GotoBack() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomCharacterPerkUI.GotoBack");

	struct GotoBack_Params {
		
	}; GotoBack_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomJoinPopupUI.OnClickShowBtn
inline void UPDCustomJoinPopupUI::OnClickShowBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomJoinPopupUI.OnClickShowBtn");

	struct OnClickShowBtn_Params {
		
	}; OnClickShowBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomJoinPopupUI.OnClickHideBtn
inline void UPDCustomJoinPopupUI::OnClickHideBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomJoinPopupUI.OnClickHideBtn");

	struct OnClickHideBtn_Params {
		
	}; OnClickHideBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomJoinPopupUI.OnChangeText
inline void UPDCustomJoinPopupUI::OnChangeText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomJoinPopupUI.OnChangeText");

	struct OnChangeText_Params {
		struct FText& InText;
	}; OnChangeText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDCustomMatchListItem.OnPerkUnHovered
inline void UPDCustomMatchListItem::OnPerkUnHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomMatchListItem.OnPerkUnHovered");

	struct OnPerkUnHovered_Params {
		
	}; OnPerkUnHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomMatchListItem.OnPerkHovered
inline void UPDCustomMatchListItem::OnPerkHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomMatchListItem.OnPerkHovered");

	struct OnPerkHovered_Params {
		
	}; OnPerkHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomMatchListItem.OnJoinClicked
inline void UPDCustomMatchListItem::OnJoinClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomMatchListItem.OnJoinClicked");

	struct OnJoinClicked_Params {
		
	}; OnJoinClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomMatchListItem.OnCharChangeClicked
inline void UPDCustomMatchListItem::OnCharChangeClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomMatchListItem.OnCharChangeClicked");

	struct OnCharChangeClicked_Params {
		
	}; OnCharChangeClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnWhisperUserClicked
inline void UPDCustomRoomUI::OnWhisperUserClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnWhisperUserClicked");

	struct OnWhisperUserClicked_Params {
		
	}; OnWhisperUserClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnTransferMasterClicked
inline void UPDCustomRoomUI::OnTransferMasterClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnTransferMasterClicked");

	struct OnTransferMasterClicked_Params {
		
	}; OnTransferMasterClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnStartClicked
inline void UPDCustomRoomUI::OnStartClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnStartClicked");

	struct OnStartClicked_Params {
		
	}; OnStartClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnRoundSelectedChanged
inline void UPDCustomRoomUI::OnRoundSelectedChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnRoundSelectedChanged");

	struct OnRoundSelectedChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnRoundSelectedChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnOptionClicked
inline void UPDCustomRoomUI::OnOptionClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnOptionClicked");

	struct OnOptionClicked_Params {
		
	}; OnOptionClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnMapSelectedChanged
inline void UPDCustomRoomUI::OnMapSelectedChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnMapSelectedChanged");

	struct OnMapSelectedChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnMapSelectedChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnKickUserClicked
inline void UPDCustomRoomUI::OnKickUserClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnKickUserClicked");

	struct OnKickUserClicked_Params {
		
	}; OnKickUserClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnHideClicked
inline void UPDCustomRoomUI::OnHideClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnHideClicked");

	struct OnHideClicked_Params {
		
	}; OnHideClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnCopyClicked
inline void UPDCustomRoomUI::OnCopyClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnCopyClicked");

	struct OnCopyClicked_Params {
		
	}; OnCopyClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnCommClicked
inline void UPDCustomRoomUI::OnCommClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnCommClicked");

	struct OnCommClicked_Params {
		
	}; OnCommClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnBackClicked
inline void UPDCustomRoomUI::OnBackClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnBackClicked");

	struct OnBackClicked_Params {
		
	}; OnBackClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomRoomUI.OnAddFriendClicked
inline void UPDCustomRoomUI::OnAddFriendClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomRoomUI.OnAddFriendClicked");

	struct OnAddFriendClicked_Params {
		
	}; OnAddFriendClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnZoomReleased
inline void UPDCustomWeaponUI::OnZoomReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnZoomReleased");

	struct OnZoomReleased_Params {
		
	}; OnZoomReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnZoomPressed
inline void UPDCustomWeaponUI::OnZoomPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnZoomPressed");

	struct OnZoomPressed_Params {
		
	}; OnZoomPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnSelectedSkinListItem
inline void UPDCustomWeaponUI::OnSelectedSkinListItem(struct UPDCustomWeaponListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnSelectedSkinListItem");

	struct OnSelectedSkinListItem_Params {
		struct UPDCustomWeaponListItemData InListItemData;
	}; OnSelectedSkinListItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnSelectedItemListItem
inline void UPDCustomWeaponUI::OnSelectedItemListItem(struct UPDCustomWeaponListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnSelectedItemListItem");

	struct OnSelectedItemListItem_Params {
		struct UPDCustomWeaponListItemData InListItemData;
	}; OnSelectedItemListItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnSelectedCategoryItem
inline void UPDCustomWeaponUI::OnSelectedCategoryItem(struct UPDCustomCategoryListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnSelectedCategoryItem");

	struct OnSelectedCategoryItem_Params {
		struct UPDCustomCategoryListItemData InListItemData;
	}; OnSelectedCategoryItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnSaveAndLeave
inline void UPDCustomWeaponUI::OnSaveAndLeave() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnSaveAndLeave");

	struct OnSaveAndLeave_Params {
		
	}; OnSaveAndLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnRightTurnReleased
inline void UPDCustomWeaponUI::OnRightTurnReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnRightTurnReleased");

	struct OnRightTurnReleased_Params {
		
	}; OnRightTurnReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnRightTurnPressed
inline void UPDCustomWeaponUI::OnRightTurnPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnRightTurnPressed");

	struct OnRightTurnPressed_Params {
		
	}; OnRightTurnPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnRestore
inline void UPDCustomWeaponUI::OnRestore() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnRestore");

	struct OnRestore_Params {
		
	}; OnRestore_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnMenuCoverMouseDown
inline void UPDCustomWeaponUI::OnMenuCoverMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnMenuCoverMouseDown");

	struct OnMenuCoverMouseDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMenuCoverMouseDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function ProjectD.PDCustomWeaponUI.OnLoadOut
inline void UPDCustomWeaponUI::OnLoadOut() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnLoadOut");

	struct OnLoadOut_Params {
		
	}; OnLoadOut_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnLeftTurnReleased
inline void UPDCustomWeaponUI::OnLeftTurnReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnLeftTurnReleased");

	struct OnLeftTurnReleased_Params {
		
	}; OnLeftTurnReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnLeftTurnPressed
inline void UPDCustomWeaponUI::OnLeftTurnPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnLeftTurnPressed");

	struct OnLeftTurnPressed_Params {
		
	}; OnLeftTurnPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnHasSkinCheckBoxChanged
inline void UPDCustomWeaponUI::OnHasSkinCheckBoxChanged(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnHasSkinCheckBoxChanged");

	struct OnHasSkinCheckBoxChanged_Params {
		bool InIsChecked;
	}; OnHasSkinCheckBoxChanged_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnChangeView
inline void UPDCustomWeaponUI::OnChangeView() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnChangeView");

	struct OnChangeView_Params {
		
	}; OnChangeView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnBuyItem
inline void UPDCustomWeaponUI::OnBuyItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnBuyItem");

	struct OnBuyItem_Params {
		
	}; OnBuyItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.OnAllSkinCheckBoxChanged
inline void UPDCustomWeaponUI::OnAllSkinCheckBoxChanged(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.OnAllSkinCheckBoxChanged");

	struct OnAllSkinCheckBoxChanged_Params {
		bool InIsChecked;
	}; OnAllSkinCheckBoxChanged_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDCustomWeaponUI.GotoBack
inline void UPDCustomWeaponUI::GotoBack() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDCustomWeaponUI.GotoBack");

	struct GotoBack_Params {
		
	}; GotoBack_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnGotoLobby
inline void UPDDebugLogUI::OnClickBtnGotoLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnGotoLobby");

	struct OnClickBtnGotoLobby_Params {
		
	}; OnClickBtnGotoLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFPRight
inline void UPDDebugLogUI::OnClickBtnFPRight() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFPRight");

	struct OnClickBtnFPRight_Params {
		
	}; OnClickBtnFPRight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFPLeft
inline void UPDDebugLogUI::OnClickBtnFPLeft() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFPLeft");

	struct OnClickBtnFPLeft_Params {
		
	}; OnClickBtnFPLeft_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_10
inline void UPDDebugLogUI::OnClickBtnFileName_10() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_10");

	struct OnClickBtnFileName_10_Params {
		
	}; OnClickBtnFileName_10_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_9
inline void UPDDebugLogUI::OnClickBtnFileName_9() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_9");

	struct OnClickBtnFileName_9_Params {
		
	}; OnClickBtnFileName_9_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_8
inline void UPDDebugLogUI::OnClickBtnFileName_8() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_8");

	struct OnClickBtnFileName_8_Params {
		
	}; OnClickBtnFileName_8_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_7
inline void UPDDebugLogUI::OnClickBtnFileName_7() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_7");

	struct OnClickBtnFileName_7_Params {
		
	}; OnClickBtnFileName_7_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_6
inline void UPDDebugLogUI::OnClickBtnFileName_6() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_6");

	struct OnClickBtnFileName_6_Params {
		
	}; OnClickBtnFileName_6_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_5
inline void UPDDebugLogUI::OnClickBtnFileName_5() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_5");

	struct OnClickBtnFileName_5_Params {
		
	}; OnClickBtnFileName_5_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_4
inline void UPDDebugLogUI::OnClickBtnFileName_4() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_4");

	struct OnClickBtnFileName_4_Params {
		
	}; OnClickBtnFileName_4_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_3
inline void UPDDebugLogUI::OnClickBtnFileName_3() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_3");

	struct OnClickBtnFileName_3_Params {
		
	}; OnClickBtnFileName_3_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_19
inline void UPDDebugLogUI::OnClickBtnFileName_19() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_19");

	struct OnClickBtnFileName_19_Params {
		
	}; OnClickBtnFileName_19_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_18
inline void UPDDebugLogUI::OnClickBtnFileName_18() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_18");

	struct OnClickBtnFileName_18_Params {
		
	}; OnClickBtnFileName_18_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_17
inline void UPDDebugLogUI::OnClickBtnFileName_17() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_17");

	struct OnClickBtnFileName_17_Params {
		
	}; OnClickBtnFileName_17_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_16
inline void UPDDebugLogUI::OnClickBtnFileName_16() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_16");

	struct OnClickBtnFileName_16_Params {
		
	}; OnClickBtnFileName_16_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_15
inline void UPDDebugLogUI::OnClickBtnFileName_15() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_15");

	struct OnClickBtnFileName_15_Params {
		
	}; OnClickBtnFileName_15_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_14
inline void UPDDebugLogUI::OnClickBtnFileName_14() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_14");

	struct OnClickBtnFileName_14_Params {
		
	}; OnClickBtnFileName_14_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_13
inline void UPDDebugLogUI::OnClickBtnFileName_13() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_13");

	struct OnClickBtnFileName_13_Params {
		
	}; OnClickBtnFileName_13_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_12
inline void UPDDebugLogUI::OnClickBtnFileName_12() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_12");

	struct OnClickBtnFileName_12_Params {
		
	}; OnClickBtnFileName_12_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_11
inline void UPDDebugLogUI::OnClickBtnFileName_11() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_11");

	struct OnClickBtnFileName_11_Params {
		
	}; OnClickBtnFileName_11_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_2
inline void UPDDebugLogUI::OnClickBtnFileName_2() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_2");

	struct OnClickBtnFileName_2_Params {
		
	}; OnClickBtnFileName_2_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDebugLogUI.OnClickBtnFileName_1
inline void UPDDebugLogUI::OnClickBtnFileName_1() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDebugLogUI.OnClickBtnFileName_1");

	struct OnClickBtnFileName_1_Params {
		
	}; OnClickBtnFileName_1_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnWhisperBlockChanged
inline void UPDDisplayOptionUI::OnWhisperBlockChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnWhisperBlockChanged");

	struct OnWhisperBlockChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnWhisperBlockChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnViewDistanceQualityChanged
inline void UPDDisplayOptionUI::OnViewDistanceQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnViewDistanceQualityChanged");

	struct OnViewDistanceQualityChanged_Params {
		float Value;
	}; OnViewDistanceQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnUseVSyncChanged
inline void UPDDisplayOptionUI::OnUseVSyncChanged(bool bIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnUseVSyncChanged");

	struct OnUseVSyncChanged_Params {
		bool bIsChecked;
	}; OnUseVSyncChanged_Params Params;

	Params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged
inline void UPDDisplayOptionUI::OnUseAdditionalPostProcessesChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnUseAdditionalPostProcessesChanged");

	struct OnUseAdditionalPostProcessesChanged_Params {
		bool Value;
	}; OnUseAdditionalPostProcessesChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnTextureQualityChanged
inline void UPDDisplayOptionUI::OnTextureQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnTextureQualityChanged");

	struct OnTextureQualityChanged_Params {
		float Value;
	}; OnTextureQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnShadowQualityChanged
inline void UPDDisplayOptionUI::OnShadowQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnShadowQualityChanged");

	struct OnShadowQualityChanged_Params {
		float Value;
	}; OnShadowQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnScreenPercentageChanged
inline void UPDDisplayOptionUI::OnScreenPercentageChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnScreenPercentageChanged");

	struct OnScreenPercentageChanged_Params {
		float Value;
	}; OnScreenPercentageChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnResolutionChanged
inline void UPDDisplayOptionUI::OnResolutionChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnResolutionChanged");

	struct OnResolutionChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnResolutionChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnPostProcessQualityChanged
inline void UPDDisplayOptionUI::OnPostProcessQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnPostProcessQualityChanged");

	struct OnPostProcessQualityChanged_Params {
		float Value;
	}; OnPostProcessQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnPostProcessAAQualityChanged
inline void UPDDisplayOptionUI::OnPostProcessAAQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnPostProcessAAQualityChanged");

	struct OnPostProcessAAQualityChanged_Params {
		float Value;
	}; OnPostProcessAAQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnPartyInviteBlockChanged
inline void UPDDisplayOptionUI::OnPartyInviteBlockChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnPartyInviteBlockChanged");

	struct OnPartyInviteBlockChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnPartyInviteBlockChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged
inline void UPDDisplayOptionUI::OnOutGameBrightnessVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnOutGameBrightnessVolumeChanged");

	struct OnOutGameBrightnessVolumeChanged_Params {
		float Value;
	}; OnOutGameBrightnessVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnMaxAnisotropyChanged
inline void UPDDisplayOptionUI::OnMaxAnisotropyChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnMaxAnisotropyChanged");

	struct OnMaxAnisotropyChanged_Params {
		float Value;
	}; OnMaxAnisotropyChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnLightShaftChanged
inline void UPDDisplayOptionUI::OnLightShaftChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnLightShaftChanged");

	struct OnLightShaftChanged_Params {
		bool Value;
	}; OnLightShaftChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnLanguageChanged
inline void UPDDisplayOptionUI::OnLanguageChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnLanguageChanged");

	struct OnLanguageChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnLanguageChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged
inline void UPDDisplayOptionUI::OnInGameBrightnessVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnInGameBrightnessVolumeChanged");

	struct OnInGameBrightnessVolumeChanged_Params {
		float Value;
	}; OnInGameBrightnessVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnFullScreenModeChanged
inline void UPDDisplayOptionUI::OnFullScreenModeChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnFullScreenModeChanged");

	struct OnFullScreenModeChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnFullScreenModeChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnFrameRateModeChanged
inline void UPDDisplayOptionUI::OnFrameRateModeChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnFrameRateModeChanged");

	struct OnFrameRateModeChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnFrameRateModeChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnFrameRateLimitChanged
inline void UPDDisplayOptionUI::OnFrameRateLimitChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnFrameRateLimitChanged");

	struct OnFrameRateLimitChanged_Params {
		float Value;
	}; OnFrameRateLimitChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnFoliageQualityChanged
inline void UPDDisplayOptionUI::OnFoliageQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnFoliageQualityChanged");

	struct OnFoliageQualityChanged_Params {
		float Value;
	}; OnFoliageQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnEffectsQualityChanged
inline void UPDDisplayOptionUI::OnEffectsQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnEffectsQualityChanged");

	struct OnEffectsQualityChanged_Params {
		float Value;
	}; OnEffectsQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickVideoSettingButton
inline void UPDDisplayOptionUI::OnClickVideoSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickVideoSettingButton");

	struct OnClickVideoSettingButton_Params {
		
	}; OnClickVideoSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickSystemSettingButton
inline void UPDDisplayOptionUI::OnClickSystemSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickSystemSettingButton");

	struct OnClickSystemSettingButton_Params {
		
	}; OnClickSystemSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickMidiumGraphicButton
inline void UPDDisplayOptionUI::OnClickMidiumGraphicButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickMidiumGraphicButton");

	struct OnClickMidiumGraphicButton_Params {
		
	}; OnClickMidiumGraphicButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickLowGraphicButton
inline void UPDDisplayOptionUI::OnClickLowGraphicButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickLowGraphicButton");

	struct OnClickLowGraphicButton_Params {
		
	}; OnClickLowGraphicButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickHighGraphicButton
inline void UPDDisplayOptionUI::OnClickHighGraphicButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickHighGraphicButton");

	struct OnClickHighGraphicButton_Params {
		
	}; OnClickHighGraphicButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickEpicGraphicButton
inline void UPDDisplayOptionUI::OnClickEpicGraphicButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickEpicGraphicButton");

	struct OnClickEpicGraphicButton_Params {
		
	}; OnClickEpicGraphicButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnClickCustomGraphicButton
inline void UPDDisplayOptionUI::OnClickCustomGraphicButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnClickCustomGraphicButton");

	struct OnClickCustomGraphicButton_Params {
		
	}; OnClickCustomGraphicButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnBackGroundQualityChanged
inline void UPDDisplayOptionUI::OnBackGroundQualityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnBackGroundQualityChanged");

	struct OnBackGroundQualityChanged_Params {
		float Value;
	}; OnBackGroundQualityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDisplayOptionUI.OnAddFriendBlockChanged
inline void UPDDisplayOptionUI::OnAddFriendBlockChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDisplayOptionUI.OnAddFriendBlockChanged");

	struct OnAddFriendBlockChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnAddFriendBlockChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDynamicObjectEvent.OnActorEndOverlapEvent
inline void APDDynamicObjectEvent::OnActorEndOverlapEvent(struct UActor OverlappedActor, struct UActor OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDynamicObjectEvent.OnActorEndOverlapEvent");

	struct OnActorEndOverlapEvent_Params {
		struct UActor OverlappedActor;
		struct UActor OtherActor;
	}; OnActorEndOverlapEvent_Params Params;

	Params.OverlappedActor = OverlappedActor;
	Params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDynamicObjectEvent.OnActorBeginOverlapEvent
inline void APDDynamicObjectEvent::OnActorBeginOverlapEvent(struct UActor OverlappedActor, struct UActor OtherActor) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDynamicObjectEvent.OnActorBeginOverlapEvent");

	struct OnActorBeginOverlapEvent_Params {
		struct UActor OverlappedActor;
		struct UActor OtherActor;
	}; OnActorBeginOverlapEvent_Params Params;

	Params.OverlappedActor = OverlappedActor;
	Params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap
inline void UPDDynamicObjectSwitchComponent::OnEndTriggerOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDynamicObjectSwitchComponent.OnEndTriggerOverlap");

	struct OnEndTriggerOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnEndTriggerOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap
inline void UPDDynamicObjectSwitchComponent::OnBeginTriggerOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDDynamicObjectSwitchComponent.OnBeginTriggerOverlap");

	struct OnBeginTriggerOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnBeginTriggerOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDEquipPerkList.SetSkillToolTipVisible
inline void UPDEquipPerkList::SetSkillToolTipVisible(bool bShow) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEquipPerkList.SetSkillToolTipVisible");

	struct SetSkillToolTipVisible_Params {
		bool bShow;
	}; SetSkillToolTipVisible_Params Params;

	Params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEquipPerkList.SetSkillInfo
inline void UPDEquipPerkList::SetSkillInfo(int32_t SkillIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEquipPerkList.SetSkillInfo");

	struct SetSkillInfo_Params {
		int32_t SkillIndex;
		struct FVector2D InfoAbsolutePos;
		int32_t IconWidth;
	}; SetSkillInfo_Params Params;

	Params.SkillIndex = SkillIndex;
	Params.InfoAbsolutePos = InfoAbsolutePos;
	Params.IconWidth = IconWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEquipPerkList.SetSignatureInfo
inline void UPDEquipPerkList::SetSignatureInfo(int32_t SignatureIndex, struct FVector2D InfoAbsolutePos, int32_t IconWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEquipPerkList.SetSignatureInfo");

	struct SetSignatureInfo_Params {
		int32_t SignatureIndex;
		struct FVector2D InfoAbsolutePos;
		int32_t IconWidth;
	}; SetSignatureInfo_Params Params;

	Params.SignatureIndex = SignatureIndex;
	Params.InfoAbsolutePos = InfoAbsolutePos;
	Params.IconWidth = IconWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEquipPerkList.OnListClickItem
inline void UPDEquipPerkList::OnListClickItem(struct UPDCustomPerkListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEquipPerkList.OnListClickItem");

	struct OnListClickItem_Params {
		struct UPDCustomPerkListItemData InListItemData;
	}; OnListClickItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEscMenuUI.OnClickResumeBtn
inline void UPDEscMenuUI::OnClickResumeBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEscMenuUI.OnClickResumeBtn");

	struct OnClickResumeBtn_Params {
		
	}; OnClickResumeBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEscMenuUI.OnClickQuitBtn
inline void UPDEscMenuUI::OnClickQuitBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEscMenuUI.OnClickQuitBtn");

	struct OnClickQuitBtn_Params {
		
	}; OnClickQuitBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEscMenuUI.OnClickOptionBtn
inline void UPDEscMenuUI::OnClickOptionBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEscMenuUI.OnClickOptionBtn");

	struct OnClickOptionBtn_Params {
		
	}; OnClickOptionBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDEscMenuUI.OnClickLeaveGameBtn
inline void UPDEscMenuUI::OnClickLeaveGameBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDEscMenuUI.OnClickLeaveGameBtn");

	struct OnClickLeaveGameBtn_Params {
		
	}; OnClickLeaveGameBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDExportSeedArea.OnEndSeedBBoxOverlap
inline void APDExportSeedArea::OnEndSeedBBoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDExportSeedArea.OnEndSeedBBoxOverlap");

	struct OnEndSeedBBoxOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnEndSeedBBoxOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDExportSeedArea.OnEndSeedABoxOverlap
inline void APDExportSeedArea::OnEndSeedABoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDExportSeedArea.OnEndSeedABoxOverlap");

	struct OnEndSeedABoxOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnEndSeedABoxOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDExportSeedArea.OnBeginSeedBBoxOverlap
inline void APDExportSeedArea::OnBeginSeedBBoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDExportSeedArea.OnBeginSeedBBoxOverlap");

	struct OnBeginSeedBBoxOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnBeginSeedBBoxOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDExportSeedArea.OnBeginSeedABoxOverlap
inline void APDExportSeedArea::OnBeginSeedABoxOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDExportSeedArea.OnBeginSeedABoxOverlap");

	struct OnBeginSeedABoxOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnBeginSeedABoxOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDFindPartyListItem.OnDoubleClickItem
inline struct FEventReply UPDFindPartyListItem::OnDoubleClickItem(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyListItem.OnDoubleClickItem");

	struct OnDoubleClickItem_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnDoubleClickItem_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function ProjectD.PDFindPartyListItem.OnClickRecruitButton
inline void UPDFindPartyListItem::OnClickRecruitButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyListItem.OnClickRecruitButton");

	struct OnClickRecruitButton_Params {
		
	}; OnClickRecruitButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnSelectedTeamBrick
inline void UPDFindPartyPageUI::OnSelectedTeamBrick(struct UPDBrickListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnSelectedTeamBrick");

	struct OnSelectedTeamBrick_Params {
		struct UPDBrickListItemData InListItemData;
	}; OnSelectedTeamBrick_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnSelectedPersonBrick
inline void UPDFindPartyPageUI::OnSelectedPersonBrick(struct UPDBrickListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnSelectedPersonBrick");

	struct OnSelectedPersonBrick_Params {
		struct UPDBrickListItemData InListItemData;
	}; OnSelectedPersonBrick_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnResetBrickClicked
inline void UPDFindPartyPageUI::OnResetBrickClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnResetBrickClicked");

	struct OnResetBrickClicked_Params {
		
	}; OnResetBrickClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnClickRegisterMercenaryButton
inline void UPDFindPartyPageUI::OnClickRegisterMercenaryButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnClickRegisterMercenaryButton");

	struct OnClickRegisterMercenaryButton_Params {
		
	}; OnClickRegisterMercenaryButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnClickFindPartyHomeButton
inline void UPDFindPartyPageUI::OnClickFindPartyHomeButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnClickFindPartyHomeButton");

	struct OnClickFindPartyHomeButton_Params {
		
	}; OnClickFindPartyHomeButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFindPartyPageUI.OnClickFindPartyButton
inline void UPDFindPartyPageUI::OnClickFindPartyButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFindPartyPageUI.OnClickFindPartyButton");

	struct OnClickFindPartyButton_Params {
		
	}; OnClickFindPartyButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendAddItem.OnDeclineClicked
inline void UPDFriendAddItem::OnDeclineClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendAddItem.OnDeclineClicked");

	struct OnDeclineClicked_Params {
		
	}; OnDeclineClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendAddItem.OnAcceptClicked
inline void UPDFriendAddItem::OnAcceptClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendAddItem.OnAcceptClicked");

	struct OnAcceptClicked_Params {
		
	}; OnAcceptClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendAddPage.OnSearchNickClicked
inline void UPDFriendAddPage::OnSearchNickClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendAddPage.OnSearchNickClicked");

	struct OnSearchNickClicked_Params {
		
	}; OnSearchNickClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendAddPage.OnCommitSearchNick
inline void UPDFriendAddPage::OnCommitSearchNick(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendAddPage.OnCommitSearchNick");

	struct OnCommitSearchNick_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnCommitSearchNick_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDFriendAddPage.OnChangeText
inline void UPDFriendAddPage::OnChangeText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendAddPage.OnChangeText");

	struct OnChangeText_Params {
		struct FText& InText;
	}; OnChangeText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDFriendClanItem.OnUnHoveredGradeNoneBtn
inline void UPDFriendClanItem::OnUnHoveredGradeNoneBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendClanItem.OnUnHoveredGradeNoneBtn");

	struct OnUnHoveredGradeNoneBtn_Params {
		
	}; OnUnHoveredGradeNoneBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendClanItem.OnHoveredGradeNoneBtn
inline void UPDFriendClanItem::OnHoveredGradeNoneBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendClanItem.OnHoveredGradeNoneBtn");

	struct OnHoveredGradeNoneBtn_Params {
		
	}; OnHoveredGradeNoneBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendListItem.OnUnHoveredGradeNoneBtn
inline void UPDFriendListItem::OnUnHoveredGradeNoneBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendListItem.OnUnHoveredGradeNoneBtn");

	struct OnUnHoveredGradeNoneBtn_Params {
		
	}; OnUnHoveredGradeNoneBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDFriendListItem.OnHoveredGradeNoneBtn
inline void UPDFriendListItem::OnHoveredGradeNoneBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDFriendListItem.OnHoveredGradeNoneBtn");

	struct OnHoveredGradeNoneBtn_Params {
		
	}; OnHoveredGradeNoneBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameModeSelectItemUI.OnClick
inline void UPDGameModeSelectItemUI::OnClick() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameModeSelectItemUI.OnClick");

	struct OnClick_Params {
		
	}; OnClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameModeSelectUI.GotoLobby
inline void UPDGameModeSelectUI::GotoLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameModeSelectUI.GotoLobby");

	struct GotoLobby_Params {
		
	}; GotoLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameModeSelectUI.GameModeSelect
inline void UPDGameModeSelectUI::GameModeSelect(int32_t SelectModeID) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameModeSelectUI.GameModeSelect");

	struct GameModeSelect_Params {
		int32_t SelectModeID;
	}; GameModeSelect_Params Params;

	Params.SelectModeID = SelectModeID;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.Onx80ZoomScopeChanged
inline void UPDGameplayOptionUI::Onx80ZoomScopeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.Onx80ZoomScopeChanged");

	struct Onx80ZoomScopeChanged_Params {
		float Value;
	}; Onx80ZoomScopeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.Onx40ZoomScopeChanged
inline void UPDGameplayOptionUI::Onx40ZoomScopeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.Onx40ZoomScopeChanged");

	struct Onx40ZoomScopeChanged_Params {
		float Value;
	}; Onx40ZoomScopeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.Onx20ZoomScopeChanged
inline void UPDGameplayOptionUI::Onx20ZoomScopeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.Onx20ZoomScopeChanged");

	struct Onx20ZoomScopeChanged_Params {
		float Value;
	}; Onx20ZoomScopeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.Onx160ZoomScopeChanged
inline void UPDGameplayOptionUI::Onx160ZoomScopeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.Onx160ZoomScopeChanged");

	struct Onx160ZoomScopeChanged_Params {
		float Value;
	}; Onx160ZoomScopeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnSubtitleUseChanged
inline void UPDGameplayOptionUI::OnSubtitleUseChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnSubtitleUseChanged");

	struct OnSubtitleUseChanged_Params {
		bool Value;
	}; OnSubtitleUseChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnSubtitlePlayerNumberUseChanged
inline void UPDGameplayOptionUI::OnSubtitlePlayerNumberUseChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnSubtitlePlayerNumberUseChanged");

	struct OnSubtitlePlayerNumberUseChanged_Params {
		bool Value;
	}; OnSubtitlePlayerNumberUseChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnSubtitleBGAlphaChanged
inline void UPDGameplayOptionUI::OnSubtitleBGAlphaChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnSubtitleBGAlphaChanged");

	struct OnSubtitleBGAlphaChanged_Params {
		float Value;
	}; OnSubtitleBGAlphaChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnPingAutoHipFire
inline void UPDGameplayOptionUI::OnPingAutoHipFire() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnPingAutoHipFire");

	struct OnPingAutoHipFire_Params {
		
	}; OnPingAutoHipFire_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnPingAutoEnabled
inline void UPDGameplayOptionUI::OnPingAutoEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnPingAutoEnabled");

	struct OnPingAutoEnabled_Params {
		
	}; OnPingAutoEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnPingAutoDisabled
inline void UPDGameplayOptionUI::OnPingAutoDisabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnPingAutoDisabled");

	struct OnPingAutoDisabled_Params {
		
	}; OnPingAutoDisabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnPingAutoAll
inline void UPDGameplayOptionUI::OnPingAutoAll() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnPingAutoAll");

	struct OnPingAutoAll_Params {
		
	}; OnPingAutoAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnPingAutoAim
inline void UPDGameplayOptionUI::OnPingAutoAim() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnPingAutoAim");

	struct OnPingAutoAim_Params {
		
	}; OnPingAutoAim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnParkourVisibilityChanged
inline void UPDGameplayOptionUI::OnParkourVisibilityChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnParkourVisibilityChanged");

	struct OnParkourVisibilityChanged_Params {
		bool Value;
	}; OnParkourVisibilityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnNormalSensitivityChanged
inline void UPDGameplayOptionUI::OnNormalSensitivityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnNormalSensitivityChanged");

	struct OnNormalSensitivityChanged_Params {
		float Value;
	}; OnNormalSensitivityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnMouseSmoothingChanged
inline void UPDGameplayOptionUI::OnMouseSmoothingChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnMouseSmoothingChanged");

	struct OnMouseSmoothingChanged_Params {
		bool Value;
	}; OnMouseSmoothingChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityYChanged
inline void UPDGameplayOptionUI::OnMouseSensitivityYChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityYChanged");

	struct OnMouseSensitivityYChanged_Params {
		float Value;
	}; OnMouseSensitivityYChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityXChanged
inline void UPDGameplayOptionUI::OnMouseSensitivityXChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnMouseSensitivityXChanged");

	struct OnMouseSensitivityXChanged_Params {
		float Value;
	}; OnMouseSensitivityXChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnMinimapRotationEnabled
inline void UPDGameplayOptionUI::OnMinimapRotationEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnMinimapRotationEnabled");

	struct OnMinimapRotationEnabled_Params {
		
	}; OnMinimapRotationEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnMinimapRotationDisabled
inline void UPDGameplayOptionUI::OnMinimapRotationDisabled() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnMinimapRotationDisabled");

	struct OnMinimapRotationDisabled_Params {
		
	}; OnMinimapRotationDisabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnIronsightSensitivityChanged
inline void UPDGameplayOptionUI::OnIronsightSensitivityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnIronsightSensitivityChanged");

	struct OnIronsightSensitivityChanged_Params {
		float Value;
	}; OnIronsightSensitivityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnIngameMapBGAlphaChanged
inline void UPDGameplayOptionUI::OnIngameMapBGAlphaChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnIngameMapBGAlphaChanged");

	struct OnIngameMapBGAlphaChanged_Params {
		float Value;
	}; OnIngameMapBGAlphaChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnHUDScaleChanged
inline void UPDGameplayOptionUI::OnHUDScaleChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnHUDScaleChanged");

	struct OnHUDScaleChanged_Params {
		float Value;
	}; OnHUDScaleChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChangedBoth
inline void UPDGameplayOptionUI::OnHitIndicatorChangedBoth() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChangedBoth");

	struct OnHitIndicatorChangedBoth_Params {
		
	}; OnHitIndicatorChangedBoth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged3D
inline void UPDGameplayOptionUI::OnHitIndicatorChanged3D() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged3D");

	struct OnHitIndicatorChanged3D_Params {
		
	}; OnHitIndicatorChanged3D_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged2D
inline void UPDGameplayOptionUI::OnHitIndicatorChanged2D() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnHitIndicatorChanged2D");

	struct OnHitIndicatorChanged2D_Params {
		
	}; OnHitIndicatorChanged2D_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnDamageSumView
inline void UPDGameplayOptionUI::OnDamageSumView() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnDamageSumView");

	struct OnDamageSumView_Params {
		
	}; OnDamageSumView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnDamageIndividualView
inline void UPDGameplayOptionUI::OnDamageIndividualView() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnDamageIndividualView");

	struct OnDamageIndividualView_Params {
		
	}; OnDamageIndividualView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnCrossHairColorChanged
inline void UPDGameplayOptionUI::OnCrossHairColorChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnCrossHairColorChanged");

	struct OnCrossHairColorChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnCrossHairColorChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnClickUISettingButton
inline void UPDGameplayOptionUI::OnClickUISettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnClickUISettingButton");

	struct OnClickUISettingButton_Params {
		
	}; OnClickUISettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnClickMouseSettingButton
inline void UPDGameplayOptionUI::OnClickMouseSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnClickMouseSettingButton");

	struct OnClickMouseSettingButton_Params {
		
	}; OnClickMouseSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameplayOptionUI.OnAimingSensitivityChanged
inline void UPDGameplayOptionUI::OnAimingSensitivityChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameplayOptionUI.OnAimingSensitivityChanged");

	struct OnAimingSensitivityChanged_Params {
		float Value;
	}; OnAimingSensitivityChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnMenuItemClicked
inline void UPDGameResultUI::OnMenuItemClicked(int32_t InMenuIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnMenuItemClicked");

	struct OnMenuItemClicked_Params {
		int32_t InMenuIndex;
	}; OnMenuItemClicked_Params Params;

	Params.InMenuIndex = InMenuIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnClickTitle
inline void UPDGameResultUI::OnClickTitle() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnClickTitle");

	struct OnClickTitle_Params {
		
	}; OnClickTitle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnClickScoreBoard
inline void UPDGameResultUI::OnClickScoreBoard() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnClickScoreBoard");

	struct OnClickScoreBoard_Params {
		
	}; OnClickScoreBoard_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnClickProgress
inline void UPDGameResultUI::OnClickProgress() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnClickProgress");

	struct OnClickProgress_Params {
		
	}; OnClickProgress_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnClickEsc
inline void UPDGameResultUI::OnClickEsc() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnClickEsc");

	struct OnClickEsc_Params {
		
	}; OnClickEsc_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDGameResultUI.OnChangeNextStep
inline void UPDGameResultUI::OnChangeNextStep() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDGameResultUI.OnChangeNextStep");

	struct OnChangeNextStep_Params {
		
	}; OnChangeNextStep_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDImage.SetPixelSnapping
inline void UPDImage::SetPixelSnapping(bool bInPixelSnapping) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDImage.SetPixelSnapping");

	struct SetPixelSnapping_Params {
		bool bInPixelSnapping;
	}; SetPixelSnapping_Params Params;

	Params.bInPixelSnapping = bInPixelSnapping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameLaptonPresetTab.OnSelectPreset
inline void UPDIngameLaptonPresetTab::OnSelectPreset() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameLaptonPresetTab.OnSelectPreset");

	struct OnSelectPreset_Params {
		
	}; OnSelectPreset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameMapUI.OnToggleBoardCheckBoxChanged
inline void UPDIngameMapUI::OnToggleBoardCheckBoxChanged(bool Val) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameMapUI.OnToggleBoardCheckBoxChanged");

	struct OnToggleBoardCheckBoxChanged_Params {
		bool Val;
	}; OnToggleBoardCheckBoxChanged_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameMapUI.OnClickDeleteAllLines
inline void UPDIngameMapUI::OnClickDeleteAllLines() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameMapUI.OnClickDeleteAllLines");

	struct OnClickDeleteAllLines_Params {
		
	}; OnClickDeleteAllLines_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameMyCharListItem.OnSelectChar
inline void UPDIngameMyCharListItem::OnSelectChar() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameMyCharListItem.OnSelectChar");

	struct OnSelectChar_Params {
		
	}; OnSelectChar_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameStatusBoardUI.OnClickReplayClose
inline void UPDIngameStatusBoardUI::OnClickReplayClose() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameStatusBoardUI.OnClickReplayClose");

	struct OnClickReplayClose_Params {
		
	}; OnClickReplayClose_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameStatusBoardUI.OnClickReplay
inline void UPDIngameStatusBoardUI::OnClickReplay() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameStatusBoardUI.OnClickReplay");

	struct OnClickReplay_Params {
		
	}; OnClickReplay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameStatusBoardUI.OnClickCloseBtn
inline void UPDIngameStatusBoardUI::OnClickCloseBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameStatusBoardUI.OnClickCloseBtn");

	struct OnClickCloseBtn_Params {
		
	}; OnClickCloseBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameUI.OnTimerRingCommand
inline void UPDIngameUI::OnTimerRingCommand() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameUI.OnTimerRingCommand");

	struct OnTimerRingCommand_Params {
		
	}; OnTimerRingCommand_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameVideoUI.OnMovieOpened
inline void UPDIngameVideoUI::OnMovieOpened() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameVideoUI.OnMovieOpened");

	struct OnMovieOpened_Params {
		
	}; OnMovieOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIngameVideoUI.OnInitMediaPlayer
inline void UPDIngameVideoUI::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIngameVideoUI.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInputKeySelector.OnInputSelectingKeyChanged
inline void UPDInputKeySelector::OnInputSelectingKeyChanged() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInputKeySelector.OnInputSelectingKeyChanged");

	struct OnInputSelectingKeyChanged_Params {
		
	}; OnInputSelectingKeyChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInputKeySelector.OnInputKeySelected
inline void UPDInputKeySelector::OnInputKeySelected(struct FInputChord InInputChord) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInputKeySelector.OnInputKeySelected");

	struct OnInputKeySelected_Params {
		struct FInputChord InInputChord;
	}; OnInputKeySelected_Params Params;

	Params.InInputChord = InInputChord;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIntroUI.OnMovieOpened
inline void UPDIntroUI::OnMovieOpened() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIntroUI.OnMovieOpened");

	struct OnMovieOpened_Params {
		
	}; OnMovieOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIntroUI.OnMovieClosed
inline void UPDIntroUI::OnMovieClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIntroUI.OnMovieClosed");

	struct OnMovieClosed_Params {
		
	}; OnMovieClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDIntroUI.OnInitMediaPlayer
inline void UPDIntroUI::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDIntroUI.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInvenDivide.OnDividTextInput
inline void UPDInvenDivide::OnDividTextInput(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenDivide.OnDividTextInput");

	struct OnDividTextInput_Params {
		struct FText& InText;
	}; OnDividTextInput_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDInvenDivide.OnDividTextChanged
inline void UPDInvenDivide::OnDividTextChanged(struct FText& InText, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenDivide.OnDividTextChanged");

	struct OnDividTextChanged_Params {
		struct FText& InText;
		enum class ETextCommit CommitMethod;
	}; OnDividTextChanged_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDInvenDivide.OnClickSplitBtn
inline void UPDInvenDivide::OnClickSplitBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenDivide.OnClickSplitBtn");

	struct OnClickSplitBtn_Params {
		
	}; OnClickSplitBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInvenDivide.OnClickCancelBtn
inline void UPDInvenDivide::OnClickCancelBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenDivide.OnClickCancelBtn");

	struct OnClickCancelBtn_Params {
		
	}; OnClickCancelBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInvenDivide.ChangeVolume
inline void UPDInvenDivide::ChangeVolume(float InVolume) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenDivide.ChangeVolume");

	struct ChangeVolume_Params {
		float InVolume;
	}; ChangeVolume_Params Params;

	Params.InVolume = InVolume;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDInvenListItem.RefundItem
inline void UPDInvenListItem::RefundItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDInvenListItem.RefundItem");

	struct RefundItem_Params {
		
	}; RefundItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDItemModel.OnBeginOverlapAssistant
inline void APDItemModel::OnBeginOverlapAssistant(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDItemModel.OnBeginOverlapAssistant");

	struct OnBeginOverlapAssistant_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnBeginOverlapAssistant_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDKillLogModule.AdjustCauseRatio
inline void UPDKillLogModule::AdjustCauseRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDKillLogModule.AdjustCauseRatio");

	struct AdjustCauseRatio_Params {
		
	}; AdjustCauseRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.PlayOpenSurvey
inline void UPDLobbyUI::PlayOpenSurvey() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.PlayOpenSurvey");

	struct PlayOpenSurvey_Params {
		
	}; PlayOpenSurvey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnUnHoveredStartPlayBtn
inline void UPDLobbyUI::OnUnHoveredStartPlayBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnUnHoveredStartPlayBtn");

	struct OnUnHoveredStartPlayBtn_Params {
		
	}; OnUnHoveredStartPlayBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnPlayerStatsClosed
inline void UPDLobbyUI::OnPlayerStatsClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnPlayerStatsClosed");

	struct OnPlayerStatsClosed_Params {
		
	}; OnPlayerStatsClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnHoveredStartPlayBtn
inline void UPDLobbyUI::OnHoveredStartPlayBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnHoveredStartPlayBtn");

	struct OnHoveredStartPlayBtn_Params {
		
	}; OnHoveredStartPlayBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickVoiceBtn
inline void UPDLobbyUI::OnClickVoiceBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickVoiceBtn");

	struct OnClickVoiceBtn_Params {
		
	}; OnClickVoiceBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickTrainingBtn
inline void UPDLobbyUI::OnClickTrainingBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickTrainingBtn");

	struct OnClickTrainingBtn_Params {
		
	}; OnClickTrainingBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickStartPlayBtn
inline void UPDLobbyUI::OnClickStartPlayBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickStartPlayBtn");

	struct OnClickStartPlayBtn_Params {
		
	}; OnClickStartPlayBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickPlayerStats
inline void UPDLobbyUI::OnClickPlayerStats() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickPlayerStats");

	struct OnClickPlayerStats_Params {
		
	}; OnClickPlayerStats_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickMachingCancel
inline void UPDLobbyUI::OnClickMachingCancel() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickMachingCancel");

	struct OnClickMachingCancel_Params {
		
	}; OnClickMachingCancel_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickForcePlay
inline void UPDLobbyUI::OnClickForcePlay() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickForcePlay");

	struct OnClickForcePlay_Params {
		
	}; OnClickForcePlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLobbyUI.OnClickDebugLogBtn
inline void UPDLobbyUI::OnClickDebugLogBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLobbyUI.OnClickDebugLogBtn");

	struct OnClickDebugLogBtn_Params {
		
	}; OnClickDebugLogBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLoginUI.OnSplashMovieClosed
inline void UPDLoginUI::OnSplashMovieClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLoginUI.OnSplashMovieClosed");

	struct OnSplashMovieClosed_Params {
		
	}; OnSplashMovieClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLoginUI.OnInitMediaPlayer
inline void UPDLoginUI::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLoginUI.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDLoginUI.OnClickGameLoginBtn
inline void UPDLoginUI::OnClickGameLoginBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDLoginUI.OnClickGameLoginBtn");

	struct OnClickGameLoginBtn_Params {
		
	}; OnClickGameLoginBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailItemListSlotUI.OnUnhoveredItemSlot
inline void UPDMailItemListSlotUI::OnUnhoveredItemSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailItemListSlotUI.OnUnhoveredItemSlot");

	struct OnUnhoveredItemSlot_Params {
		
	}; OnUnhoveredItemSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailItemListSlotUI.OnHoveredItemSlot
inline void UPDMailItemListSlotUI::OnHoveredItemSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailItemListSlotUI.OnHoveredItemSlot");

	struct OnHoveredItemSlot_Params {
		
	}; OnHoveredItemSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailNotificationSlotUI.OnClickNotificationSlot
inline void UPDMailNotificationSlotUI::OnClickNotificationSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailNotificationSlotUI.OnClickNotificationSlot");

	struct OnClickNotificationSlot_Params {
		
	}; OnClickNotificationSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailPopupUI.OnSelectedMailListItem
inline void UPDMailPopupUI::OnSelectedMailListItem(struct UPDMailBoxListItemData InListDataData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailPopupUI.OnSelectedMailListItem");

	struct OnSelectedMailListItem_Params {
		struct UPDMailBoxListItemData InListDataData;
	}; OnSelectedMailListItem_Params Params;

	Params.InListDataData = InListDataData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailPopupUI.OnScrolledMailListItem
inline void UPDMailPopupUI::OnScrolledMailListItem(float ItemOffset, float DistanceRemaining) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailPopupUI.OnScrolledMailListItem");

	struct OnScrolledMailListItem_Params {
		float ItemOffset;
		float DistanceRemaining;
	}; OnScrolledMailListItem_Params Params;

	Params.ItemOffset = ItemOffset;
	Params.DistanceRemaining = DistanceRemaining;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailPopupUI.OnClickMailBoxCloseBtn
inline void UPDMailPopupUI::OnClickMailBoxCloseBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailPopupUI.OnClickMailBoxCloseBtn");

	struct OnClickMailBoxCloseBtn_Params {
		
	}; OnClickMailBoxCloseBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailUI.OnClickReceiveItemBtn
inline void UPDMailUI::OnClickReceiveItemBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailUI.OnClickReceiveItemBtn");

	struct OnClickReceiveItemBtn_Params {
		
	}; OnClickReceiveItemBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailUI.OnClickMailCloseBtn
inline void UPDMailUI::OnClickMailCloseBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailUI.OnClickMailCloseBtn");

	struct OnClickMailCloseBtn_Params {
		
	}; OnClickMailCloseBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailUI.OnClickDeleteMailBtn
inline void UPDMailUI::OnClickDeleteMailBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailUI.OnClickDeleteMailBtn");

	struct OnClickDeleteMailBtn_Params {
		
	}; OnClickDeleteMailBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMailUI.DeleteMail
inline void UPDMailUI::DeleteMail(int64_t MailSN) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMailUI.DeleteMail");

	struct DeleteMail_Params {
		int64_t MailSN;
	}; DeleteMail_Params Params;

	Params.MailSN = MailSN;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayerCharacter.ToggleRagdoll
inline void APDPlayerCharacter::ToggleRagdoll() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerCharacter.ToggleRagdoll");

	struct ToggleRagdoll_Params {
		
	}; ToggleRagdoll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayerCharacter.PlayHitAnim
inline void APDPlayerCharacter::PlayHitAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerCharacter.PlayHitAnim");

	struct PlayHitAnim_Params {
		
	}; PlayHitAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayerCharacter.GetCurrentSpecificWeaponAnimset
inline enum class EPDSpecificWeaponAnimset APDPlayerCharacter::GetCurrentSpecificWeaponAnimset() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerCharacter.GetCurrentSpecificWeaponAnimset");

	struct GetCurrentSpecificWeaponAnimset_Params {
		
		enum class EPDSpecificWeaponAnimset ReturnValue;

	}; GetCurrentSpecificWeaponAnimset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ProjectD.PDPlayerCharacter.GetCurrentAnimset
inline enum class EPDAnimset APDPlayerCharacter::GetCurrentAnimset() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerCharacter.GetCurrentAnimset");

	struct GetCurrentAnimset_Params {
		
		enum class EPDAnimset ReturnValue;

	}; GetCurrentAnimset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereEndOverlap
inline void APDMainPlayerCharacter::OnUpsideSphereEndOverlap(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereEndOverlap");

	struct OnUpsideSphereEndOverlap_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnUpsideSphereEndOverlap_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereBeginOverlap
inline void APDMainPlayerCharacter::OnUpsideSphereBeginOverlap(struct UPrimitiveComponent OverlappedComponent, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMainPlayerCharacter.OnUpsideSphereBeginOverlap");

	struct OnUpsideSphereBeginOverlap_Params {
		struct UPrimitiveComponent OverlappedComponent;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnUpsideSphereBeginOverlap_Params Params;

	Params.OverlappedComponent = OverlappedComponent;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDMainPlayerCharacter.HandMeshLoadingComplete
inline void APDMainPlayerCharacter::HandMeshLoadingComplete(struct TArray<struct TSoftObjectPtr<Object>>& Data, int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMainPlayerCharacter.HandMeshLoadingComplete");

	struct HandMeshLoadingComplete_Params {
		struct TArray<struct TSoftObjectPtr<Object>>& Data;
		int32_t Index;
	}; HandMeshLoadingComplete_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Data = Params.Data;

}

// Function ProjectD.PDMatchListItem.OnClickMatch
inline void UPDMatchListItem::OnClickMatch() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchListItem.OnClickMatch");

	struct OnClickMatch_Params {
		
	}; OnClickMatch_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnUnHoveredMatchBtn
inline void UPDMatchModeList::OnUnHoveredMatchBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnUnHoveredMatchBtn");

	struct OnUnHoveredMatchBtn_Params {
		
	}; OnUnHoveredMatchBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnHoveredMatchBtn
inline void UPDMatchModeList::OnHoveredMatchBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnHoveredMatchBtn");

	struct OnHoveredMatchBtn_Params {
		
	}; OnHoveredMatchBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickTrainningWindfarm
inline void UPDMatchModeList::OnClickTrainningWindfarm() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickTrainningWindfarm");

	struct OnClickTrainningWindfarm_Params {
		
	}; OnClickTrainningWindfarm_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickTrainningShipyard
inline void UPDMatchModeList::OnClickTrainningShipyard() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickTrainningShipyard");

	struct OnClickTrainningShipyard_Params {
		
	}; OnClickTrainningShipyard_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickTrainningDerail
inline void UPDMatchModeList::OnClickTrainningDerail() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickTrainningDerail");

	struct OnClickTrainningDerail_Params {
		
	}; OnClickTrainningDerail_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickTrainningBridge
inline void UPDMatchModeList::OnClickTrainningBridge() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickTrainningBridge");

	struct OnClickTrainningBridge_Params {
		
	}; OnClickTrainningBridge_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickMatchFFABtn
inline void UPDMatchModeList::OnClickMatchFFABtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickMatchFFABtn");

	struct OnClickMatchFFABtn_Params {
		
	}; OnClickMatchFFABtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickMatchBtn
inline void UPDMatchModeList::OnClickMatchBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickMatchBtn");

	struct OnClickMatchBtn_Params {
		
	}; OnClickMatchBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickCustomMatchJoin
inline void UPDMatchModeList::OnClickCustomMatchJoin() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickCustomMatchJoin");

	struct OnClickCustomMatchJoin_Params {
		
	}; OnClickCustomMatchJoin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDMatchModeList.OnClickCustomMatchCreate
inline void UPDMatchModeList::OnClickCustomMatchCreate() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDMatchModeList.OnClickCustomMatchCreate");

	struct OnClickCustomMatchCreate_Params {
		
	}; OnClickCustomMatchCreate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged
inline void UPDStatusBoardPlayerInfoBase::OnTogglePingBlockChanged(bool Val) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfoBase.OnTogglePingBlockChanged");

	struct OnTogglePingBlockChanged_Params {
		bool Val;
	}; OnTogglePingBlockChanged_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged
inline void UPDStatusBoardPlayerInfoBase::OnToggleChatBlockChanged(bool Val) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfoBase.OnToggleChatBlockChanged");

	struct OnToggleChatBlockChanged_Params {
		bool Val;
	}; OnToggleChatBlockChanged_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report
inline void UPDStatusBoardPlayerInfoBase::OnClicked_BTN_Report() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfoBase.OnClicked_BTN_Report");

	struct OnClicked_BTN_Report_Params {
		
	}; OnClicked_BTN_Report_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDNameTagAllyUI.AdjustStateImageRatio
inline void UPDNameTagAllyUI::AdjustStateImageRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDNameTagAllyUI.AdjustStateImageRatio");

	struct AdjustStateImageRatio_Params {
		
	}; AdjustStateImageRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDNeutralObject.OnAssetsLoaded
inline void APDNeutralObject::OnAssetsLoaded(struct TArray<struct TSoftObjectPtr<Object>>& InAssets) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDNeutralObject.OnAssetsLoaded");

	struct OnAssetsLoaded_Params {
		struct TArray<struct TSoftObjectPtr<Object>>& InAssets;
	}; OnAssetsLoaded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InAssets = Params.InAssets;

}

// Function ProjectD.PDNickNameCreateUI.OnClickOKBtn
inline void UPDNickNameCreateUI::OnClickOKBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDNickNameCreateUI.OnClickOKBtn");

	struct OnClickOKBtn_Params {
		
	}; OnClickOKBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDNickNameCreateUI.OnChangeText
inline void UPDNickNameCreateUI::OnChangeText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDNickNameCreateUI.OnChangeText");

	struct OnChangeText_Params {
		struct FText& InText;
	}; OnChangeText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDOptionContent.OnInputKeySelected
inline void UPDOptionContent::OnInputKeySelected(struct FInputChord InInputChord) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionContent.OnInputKeySelected");

	struct OnInputKeySelected_Params {
		struct FInputChord InInputChord;
	}; OnInputKeySelected_Params Params;

	Params.InInputChord = InInputChord;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickTabDefaultButton
inline void UPDOptionPopupUI::OnClickTabDefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickTabDefaultButton");

	struct OnClickTabDefaultButton_Params {
		
	}; OnClickTabDefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickSoundButton
inline void UPDOptionPopupUI::OnClickSoundButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickSoundButton");

	struct OnClickSoundButton_Params {
		
	}; OnClickSoundButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickGameplayButton
inline void UPDOptionPopupUI::OnClickGameplayButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickGameplayButton");

	struct OnClickGameplayButton_Params {
		
	}; OnClickGameplayButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickDisplayButton
inline void UPDOptionPopupUI::OnClickDisplayButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickDisplayButton");

	struct OnClickDisplayButton_Params {
		
	}; OnClickDisplayButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickDefaultButton
inline void UPDOptionPopupUI::OnClickDefaultButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickDefaultButton");

	struct OnClickDefaultButton_Params {
		
	}; OnClickDefaultButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickControlsButton
inline void UPDOptionPopupUI::OnClickControlsButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickControlsButton");

	struct OnClickControlsButton_Params {
		
	}; OnClickControlsButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickConfirmButton
inline void UPDOptionPopupUI::OnClickConfirmButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickConfirmButton");

	struct OnClickConfirmButton_Params {
		
	}; OnClickConfirmButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOptionPopupUI.OnClickCancelButton
inline void UPDOptionPopupUI::OnClickCancelButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOptionPopupUI.OnClickCancelButton");

	struct OnClickCancelButton_Params {
		
	}; OnClickCancelButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.SetNewMailLabelVisible
inline void UPDOutGameTopMenu::SetNewMailLabelVisible(bool bShow) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.SetNewMailLabelVisible");

	struct SetNewMailLabelVisible_Params {
		bool bShow;
	}; SetNewMailLabelVisible_Params Params;

	Params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.SendPartyInviteInfo
inline void UPDOutGameTopMenu::SendPartyInviteInfo(bool bAccept, struct FString PartyID, int64_t USN, struct FString Nickname) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.SendPartyInviteInfo");

	struct SendPartyInviteInfo_Params {
		bool bAccept;
		struct FString PartyID;
		int64_t USN;
		struct FString Nickname;
	}; SendPartyInviteInfo_Params Params;

	Params.bAccept = bAccept;
	Params.PartyID = PartyID;
	Params.USN = USN;
	Params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.SendCustomRoomInviteInfo
inline void UPDOutGameTopMenu::SendCustomRoomInviteInfo(bool bAccept) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.SendCustomRoomInviteInfo");

	struct SendCustomRoomInviteInfo_Params {
		bool bAccept;
	}; SendCustomRoomInviteInfo_Params Params;

	Params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.QuitGame
inline void UPDOutGameTopMenu::QuitGame() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.QuitGame");

	struct QuitGame_Params {
		
	}; QuitGame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnUnhoverRecordBtn
inline void UPDOutGameTopMenu::OnUnhoverRecordBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnUnhoverRecordBtn");

	struct OnUnhoverRecordBtn_Params {
		
	}; OnUnhoverRecordBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnUnhoverClanBtn
inline void UPDOutGameTopMenu::OnUnhoverClanBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnUnhoverClanBtn");

	struct OnUnhoverClanBtn_Params {
		
	}; OnUnhoverClanBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentReportBtn
inline void UPDOutGameTopMenu::OnUnhoverAgentReportBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentReportBtn");

	struct OnUnhoverAgentReportBtn_Params {
		
	}; OnUnhoverAgentReportBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentBtn
inline void UPDOutGameTopMenu::OnUnhoverAgentBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnUnhoverAgentBtn");

	struct OnUnhoverAgentBtn_Params {
		
	}; OnUnhoverAgentBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnHoverRecordBtn
inline void UPDOutGameTopMenu::OnHoverRecordBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnHoverRecordBtn");

	struct OnHoverRecordBtn_Params {
		
	}; OnHoverRecordBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnHoverClanBtn
inline void UPDOutGameTopMenu::OnHoverClanBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnHoverClanBtn");

	struct OnHoverClanBtn_Params {
		
	}; OnHoverClanBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnHoverAgentReportBtn
inline void UPDOutGameTopMenu::OnHoverAgentReportBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnHoverAgentReportBtn");

	struct OnHoverAgentReportBtn_Params {
		
	}; OnHoverAgentReportBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnHoverAgentBtn
inline void UPDOutGameTopMenu::OnHoverAgentBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnHoverAgentBtn");

	struct OnHoverAgentBtn_Params {
		
	}; OnHoverAgentBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnGuidePageClosed
inline void UPDOutGameTopMenu::OnGuidePageClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnGuidePageClosed");

	struct OnGuidePageClosed_Params {
		
	}; OnGuidePageClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickSettingBtn
inline void UPDOutGameTopMenu::OnClickSettingBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickSettingBtn");

	struct OnClickSettingBtn_Params {
		
	}; OnClickSettingBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickRecordBtn
inline void UPDOutGameTopMenu::OnClickRecordBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickRecordBtn");

	struct OnClickRecordBtn_Params {
		
	}; OnClickRecordBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickOptionBtn
inline void UPDOutGameTopMenu::OnClickOptionBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickOptionBtn");

	struct OnClickOptionBtn_Params {
		
	}; OnClickOptionBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickMailBoxBtn
inline void UPDOutGameTopMenu::OnClickMailBoxBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickMailBoxBtn");

	struct OnClickMailBoxBtn_Params {
		
	}; OnClickMailBoxBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickLeavePartyBtn
inline void UPDOutGameTopMenu::OnClickLeavePartyBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickLeavePartyBtn");

	struct OnClickLeavePartyBtn_Params {
		
	}; OnClickLeavePartyBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickGoToFindPartyPageButton
inline void UPDOutGameTopMenu::OnClickGoToFindPartyPageButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickGoToFindPartyPageButton");

	struct OnClickGoToFindPartyPageButton_Params {
		
	}; OnClickGoToFindPartyPageButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickExitBtn
inline void UPDOutGameTopMenu::OnClickExitBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickExitBtn");

	struct OnClickExitBtn_Params {
		
	}; OnClickExitBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickCommunityBtn
inline void UPDOutGameTopMenu::OnClickCommunityBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickCommunityBtn");

	struct OnClickCommunityBtn_Params {
		
	}; OnClickCommunityBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickClanBtn
inline void UPDOutGameTopMenu::OnClickClanBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickClanBtn");

	struct OnClickClanBtn_Params {
		
	}; OnClickClanBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickBattlePassBtn
inline void UPDOutGameTopMenu::OnClickBattlePassBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickBattlePassBtn");

	struct OnClickBattlePassBtn_Params {
		
	}; OnClickBattlePassBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickAgentReportBtn
inline void UPDOutGameTopMenu::OnClickAgentReportBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickAgentReportBtn");

	struct OnClickAgentReportBtn_Params {
		
	}; OnClickAgentReportBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.OnClickAgentBtn
inline void UPDOutGameTopMenu::OnClickAgentBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.OnClickAgentBtn");

	struct OnClickAgentBtn_Params {
		
	}; OnClickAgentBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDOutGameTopMenu.ExitParty
inline void UPDOutGameTopMenu::ExitParty() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDOutGameTopMenu.ExitParty");

	struct ExitParty_Params {
		
	}; ExitParty_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPartySlotListItemUI.OnClickSlot
inline void UPDPartySlotListItemUI::OnClickSlot() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPartySlotListItemUI.OnClickSlot");

	struct OnClickSlot_Params {
		
	}; OnClickSlot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPartySlotListItemUI.KickPartyMember
inline void UPDPartySlotListItemUI::KickPartyMember(int64_t InPartyUSN) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPartySlotListItemUI.KickPartyMember");

	struct KickPartyMember_Params {
		int64_t InPartyUSN;
	}; KickPartyMember_Params Params;

	Params.InPartyUSN = InPartyUSN;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayerSettingUI.OnSelectLaptonPreset
inline void UPDPlayerSettingUI::OnSelectLaptonPreset(int32_t SelectIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerSettingUI.OnSelectLaptonPreset");

	struct OnSelectLaptonPreset_Params {
		int32_t SelectIndex;
	}; OnSelectLaptonPreset_Params Params;

	Params.SelectIndex = SelectIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayerSettingUI.OnSelectChar
inline void UPDPlayerSettingUI::OnSelectChar(int32_t SelectAgentIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayerSettingUI.OnSelectChar");

	struct OnSelectChar_Params {
		int32_t SelectAgentIndex;
	}; OnSelectChar_Params Params;

	Params.SelectAgentIndex = SelectAgentIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogPlayerInfo.OnChangedCheckBox
inline void UPDPlayLogPlayerInfo::OnChangedCheckBox(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogPlayerInfo.OnChangedCheckBox");

	struct OnChangedCheckBox_Params {
		bool InValue;
	}; OnChangedCheckBox_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.PlayLogStop
inline void UPDPlayLogUI::PlayLogStop() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.PlayLogStop");

	struct PlayLogStop_Params {
		
	}; PlayLogStop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.PlayLogStart
inline void UPDPlayLogUI::PlayLogStart() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.PlayLogStart");

	struct PlayLogStart_Params {
		
	}; PlayLogStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.PlayLogPause
inline void UPDPlayLogUI::PlayLogPause() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.PlayLogPause");

	struct PlayLogPause_Params {
		
	}; PlayLogPause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnVisibleTrackChanged
inline void UPDPlayLogUI::OnVisibleTrackChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnVisibleTrackChanged");

	struct OnVisibleTrackChanged_Params {
		bool Value;
	}; OnVisibleTrackChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnValueChanged
inline void UPDPlayLogUI::OnValueChanged(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnValueChanged");

	struct OnValueChanged_Params {
		float InValue;
	}; OnValueChanged_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnSelectedRoundListItem
inline void UPDPlayLogUI::OnSelectedRoundListItem(struct UPDPlayLogListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnSelectedRoundListItem");

	struct OnSelectedRoundListItem_Params {
		struct UPDPlayLogListItemData InListItemData;
	}; OnSelectedRoundListItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnSelectedListItem
inline void UPDPlayLogUI::OnSelectedListItem(struct UPDPlayLogListItemData InListItemData) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnSelectedListItem");

	struct OnSelectedListItem_Params {
		struct UPDPlayLogListItemData InListItemData;
	}; OnSelectedListItem_Params Params;

	Params.InListItemData = InListItemData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnQuadrupleSpeed
inline void UPDPlayLogUI::OnQuadrupleSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnQuadrupleSpeed");

	struct OnQuadrupleSpeed_Params {
		
	}; OnQuadrupleSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnNormalSpeed
inline void UPDPlayLogUI::OnNormalSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnNormalSpeed");

	struct OnNormalSpeed_Params {
		
	}; OnNormalSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnMouseCaptureBegin
inline void UPDPlayLogUI::OnMouseCaptureBegin() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnMouseCaptureBegin");

	struct OnMouseCaptureBegin_Params {
		
	}; OnMouseCaptureBegin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnDoubleSpeed
inline void UPDPlayLogUI::OnDoubleSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnDoubleSpeed");

	struct OnDoubleSpeed_Params {
		
	}; OnDoubleSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.OnDeleteAllFile
inline void UPDPlayLogUI::OnDeleteAllFile() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.OnDeleteAllFile");

	struct OnDeleteAllFile_Params {
		
	}; OnDeleteAllFile_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.MouseCaptureEnd
inline void UPDPlayLogUI::MouseCaptureEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.MouseCaptureEnd");

	struct MouseCaptureEnd_Params {
		
	}; MouseCaptureEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.GotoLobby
inline void UPDPlayLogUI::GotoLobby() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.GotoLobby");

	struct GotoLobby_Params {
		
	}; GotoLobby_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDPlayLogUI.DeleteAllFile
inline void UPDPlayLogUI::DeleteAllFile() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDPlayLogUI.DeleteAllFile");

	struct DeleteAllFile_Params {
		
	}; DeleteAllFile_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRecruitListItem.OnOKClicked
inline void UPDRecruitListItem::OnOKClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRecruitListItem.OnOKClicked");

	struct OnOKClicked_Params {
		
	}; OnOKClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRecruitListItem.OnCancelClicked
inline void UPDRecruitListItem::OnCancelClicked() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRecruitListItem.OnCancelClicked");

	struct OnCancelClicked_Params {
		
	}; OnCancelClicked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDReportPopupUI.OnTextChanged_MET_Opinion
inline void UPDReportPopupUI::OnTextChanged_MET_Opinion(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnTextChanged_MET_Opinion");

	struct OnTextChanged_MET_Opinion_Params {
		struct FText& Text;
	}; OnTextChanged_MET_Opinion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_SubCategory
inline void UPDReportPopupUI::OnSelectionChanged_CB_SubCategory(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_SubCategory");

	struct OnSelectionChanged_CB_SubCategory_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnSelectionChanged_CB_SubCategory_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_Category
inline void UPDReportPopupUI::OnSelectionChanged_CB_Category(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnSelectionChanged_CB_Category");

	struct OnSelectionChanged_CB_Category_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnSelectionChanged_CB_Category_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDReportPopupUI.OnReportConfirmed
inline void UPDReportPopupUI::OnReportConfirmed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnReportConfirmed");

	struct OnReportConfirmed_Params {
		
	}; OnReportConfirmed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDReportPopupUI.OnClick_ConfirmBtn
inline void UPDReportPopupUI::OnClick_ConfirmBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnClick_ConfirmBtn");

	struct OnClick_ConfirmBtn_Params {
		
	}; OnClick_ConfirmBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDReportPopupUI.OnClick_CancelBtn
inline void UPDReportPopupUI::OnClick_CancelBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDReportPopupUI.OnClick_CancelBtn");

	struct OnClick_CancelBtn_Params {
		
	}; OnClick_CancelBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDResultRoundMenuItem.OnClickMenu
inline void UPDResultRoundMenuItem::OnClickMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDResultRoundMenuItem.OnClickMenu");

	struct OnClickMenu_Params {
		
	}; OnClickMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDResultRoundPlayerItem.OnChangedCheckBox
inline void UPDResultRoundPlayerItem::OnChangedCheckBox(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDResultRoundPlayerItem.OnChangedCheckBox");

	struct OnChangedCheckBox_Params {
		bool InValue;
	}; OnChangedCheckBox_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnValueChanged
inline void UPDRoundReplayer::OnValueChanged(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnValueChanged");

	struct OnValueChanged_Params {
		float InValue;
	}; OnValueChanged_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnMouseCaptureBegin
inline void UPDRoundReplayer::OnMouseCaptureBegin() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnMouseCaptureBegin");

	struct OnMouseCaptureBegin_Params {
		
	}; OnMouseCaptureBegin_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickQuadrupleSpeed
inline void UPDRoundReplayer::OnClickQuadrupleSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickQuadrupleSpeed");

	struct OnClickQuadrupleSpeed_Params {
		
	}; OnClickQuadrupleSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickPlayLogStop
inline void UPDRoundReplayer::OnClickPlayLogStop() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickPlayLogStop");

	struct OnClickPlayLogStop_Params {
		
	}; OnClickPlayLogStop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickPlayLogStart
inline void UPDRoundReplayer::OnClickPlayLogStart() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickPlayLogStart");

	struct OnClickPlayLogStart_Params {
		
	}; OnClickPlayLogStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickPlayLogPause
inline void UPDRoundReplayer::OnClickPlayLogPause() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickPlayLogPause");

	struct OnClickPlayLogPause_Params {
		
	}; OnClickPlayLogPause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickNormalSpeed
inline void UPDRoundReplayer::OnClickNormalSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickNormalSpeed");

	struct OnClickNormalSpeed_Params {
		
	}; OnClickNormalSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.OnClickDoubleSpeed
inline void UPDRoundReplayer::OnClickDoubleSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.OnClickDoubleSpeed");

	struct OnClickDoubleSpeed_Params {
		
	}; OnClickDoubleSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDRoundReplayer.MouseCaptureEnd
inline void UPDRoundReplayer::MouseCaptureEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDRoundReplayer.MouseCaptureEnd");

	struct MouseCaptureEnd_Params {
		
	}; MouseCaptureEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSlider.OnSliderTextCommitted
inline void UPDSlider::OnSliderTextCommitted(struct FText& InText, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSlider.OnSliderTextCommitted");

	struct OnSliderTextCommitted_Params {
		struct FText& InText;
		enum class ETextCommit CommitMethod;
	}; OnSliderTextCommitted_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDSlider.OnSliderTextChanged
inline void UPDSlider::OnSliderTextChanged(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSlider.OnSliderTextChanged");

	struct OnSliderTextChanged_Params {
		struct FText& InText;
	}; OnSliderTextChanged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamPushToTalk
inline void UPDSoundOptionUI::OnVoiceChatTeamPushToTalk() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamPushToTalk");

	struct OnVoiceChatTeamPushToTalk_Params {
		
	}; OnVoiceChatTeamPushToTalk_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamOpenMic
inline void UPDSoundOptionUI::OnVoiceChatTeamOpenMic() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatTeamOpenMic");

	struct OnVoiceChatTeamOpenMic_Params {
		
	}; OnVoiceChatTeamOpenMic_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatSensitiveChanged
inline void UPDSoundOptionUI::OnVoiceChatSensitiveChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatSensitiveChanged");

	struct OnVoiceChatSensitiveChanged_Params {
		float Value;
	}; OnVoiceChatSensitiveChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged
inline void UPDSoundOptionUI::OnVoiceChatOutputVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatOutputVolumeChanged");

	struct OnVoiceChatOutputVolumeChanged_Params {
		float Value;
	}; OnVoiceChatOutputVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged
inline void UPDSoundOptionUI::OnVoiceChatNoiseFloorChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatNoiseFloorChanged");

	struct OnVoiceChatNoiseFloorChanged_Params {
		float Value;
	}; OnVoiceChatNoiseFloorChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatInputVolumeChanged
inline void UPDSoundOptionUI::OnVoiceChatInputVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatInputVolumeChanged");

	struct OnVoiceChatInputVolumeChanged_Params {
		float Value;
	}; OnVoiceChatInputVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnVoiceChatEnableChanged
inline void UPDSoundOptionUI::OnVoiceChatEnableChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnVoiceChatEnableChanged");

	struct OnVoiceChatEnableChanged_Params {
		bool Value;
	}; OnVoiceChatEnableChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnSpatialChanged
inline void UPDSoundOptionUI::OnSpatialChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnSpatialChanged");

	struct OnSpatialChanged_Params {
		bool Value;
	}; OnSpatialChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnSoundPresetChanged
inline void UPDSoundOptionUI::OnSoundPresetChanged(struct FString sItem, enum class ESelectInfo SelType) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnSoundPresetChanged");

	struct OnSoundPresetChanged_Params {
		struct FString sItem;
		enum class ESelectInfo SelType;
	}; OnSoundPresetChanged_Params Params;

	Params.sItem = sItem;
	Params.SelType = SelType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnSfxVolumeChanged
inline void UPDSoundOptionUI::OnSfxVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnSfxVolumeChanged");

	struct OnSfxVolumeChanged_Params {
		float Value;
	}; OnSfxVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnOperatorVolumeChanged
inline void UPDSoundOptionUI::OnOperatorVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnOperatorVolumeChanged");

	struct OnOperatorVolumeChanged_Params {
		float Value;
	}; OnOperatorVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnMasterVolumeChanged
inline void UPDSoundOptionUI::OnMasterVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnMasterVolumeChanged");

	struct OnMasterVolumeChanged_Params {
		float Value;
	}; OnMasterVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnLobbySfxVolumeChanged
inline void UPDSoundOptionUI::OnLobbySfxVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnLobbySfxVolumeChanged");

	struct OnLobbySfxVolumeChanged_Params {
		float Value;
	}; OnLobbySfxVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnLobbyBgmVolumeChanged
inline void UPDSoundOptionUI::OnLobbyBgmVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnLobbyBgmVolumeChanged");

	struct OnLobbyBgmVolumeChanged_Params {
		float Value;
	}; OnLobbyBgmVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnInputKeySelected
inline void UPDSoundOptionUI::OnInputKeySelected(struct UPDOptionContent Content) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnInputKeySelected");

	struct OnInputKeySelected_Params {
		struct UPDOptionContent Content;
	}; OnInputKeySelected_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnHRTFChanged
inline void UPDSoundOptionUI::OnHRTFChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnHRTFChanged");

	struct OnHRTFChanged_Params {
		bool Value;
	}; OnHRTFChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnClickVoiceSettingButton
inline void UPDSoundOptionUI::OnClickVoiceSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnClickVoiceSettingButton");

	struct OnClickVoiceSettingButton_Params {
		
	}; OnClickVoiceSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnClickSoundSettingButton
inline void UPDSoundOptionUI::OnClickSoundSettingButton() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnClickSoundSettingButton");

	struct OnClickSoundSettingButton_Params {
		
	}; OnClickSoundSettingButton_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnCharacterVoiceVolumeChanged
inline void UPDSoundOptionUI::OnCharacterVoiceVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnCharacterVoiceVolumeChanged");

	struct OnCharacterVoiceVolumeChanged_Params {
		float Value;
	}; OnCharacterVoiceVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnBgmVolumeChanged
inline void UPDSoundOptionUI::OnBgmVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnBgmVolumeChanged");

	struct OnBgmVolumeChanged_Params {
		float Value;
	}; OnBgmVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDSoundOptionUI.OnBackGroundVolumePlayChanged
inline void UPDSoundOptionUI::OnBackGroundVolumePlayChanged(bool Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDSoundOptionUI.OnBackGroundVolumePlayChanged");

	struct OnBackGroundVolumePlayChanged_Params {
		bool Value;
	}; OnBackGroundVolumePlayChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStartUI.OnSplashMovieOpened
inline void UPDStartUI::OnSplashMovieOpened() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStartUI.OnSplashMovieOpened");

	struct OnSplashMovieOpened_Params {
		
	}; OnSplashMovieOpened_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStartUI.OnSplashMovieClosed
inline void UPDStartUI::OnSplashMovieClosed() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStartUI.OnSplashMovieClosed");

	struct OnSplashMovieClosed_Params {
		
	}; OnSplashMovieClosed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStartUI.OnInitMediaPlayer
inline void UPDStartUI::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStartUI.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnVoiceVolumeChanged
inline void UPDStatusBoardPlayerInfo_Ally::OnVoiceVolumeChanged(float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnVoiceVolumeChanged");

	struct OnVoiceVolumeChanged_Params {
		float Value;
	}; OnVoiceVolumeChanged_Params Params;

	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceMute
inline void UPDStatusBoardPlayerInfo_Ally::OnClickVoiceMute() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceMute");

	struct OnClickVoiceMute_Params {
		
	}; OnClickVoiceMute_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceAvtive
inline void UPDStatusBoardPlayerInfo_Ally::OnClickVoiceAvtive() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardPlayerInfo_Ally.OnClickVoiceAvtive");

	struct OnClickVoiceAvtive_Params {
		
	}; OnClickVoiceAvtive_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDStatusBoardRoundListItem.OnClickRoundListItem
inline void UPDStatusBoardRoundListItem::OnClickRoundListItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDStatusBoardRoundListItem.OnClickRoundListItem");

	struct OnClickRoundListItem_Params {
		
	}; OnClickRoundListItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDTutorialQuestItem.OnInitializeAnimationFinished
inline void UPDTutorialQuestItem::OnInitializeAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDTutorialQuestItem.OnInitializeAnimationFinished");

	struct OnInitializeAnimationFinished_Params {
		
	}; OnInitializeAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDTutorialQuestItem.OnCompleteAnimationFinished
inline void UPDTutorialQuestItem::OnCompleteAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDTutorialQuestItem.OnCompleteAnimationFinished");

	struct OnCompleteAnimationFinished_Params {
		
	}; OnCompleteAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDTutorialQuestListUI.ShowNextQuestListItem
inline void UPDTutorialQuestListUI::ShowNextQuestListItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDTutorialQuestListUI.ShowNextQuestListItem");

	struct ShowNextQuestListItem_Params {
		
	}; ShowNextQuestListItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDTutorialQuestListUI.OnIntroAnimationFinished
inline void UPDTutorialQuestListUI::OnIntroAnimationFinished() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDTutorialQuestListUI.OnIntroAnimationFinished");

	struct OnIntroAnimationFinished_Params {
		
	}; OnIntroAnimationFinished_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnowMarketCoinSlot.OnSynchronizeProperties
inline void UPDUnKnowMarketCoinSlot::OnSynchronizeProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnowMarketCoinSlot.OnSynchronizeProperties");

	struct OnSynchronizeProperties_Params {
		
	}; OnSynchronizeProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnowMarketModeSlot.OnSynchronizeProperties
inline void UPDUnKnowMarketModeSlot::OnSynchronizeProperties() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnowMarketModeSlot.OnSynchronizeProperties");

	struct OnSynchronizeProperties_Params {
		
	}; OnSynchronizeProperties_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarket.SelectWeaponCategory
inline void UPDUnKnownMarket::SelectWeaponCategory(int32_t ItemProp) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarket.SelectWeaponCategory");

	struct SelectWeaponCategory_Params {
		int32_t ItemProp;
	}; SelectWeaponCategory_Params Params;

	Params.ItemProp = ItemProp;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarket.OnClickRespawnBtn
inline void UPDUnKnownMarket::OnClickRespawnBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarket.OnClickRespawnBtn");

	struct OnClickRespawnBtn_Params {
		
	}; OnClickRespawnBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarket.OnClickCloseBtn
inline void UPDUnKnownMarket::OnClickCloseBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarket.OnClickCloseBtn");

	struct OnClickCloseBtn_Params {
		
	}; OnClickCloseBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarket.DivideBgMouseDown
inline void UPDUnKnownMarket::DivideBgMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarket.DivideBgMouseDown");

	struct DivideBgMouseDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; DivideBgMouseDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function ProjectD.PDUnKnownMarketEquipSlot.ResellItem
inline void UPDUnKnownMarketEquipSlot::ResellItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.ResellItem");

	struct ResellItem_Params {
		
	}; ResellItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.RefundItem
inline void UPDUnKnownMarketEquipSlot::RefundItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.RefundItem");

	struct RefundItem_Params {
		
	}; RefundItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnUnHoverLoadout
inline void UPDUnKnownMarketEquipSlot::OnUnHoverLoadout() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnUnHoverLoadout");

	struct OnUnHoverLoadout_Params {
		
	}; OnUnHoverLoadout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutC
inline void UPDUnKnownMarketEquipSlot::OnHoverLoadoutC() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutC");

	struct OnHoverLoadoutC_Params {
		
	}; OnHoverLoadoutC_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutB
inline void UPDUnKnownMarketEquipSlot::OnHoverLoadoutB() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutB");

	struct OnHoverLoadoutB_Params {
		
	}; OnHoverLoadoutB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutA
inline void UPDUnKnownMarketEquipSlot::OnHoverLoadoutA() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnHoverLoadoutA");

	struct OnHoverLoadoutA_Params {
		
	}; OnHoverLoadoutA_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutC
inline void UPDUnKnownMarketEquipSlot::OnClickLoadoutC() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutC");

	struct OnClickLoadoutC_Params {
		
	}; OnClickLoadoutC_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutB
inline void UPDUnKnownMarketEquipSlot::OnClickLoadoutB() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutB");

	struct OnClickLoadoutB_Params {
		
	}; OnClickLoadoutB_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutA
inline void UPDUnKnownMarketEquipSlot::OnClickLoadoutA() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketEquipSlot.OnClickLoadoutA");

	struct OnClickLoadoutA_Params {
		
	}; OnClickLoadoutA_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketItemSlot.RefundItem
inline void UPDUnKnownMarketItemSlot::RefundItem() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketItemSlot.RefundItem");

	struct RefundItem_Params {
		
	}; RefundItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketListItem.OnClickBuy
inline void UPDUnKnownMarketListItem::OnClickBuy() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketListItem.OnClickBuy");

	struct OnClickBuy_Params {
		
	}; OnClickBuy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketPartListItem.OnClickPart
inline void UPDUnKnownMarketPartListItem::OnClickPart() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketPartListItem.OnClickPart");

	struct OnClickPart_Params {
		
	}; OnClickPart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketUpgradeSlot.OnClickRequest
inline void UPDUnKnownMarketUpgradeSlot::OnClickRequest() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketUpgradeSlot.OnClickRequest");

	struct OnClickRequest_Params {
		
	}; OnClickRequest_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDUnKnownMarketWeaponCategory.OnSelectCategory
inline void UPDUnKnownMarketWeaponCategory::OnSelectCategory() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDUnKnownMarketWeaponCategory.OnSelectCategory");

	struct OnSelectCategory_Params {
		
	}; OnSelectCategory_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebPopupUI.OpenWebPage
inline void UPDWebPopupUI::OpenWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebPopupUI.OpenWebPage");

	struct OpenWebPage_Params {
		
	}; OpenWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebPopupUI.CloseWebPage
inline void UPDWebPopupUI::CloseWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebPopupUI.CloseWebPage");

	struct CloseWebPage_Params {
		
	}; CloseWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebTermsOfServicePopupUI.OpenTermsWebPage
inline void UPDWebTermsOfServicePopupUI::OpenTermsWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebTermsOfServicePopupUI.OpenTermsWebPage");

	struct OpenTermsWebPage_Params {
		
	}; OpenTermsWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged
inline void UPDWebTermsOfServicePopupUI::OnToggleTermsOfServiceChanged(bool Val) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebTermsOfServicePopupUI.OnToggleTermsOfServiceChanged");

	struct OnToggleTermsOfServiceChanged_Params {
		bool Val;
	}; OnToggleTermsOfServiceChanged_Params Params;

	Params.Val = Val;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn
inline void UPDWebTermsOfServicePopupUI::OnTermsOfServiceBtn() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebTermsOfServicePopupUI.OnTermsOfServiceBtn");

	struct OnTermsOfServiceBtn_Params {
		
	}; OnTermsOfServiceBtn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDWebTermsOfServicePopupUI.CloseTermaWebPage
inline void UPDWebTermsOfServicePopupUI::CloseTermaWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDWebTermsOfServicePopupUI.CloseTermaWebPage");

	struct CloseTermaWebPage_Params {
		
	}; CloseTermaWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDZipLine.OnExitTriggerEndOverlap
inline void APDZipLine::OnExitTriggerEndOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDZipLine.OnExitTriggerEndOverlap");

	struct OnExitTriggerEndOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnExitTriggerEndOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDZipLine.OnExitTriggerBeginOverlap
inline void APDZipLine::OnExitTriggerBeginOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDZipLine.OnExitTriggerBeginOverlap");

	struct OnExitTriggerBeginOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnExitTriggerBeginOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

// Function ProjectD.PDZipLine.OnEntryTriggerEndOverlap
inline void APDZipLine::OnEntryTriggerEndOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDZipLine.OnEntryTriggerEndOverlap");

	struct OnEntryTriggerEndOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
	}; OnEntryTriggerEndOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProjectD.PDZipLine.OnEntryTriggerBeginOverlap
inline void APDZipLine::OnEntryTriggerBeginOverlap(struct UPrimitiveComponent OverlappedComp, struct UActor OtherActor, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult) {
	static auto fn = UObject::FindObject<UFunction>("Function ProjectD.PDZipLine.OnEntryTriggerBeginOverlap");

	struct OnEntryTriggerBeginOverlap_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor OtherActor;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& SweepResult;
	}; OnEntryTriggerBeginOverlap_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.OtherActor = OtherActor;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	SweepResult = Params.SweepResult;

}

