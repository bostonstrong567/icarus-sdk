// /Script/Engine.HLODISMComponentDesc
// size 0x20, declared in Engine/Source/Runtime/Engine/Public/HLOD/HLODProxyDesc.h

USTRUCT()
struct FHLODISMComponentDesc
{
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0000, size 0x8
    UPROPERTY() UMaterialInterface* Material;  // 0x0008, size 0x8
    UPROPERTY() TArray<FTransform> Instances;  // 0x0010, size 0x10
};
