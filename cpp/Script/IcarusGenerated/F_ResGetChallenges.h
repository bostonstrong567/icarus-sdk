// /Script/IcarusGenerated.ResGetChallenges
// size 0x18, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/GetChallengesCallbackProxyGen.generated.h

USTRUCT()
struct FResGetChallenges
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FActiveChallenge> Challenges;  // 0x0008, size 0x10
};
