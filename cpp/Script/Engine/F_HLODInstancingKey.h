// /Script/Engine.HLODInstancingKey
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/LODActor.h

USTRUCT()
struct FHLODInstancingKey
{
public:
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0000, size 0x8
    UPROPERTY() UMaterialInterface* Material;  // 0x0008, size 0x8
};
