// /Script/Engine.PrimaryAssetLabel
// Derives from: UPrimaryDataAsset > UDataAsset > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/PrimaryAssetLabel.h

UCLASS()
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
public:
    UPROPERTY(EditAnywhere) FPrimaryAssetRules Rules;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) uint8 bLabelAssetsInMyDirectory : 1;  // 0x003C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIsRuntimeLabel : 1;  // 0x003C, mask 0x02
    UPROPERTY(EditAnywhere) TArray<TSoftObjectPtr<UObject>> ExplicitAssets;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) FCollectionReference AssetCollection;  // 0x0060, size 0x8
};
