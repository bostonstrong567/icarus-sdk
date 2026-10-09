// /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// size 0x30, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothLODData_Legacy.h

USTRUCT()
struct FClothParameterMask_Legacy
{
public:
    UPROPERTY() FName MaskName;  // 0x0000, size 0x8
    UPROPERTY() EWeightMapTargetCommon CurrentTarget;  // 0x0008, size 0x1
    UPROPERTY(Deprecated) float MaxValue;  // 0x000C, size 0x4
    UPROPERTY(Deprecated) float MinValue;  // 0x0010, size 0x4
    UPROPERTY() TArray<float> Values;  // 0x0018, size 0x10
    UPROPERTY() bool bEnabled;  // 0x0028, size 0x1
};
