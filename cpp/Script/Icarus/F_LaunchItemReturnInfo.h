// /Script/Icarus.LaunchItemReturnInfo
// size 0x20, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

USTRUCT()
struct FLaunchItemReturnInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString OwningPlayerID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Items;  // 0x0010, size 0x10
};
