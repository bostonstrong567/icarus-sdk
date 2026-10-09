// /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Derives from: UObject
// size 0x188, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothLODData_Legacy.h

UCLASS()
class UClothLODDataCommon_Legacy : public UObject
{
public:
    UPROPERTY(Deprecated) UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;  // 0x0028, size 0x8
    UPROPERTY() FClothPhysicalMeshData ClothPhysicalMeshData;  // 0x0030, size 0xF8
    UPROPERTY() FClothCollisionData CollisionData;  // 0x0128, size 0x40
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32> > TransitionUpSkinData;  // 0x0168, not reflected
    TArray<FMeshToMeshVertData,TSizedDefaultAllocator<32> > TransitionDownSkinData;  // 0x0178, not reflected
};
