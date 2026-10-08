// /Script/Engine.SkelMeshComponentLODInfo
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h

USTRUCT()
struct FSkelMeshComponentLODInfo
{
    UPROPERTY() TArray<bool> HiddenMaterials;  // 0x0000, size 0x10

    // Not reflected:
    FColorVertexBuffer * OverrideVertexColors;  // 0x0010
    FSkinWeightVertexBuffer * OverrideSkinWeights;  // 0x0018
    FSkinWeightVertexBuffer * OverrideProfileSkinWeights;  // 0x0020
    TArray<FVector,TSizedDefaultAllocator<32> > PreSkinningOffsets;  // 0x0028
    TArray<FVector,TSizedDefaultAllocator<32> > PostSkinningOffsets;  // 0x0038
};
