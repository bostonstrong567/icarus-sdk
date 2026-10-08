// /Script/Icarus.DynamicQuest
// size 0x90, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DynamicQuestsLibrary.generated.h

USTRUCT()
struct FDynamicQuest : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Quest;  // 0x0070, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Weighting;  // 0x0088, size 0x4
};
