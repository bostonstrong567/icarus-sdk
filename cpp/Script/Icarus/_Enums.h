// /Script/Icarus.EAIAudioState
UENUM()
enum class EAIAudioState : uint8
{
    Undefined = 0,
    Idle = 1,
    Fleeing = 2,
    Attacking = 3,
    Dead = 4,
    Relaxing = 5,
    Mounted = 6,
    Stalking = 7,
};

// /Script/Icarus.EAIEventRequestResponse
UENUM()
enum class EAIEventRequestResponse : int32
{
    Invalid = 0,
    FailedToStart = 1,
    EventStarted = 2,
    PendingLoad = 3,
};

// /Script/Icarus.EAIVocalisationType
UENUM()
enum class EAIVocalisationType : uint8
{
    Attack = 0,
    Flinch = 1,
    Death = 2,
};

// /Script/Icarus.EActionRangeCheckBehaviour
UENUM()
enum class EActionRangeCheckBehaviour : uint8
{
    ValidMove = 0,
    CustomFunction = 1,
    Both = 2,
};

// /Script/Icarus.EActionableEventType
UENUM()
enum class EActionableEventType : uint8
{
    Undefined = 0,
    Primary = 1,
    Secondary = 2,
    Tertiary = 3,
    Reload = 4,
    MAX_VALUE = 5,
};

// /Script/Icarus.EActionableTrigger
UENUM()
enum class EActionableTrigger : uint8
{
    ActionPressed = 0,
    ActionReleased = 1,
    ActionHeld = 2,
};

// /Script/Icarus.EAliveState
UENUM()
enum class EAliveState : uint8
{
    Alive = 0,
    Dead = 1,
};

// /Script/Icarus.EAnimOverlayState
UENUM()
enum class EAnimOverlayState : uint8
{
    Default = 0,
    OneHanded = 1,
    Bow = 2,
    TwoHandedRifle = 3,
    Driving = 4,
    Spear = 5,
    Carrying = 6,
    Firearm = 7,
    Fishing = 8,
};

// /Script/Icarus.EAnimStateFMODParam
UENUM()
enum class EAnimStateFMODParam : uint8
{
    NotAnimating = 0,
    Animating = 1,
};

// /Script/Icarus.EAntiAliasingSetting
UENUM()
enum class EAntiAliasingSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EArcadeMachineRankingType
UENUM()
enum class EArcadeMachineRankingType : uint8
{
    LowerIsBetter = 0,
    GreaterIsBetter = 1,
};

// /Script/Icarus.EArmourType
UENUM()
enum class EArmourType : uint8
{
    Undefined = 0,
    Head = 1,
    Chest = 2,
    Hands = 3,
    Legs = 4,
    Feet = 5,
    Undersuit = 6,
    Skin_Head = 7,
    Undersuit_Helmet = 8,
    Skin_Head_Hair = 9,
    Backpack = 10,
    Gauntlet = 11,
};

// /Script/Icarus.EAssetType
UENUM()
enum class EAssetType : uint8
{
    Object = 0,
    Class = 1,
};

// /Script/Icarus.EAudioOcclusionMode
UENUM()
enum class EAudioOcclusionMode : uint8
{
    Complex = 0,
    SourceSimple = 1,
    SourceAndListenerSimple = 2,
};

// /Script/Icarus.EAudioShelterState
UENUM()
enum class EAudioShelterState : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
};

// /Script/Icarus.EAuthorityType
UENUM()
enum class EAuthorityType : uint8
{
    ClientOnly = 0,
    ServerOnly = 1,
    Both = 2,
};

// /Script/Icarus.EBestiaryUnlockPopup
UENUM()
enum class EBestiaryUnlockPopup : uint8
{
    Creature = 0,
    Stat1 = 1,
    Stat2 = 2,
    Lore1 = 3,
    Lore2 = 4,
    Lore3 = 5,
    Weaknesses = 6,
    Loot = 7,
};

// /Script/Icarus.EBiomeImageType
UENUM()
enum class EBiomeImageType : uint8
{
    None = 0,
    Small = 1,
    Medium = 2,
    Large = 3,
};

// /Script/Icarus.EBuildingDestroyReason
UENUM()
enum class EBuildingDestroyReason : uint8
{
    Stability = 0,
    Player = 1,
    Damaged = 2,
    Replaced = 3,
};

// /Script/Icarus.EBuildingMeshType
UENUM()
enum class EBuildingMeshType : uint8
{
    Invalid = 0,
    BaseMesh = 1,
    FrameMesh = 2,
};

// /Script/Icarus.EBuildingOpenFMODParam
UENUM()
enum class EBuildingOpenFMODParam : uint8
{
    Closed = 0,
    Open = 1,
};

// /Script/Icarus.EBuildingPieceType
UENUM()
enum class EBuildingPieceType : uint8
{
    Floor = 0,
    Wall = 1,
    Frame = 2,
    Ramp = 3,
};

// /Script/Icarus.EBuildingUnzipFMODParam
UENUM()
enum class EBuildingUnzipFMODParam : uint8
{
    Normal = 0,
    Unzipping = 1,
};

// /Script/Icarus.ECameraPathMode
UENUM()
enum class ECameraPathMode : uint8
{
    Idle = 0,
    Recording = 1,
    Playing = 2,
};

// /Script/Icarus.ECanHitResult
UENUM()
enum class ECanHitResult : uint8
{
    CantHit = 0,
    Miss = 1,
    Hit = 2,
};

// /Script/Icarus.ECanRepair
UENUM()
enum class ECanRepair : uint8
{
    HaveIngredients = 0,
    RequiresIngredients = 1,
    NeedsPower = 2,
    ToResolve = 3,
};

// /Script/Icarus.ECanUseItemResult
UENUM()
enum class ECanUseItemResult : uint8
{
    VisibleAndEnabled = 0,
    VisibleAndDisabled = 1,
    Hidden = 2,
};

// /Script/Icarus.ECaveContextFMODParam
UENUM()
enum class ECaveContextFMODParam : uint8
{
    None = 0,
    ListenerOutSourceOut = 1,
    ListenerOutSourceInCave = 2,
    ListenerInCaveSourceOut = 3,
    ListenerInCaveSourceInCave = 4,
};

// /Script/Icarus.ECaveLightType
UENUM()
enum class ECaveLightType : uint8
{
    Spot = 0,
    Rect = 1,
};

// /Script/Icarus.EChallengeTypes
UENUM()
enum class EChallengeTypes : uint8
{
    KillCreature = 0,
    CriticalHit = 1,
    StealthAttack = 2,
    SkinCreature = 3,
    HarvestCreatureItem = 4,
    HarvestPlant = 5,
    FellTree = 6,
    CollectTreeItem = 7,
    FullyMineVoxel = 8,
    MineResource = 9,
};

// /Script/Icarus.ECharacterBodyType
UENUM()
enum class ECharacterBodyType : uint8
{
    Masculine = 0,
    Feminine = 1,
    Neutral = 2,
};

// /Script/Icarus.ECharacterCustomisationContext
UENUM()
enum class ECharacterCustomisationContext : uint8
{
    Undefined = 0,
    CharacterCreation = 1,
    HABCustomisation = 2,
};

// /Script/Icarus.ECharacterOptionCategory
UENUM()
enum class ECharacterOptionCategory : uint8
{
    Head = 0,
    Body = 1,
    BodyColor = 2,
    HairStyle = 3,
    HairColor = 4,
    Head_Tattoo = 5,
    Head_Scar = 6,
    Head_FacialHair = 7,
    SkinTone = 8,
    Color = 9,
    EyeColor = 10,
    Decal = 11,
    Piercing = 12,
    Eyebrows = 13,
    Complexion = 14,
    Rebreather = 15,
    HairV2 = 16,
    BeardV2 = 17,
    EyeColorV2 = 18,
    HairColorV2 = 19,
    ScarV2 = 20,
    HeadV2 = 21,
    AgeV2 = 22,
    Hood = 23,
    Helmet = 24,
};

// /Script/Icarus.ECheatsEnabled
UENUM()
enum class ECheatsEnabled : uint8
{
    Enabled = 0,
    NotEnabled = 1,
};

