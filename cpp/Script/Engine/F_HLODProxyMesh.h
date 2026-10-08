// /Script/Engine.HLODProxyMesh
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/HLOD/HLODProxyMesh.h

USTRUCT()
struct FHLODProxyMesh
{
    UPROPERTY() TLazyObjectPtr<ALODActor> LODActor;  // 0x0000, size 0x1C
    UPROPERTY(EditAnywhere) UStaticMesh* StaticMesh;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) FName Key;  // 0x0028, size 0x8
};
