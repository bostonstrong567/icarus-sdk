// /Script/Icarus.SessionFilters
// size 0x18, declared in Icarus/Source/Icarus/Subsystems/GameInstance/MatchmakingSubsystem.h

USTRUCT()
struct FSessionFilters
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionFilterState Friends;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionFilterState Locked;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionFilterState Version;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SearchString;  // 0x0008, size 0x10
};