// /Script/Icarus.EClassRepPolicy
UENUM()
enum class EClassRepPolicy : uint8
{
    NotRouted = 0,
    ManuallyRouted = 1,
    RelevantAllConnections = 2,
    Spatialize_Static = 3,
    Spatialize_Dynamic = 4,
    Spatialize_Dormancy = 5,
};

// /Script/Icarus.ECombinedCaveComponentFlags
UENUM()
enum class ECombinedCaveComponentFlags : uint8
{
    None = 0,
    EntranceComponent = 1,
    Void = 2,
};

// /Script/Icarus.EComparisonType
UENUM()
enum class EComparisonType : uint8
{
    Equals = 0,
    NotEquals = 1,
    LessThan = 2,
    LessThanOrEqual = 3,
    GreaterThan = 4,
    GreaterThanOrEqual = 5,
};

// /Script/Icarus.EControllerIconSet
UENUM()
enum class EControllerIconSet : uint8
{
    None = 0,
    Xbox = 1,
    Playstation = 2,
    NintendoSwitch = 3,
};

// /Script/Icarus.EControllerIconsSetting
UENUM()
enum class EControllerIconsSetting : uint8
{
    Xbox = 0,
    Playstation = 1,
    Switch = 2,
    NumSettings = 3,
    Custom = 255,
};

// /Script/Icarus.ECraftingContainerType
UENUM()
enum class ECraftingContainerType : uint8
{
    Recipes = 0,
    RecipeSets = 1,
    Query = 2,
};

// /Script/Icarus.ECreatureAudioThreatTargetType
UENUM()
enum class ECreatureAudioThreatTargetType : int32
{
    Invalid = 0,
    OtherPlayer = 1,
    LocalPlayer = 2,
    OtherCreature = 3,
    Stimulus = 4,
};

// /Script/Icarus.ECreatureFoliageFMODParam
UENUM()
enum class ECreatureFoliageFMODParam : uint8
{
    NotInFoliage = 0,
    InFoliage = 1,
};

// /Script/Icarus.ECreatureFootstepTypeFMODParam
UENUM()
enum class ECreatureFootstepTypeFMODParam : uint8
{
    FrontFoot = 0,
    RearFoot = 1,
    Jump = 2,
    JumpLand = 3,
};

// /Script/Icarus.ECreatureSex
UENUM()
enum class ECreatureSex : uint8
{
    Unknown = 0,
    Female = 1,
    Male = 2,
};

// /Script/Icarus.ECropMeshRotationType
UENUM()
enum class ECropMeshRotationType : uint8
{
    NoRotation = 0,
    Random90 = 1,
    FullyRandom = 2,
};

// /Script/Icarus.ECrosshairColorSetting
UENUM()
enum class ECrosshairColorSetting : uint8
{
    White = 0,
    Red = 1,
    Green = 2,
    Blue = 3,
    Yellow = 4,
    Pink = 5,
    Cyan = 6,
    Black = 7,
    NumSettings = 8,
    Custom = 255,
};

// /Script/Icarus.ECrosshairStyleSetting
UENUM()
enum class ECrosshairStyleSetting : uint8
{
    Dot = 0,
    Chevron = 1,
    Circle = 2,
    Cross = 3,
    Plus = 4,
    Diamond = 5,
    Notched = 6,
    Scope = 7,
    Bullseye = 8,
    Spread = 9,
    Target = 10,
    NumSettings = 11,
    Custom = 255,
};

// /Script/Icarus.ECustomGameStatCategory
UENUM()
enum class ECustomGameStatCategory : uint8
{
    Player = 0,
    Weather = 1,
    Creatures = 2,
    Misc = 3,
};

// /Script/Icarus.ECustomGameStatChangeability
UENUM()
enum class ECustomGameStatChangeability : uint8
{
    OnProspectCreation = 0,
    OnProspectLoad = 1,
    Anytime = 2,
};

// /Script/Icarus.ECustomGameStatType
UENUM()
enum class ECustomGameStatType : uint8
{
    Bool = 0,
    Int = 1,
    DropDown = 2,
};

// /Script/Icarus.EDamageTypeFMODParam
UENUM()
enum class EDamageTypeFMODParam : uint8
{
    Undefined = 0,
    Pure = 1,
    Physical = 2,
    Melee = 3,
    Ranged = 4,
    Fire = 5,
    FallDamage = 6,
    Collision = 7,
    Poison = 8,
    Wind = 9,
};

// /Script/Icarus.EDataValid
UENUM()
enum class EDataValid : uint8
{
    DataValid = 0,
    DataInvalid = 1,
};

// /Script/Icarus.EDataValidity
UENUM()
enum class EDataValidity : uint8
{
    Valid = 0,
    Invalid = 1,
};

// /Script/Icarus.EDeployableSnapBehaviour
UENUM()
enum class EDeployableSnapBehaviour : uint8
{
    WorldPlacementOnly = 0,
    SnapPlacementOnly = 1,
    WorldAndSnap = 2,
};

// /Script/Icarus.EDestroyPattern
UENUM()
enum class EDestroyPattern : uint8
{
    RadialOutward = 0,
    RadialInward = 1,
    Random = 2,
};

// /Script/Icarus.EDeviceState
UENUM()
enum class EDeviceState : uint8
{
    On = 0,
    Idle = 1,
    Off = 2,
};

// /Script/Icarus.EDialogueEvents
UENUM()
enum class EDialogueEvents : uint8
{
    None = 0,
    QuestStart = 1,
    QuestEnd = 2,
};

// /Script/Icarus.EDialogueRedirectCondition
UENUM()
enum class EDialogueRedirectCondition : uint8
{
    None = 0,
    IsOpenWorldProspect = 1,
    IsMissionProspect = 2,
};

// /Script/Icarus.EDirtierMode
UENUM()
enum class EDirtierMode : uint8
{
    OwningActor = 0,
    AffectedObjectsList = 1,
};

// /Script/Icarus.EDisplayMode
UENUM()
enum class EDisplayMode : uint8
{
    Fullscreen = 0,
    Borderless = 1,
    Windowed = 2,
};

// /Script/Icarus.EDisplayTemperatureSetting
UENUM()
enum class EDisplayTemperatureSetting : uint8
{
    Celsius = 0,
    Fahrenheit = 1,
    NumSettings = 2,
    Custom = 255,
};

// /Script/Icarus.EDropAbundance
UENUM()
enum class EDropAbundance : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
};

// /Script/Icarus.EDropTemperature
UENUM()
enum class EDropTemperature : uint8
{
    Cold = 0,
    Normal = 1,
    Hot = 2,
};

// /Script/Icarus.EDropshipDescentStateFMODParam
UENUM()
enum class EDropshipDescentStateFMODParam : uint8
{
    MainEngines = 0,
    Booster = 1,
    Freefall = 2,
    Landed = 3,
    EnterSeat = 4,
    CrashBegin = 5,
    CrashEnd = 6,
};

// /Script/Icarus.EDynamicItemProperties
UENUM()
enum class EDynamicItemProperties : uint8
{
    AssociatedItemInventoryId = 0,
    AssociatedItemInventorySlot = 1,
    DynamicState = 2,
    GunCurrentMagSize = 3,
    CurrentAmmoType = 4,
    BuildingVariation = 5,
    Durability = 6,
    ItemableStack = 7,
    MillijoulesRemaining = 8,
    TransmutableUnits = 9,
    Fillable_StoredUnits = 10,
    Fillable_Type = 11,
    Decayable_CurrentSpoilTime = 12,
    InventoryContainer_LinkedInventoryId = 13,
    MaxDynamicItemProperties = 14,
};

// /Script/Icarus.EDynamicQuestDifficulty
UENUM()
enum class EDynamicQuestDifficulty : uint8
{
    None = 0,
    Easy = 1,
    Medium = 2,
    Hard = 3,
};

// /Script/Icarus.EEffectsSetting
UENUM()
enum class EEffectsSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EEndProspectSessionContext
UENUM()
enum class EEndProspectSessionContext : uint8
{
    Undefined = 0,
    HostLeavingSession = 1,
    ExpiredProspect = 2,
    Error_InvalidHost = 3,
    Error_FailedToHostSession = 4,
};

