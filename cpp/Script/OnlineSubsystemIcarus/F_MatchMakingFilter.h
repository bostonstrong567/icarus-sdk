// /Script/OnlineSubsystemIcarus.MatchMakingFilter
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/OnlineSubsystemIcarusSessionFunctionLibrary.generated.h

USTRUCT()
struct FMatchMakingFilter : public FTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MatchName;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MatchCode;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Description;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FThreshold Threshold;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinPlayer;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxPlayer;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDropInAndOut;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> Maps;  // 0x0048, size 0x10
};
