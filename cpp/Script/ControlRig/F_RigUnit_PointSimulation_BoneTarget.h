// /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
// size 0x14, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_PointSimulation.h

USTRUCT()
struct FRigUnit_PointSimulation_BoneTarget
{
    UPROPERTY(EditAnywhere) FName Bone;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 TranslationPoint;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 PrimaryAimPoint;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 SecondaryAimPoint;  // 0x0010, size 0x4
};
