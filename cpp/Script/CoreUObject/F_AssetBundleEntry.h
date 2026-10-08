// /Script/CoreUObject.AssetBundleEntry
// size 0x18, declared in Engine/Source/Runtime/CoreUObject/Public/AssetRegistry/AssetBundleData.h

USTRUCT()
struct FAssetBundleEntry
{
    UPROPERTY() FName BundleName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FSoftObjectPath> BundleAssets;  // 0x0008, size 0x10
};
