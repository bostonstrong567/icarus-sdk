// /Script/CoreUObject.AssetData
// size 0x60, declared in Engine/Source/Runtime/CoreUObject/Public/AssetRegistry/AssetData.h

USTRUCT()
struct FAssetData
{
    UPROPERTY(Transient, BlueprintReadOnly) FName ObjectPath;  // 0x0000, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) FName PackageName;  // 0x0008, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) FName PackagePath;  // 0x0010, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) FName AssetName;  // 0x0018, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) FName AssetClass;  // 0x0020, size 0x8

    // Not reflected:
    FAssetDataTagMapSharedView TagsAndValues;  // 0x0028
    TSharedPtr<FAssetBundleData,1> TaggedAssetBundles;  // 0x0030
    TArray<int,TInlineAllocator<2,TSizedDefaultAllocator<32> > > ChunkIDs;  // 0x0040
    uint32 PackageFlags;  // 0x0058
};
