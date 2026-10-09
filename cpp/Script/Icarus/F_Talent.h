// /Script/Icarus.Talent
// size 0x130, declared in Icarus/Source/Icarus/Talents/Model/Data/Talent.h

USTRUCT()
struct FTalent : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETalentNodeType TalentType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0020, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0050, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRowHandle ExtraData;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentTreesRowHandle TalentTree;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Position;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Size;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentReward> Rewards;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTalentsRowHandle> RequiredTalents;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFlagsMultiRowHandle> RequiredFlags;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFlagsMultiRowHandle> ForbiddenFlags;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentRanksRowHandle RequiredRank;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredLevel;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDefaultUnlocked;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELineDrawMethod DrawMethodOverride;  // 0x0115, size 0x1
private:
    FTalentModelsRowHandle TalentModelCache;  // 0x0118, not reflected
};