// /Script/Icarus.EEnvironmentLightningTargetFMODParam
UENUM()
enum class EEnvironmentLightningTargetFMODParam : uint8
{
    Random = 0,
    Player = 1,
    Tree = 2,
    Building = 3,
};

// /Script/Icarus.EErrorAction
UENUM()
enum class EErrorAction : uint8
{
    Immediate = 0,
    Kick = 1,
    Queue = 2,
    AppClose = 3,
};

// /Script/Icarus.EErrorTarget
UENUM()
enum class EErrorTarget : uint8
{
    Log = 0,
    Widget = 1,
    Dialog = 2,
};

// /Script/Icarus.EEventEndReason
UENUM()
enum class EEventEndReason : uint8
{
    InvalidReason = 0,
    Completed = 1,
    Timeout = 2,
    Aborted = 3,
};

// /Script/Icarus.EExperienceSource
UENUM()
enum class EExperienceSource : uint8
{
    XP_None = 0,
    XP_OnAction = 1,
    XP_OnInteract = 2,
    XP_OnHit = 3,
    XP_OnDamaged = 4,
    XP_OnDeath = 5,
    XP_OnCraft = 6,
    XP_OnAchievement = 7,
    XP_Misc = 8,
};

// /Script/Icarus.EFLODActorState
UENUM()
enum class EFLODActorState : uint8
{
    Undefined = 0,
    Revealing = 2,
    Revealed = 4,
    Concealing = 8,
    Concealed = 16,
};

// /Script/Icarus.EFLODLevelInfluenceType
UENUM()
enum class EFLODLevelInfluenceType : uint8
{
    None = 0,
    ViewTrace = 1,
    Distance = 2,
};

// /Script/Icarus.EFSRModeSetting
UENUM()
enum class EFSRModeSetting : uint8
{
    Off = 0,
    Performance = 1,
    Balanced = 2,
    Quality = 3,
    Ultra_Quality = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EFeatureLevelCheckResult
UENUM()
enum class EFeatureLevelCheckResult : uint8
{
    Unchecked = 0,
    Fail_FeatureLevel = 1,
    Fail_Flag = 2,
    Unknown_CouldNotCheckFlag = 3,
    Pass = 4,
};

// /Script/Icarus.EFieldGuideItemHotToObtain
UENUM()
enum class EFieldGuideItemHotToObtain : uint8
{
    Unobtainium = 0,
    Harvest = 1,
    Craft = 2,
    Kill = 4,
    Fishing = 8,
    PickAxe = 16,
    SledgeHammer = 32,
    DrillOrExtract = 64,
    Buy_At_Workshop = 128,
};

// /Script/Icarus.EFireExtinguishResult
UENUM()
enum class EFireExtinguishResult : uint8
{
    Failed = 0,
    ExtinguishedCombustion = 1,
    ExtinguishedPyrolysis = 2,
};

// /Script/Icarus.EFireMode
UENUM()
enum class EFireMode : uint8
{
    Semiauto = 0,
    Burst = 1,
    Auto = 2,
};

// /Script/Icarus.EFireStateFMODParam
UENUM()
enum class EFireStateFMODParam : uint8
{
    NotOnFire = 0,
    OnFire = 1,
};

// /Script/Icarus.EFirearmAttachType
UENUM()
enum class EFirearmAttachType : uint8
{
    Weapon = 0,
    Player = 1,
};

// /Script/Icarus.EFishRarity
UENUM()
enum class EFishRarity : uint8
{
    None = 0,
    Common = 1,
    Uncommon = 2,
    Rare = 3,
    Unique = 4,
};

// /Script/Icarus.EFishType
UENUM()
enum class EFishType : uint8
{
    None = 0,
    Saltwater = 1,
    Freshwater = 2,
};

// /Script/Icarus.EFishUnlockPopup
UENUM()
enum class EFishUnlockPopup : uint8
{
    None = 0,
    FishCaught = 1,
    Quality = 2,
    Weight = 4,
    Length = 8,
    All = 255,
};

// /Script/Icarus.EFlagsTableType
UENUM()
enum class EFlagsTableType : uint8
{
    D_CharacterFlags = 0,
    D_SessionFlags = 1,
    D_AccountFlags = 2,
    D_DLCPackageData = 3,
    None = 255,
};

// /Script/Icarus.EFlammableAudioLocationType
UENUM()
enum class EFlammableAudioLocationType : uint8
{
    ActorLocation = 0,
    BoundsOrigin = 1,
    BoundsBase = 2,
};

// /Script/Icarus.EFlammablePropagationType
UENUM()
enum class EFlammablePropagationType : uint8
{
    None = 0,
    Self = 1,
    FireInstance = 2,
};

// /Script/Icarus.EFlammableState
UENUM()
enum class EFlammableState : uint8
{
    None = 0,
    Detached = 1,
    Pyrolysis = 2,
    Combusting = 3,
    Combusted = 4,
    Destroyed = 5,
};

// /Script/Icarus.EFloatRoundingMode
UENUM()
enum class EFloatRoundingMode : uint8
{
    Round = 0,
    Floor = 1,
    Ceiling = 2,
};

// /Script/Icarus.EFoliageSetting
UENUM()
enum class EFoliageSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EForceRemovePlayerReason
UENUM()
enum class EForceRemovePlayerReason : uint8
{
    Initialisation_NotApproved = 0,
    KickedByHostingPlayer = 1,
};

// /Script/Icarus.EFound
UENUM()
enum class EFound : uint8
{
    Found = 0,
    NotFound = 1,
};

// /Script/Icarus.EFunctionOutcome
UENUM()
enum class EFunctionOutcome : uint8
{
    Success = 0,
    Failure = 1,
};

// /Script/Icarus.EGOAPCharacterStance
UENUM()
enum class EGOAPCharacterStance : uint8
{
    Standing = 0,
    Sitting = 1,
    Lying = 2,
};

// /Script/Icarus.EGOAPControllerState
UENUM()
enum class EGOAPControllerState : uint8
{
    Idle = 0,
    GetNewAction = 1,
    MoveToAction = 2,
    PerformAction = 3,
};

// /Script/Icarus.EGOAPFactSource
UENUM()
enum class EGOAPFactSource : uint8
{
    VisionPerception = 0,
    SoundPerception = 1,
    DamagePerception = 2,
    ProtectiveMotivation = 3,
};

// /Script/Icarus.EGOAPObjectType
UENUM()
enum class EGOAPObjectType : uint8
{
    Food = 0,
    Water = 1,
    Enemy = 2,
    MaxObjectTypes = 3,
};

// /Script/Icarus.EGOAPProperty
UENUM()
enum class EGOAPProperty : uint8
{
    Hungry = 0,
    Thirsty = 1,
    HasFood = 2,
    HasWater = 3,
    FoundFood = 4,
    FoundWater = 5,
    Wander = 6,
    Scared = 7,
    RunForSafety = 8,
    MaxProperties = 9,
};

// /Script/Icarus.EGenderedArmourType
UENUM()
enum class EGenderedArmourType : uint8
{
    Invalid = 0,
    MaleThirdPerson = 1,
    FemaleThirdPerson = 2,
    GenericFirstPerson = 3,
};

// /Script/Icarus.EGlobalDropStateFMODParam
UENUM()
enum class EGlobalDropStateFMODParam : uint8
{
    Hab = 0,
    Dropship = 1,
    Prospect = 2,
    LoadingProspect = 3,
};

// /Script/Icarus.EGlobalEnvironmentBiomeFMODParam
UENUM()
enum class EGlobalEnvironmentBiomeFMODParam : uint8
{
    None = 0,
    Conifer = 1,
    Arctic = 2,
    Desert = 3,
    Lava = 4,
    Wetlands = 5,
    Grasslands = 6,
};

// /Script/Icarus.EGlobalEnvironmentTerrainZoneFMODParam
UENUM()
enum class EGlobalEnvironmentTerrainZoneFMODParam : uint8
{
    Default = 0,
    Canyon_Narrow = 1,
    Canyon_Med = 2,
    Canyon_Wide = 3,
};

// /Script/Icarus.EGlobalLoadingScreenStateFMODParam
UENUM()
enum class EGlobalLoadingScreenStateFMODParam : uint8
{
    LoadingScreen_Inactive = 0,
    LoadingScreen_Active = 1,
};

// /Script/Icarus.EGlobalPlayerCharacterVoiceFMODParam
UENUM()
enum class EGlobalPlayerCharacterVoiceFMODParam : uint8
{
    None = 0,
    VoiceA = 1,
    VoiceB = 2,
};

// /Script/Icarus.EGraphicsCardVendor
UENUM()
enum class EGraphicsCardVendor : uint8
{
    Invalid = 0,
    Unknown = 1,
    Nvidia = 2,
    AMD = 3,
    Intel = 4,
};

// /Script/Icarus.EGreatHuntMissionType
UENUM()
enum class EGreatHuntMissionType : uint8
{
    None = 0,
    Standard = 1,
    Choice = 2,
    Optional = 3,
    Final = 4,
};

// /Script/Icarus.EHandedness
UENUM()
enum class EHandedness : uint8
{
    Right = 0,
    Left = 1,
    Both = 2,
};

// /Script/Icarus.EHeatmapColorChannel
UENUM()
enum class EHeatmapColorChannel : uint8
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    AnyChannel = 4,
};

