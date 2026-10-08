// /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_PointSimulation.h

USTRUCT()
struct FRigUnit_PointSimulation_DebugSettings
{
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float Scale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float CollisionScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) bool bDrawPointsAsSpheres;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere) FLinearColor Color;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FTransform WorldOffset;  // 0x0020, size 0x30
};
