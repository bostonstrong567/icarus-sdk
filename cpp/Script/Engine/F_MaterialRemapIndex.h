// /Script/Engine.MaterialRemapIndex
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FMaterialRemapIndex
{
public:
    UPROPERTY() uint32 ImportVersionKey;  // 0x0000, size 0x4
    UPROPERTY() TArray<int32> MaterialRemap;  // 0x0008, size 0x10
};
