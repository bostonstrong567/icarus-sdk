// /Script/ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Derives from: UClothPhysicalMeshDataBase_Legacy > UObject
// size 0x120, declared in Engine/Source/Runtime/ClothingSystemRuntimeNv/Public/ClothPhysicalMeshDataNv_Legacy.h

UCLASS()
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{
public:
    UPROPERTY() TArray<float> MaxDistances;  // 0x00E0, size 0x10
    UPROPERTY() TArray<float> BackstopDistances;  // 0x00F0, size 0x10
    UPROPERTY() TArray<float> BackstopRadiuses;  // 0x0100, size 0x10
    UPROPERTY() TArray<float> AnimDriveMultipliers;  // 0x0110, size 0x10
};
