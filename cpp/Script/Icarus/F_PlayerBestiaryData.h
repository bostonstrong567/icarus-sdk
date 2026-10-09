// /Script/Icarus.PlayerBestiaryData
// size 0x20, declared in Icarus/Source/Icarus/PlayerData/PlayerBestiaryData.h

USTRUCT()
struct FPlayerBestiaryData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FBestiaryGroupTracking> BestiaryTracking;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FFishTypeTracking> FishTracking;  // 0x0010, size 0x10
};
