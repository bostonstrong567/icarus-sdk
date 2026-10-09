// /Script/Icarus.ContextMenuItemData
// size 0xB0, declared in Icarus/Source/Icarus/UI/ContextMenuFactory.h

USTRUCT()
struct FContextMenuItemData
{
public:
    UPROPERTY(BlueprintReadWrite) FName ItemIdentifier;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadWrite) int32 ItemPayload;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) FContextMenuGroupTypesRowHandle GroupType;  // 0x000C, size 0x18
    UPROPERTY(BlueprintReadWrite) FText Label;  // 0x0028, size 0x18
    UPROPERTY(BlueprintReadWrite) int32 StackCount;  // 0x0040, size 0x4
    UPROPERTY(BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(BlueprintReadWrite) bool bEnabled;  // 0x0070, size 0x1
    UPROPERTY(BlueprintReadWrite) FFeatureLevelsRowHandle FeatureLevel;  // 0x0074, size 0x18
    UPROPERTY(BlueprintReadOnly) FContextMenuItemClickedDelegate ItemClickedDelegate;  // 0x008C, size 0x10
    UPROPERTY(BlueprintReadWrite) TArray<UWidget*> ContextWidgets;  // 0x00A0, size 0x10
};
