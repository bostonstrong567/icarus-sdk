// /Script/Engine.ClothPhysicsProperties_Legacy
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FClothPhysicsProperties_Legacy
{
    UPROPERTY() float VerticalResistance;  // 0x0000, size 0x4
    UPROPERTY() float HorizontalResistance;  // 0x0004, size 0x4
    UPROPERTY() float BendResistance;  // 0x0008, size 0x4
    UPROPERTY() float ShearResistance;  // 0x000C, size 0x4
    UPROPERTY() float Friction;  // 0x0010, size 0x4
    UPROPERTY() float Damping;  // 0x0014, size 0x4
    UPROPERTY() float TetherStiffness;  // 0x0018, size 0x4
    UPROPERTY() float TetherLimit;  // 0x001C, size 0x4
    UPROPERTY() float Drag;  // 0x0020, size 0x4
    UPROPERTY() float StiffnessFrequency;  // 0x0024, size 0x4
    UPROPERTY() float GravityScale;  // 0x0028, size 0x4
    UPROPERTY() float MassScale;  // 0x002C, size 0x4
    UPROPERTY() float InertiaBlend;  // 0x0030, size 0x4
    UPROPERTY() float SelfCollisionThickness;  // 0x0034, size 0x4
    UPROPERTY() float SelfCollisionSquashScale;  // 0x0038, size 0x4
    UPROPERTY() float SelfCollisionStiffness;  // 0x003C, size 0x4
    UPROPERTY() float SolverFrequency;  // 0x0040, size 0x4
    UPROPERTY() float FiberCompression;  // 0x0044, size 0x4
    UPROPERTY() float FiberExpansion;  // 0x0048, size 0x4
    UPROPERTY() float FiberResistance;  // 0x004C, size 0x4
};