// /Script/Icarus.EHuntingClueType
UENUM()
enum class EHuntingClueType : uint8
{
    Footprint = 0,
    BloodTrail = 1,
};

// /Script/Icarus.EIcarusActorDestroyReason
UENUM()
enum class EIcarusActorDestroyReason : uint8
{
    Other = 0,
    Pickup = 1,
    Durability = 2,
};

// /Script/Icarus.EIcarusClaimLaunchConfirmationStep
UENUM()
enum class EIcarusClaimLaunchConfirmationStep : uint8
{
    ClaimingProspect = 0,
    LoadingProspect = 1,
};

// /Script/Icarus.EIcarusDamageType
UENUM()
enum class EIcarusDamageType : uint8
{
    Undefined = 0,
    Pure = 1,
    Melee = 2,
    Projectile = 3,
    Fire = 4,
    FallDamage = 5,
    Collision = 6,
    Poison = 7,
    Wind = 8,
    Shield = 9,
    Returned = 10,
    Frost = 11,
    Electric = 12,
    Explosive = 13,
    Shatter = 14,
    Felling = 15,
    Laser = 16,
};

// /Script/Icarus.EIcarusGameVersionFlags
UENUM()
enum class EIcarusGameVersionFlags : uint8
{
    None = 0,
    Major = 1,
    Minor = 2,
    Patch = 4,
    Changelist = 8,
    BuildType = 16,
    FeatureLevel = 32,
    Numbers = 15,
    All = 63,
};

// /Script/Icarus.EIcarusItemContext
UENUM()
enum class EIcarusItemContext : uint8
{
    None = 0,
    World = 1,
    EquipHand = 2,
    EquipBack = 3,
    Vehicle = 4,
    Deployable = 5,
    Slotable = 6,
    Buildable = 7,
    DropshipPart = 8,
    Gravestone = 9,
    Light = 10,
};

// /Script/Icarus.EIcarusJoinConfirmationStep
UENUM()
enum class EIcarusJoinConfirmationStep : uint8
{
    FindingSession = 0,
    JoiningProspect = 1,
    LoadingProspect = 2,
};

// /Script/Icarus.EIcarusOrchestrationStateFlag
UENUM()
enum class EIcarusOrchestrationStateFlag : uint8
{
    None = 0,
    DatabaseReloadRequired = 1,
    DatabaseReloadBegin = 2,
    DatabaseReloadComplete = 3,
    ActorsReloadedToDatabaseState = 4,
    IcarusBeginPlay = 5,
    ClearedAllConcerns = 6,
    RaiseCurtain = 7,
    GameModeBeginPlay = 8,
    AllRequiredActorsSpawned = 9,
};

// /Script/Icarus.EIcarusProspectDifficulty
UENUM()
enum class EIcarusProspectDifficulty : uint8
{
    Easy = 0,
    Normal = 1,
    Hard = 2,
    Extreme = 3,
};

// /Script/Icarus.EIcarusResourceType
UENUM()
enum class EIcarusResourceType : uint8
{
    None = 0,
    Energy = 1,
    Water = 2,
    Fuel = 3,
    Oxygen = 4,
    Hydrazine = 5,
    Crude_Oil = 6,
    Refined_Oil = 7,
    Chute = 8,
    MaxResourceTypes = 9,
};

// /Script/Icarus.EIcarusResumeConfirmationStep
UENUM()
enum class EIcarusResumeConfirmationStep : uint8
{
    ResumeRequest = 0,
    ConfirmationHost = 1,
    ConfirmationJoin = 2,
    LoadingProspectHost = 3,
    FindingSessionJoin = 4,
    LoadingProspectJoin = 5,
    Mismatch = 6,
};

// /Script/Icarus.EIcarusWeatherDifficulty
UENUM()
enum class EIcarusWeatherDifficulty : uint8
{
    Light = 0,
    Medium = 1,
    Heavy = 2,
    Extreme = 3,
};

// /Script/Icarus.EInputContext
UENUM()
enum class EInputContext : uint8
{
    Both = 0,
    KeyboardOnly = 1,
    ControllerOnly = 2,
};

// /Script/Icarus.EInputStatSourceType
UENUM()
enum class EInputStatSourceType : uint8
{
    Aiming = 0,
};

// /Script/Icarus.EInputTypeSetting
UENUM()
enum class EInputTypeSetting : uint8
{
    Keyboard = 0,
    Controller = 1,
    NumSettings = 2,
    Custom = 255,
};

// /Script/Icarus.EInstancedLevelPickType
UENUM()
enum class EInstancedLevelPickType : uint8
{
    FirstItem = 0,
};

// /Script/Icarus.EInteractType
UENUM()
enum class EInteractType : uint8
{
    Undefined = 0,
    WorldPress = 1,
    WorldHold = 2,
    WorldAltPress = 3,
    WorldAltHold = 4,
};

// /Script/Icarus.EInteractableHitLookupType
UENUM()
enum class EInteractableHitLookupType : uint8
{
    None = 0,
    FLOD_Instance = 1,
};

// /Script/Icarus.EInventoryContainerType
UENUM()
enum class EInventoryContainerType : uint8
{
    Items = 0,
    RecipeSets = 1,
    Query = 2,
};

// /Script/Icarus.EInventorySortType
UENUM()
enum class EInventorySortType : int32
{
    ByTag = 0,
    ByWeight = 1,
    ByStackCount = 2,
    ByAlphaNumeric = 3,
};

// /Script/Icarus.EItemCraftingTypeFMODParam
UENUM()
enum class EItemCraftingTypeFMODParam : uint8
{
    Player = 0,
    World = 1,
};

// /Script/Icarus.EItemDestructionContext
UENUM()
enum class EItemDestructionContext : uint8
{
    Decayed = 0,
    Dismantled = 1,
    FellOutOfWorld = 2,
};

// /Script/Icarus.EKeybindVisibility
UENUM()
enum class EKeybindVisibility : uint8
{
    VisibleRemap = 0,
    VisibleNoRemap = 1,
    Invisible = 2,
};

// /Script/Icarus.ELastProspectHostType
UENUM()
enum class ELastProspectHostType : uint8
{
    LocalHost = 0,
    SteamP2P = 1,
    DedicatedServer = 2,
};

// /Script/Icarus.ELeaveProspectSessionType
UENUM()
enum class ELeaveProspectSessionType : uint8
{
    None = 0,
    Quit = 1,
    ReturnToCharacterSelect = 2,
    LeaveByDropship = 3,
    ReturnToTitlescreen = 4,
    Disconnected = 5,
};

// /Script/Icarus.ELevel
UENUM()
enum class ELevel : uint8
{
    NoLogging = 0,
    Error = 1,
    Warning = 2,
    Info = 3,
};

// /Script/Icarus.ELineDrawMethod
UENUM()
enum class ELineDrawMethod : uint8
{
    Unspecified = 0,
    NoLine = 1,
    ShortestDistance = 2,
    XThenY = 3,
    YThenX = 4,
};

