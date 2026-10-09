// /Script/Icarus.Challenge
// size 0x70, declared in Icarus/Source/Icarus/Systems/Challenges/Challenge.h

USTRUCT()
struct FChallenge : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ChallengeName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ChallengeDescription;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EChallengeTypes Type;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredCount;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer OptionalRequiredTags;  // 0x0050, size 0x20
};
