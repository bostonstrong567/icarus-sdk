// /Script/Icarus.TalentArchetype
// size 0xA0, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentArchetype.h

USTRUCT()
struct FTalentArchetype : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentModelsRowHandle Model;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> BackgroundTexture;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredLevel;  // 0x0098, size 0x4
};
