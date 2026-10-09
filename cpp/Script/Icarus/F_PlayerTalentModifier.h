// /Script/Icarus.PlayerTalentModifier
// size 0x30, declared in Icarus/Source/Icarus/Talents/Modifiers/PlayerTalentModiers.h

USTRUCT()
struct FPlayerTalentModifier : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TalentPointModifier;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFlagsMultiRowHandle> RequiredFlags;  // 0x0020, size 0x10
};