// /Script/Icarus.ELobbyPrivacy
UENUM()
enum class ELobbyPrivacy : uint8
{
    Unknown = 0,
    FriendsOnly = 1,
    Private = 2,
};

// /Script/Icarus.ELookAtType
UENUM()
enum class ELookAtType : uint8
{
    PitchAndYaw = 0,
    VectorLocation = 1,
    AbsoluteLocation = 2,
};

// /Script/Icarus.EMapTileRadarFlag
UENUM()
enum class EMapTileRadarFlag : uint8
{
    NotScanned = 0,
    NoResource = 1,
    FoundResource = 2,
    Scanning = 3,
    FogOfWar = 4,
};

// /Script/Icarus.EMetaHashResult
UENUM()
enum class EMetaHashResult : uint8
{
    None = 0,
    FilesNotFound = 1,
    BadFileSize = 2,
    ExtraFilesFound = 4,
    ModFilesFound = 8,
    All = 255,
};

// /Script/Icarus.EMigrationStep
UENUM()
enum class EMigrationStep : uint8
{
    Start = 0,
    CreatePlayerDataFolder = 1,
    MigrateMetaInventoryFormat = 2,
    OnlineGetUserProfile = 3,
    OnlineGetCharacterData = 4,
    OnlineGetCharacterLoadouts = 5,
    OnlineGetMetaInventory = 6,
    SwitchToOffline = 7,
    CacheOfflineManagers = 8,
    OfflineGetUserProfile = 9,
    OfflineGetCharacterData = 10,
    OfflineGetCharacterLoadouts = 11,
    OfflineGetMetaInventory = 12,
    MergeProfileData = 13,
    MergeCharacterData = 14,
    MergeLoadoutData = 15,
    MergeMetaInventories = 16,
    MergeOutpostFiles = 17,
    UpdateLoadoutData = 18,
    MigrateSaveFormat = 19,
    DeletingOldFiles = 20,
    FinaliseMigration = 21,
};

// /Script/Icarus.EMissionState
UENUM()
enum class EMissionState : uint8
{
    InProgress = 0,
    Completed = 1,
    Abandoned = 2,
    Failed = 3,
    MAX = 4,
};

// /Script/Icarus.EModifierMergeType
UENUM()
enum class EModifierMergeType : uint8
{
    Stack = 0,
    LongestDuration = 1,
    Replace = 2,
    Count = 3,
};

// /Script/Icarus.EModifierType
UENUM()
enum class EModifierType : uint8
{
    Buff = 0,
    Debuff = 1,
    Biome = 2,
    Aura_Positive = 3,
    Aura_Negative = 4,
    Radiation = 5,
    Item = 6,
};

// /Script/Icarus.EMountAction
UENUM()
enum class EMountAction : uint8
{
    Invalid = 0,
    Eating = 1,
    Drinking = 2,
    Sleeping = 3,
    Attacking = 4,
    Escaping = 5,
    Socialising = 6,
};

// /Script/Icarus.EMountCombatBehaviourState
UENUM()
enum class EMountCombatBehaviourState : uint8
{
    Invalid = 0,
    DoNotEngage = 1,
    NeutralEngagement = 2,
    AggressiveEngagement = 3,
};

// /Script/Icarus.EMountConsumptionBehaviourState
UENUM()
enum class EMountConsumptionBehaviourState : uint8
{
    Invalid = 0,
    Any = 1,
    Assigned = 2,
    None = 3,
};

// /Script/Icarus.EMountGrazingBehaviourState
UENUM()
enum class EMountGrazingBehaviourState : uint8
{
    Invalid = 0,
    Any = 1,
    Foliage = 2,
    Carcasses = 3,
    None = 4,
};

// /Script/Icarus.EMountMovementBehaviourState
UENUM()
enum class EMountMovementBehaviourState : uint8
{
    Invalid = 0,
    Follow = 1,
    IdleWander = 2,
    IdleStanding = 3,
    IdleLying = 4,
};

// /Script/Icarus.EMovementState
UENUM()
enum class EMovementState : uint8
{
    Undefined = 0,
    Stationary = 1,
    Sneak = 2,
    Walk = 3,
    Jog = 4,
    Run = 5,
    Sprint = 6,
    Attacking = 7,
    Following = 8,
};

// /Script/Icarus.EMusicConditionCombatState
UENUM()
enum class EMusicConditionCombatState : uint8
{
    None = 0,
    Idle = 1,
    InCombat = 2,
    InCombat_Boss = 4,
    InCombat_EpicBoss = 8,
};

// /Script/Icarus.EMusicConditionDisaster
UENUM()
enum class EMusicConditionDisaster : uint8
{
    None = 0,
    Normal = 1,
    Fire = 2,
};

// /Script/Icarus.EMusicConditionDropState
UENUM()
enum class EMusicConditionDropState : uint8
{
    None = 0,
    DropShipDescending = 1,
    Prospect = 2,
    DropShipAscending = 4,
    Hab = 8,
    LoadingProspect = 16,
};

// /Script/Icarus.EMusicConditionDropTime
UENUM()
enum class EMusicConditionDropTime : uint8
{
    None = 0,
    Normal = 1,
    TimeRunningOut = 2,
};

// /Script/Icarus.EMusicConditionGameplayEvent
UENUM()
enum class EMusicConditionGameplayEvent : uint8
{
    None = 0,
    DiscoveredMetaResource = 1,
    Revived = 2,
};

// /Script/Icarus.EMusicConditionPlayerState
UENUM()
enum class EMusicConditionPlayerState : uint8
{
    None = 0,
    Alive = 1,
    Dead = 2,
    LowHealth = 4,
};

// /Script/Icarus.EMusicConditionTimeOfDay
UENUM()
enum class EMusicConditionTimeOfDay : uint8
{
    None = 0,
    Dawn = 1,
    Day = 2,
    Dusk = 4,
    Night = 8,
};

// /Script/Icarus.EMusicConditionWeather
UENUM()
enum class EMusicConditionWeather : uint8
{
    None = 0,
    Normal = 1,
    Storm_Ramp = 2,
    Storm_Damage = 4,
    Storm_Chaos = 8,
};

// /Script/Icarus.ENPCNameGender
UENUM()
enum class ENPCNameGender : uint8
{
    Male = 0,
    Female = 1,
    Both = 2,
};

// /Script/Icarus.ENVIDIAReflexLowLatencySetting
UENUM()
enum class ENVIDIAReflexLowLatencySetting : uint8
{
    Off = 0,
    On = 1,
    On_Plus_Boost = 2,
    NumSettings = 3,
    Custom = 255,
};

// /Script/Icarus.ENavigationType
UENUM()
enum class ENavigationType : uint8
{
    Jump = 0,
    Teleport = 1,
    MaxNavigationTypes = 2,
};

// /Script/Icarus.EObjectSlotType
UENUM()
enum class EObjectSlotType : uint8
{
    ObjectSlotInput = 0,
    ObjectSlotOutput = 1,
    ObjectSlotStorage = 2,
};

// /Script/Icarus.EOcclusionShelterContextFMODParam
UENUM()
enum class EOcclusionShelterContextFMODParam : uint8
{
    None = 0,
    ListenerLowSourceLow = 1,
    ListenerLowSourceMed = 2,
    ListenerLowSourceHigh = 3,
    ListenerMedSourceLow = 4,
    ListenerMedSourceMed = 5,
    ListenerMedSourceHigh = 6,
    ListenerHighSourceLow = 7,
    ListenerHighSourceMed = 8,
    ListenerHighSourceHigh = 9,
};

// /Script/Icarus.EOnProspectAvailability
UENUM()
enum class EOnProspectAvailability : uint8
{
    None = 0,
    Base = 1,
    Upgrade1 = 2,
    Upgrade2 = 3,
    Upgrade3 = 4,
};

// /Script/Icarus.EOverallSetting
UENUM()
enum class EOverallSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EPayloadDeploymentType
UENUM()
enum class EPayloadDeploymentType : uint8
{
    OnProjectileMovementComplete = 0,
    OnLaunch = 1,
    OnBounceImmediate = 2,
    OnBounceWaitForHalt = 3,
    OnTimerElapsed = 4,
};

