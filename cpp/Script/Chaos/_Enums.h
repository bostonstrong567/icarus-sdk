// /Script/Chaos.EChaosBufferMode
UENUM()
enum class EChaosBufferMode : uint8
{
    Double = 0,
    Triple = 1,
    Num = 2,
    Invalid = 3,
};

// /Script/Chaos.EChaosSolverTickMode
UENUM()
enum class EChaosSolverTickMode : uint8
{
    Fixed = 0,
    Variable = 1,
    VariableCapped = 2,
    VariableCappedWithTarget = 3,
};

// /Script/Chaos.EChaosThreadingMode
UENUM()
enum class EChaosThreadingMode : uint8
{
    DedicatedThread = 0,
    TaskGraph = 1,
    SingleThread = 2,
    Num = 3,
    Invalid = 4,
};

// /Script/Chaos.EClusterUnionMethod
UENUM()
enum class EClusterUnionMethod : uint8
{
    PointImplicit = 0,
    DelaunayTriangulation = 1,
    MinimalSpanningSubsetDelaunayTriangulation = 2,
    PointImplicitAugmentedWithMinimalDelaunay = 3,
    None = 4,
};

// /Script/Chaos.ECollisionTypeEnum
UENUM()
enum class ECollisionTypeEnum : uint8
{
    Chaos_Volumetric = 0,
    Chaos_Surface_Volumetric = 1,
    Chaos_Max = 2,
};

// /Script/Chaos.EEmissionPatternTypeEnum
UENUM()
enum class EEmissionPatternTypeEnum : uint8
{
    Chaos_Emission_Pattern_First_Frame = 0,
    Chaos_Emission_Pattern_On_Demand = 1,
    Chaos_Max = 2,
};

// /Script/Chaos.EFieldCullingOperationType
UENUM()
enum class EFieldCullingOperationType : int32
{
    Field_Culling_Inside = 0,
    Field_Culling_Outside = 1,
    Field_Culling_Operation_Max = 2,
};

// /Script/Chaos.EFieldFalloffType
UENUM()
enum class EFieldFalloffType : int32
{
    Field_FallOff_None = 0,
    Field_Falloff_Linear = 1,
    Field_Falloff_Inverse = 2,
    Field_Falloff_Squared = 3,
    Field_Falloff_Logarithmic = 4,
    Field_Falloff_Max = 5,
};

// /Script/Chaos.EFieldFilterType
UENUM()
enum class EFieldFilterType : int32
{
    Field_Filter_Dynamic = 0,
    Field_Filter_Kinematic = 1,
    Field_Filter_Static = 2,
    Field_Filter_All = 3,
    Field_Filter_Max = 4,
};

// /Script/Chaos.EFieldIntegerType
UENUM()
enum class EFieldIntegerType : int32
{
    Integer_DynamicState = 0,
    Integer_ActivateDisabled = 1,
    Integer_CollisionGroup = 2,
    Integer_PositionAnimated = 3,
    Integer_PositionStatic = 4,
    Integer_TargetMax = 5,
};

// /Script/Chaos.EFieldOperationType
UENUM()
enum class EFieldOperationType : int32
{
    Field_Multiply = 0,
    Field_Divide = 1,
    Field_Add = 2,
    Field_Substract = 3,
    Field_Operation_Max = 4,
};

// /Script/Chaos.EFieldOutputType
UENUM()
enum class EFieldOutputType : int32
{
    Field_Output_Vector = 0,
    Field_Output_Scalar = 1,
    Field_Output_Integer = 2,
    Field_Output_Max = 3,
};

// /Script/Chaos.EFieldPhysicsDefaultFields
UENUM()
enum class EFieldPhysicsDefaultFields : int32
{
    Field_RadialIntMask = 0,
    Field_RadialFalloff = 1,
    Field_UniformVector = 2,
    Field_RadialVector = 3,
    Field_RadialVectorFalloff = 4,
    Field_EFieldPhysicsDefaultFields_Max = 5,
};

