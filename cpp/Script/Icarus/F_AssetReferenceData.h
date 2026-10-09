// /Script/Icarus.AssetReferenceData
// size 0x88, declared in Icarus/Source/Icarus/DataStructs/AssetReferenceData.h

USTRUCT()
struct FAssetReferenceData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAssetType AssetType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UObject> SoftClassPtr;  // 0x0020, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UObject> SoftObjectPtr;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> HardClassPtr;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* HardObjectPtr;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHardReference;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPreload;  // 0x0081, size 0x1
};
