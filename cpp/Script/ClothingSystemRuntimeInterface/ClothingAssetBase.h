// /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h

UCLASS(Abstract)
class UClothingAssetBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString ImportedFilePath;  // 0x0028, size 0x10
    UPROPERTY() FGuid AssetGuid;  // 0x0038, size 0x10

    // Virtual functions that start here:
    //   BuildSelfCollisionData, GetNumLods, IsValidLod, PostUpdateAllAssets, RefreshBoneMapping
};
