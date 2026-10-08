// /Script/Icarus.DLCPackageData
// size 0x100, declared in Icarus/Source/Icarus/DataStructs/DLCPackageData.h

USTRUCT()
struct FDLCPackageData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PackageID;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DLCName;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString WebsiteAddress;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText HoverText;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DLCIconOwned;  // 0x0088, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> DLCIconUnowned;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> CapsuleImage;  // 0x00D8, size 0x28
};
