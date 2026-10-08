// /Script/Niagara.ENCPoolMethod
UENUM()
enum class ENCPoolMethod : uint8
{
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
};

// /Script/Niagara.ENDIExport_GPUAllocationMode
UENUM()
enum class ENDIExport_GPUAllocationMode : uint8
{
    FixedSize = 0,
    PerParticle = 1,
};

// /Script/Niagara.ENDILandscape_SourceMode
UENUM()
enum class ENDILandscape_SourceMode : uint8
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
};

// /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
UENUM()
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : int32
{
    Full = 0,
    Half = 1,
};

// /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
UENUM()
enum class ENDISkelMesh_GpuMaxInfluences : int32
{
    AllowMax4 = 0,
    AllowMax8 = 1,
    Unlimited = 2,
};

// /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
UENUM()
enum class ENDISkelMesh_GpuUniformSamplingFormat : int32
{
    Full = 0,
    Limited_24_8 = 1,
    Limited_23_9 = 2,
};

// /Script/Niagara.ENDISkeletalMesh_SkinningMode
UENUM()
enum class ENDISkeletalMesh_SkinningMode : uint8
{
    Invalid = 255,
    None = 0,
    SkinOnTheFly = 1,
    PreSkin = 2,
};

// /Script/Niagara.ENDISkeletalMesh_SourceMode
UENUM()
enum class ENDISkeletalMesh_SourceMode : uint8
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
};

// /Script/Niagara.ENDIStaticMesh_SourceMode
UENUM()
enum class ENDIStaticMesh_SourceMode : uint8
{
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
};

// /Script/Niagara.ENiagaraAgeUpdateMode
UENUM()
enum class ENiagaraAgeUpdateMode : uint8
{
    TickDeltaTime = 0,
    DesiredAge = 1,
    DesiredAgeNoSeek = 2,
};

// /Script/Niagara.ENiagaraBakerViewMode
UENUM()
enum class ENiagaraBakerViewMode : int32
{
    Perspective = 0,
    OrthoFront = 1,
    OrthoBack = 2,
    OrthoLeft = 3,
    OrthoRight = 4,
    OrthoTop = 5,
    OrthoBottom = 6,
    Num = 7,
};

// /Script/Niagara.ENiagaraBindingSource
UENUM()
enum class ENiagaraBindingSource : int32
{
    ImplicitFromSource = 0,
    ExplicitParticles = 1,
    ExplicitEmitter = 2,
    ExplicitSystem = 3,
    ExplicitUser = 4,
    MaxBindingSource = 5,
};

// /Script/Niagara.ENiagaraCollisionMode
UENUM()
enum class ENiagaraCollisionMode : uint8
{
    None = 0,
    SceneGeometry = 1,
    DepthBuffer = 2,
    DistanceField = 3,
};

// /Script/Niagara.ENiagaraCompileUsageStaticSwitch
UENUM()
enum class ENiagaraCompileUsageStaticSwitch : uint8
{
    Spawn = 0,
    Update = 1,
    Event = 2,
    SimulationStage = 3,
    Default = 4,
};

// /Script/Niagara.ENiagaraCoordinateSpace
UENUM()
enum class ENiagaraCoordinateSpace : uint32
{
    Simulation = 0,
    World = 1,
    Local = 2,
};

// /Script/Niagara.ENiagaraCullReaction
UENUM()
enum class ENiagaraCullReaction : int32
{
    Deactivate = 0,
    DeactivateImmediate = 1,
    DeactivateResume = 2,
    DeactivateImmediateResume = 3,
};

// /Script/Niagara.ENiagaraDataSetType
UENUM()
enum class ENiagaraDataSetType : uint8
{
    ParticleData = 0,
    Shared = 1,
    Event = 2,
};

// /Script/Niagara.ENiagaraDebugHudFont
UENUM()
enum class ENiagaraDebugHudFont : int32
{
    Small = 0,
    Normal = 1,
};

// /Script/Niagara.ENiagaraDebugHudHAlign
UENUM()
enum class ENiagaraDebugHudHAlign : uint8
{
    Left = 0,
    Center = 1,
    Right = 2,
};

// /Script/Niagara.ENiagaraDebugHudVAlign
UENUM()
enum class ENiagaraDebugHudVAlign : uint8
{
    Top = 0,
    Center = 1,
    Bottom = 2,
};

