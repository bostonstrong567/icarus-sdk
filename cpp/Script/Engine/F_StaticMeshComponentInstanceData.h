// /Script/Engine.StaticMeshComponentInstanceData
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

USTRUCT()
struct FStaticMeshComponentInstanceData : public FPrimitiveComponentInstanceData
{
    UPROPERTY() UStaticMesh* StaticMesh;  // 0x0100, size 0x8
    UPROPERTY() TArray<FStaticMeshVertexColorLODData> VertexColorLODs;  // 0x0108, size 0x10
    UPROPERTY() TArray<FGuid> CachedStaticLighting;  // 0x0118, size 0x10
    UPROPERTY() TArray<FStreamingTextureBuildInfo> StreamingTextureData;  // 0x0128, size 0x10
};
