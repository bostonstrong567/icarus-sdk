// /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
// size 0x160, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothLODData.h

USTRUCT()
struct FClothLODDataCommon
{
    UPROPERTY(EditAnywhere) FClothPhysicalMeshData PhysicalMeshData;  // 0x0000, size 0xF8
    UPROPERTY(EditAnywhere) FClothCollisionData CollisionData;  // 0x00F8, size 0x40
    UPROPERTY() bool bUseMultipleInfluences;  // 0x0138, size 0x1
    UPROPERTY() float SkinningKernelRadius;  // 0x013C, size 0x4

    // Not reflected:
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32> > TransitionUpSkinData;  // 0x0140
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32> > TransitionDownSkinData;  // 0x0150
};
