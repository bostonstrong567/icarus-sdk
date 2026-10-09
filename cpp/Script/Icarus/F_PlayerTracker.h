// /Script/Icarus.PlayerTracker
// size 0x80, declared in Icarus/Source/Icarus/Systems/PlayerTracker/PlayerTracker.h

USTRUCT()
struct FPlayerTracker : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerTrackerCategoriesRowHandle TrackerCategory;  // 0x0048, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FGameplayTag> TagsToTrack;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETagRequirement TagRequirement;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SteamStatId;  // 0x0074, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETrackerSetType SetType;  // 0x007C, size 0x1
};