// /Script/Niagara.ENiagaraDebugHudVerbosity
UENUM()
enum class ENiagaraDebugHudVerbosity : int32
{
    None = 0,
    Basic = 1,
    Verbose = 2,
};

// /Script/Niagara.ENiagaraDebugPlaybackMode
UENUM()
enum class ENiagaraDebugPlaybackMode : uint8
{
    Play = 0,
    Loop = 1,
    Paused = 2,
    Step = 3,
};

// /Script/Niagara.ENiagaraDefaultMode
UENUM()
enum class ENiagaraDefaultMode : uint8
{
    Value = 0,
    Binding = 1,
    Custom = 2,
    FailIfPreviouslyNotSet = 3,
};

// /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
UENUM()
enum class ENiagaraDefaultRendererMotionVectorSetting : int32
{
    Precise = 0,
    Approximate = 1,
};

// /Script/Niagara.ENiagaraExecutionState
UENUM()
enum class ENiagaraExecutionState : uint32
{
    Active = 0,
    Inactive = 1,
    InactiveClear = 2,
    Complete = 3,
    Disabled = 4,
    Num = 5,
};

// /Script/Niagara.ENiagaraExecutionStateSource
UENUM()
enum class ENiagaraExecutionStateSource : uint32
{
    Scalability = 0,
    Internal = 1,
    Owner = 2,
    InternalCompletion = 3,
};

// /Script/Niagara.ENiagaraFunctionDebugState
UENUM()
enum class ENiagaraFunctionDebugState : uint8
{
    NoDebug = 0,
    Basic = 1,
};

// /Script/Niagara.ENiagaraGpuBufferFormat
UENUM()
enum class ENiagaraGpuBufferFormat : uint8
{
    Float = 0,
    HalfFloat = 1,
    UnsignedNormalizedByte = 2,
    Max = 3,
};

// /Script/Niagara.ENiagaraInputNodeUsage
UENUM()
enum class ENiagaraInputNodeUsage : uint8
{
    Undefined = 0,
    Parameter = 1,
    Attribute = 2,
    SystemConstant = 3,
    TranslatorConstant = 4,
    RapidIterationParameter = 5,
};

// /Script/Niagara.ENiagaraIterationSource
UENUM()
enum class ENiagaraIterationSource : uint8
{
    Particles = 0,
    DataInterface = 1,
};

// /Script/Niagara.ENiagaraLegacyTrailWidthMode
UENUM()
enum class ENiagaraLegacyTrailWidthMode : uint8
{
    FromCentre = 0,
    FromFirst = 1,
    FromSecond = 2,
};

// /Script/Niagara.ENiagaraMeshFacingMode
UENUM()
enum class ENiagaraMeshFacingMode : uint8
{
    Default = 0,
    Velocity = 1,
    CameraPosition = 2,
    CameraPlane = 3,
};

// /Script/Niagara.ENiagaraMeshLockedAxisSpace
UENUM()
enum class ENiagaraMeshLockedAxisSpace : uint8
{
    Simulation = 0,
    World = 1,
    Local = 2,
};

// /Script/Niagara.ENiagaraMeshPivotOffsetSpace
UENUM()
enum class ENiagaraMeshPivotOffsetSpace : uint8
{
    Mesh = 0,
    Simulation = 1,
    World = 2,
    Local = 3,
};

// /Script/Niagara.ENiagaraMipMapGeneration
UENUM()
enum class ENiagaraMipMapGeneration : uint8
{
    Disabled = 0,
    PostStage = 1,
    PostSimulate = 2,
};

// /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
UENUM()
enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
    SameScript = 0,
    AllScripts = 1,
};

// /Script/Niagara.ENiagaraModuleDependencyType
UENUM()
enum class ENiagaraModuleDependencyType : uint8
{
    PreDependency = 0,
    PostDependency = 1,
};

// /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
UENUM()
enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
    None = 0,
    Largest = 1,
    Smallest = 2,
    Scalar = 3,
};

// /Script/Niagara.ENiagaraOrientationAxis
UENUM()
enum class ENiagaraOrientationAxis : uint32
{
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
};

// /Script/Niagara.ENiagaraPlatformSelectionState
UENUM()
enum class ENiagaraPlatformSelectionState : uint8
{
    Default = 0,
    Enabled = 1,
    Disabled = 2,
};

