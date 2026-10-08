// /Script/Engine.MeshInstancingSettings
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/MeshMerging.h

USTRUCT()
struct FMeshInstancingSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorClassToUse;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InstanceReplacementThreshold;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMeshInstancingReplacementMethod MeshReplacementMethod;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSkipMeshesWithVertexColors;  // 0x000D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseHLODVolumes;  // 0x000E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UInstancedStaticMeshComponent> ISMComponentToUse;  // 0x0010, size 0x8
};
