// /Script/Engine.ClothingAssetData_Legacy
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FClothingAssetData_Legacy
{
    UPROPERTY() FName AssetName;  // 0x0000, size 0x8
    UPROPERTY() FString ApexFileName;  // 0x0008, size 0x10
    UPROPERTY() bool bClothPropertiesChanged;  // 0x0018, size 0x1
    UPROPERTY() FClothPhysicsProperties_Legacy PhysicsProperties;  // 0x001C, size 0x50

    // Not reflected:
    nvidia::apex::ClothingAsset * ApexClothingAsset;  // 0x0070
};