// /Script/Icarus.EPlantGrowthStates
UENUM()
enum class EPlantGrowthStates : uint8
{
    Unseeded = 0,
    Stage1 = 1,
    Stage2 = 2,
    Stage3 = 3,
    Stage4 = 4,
    Mature = 5,
    Decayed = 6,
};

// /Script/Icarus.EPlayerArmourTypeFMODParam
UENUM()
enum class EPlayerArmourTypeFMODParam : uint8
{
    None = 0,
    Fiber = 1,
    Fur = 2,
    Leather = 3,
    Ghillie = 4,
    Carbon = 5,
    Composite = 6,
    Polar = 7,
    Scale = 8,
    Bone = 9,
    Obsidian = 10,
    Metal = 11,
};

// /Script/Icarus.EPlayerAudioFoliageType
UENUM()
enum class EPlayerAudioFoliageType : uint8
{
    Undefined = 0,
    Tree = 1,
    Bush = 2,
};

// /Script/Icarus.EPlayerFoliageFMODParam
UENUM()
enum class EPlayerFoliageFMODParam : uint8
{
    None = 0,
    Bush = 1,
    BushDry = 2,
    BushLow = 3,
    BushTwiggy = 4,
    Flower = 5,
    Bramble = 6,
};

// /Script/Icarus.EPlayerGroundStateFMODParam
UENUM()
enum class EPlayerGroundStateFMODParam : uint8
{
    Earth = 0,
    Air = 1,
    Water = 2,
};

// /Script/Icarus.EPlayerStanceFMODParam
UENUM()
enum class EPlayerStanceFMODParam : uint8
{
    Jogging = 0,
    Sprinting = 1,
    Crouching = 2,
    Walking = 3,
};

// /Script/Icarus.EPlayerTypeFMODParam
UENUM()
enum class EPlayerTypeFMODParam : uint8
{
    LocalPlayerFirstPerson = 0,
    LocalPlayerThirdPerson = 1,
    OtherPlayer = 2,
};

// /Script/Icarus.EPostProcessingSetting
UENUM()
enum class EPostProcessingSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EPrebuiltStructureState
UENUM()
enum class EPrebuiltStructureState : uint8
{
    Built = 0,
    NotBuilt = 1,
};

// /Script/Icarus.EPrimaryItemTypes
UENUM()
enum class EPrimaryItemTypes : uint8
{
    Generic = 0,
    Actionable = 1,
    Armor = 2,
    Ballistic = 3,
    Buildable = 4,
    Consumable = 5,
    Combustible = 6,
    Deployable = 7,
    Energy = 8,
    Equippable = 9,
    Highlightable = 10,
    Interactable = 11,
    Itemable = 12,
    Meshable = 13,
    Processing = 14,
    Useable = 15,
    Weight = 16,
    Tool = 17,
    Resource = 18,
    Rocketable = 19,
};

// /Script/Icarus.EProcessorPurpose
UENUM()
enum class EProcessorPurpose : uint8
{
    Crafting = 0,
    Repairing = 1,
};

// /Script/Icarus.EProcessorStoppedReason
UENUM()
enum class EProcessorStoppedReason : uint8
{
    GenericFailure = 0,
    NoEnergy = 1,
    NoResources = 2,
    NoRecipe = 3,
    NoQueue = 4,
    NoSpace = 5,
    NotTurnedOn = 6,
    NoResourceRemaining = 7,
    PlayerStopped = 8,
};

// /Script/Icarus.EProgressState
UENUM()
enum class EProgressState : uint8
{
    Prototype = 0,
    Review = 1,
    Complete = 2,
    NumStates = 3,
};

// /Script/Icarus.EProjectileBreakModifier
UENUM()
enum class EProjectileBreakModifier : uint8
{
    NoChange = 0,
    Unbreakable = 1,
    MustBreak = 2,
};

// /Script/Icarus.EProspectRequiredTech
UENUM()
enum class EProspectRequiredTech : uint8
{
    None = 0,
    Tier1 = 1,
    Tier2 = 2,
    Tier3 = 3,
    Tier4 = 4,
    Tier5 = 5,
};

// /Script/Icarus.EQuestActorState
UENUM()
enum class EQuestActorState : uint8
{
    Valid = 0,
    Invalid = 1,
};

// /Script/Icarus.EQuestModifiersTableType
UENUM()
enum class EQuestModifiersTableType : uint8
{
    D_QuestWeatherModifiers = 0,
    D_QuestEnemyModifiers = 1,
    D_QuestVocalisationModifiers = 2,
    None = 255,
};

// /Script/Icarus.EQuestState
UENUM()
enum class EQuestState : uint8
{
    Complete = 0,
    Incomplete = 1,
};

// /Script/Icarus.EQuestVocalisationType
UENUM()
enum class EQuestVocalisationType : uint8
{
    InitialAudio = 0,
    UpdateAudio = 1,
    FinishAudio = 2,
};

// /Script/Icarus.ERCONCommandContext
UENUM()
enum class ERCONCommandContext : uint8
{
    Any = 0,
    ServerLobby = 1,
    Survival = 2,
};

// /Script/Icarus.ERCONCommandPlatformContext
UENUM()
enum class ERCONCommandPlatformContext : uint8
{
    Any = 0,
    DedicatedServer = 1,
    P2P = 2,
};

// /Script/Icarus.ERateLimitedRequests
UENUM()
enum class ERateLimitedRequests : uint8
{
    None = 0,
    GetDropships = 1,
    GetMetaResources = 2,
    GetMetaInventory = 3,
    GetDropInventory = 4,
    GetWorkshopPacks = 5,
    GetCredits = 6,
    GetNotifications = 7,
    SyncTalents = 8,
};

// /Script/Icarus.ERefundPermission
UENUM()
enum class ERefundPermission : uint8
{
    Inherit = 0,
    Block = 1,
    Allow = 2,
};

// /Script/Icarus.ERefundTalentResponse
UENUM()
enum class ERefundTalentResponse : uint8
{
    Invalid = 0,
    Success = 1,
    NullModel = 2,
    NotUnlocked = 3,
    IsDependency = 4,
    InvalidatesRank = 5,
};

// /Script/Icarus.ERelationshipType
UENUM()
enum class ERelationshipType : uint8
{
    Neutral = 0,
    Hostile = 1,
    Friendly = 2,
};

// /Script/Icarus.EReloadType
UENUM()
enum class EReloadType : uint8
{
    Magazine = 0,
    Chambered = 1,
};

// /Script/Icarus.ERemoteUserSetting
UENUM()
enum class ERemoteUserSetting : uint8
{
    DisableCameraFocusOnProcessor = 0,
};

// /Script/Icarus.ERepairItemTier
UENUM()
enum class ERepairItemTier : uint8
{
    RepairTierUnknown = 0,
    RepairTier1 = 1,
    RepairTier2 = 2,
    RepairTier3 = 3,
    RepairTier4 = 4,
    RepairTier5 = 5,
    RepairTierWorkshop = 6,
};

// /Script/Icarus.ERequestPlayerPersonaErrorCode
UENUM()
enum class ERequestPlayerPersonaErrorCode : uint8
{
    NoError = 0,
    InvalidId = 1,
    RequestTimedOut = 2,
};

// /Script/Icarus.ERequestResourceComponentDataSource
UENUM()
enum class ERequestResourceComponentDataSource : uint8
{
    ViewTrace = 0,
    OpenUI = 1,
};

// /Script/Icarus.EResourceLibraryExec
UENUM()
enum class EResourceLibraryExec : uint8
{
    Valid = 0,
    Invalid = 1,
};

// /Script/Icarus.EResourceNetworkFlowType
UENUM()
enum class EResourceNetworkFlowType : uint8
{
    Consume = 0,
    Produce = 1,
    Store = 2,
};

// /Script/Icarus.EResumeStep
UENUM()
enum class EResumeStep : uint8
{
    None = 0,
    AskHost = 1,
    AskJoin = 2,
    ShouldHost = 3,
    ShouldJoin = 4,
    ShouldMismatch = 5,
};