// /Script/Niagara.ENiagaraPlatformSetState
UENUM()
enum class ENiagaraPlatformSetState : uint8
{
    Disabled = 0,
    Enabled = 1,
    Active = 2,
    Unknown = 3,
};

// /Script/Niagara.ENiagaraPreviewGridResetMode
UENUM()
enum class ENiagaraPreviewGridResetMode : uint8
{
    Never = 0,
    Individual = 1,
    All = 2,
};

// /Script/Niagara.ENiagaraPythonUpdateScriptReference
UENUM()
enum class ENiagaraPythonUpdateScriptReference : uint8
{
    None = 0,
    ScriptAsset = 1,
    DirectTextEntry = 2,
};

// /Script/Niagara.ENiagaraRendererMotionVectorSetting
UENUM()
enum class ENiagaraRendererMotionVectorSetting : int32
{
    AutoDetect = 0,
    Precise = 1,
    Approximate = 2,
    Disable = 3,
};

// /Script/Niagara.ENiagaraRendererSourceDataMode
UENUM()
enum class ENiagaraRendererSourceDataMode : uint8
{
    Particles = 0,
    Emitter = 1,
};

// /Script/Niagara.ENiagaraRibbonAgeOffsetMode
UENUM()
enum class ENiagaraRibbonAgeOffsetMode : uint8
{
    Scale = 0,
    Clip = 1,
};

// /Script/Niagara.ENiagaraRibbonDrawDirection
UENUM()
enum class ENiagaraRibbonDrawDirection : uint8
{
    FrontToBack = 0,
    BackToFront = 1,
};

// /Script/Niagara.ENiagaraRibbonFacingMode
UENUM()
enum class ENiagaraRibbonFacingMode : uint8
{
    Screen = 0,
    Custom = 1,
    CustomSideVector = 2,
};

// /Script/Niagara.ENiagaraRibbonShapeMode
UENUM()
enum class ENiagaraRibbonShapeMode : uint8
{
    Plane = 0,
    MultiPlane = 1,
    Tube = 2,
    Custom = 3,
};

// /Script/Niagara.ENiagaraRibbonTessellationMode
UENUM()
enum class ENiagaraRibbonTessellationMode : uint8
{
    Automatic = 0,
    Custom = 1,
    Disabled = 2,
};

// /Script/Niagara.ENiagaraRibbonUVDistributionMode
UENUM()
enum class ENiagaraRibbonUVDistributionMode : int32
{
    ScaledUniformly = 0,
    ScaledUsingRibbonSegmentLength = 1,
    TiledOverRibbonLength = 2,
    TiledFromStartOverRibbonLength = 3,
};

// /Script/Niagara.ENiagaraRibbonUVEdgeMode
UENUM()
enum class ENiagaraRibbonUVEdgeMode : int32
{
    SmoothTransition = 0,
    Locked = 1,
};

// /Script/Niagara.ENiagaraScalabilityUpdateFrequency
UENUM()
enum class ENiagaraScalabilityUpdateFrequency : int32
{
    SpawnOnly = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Continuous = 4,
};

// /Script/Niagara.ENiagaraScriptCompileStatus
UENUM()
enum class ENiagaraScriptCompileStatus : uint8
{
    NCS_Unknown = 0,
    NCS_Dirty = 1,
    NCS_Error = 2,
    NCS_UpToDate = 3,
    NCS_BeingCreated = 4,
    NCS_UpToDateWithWarnings = 5,
    NCS_ComputeUpToDateWithWarnings = 6,
    NCS_MAX = 7,
};

// /Script/Niagara.ENiagaraScriptContextStaticSwitch
UENUM()
enum class ENiagaraScriptContextStaticSwitch : uint8
{
    System = 0,
    Emitter = 1,
    Particle = 2,
};

// /Script/Niagara.ENiagaraScriptGroup
UENUM()
enum class ENiagaraScriptGroup : uint8
{
    Particle = 0,
    Emitter = 1,
    System = 2,
    Max = 3,
};

// /Script/Niagara.ENiagaraScriptLibraryVisibility
UENUM()
enum class ENiagaraScriptLibraryVisibility : uint8
{
    Invalid = 0,
    Unexposed = 1,
    Library = 2,
    Hidden = 3,
};

