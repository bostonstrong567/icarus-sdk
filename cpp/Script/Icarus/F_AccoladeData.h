// /Script/Icarus.AccoladeData
// size 0x100, declared in Icarus/Source/Icarus/DataStructs/AccoladeData.h

USTRUCT()
struct FAccoladeData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAccoladeImpl> AccoladeImpl;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerAccoladeCategoriesEnum Category;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerTrackersRowHandle Tracker;  // 0x00A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer Tags;  // 0x00C0, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FRowHandle> ExtraDatas;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GoalCount;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SteamAchievementId;  // 0x00F4, size 0x8
};
