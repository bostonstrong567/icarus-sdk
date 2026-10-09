// /Script/Icarus.AnimNode_SpeedWarping3D
// size 0xF0, declared in Icarus/Source/Icarus/Animation/AnimNode_SpeedWarping3D.h

USTRUCT()
struct FAnimNode_SpeedWarping3D : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSpeedWarping3DLimbDefinition> LimbDefinitions;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBoneControlSpace> Space;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> TraceProfile;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Direction;  // 0x00DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpeedScaling;  // 0x00E8, size 0x4
};