// /Script/Chaos.EFieldPhysicsType
UENUM()
enum class EFieldPhysicsType : int32
{
    Field_None = 0,
    Field_DynamicState = 1,
    Field_LinearForce = 2,
    Field_ExternalClusterStrain = 3,
    Field_Kill = 4,
    Field_LinearVelocity = 5,
    Field_AngularVelociy = 6,
    Field_AngularTorque = 7,
    Field_InternalClusterStrain = 8,
    Field_DisableThreshold = 9,
    Field_SleepingThreshold = 10,
    Field_PositionStatic = 11,
    Field_PositionAnimated = 12,
    Field_PositionTarget = 13,
    Field_DynamicConstraint = 14,
    Field_CollisionGroup = 15,
    Field_ActivateDisabled = 16,
    Field_PhysicsType_Max = 17,
};

// /Script/Chaos.EFieldResolutionType
UENUM()
enum class EFieldResolutionType : int32
{
    Field_Resolution_Minimal = 0,
    Field_Resolution_DisabledParents = 1,
    Field_Resolution_Maximum = 2,
    Field_Resolution_Max = 3,
};

// /Script/Chaos.EFieldScalarType
UENUM()
enum class EFieldScalarType : int32
{
    Scalar_ExternalClusterStrain = 0,
    Scalar_Kill = 1,
    Scalar_DisableThreshold = 2,
    Scalar_SleepingThreshold = 3,
    Scalar_InternalClusterStrain = 4,
    Scalar_DynamicConstraint = 5,
    Scalar_TargetMax = 6,
};

// /Script/Chaos.EFieldVectorType
UENUM()
enum class EFieldVectorType : int32
{
    Vector_LinearForce = 0,
    Vector_LinearVelocity = 1,
    Vector_AngularVelocity = 2,
    Vector_AngularTorque = 3,
    Vector_PositionTarget = 4,
    Vector_TargetMax = 5,
};

// /Script/Chaos.EGeometryCollectionCacheType
UENUM()
enum class EGeometryCollectionCacheType : uint8
{
    None = 0,
    Record = 1,
    Play = 2,
    RecordAndPlay = 3,
};

// /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
UENUM()
enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
    Chaos_AngularVelocity = 0,
    Chaos_DynamicState = 1,
    Chaos_LinearVelocity = 2,
    Chaos_InitialAngularVelocity = 3,
    Chaos_InitialLinearVelocity = 4,
    Chaos_CollisionGroup = 5,
    Chaos_LinearForce = 6,
    Chaos_AngularTorque = 7,
    Chaos_Max = 8,
};

// /Script/Chaos.EImplicitTypeEnum
UENUM()
enum class EImplicitTypeEnum : uint8
{
    Chaos_Implicit_Box = 0,
    Chaos_Implicit_Sphere = 1,
    Chaos_Implicit_Capsule = 2,
    Chaos_Implicit_LevelSet = 3,
    Chaos_Implicit_None = 4,
    Chaos_Max = 5,
};

// /Script/Chaos.EInitialVelocityTypeEnum
UENUM()
enum class EInitialVelocityTypeEnum : uint8
{
    Chaos_Initial_Velocity_User_Defined = 0,
    Chaos_Initial_Velocity_None = 1,
    Chaos_Max = 2,
};

// /Script/Chaos.EObjectStateTypeEnum
UENUM()
enum class EObjectStateTypeEnum : uint8
{
    Chaos_NONE = 0,
    Chaos_Object_Sleeping = 1,
    Chaos_Object_Kinematic = 2,
    Chaos_Object_Static = 3,
    Chaos_Object_Dynamic = 4,
    Chaos_Object_UserDefined = 100,
    Chaos_Max = 101,
};

// /Script/Chaos.ESetMaskConditionType
UENUM()
enum class ESetMaskConditionType : int32
{
    Field_Set_Always = 0,
    Field_Set_IFF_NOT_Interior = 1,
    Field_Set_IFF_NOT_Exterior = 2,
    Field_MaskCondition_Max = 3,
};

// /Script/Chaos.EWaveFunctionType
UENUM()
enum class EWaveFunctionType : int32
{
    Field_Wave_Cosine = 0,
    Field_Wave_Gaussian = 1,
    Field_Wave_Falloff = 2,
    Field_Wave_Decay = 3,
    Field_Wave_Max = 4,
};
