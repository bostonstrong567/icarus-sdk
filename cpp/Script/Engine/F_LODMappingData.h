// /Script/Engine.LODMappingData
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Components/LODSyncComponent.h

USTRUCT()
struct FLODMappingData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> Mapping;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<int32> InverseMapping;  // 0x0010, size 0x10
};
