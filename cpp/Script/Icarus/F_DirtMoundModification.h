// /Script/Icarus.DirtMoundModification
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/DirtMoundModificationsLibrary.generated.h

USTRUCT()
struct FDirtMoundModification : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CropPlotTier;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle MatchingItemTagQuery;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle Modifier;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierEffectiveness;  // 0x004C, size 0x4
};
