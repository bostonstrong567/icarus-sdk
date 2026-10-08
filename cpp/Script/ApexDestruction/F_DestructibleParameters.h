// /Script/ApexDestruction.DestructibleParameters
// size 0x88, declared in Engine/Plugins/Runtime/ApexDestruction/Source/ApexDestruction/Public/DestructibleMesh.h

USTRUCT()
struct FDestructibleParameters
{
    UPROPERTY(EditAnywhere) FDestructibleDamageParameters DamageParameters;  // 0x0000, size 0x1C
    UPROPERTY(EditAnywhere) FDestructibleDebrisParameters DebrisParameters;  // 0x001C, size 0x2C
    UPROPERTY(EditAnywhere) FDestructibleAdvancedParameters AdvancedParameters;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths;  // 0x0058, size 0x14
    UPROPERTY(EditAnywhere) TArray<FDestructibleDepthParameters> DepthParameters;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) FDestructibleParametersFlag Flags;  // 0x0080, size 0x4
};
