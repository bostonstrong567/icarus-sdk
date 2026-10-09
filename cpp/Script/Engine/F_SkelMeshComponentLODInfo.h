// /Script/Engine.SkelMeshComponentLODInfo
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h

USTRUCT()
struct FSkelMeshComponentLODInfo
{
public:
    UPROPERTY() TArray<bool> HiddenMaterials;  // 0x0000, size 0x10
    FColorVertexBuffer * OverrideVertexColors;  // 0x0010, not reflected
    FSkinWeightVertexBuffer * OverrideSkinWeights;  // 0x0018, not reflected
    FSkinWeightVertexBuffer * OverrideProfileSkinWeights;  // 0x0020, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > PreSkinningOffsets;  // 0x0028, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > PostSkinningOffsets;  // 0x0038, not reflected
};