// /Script/Icarus.ERocketPartConnectionType
UENUM()
enum class ERocketPartConnectionType : uint8
{
    Undefined = 0,
    MK1_TOP = 1,
    MK1_BOTTOM = 2,
    MK2_TOP = 3,
    MK2_BOTTOM = 4,
};

// /Script/Icarus.ERocketPartType
UENUM()
enum class ERocketPartType : uint8
{
    Undefined = 0,
};

// /Script/Icarus.ERocketState
UENUM()
enum class ERocketState : uint8
{
    Inactive = 0,
    Descending = 1,
    Landed = 2,
    Ascending = 3,
};

// /Script/Icarus.ERollResult
UENUM()
enum class ERollResult : uint8
{
    Success = 0,
    Failure = 1,
};

// /Script/Icarus.ESecondaryItemTypes
UENUM()
enum class ESecondaryItemTypes : uint8
{
    Generic = 0,
    Helmet = 1,
    Chest = 2,
    Gloves = 3,
    Pants = 4,
    Boots = 5,
    Envirosuit = 6,
    FoodResource = 7,
    WaterResource = 8,
    OxygenResource = 9,
    Utility = 10,
    FuelA = 11,
    FuelB = 12,
    FuelC = 13,
};

// /Script/Icarus.ESessionFilterState
UENUM()
enum class ESessionFilterState : uint8
{
    None = 0,
    ShowOnly = 1,
    HideOnly = 2,
};

// /Script/Icarus.ESessionSearchType
UENUM()
enum class ESessionSearchType : uint8
{
    PlayerHosted = 0,
    Dedicated = 1,
};

// /Script/Icarus.ESessionSortDirection
UENUM()
enum class ESessionSortDirection : uint8
{
    Ascending = 0,
    Descending = 1,
};

// /Script/Icarus.ESessionSortType
UENUM()
enum class ESessionSortType : uint8
{
    None = 0,
    LobbyName = 1,
    ProspectName = 2,
    Duration = 3,
    Difficulty = 4,
    PlayerCount = 5,
    Ping = 6,
    Hardcore = 7,
};

// /Script/Icarus.ESetDataSuccess
UENUM()
enum class ESetDataSuccess : uint8
{
    Success = 0,
    Failed = 1,
};

// /Script/Icarus.ESettingType
UENUM()
enum class ESettingType : uint8
{
    Bool = 0,
    Int = 1,
    Float = 2,
    Enum = 3,
    String = 4,
};

// /Script/Icarus.ESettingsCategory
UENUM()
enum class ESettingsCategory : uint8
{
    Display = 0,
    Audio = 1,
    Gameplay = 2,
    Controls = 3,
};

// /Script/Icarus.ESettlementBoundsBuildRule
UENUM()
enum class ESettlementBoundsBuildRule : uint8
{
    BuildWithinSettlement = 0,
    BuildOutsideSettlement = 1,
    BuildAnywhere = 2,
};

// /Script/Icarus.ESettlementBuildState
UENUM()
enum class ESettlementBuildState : uint8
{
    NotStarted = 0,
    Scheduled = 1,
    InProgress = 2,
    Complete = 3,
    Damaged = 4,
    Destroyed = 5,
};

// /Script/Icarus.ESettlementNPCActivity
UENUM()
enum class ESettlementNPCActivity : uint8
{
    Work = 0,
    Eat = 1,
    Sleep = 2,
    Idle = 3,
    UnderAttack = 4,
};

// /Script/Icarus.ESettlementNPCAilment
UENUM()
enum class ESettlementNPCAilment : uint8
{
    None = 0,
    Sick = 1,
    Injured = 2,
};

// /Script/Icarus.ESettlementTaskOrigin
UENUM()
enum class ESettlementTaskOrigin : uint8
{
    Pooled = 0,
    ActivityDefault = 1,
    IncapacitatedOverride = 2,
    BehaviourOverride = 3,
};

// /Script/Icarus.ESettlementVisitorLeaveReason
UENUM()
enum class ESettlementVisitorLeaveReason : uint8
{
    Rejected = 0,
    StayExpired = 1,
};

// /Script/Icarus.EShadingSetting
UENUM()
enum class EShadingSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EShadowFilterMethodSetting
UENUM()
enum class EShadowFilterMethodSetting : uint8
{
    PCF = 0,
    PCSS = 1,
    NumSettings = 2,
    Custom = 255,
};

// /Script/Icarus.EShadowsSetting
UENUM()
enum class EShadowsSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.ESkyboxQualitySetting
UENUM()
enum class ESkyboxQualitySetting : uint8
{
    Low = 0,
    Normal = 1,
    NumSettings = 2,
    Custom = 255,
};

// /Script/Icarus.ESleepResult
UENUM()
enum class ESleepResult : uint8
{
    Valid = 0,
    InvalidTime = 1,
};

// /Script/Icarus.ESplineLoopDirection
UENUM()
enum class ESplineLoopDirection : uint8
{
    Undetermined = 0,
    Anticlockwise = 1,
    Clockwise = 2,
};

// /Script/Icarus.EStaminaBracket
UENUM()
enum class EStaminaBracket : uint8
{
    Empty = 0,
    Low = 1,
    Normal = 2,
    Full = 3,
};

// /Script/Icarus.EStatDisplayOperation
UENUM()
enum class EStatDisplayOperation : uint8
{
    None = 0,
    Multiply = 1,
    Division = 2,
    Addition = 3,
};

// /Script/Icarus.EStatSources
UENUM()
enum class EStatSources : uint8
{
    Base = 0,
    FromServer = 1,
    Armour = 2,
    Buff = 3,
    Item = 4,
    Durable = 5,
    Buildable = 6,
    DropShip = 7,
    Attributes = 8,
    Perks = 9,
    Projectile = 10,
    GOAP = 11,
    EquippedItems = 12,
    MapManager = 13,
    ArmourSetBonus = 14,
    AIManager = 15,
    Talents = 16,
    Biome = 17,
    TimeOfDay = 18,
    Weather = 19,
    BackingStatsContainer = 20,
    Weight = 21,
    World = 22,
    Ruleset = 23,
    AISetup = 24,
    AISpawner = 25,
    EpicCreature = 26,
    DamageEnabledAnimNotify = 27,
    BTTaskPerformAction = 28,
    Input = 29,
    GOAPAction = 30,
    CriticalHit = 31,
    GenericBehaviourTree = 32,
    Alteration = 33,
    TamingComponent = 34,
    Atmosphere = 35,
    Shield = 36,
    Mount = 37,
    CreatureModifiers = 38,
    BestiaryProgress = 39,
    IcarusMountCharacter = 40,
    Movement = 41,
    OffHandActor = 42,
    InstancedLevel = 43,
    Actionable = 44,
    Genetics = 45,
    Settlement = 46,
    SettlementTrait = 47,
    SettlementSkill = 48,
};

// /Script/Icarus.EStateRecorderOwnerResolvePolicy
UENUM()
enum class EStateRecorderOwnerResolvePolicy : uint8
{
    FindOnly = 0,
    RespawnOnly = 1,
    FindOrRespawn = 2,
    ManuallyResolved = 3,
};

// /Script/Icarus.EStealthAttackType
UENUM()
enum class EStealthAttackType : uint8
{
    NoStealth = 0,
    PartialStealth = 1,
    FullStealth = 2,
};

// /Script/Icarus.ESteamSearchType
UENUM()
enum class ESteamSearchType : uint8
{
    Internet = 0,
    Favorites = 1,
    History = 2,
    Spectate = 3,
    Lan = 4,
    Friends = 5,
};

// /Script/Icarus.ESuperResolutionSetting
UENUM()
enum class ESuperResolutionSetting : uint8
{
    Off = 0,
    Auto = 1,
    Quality = 2,
    Balanced = 3,
    Performance = 4,
    Ultra_Performance = 5,
    NumSettings = 6,
    Custom = 255,
};

// /Script/Icarus.ESurfaceFMODParam
UENUM()
enum class ESurfaceFMODParam : uint8
{
    Default = 0,
    Dirt = 1,
    Sand = 2,
    Grass = 3,
    Wood = 4,
    Rock = 5,
    Plastic = 6,
    Metal = 7,
    Carpet = 8,
    Snow = 9,
    Water = 10,
    Gravel = 11,
    Flesh = 12,
    Concrete = 13,
    Mud = 14,
    Ice = 15,
    Tree = 16,
    VoxelRock = 17,
    VoxelMetal = 18,
    Bush = 19,
    Glass = 20,
    Thatch = 21,
    Cactus = 22,
    Bone = 23,
    CorrugatedIron = 24,
    Lava = 25,
    Slime = 26,
};

