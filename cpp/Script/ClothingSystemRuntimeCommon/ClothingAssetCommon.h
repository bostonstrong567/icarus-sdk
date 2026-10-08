// /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
// Derives from: UClothingAssetBase > UObject
// size 0xF0, declared in Engine/Source/Runtime/ClothingSystemRuntimeCommon/Public/ClothingAsset.h

UCLASS()
class UClothingAssetCommon : public UClothingAssetBase
{
public:
    UPROPERTY(EditAnywhere) UPhysicsAsset* PhysicsAsset;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<FName, UClothConfigBase*> ClothConfigs;  // 0x0050, size 0x50
    UPROPERTY() TArray<FClothLODDataCommon> LodData;  // 0x00A0, size 0x10
    UPROPERTY() TArray<int32> LodMap;  // 0x00B0, size 0x10
    UPROPERTY() TArray<FName> UsedBoneNames;  // 0x00C0, size 0x10
    UPROPERTY() TArray<int32> UsedBoneIndices;  // 0x00D0, size 0x10
    UPROPERTY() int32 ReferenceBoneIndex;  // 0x00E0, size 0x4
    UPROPERTY() UClothingAssetCustomData* CustomData;  // 0x00E8, size 0x8
};
