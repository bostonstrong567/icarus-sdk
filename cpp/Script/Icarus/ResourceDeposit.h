// /Script/Icarus.ResourceDeposit
// Derives from: AIcarusActor > AActor > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Objects/ResourceDeposit.h

UCLASS(Config=Engine)
class AResourceDeposit : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ResourceRemaining;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FOreDepositRowHandle Type;  // 0x02C4, size 0x18
};