// /Script/Niagara.ENiagaraScriptTemplateSpecification
UENUM()
enum class ENiagaraScriptTemplateSpecification : uint8
{
    None = 0,
    Template = 1,
    Behavior = 2,
};

// /Script/Niagara.ENiagaraScriptUsage
UENUM()
enum class ENiagaraScriptUsage : uint8
{
    Function = 0,
    Module = 1,
    DynamicInput = 2,
    ParticleSpawnScript = 3,
    ParticleSpawnScriptInterpolated = 4,
    ParticleUpdateScript = 5,
    ParticleEventScript = 6,
    ParticleSimulationStageScript = 7,
    ParticleGPUComputeScript = 8,
    EmitterSpawnScript = 9,
    EmitterUpdateScript = 10,
    SystemSpawnScript = 11,
    SystemUpdateScript = 12,
};

// /Script/Niagara.ENiagaraSimTarget
UENUM()
enum class ENiagaraSimTarget : uint8
{
    CPUSim = 0,
    GPUComputeSim = 1,
};

// /Script/Niagara.ENiagaraSortMode
UENUM()
enum class ENiagaraSortMode : uint8
{
    None = 0,
    ViewDepth = 1,
    ViewDistance = 2,
    CustomAscending = 3,
    CustomDecending = 4,
};

// /Script/Niagara.ENiagaraSpriteAlignment
UENUM()
enum class ENiagaraSpriteAlignment : uint8
{
    Unaligned = 0,
    VelocityAligned = 1,
    CustomAlignment = 2,
};

// /Script/Niagara.ENiagaraSpriteFacingMode
UENUM()
enum class ENiagaraSpriteFacingMode : uint8
{
    FaceCamera = 0,
    FaceCameraPlane = 1,
    CustomFacingVector = 2,
    FaceCameraPosition = 3,
    FaceCameraDistanceBlend = 4,
};

// /Script/Niagara.ENiagaraStatDisplayMode
UENUM()
enum class ENiagaraStatDisplayMode : uint8
{
    Percent = 0,
    Absolute = 1,
};

// /Script/Niagara.ENiagaraStatEvaluationType
UENUM()
enum class ENiagaraStatEvaluationType : uint8
{
    Average = 0,
    Maximum = 1,
};

// /Script/Niagara.ENiagaraSystemInstanceState
UENUM()
enum class ENiagaraSystemInstanceState : uint8
{
    None = 0,
    PendingSpawn = 1,
    PendingSpawnPaused = 2,
    Spawning = 3,
    Running = 4,
    Paused = 5,
    Num = 6,
};

// /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
UENUM()
enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
    SetSystemInactive = 0,
    Deactivate = 1,
    None = 2,
};

// /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
UENUM()
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
    ActivateIfInactive = 0,
    None = 1,
};

// /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
UENUM()
enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
    Activate = 0,
};

// /Script/Niagara.ENiagaraTickBehavior
UENUM()
enum class ENiagaraTickBehavior : uint8
{
    UsePrereqs = 0,
    UseComponentTickGroup = 1,
    ForceTickFirst = 2,
    ForceTickLast = 3,
};

// /Script/Niagara.ENiagaraVariantMode
UENUM()
enum class ENiagaraVariantMode : int32
{
    None = 0,
    Object = 1,
    DataInterface = 2,
    Bytes = 3,
};

// /Script/Niagara.EParticleAllocationMode
UENUM()
enum class EParticleAllocationMode : uint8
{
    AutomaticEstimate = 0,
    ManualEstimate = 1,
};

// /Script/Niagara.EScriptExecutionMode
UENUM()
enum class EScriptExecutionMode : uint8
{
    EveryParticle = 0,
    SpawnedParticles = 1,
    SingleParticle = 2,
};

// /Script/Niagara.ESetResolutionMethod
UENUM()
enum class ESetResolutionMethod : int32
{
    Independent = 0,
    MaxAxis = 1,
    CellSize = 2,
};

// /Script/Niagara.EUnusedAttributeBehaviour
UENUM()
enum class EUnusedAttributeBehaviour : uint8
{
    Copy = 0,
    Zero = 1,
    None = 2,
    MarkInvalid = 3,
    PassThrough = 4,
};