// /Script/Icarus.ESurveyLaserFMODParam
UENUM()
enum class ESurveyLaserFMODParam : uint8
{
    LaserOff = 0,
    LaserOn = 1,
};

// /Script/Icarus.ESurveyTransmitFMODParam
UENUM()
enum class ESurveyTransmitFMODParam : uint8
{
    NotTransmitting = 0,
    Transmitting = 1,
};

// /Script/Icarus.ESurvivalConsumableType
UENUM()
enum class ESurvivalConsumableType : uint8
{
    Food = 0,
    Water = 1,
    Oxygen = 2,
};

// /Script/Icarus.ESurvivalStatType
UENUM()
enum class ESurvivalStatType : uint8
{
    Food = 0,
    Water = 1,
    Oxygen = 2,
};

// /Script/Icarus.ETagRequirement
UENUM()
enum class ETagRequirement : uint8
{
    HasAllTags = 0,
    HasAnyTags = 1,
};

// /Script/Icarus.ETalentModelStorage
UENUM()
enum class ETalentModelStorage : uint8
{
    None = 0,
    Character = 1,
    Account = 2,
    Creature = 3,
    World = 4,
    Settlement = 5,
};

// /Script/Icarus.ETalentNodeType
UENUM()
enum class ETalentNodeType : uint8
{
    Talent = 0,
    Reroute = 1,
    MutuallyExclusive = 2,
};

// /Script/Icarus.ETalentState
UENUM()
enum class ETalentState : uint8
{
    Locked = 0,
    Available = 1,
    Unlocked = 2,
    Completed = 3,
};

// /Script/Icarus.ETamedCreatureType
UENUM()
enum class ETamedCreatureType : uint8
{
    Juvenile = 0,
    TamedCreature = 1,
    Both = 2,
};

// /Script/Icarus.ETamedState
UENUM()
enum class ETamedState : uint8
{
    NotTamed = 0,
    Tamed = 1,
    Domesticated = 2,
};

// /Script/Icarus.ETamingTemperatureState
UENUM()
enum class ETamingTemperatureState : uint8
{
    JustRight = 0,
    TooHot = 1,
    TooCold = 2,
};

// /Script/Icarus.ETargetRangeState
UENUM()
enum class ETargetRangeState : uint8
{
    Waiting = 0,
    Active = 1,
};

// /Script/Icarus.ETerrainAnchorState
UENUM()
enum class ETerrainAnchorState : uint8
{
    Undefined = 0,
    Valid = 1,
    Invalid = 2,
};

// /Script/Icarus.ETestRailState
UENUM()
enum class ETestRailState : uint8
{
    Inactive = 0,
    Initialising = 1,
    Running = 2,
    Complete = 3,
};

// /Script/Icarus.ETexturesSetting
UENUM()
enum class ETexturesSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.ETowerMinigameFMODParam
UENUM()
enum class ETowerMinigameFMODParam : uint8
{
    Finding = 0,
    Found = 1,
};

// /Script/Icarus.ETrackerSetType
UENUM()
enum class ETrackerSetType : uint8
{
    Overwrite = 0,
    KeepHighest = 1,
};

// /Script/Icarus.ETreeDetachContextFMODParam
UENUM()
enum class ETreeDetachContextFMODParam : uint8
{
    Collision = 0,
    PlayerCollision = 1,
    PlayerActionIndirect = 2,
    PlayerActionDirect = 3,
};

// /Script/Icarus.ETreePrimitiveDetachContext
UENUM()
enum class ETreePrimitiveDetachContext : uint8
{
    None = 0,
    PlayerAction_Direct = 1,
    PlayerAction_Indirect = 2,
    Collision = 3,
    Fire = 4,
    Storm = 5,
};

// /Script/Icarus.ETreePrimitiveItemReplaceMethod
UENUM()
enum class ETreePrimitiveItemReplaceMethod : uint8
{
    None = 0,
    SpawnWorldItem = 1,
    DirectIntoInventory = 2,
};

// /Script/Icarus.ETreePrimitiveType
UENUM()
enum class ETreePrimitiveType : uint8
{
    None = 0,
    Root = 1,
    Trunk = 2,
    Branch = 3,
    Leaf = 4,
    Socketable = 5,
};

// /Script/Icarus.EUVWrapMethod
UENUM()
enum class EUVWrapMethod : uint8
{
    UV_TripleProjection = 0,
    UV_ZProjection = 1,
    UV_Spherical = 2,
};

// /Script/Icarus.EViewDistanceSetting
UENUM()
enum class EViewDistanceSetting : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    NumSettings = 5,
    Custom = 255,
};

// /Script/Icarus.EViewTraceHitType
UENUM()
enum class EViewTraceHitType : uint8
{
    None = 0,
    LineTrace = 1,
    VolumeTrace = 2,
};

// /Script/Icarus.EViewTraceResultPriority
UENUM()
enum class EViewTraceResultPriority : uint8
{
    Blocking = 0,
    Ignore = 1,
    Low = 2,
    Normal = 3,
    High = 4,
};

// /Script/Icarus.EVocalisationInterruptType
UENUM()
enum class EVocalisationInterruptType : uint8
{
    Interrupt = 0,
    Cancel = 1,
    Queue = 2,
};

// /Script/Icarus.EVocalisationPlayResult
UENUM()
enum class EVocalisationPlayResult : uint8
{
    Cancelled = 0,
    Played = 1,
    Queued = 2,
};

// /Script/Icarus.EVocalisationPriority
UENUM()
enum class EVocalisationPriority : uint8
{
    Lowest = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Highest = 4,
};

// /Script/Icarus.EVoxelMinedState
UENUM()
enum class EVoxelMinedState : uint8
{
    NotMined = 0,
    PartiallyMined = 1,
    FullyMined = 2,
};

// /Script/Icarus.EVoxelResourceCategory
UENUM()
enum class EVoxelResourceCategory : uint8
{
    None = 0,
    Stone = 1,
    Metal = 2,
    Oxite = 3,
    Copper = 4,
    Gold = 5,
    Bauxite = 6,
    Sulfur = 7,
    Silica = 8,
    Ice = 9,
    Platinum = 10,
    Titanium = 11,
    Coal = 12,
    Exotic_A = 13,
    Salt = 14,
    Limestone = 15,
    Lithium = 16,
    Ruby = 17,
    Lead = 18,
};

// /Script/Icarus.EWaterStoredFMODParam
UENUM()
enum class EWaterStoredFMODParam : uint8
{
    None = 0,
    Some = 1,
};

// /Script/Icarus.EWeaponAimingFMODParam
UENUM()
enum class EWeaponAimingFMODParam : uint8
{
    NotAiming = 0,
    Aiming = 1,
};

// /Script/Icarus.EWeaponChargingFMODParam
UENUM()
enum class EWeaponChargingFMODParam : uint8
{
    NotCharging = 0,
    Charging = 1,
};

// /Script/Icarus.EWeaponReloadingFMODParam
UENUM()
enum class EWeaponReloadingFMODParam : uint8
{
    NotReloading = 0,
    Reloading = 1,
};

// /Script/Icarus.EWeaponSilencedFMODParam
UENUM()
enum class EWeaponSilencedFMODParam : uint8
{
    STANDARD = 0,
    SILENCED = 1,
};

// /Script/Icarus.EWorldPlacementType
UENUM()
enum class EWorldPlacementType : uint8
{
    GroundPlacement = 0,
    WallPlacement = 1,
    WaterPlacement = 2,
    GroundOrWallPlacement = 3,
    CeilingPlacement = 4,
    LavaPlacement = 5,
};

// /Script/Icarus.RiverAudioState
UENUM()
enum class RiverAudioState : uint8
{
    InfrequentlyChecking = 0,
    FrequentlyChecking = 1,
    ActivelyUpdating = 2,
};
