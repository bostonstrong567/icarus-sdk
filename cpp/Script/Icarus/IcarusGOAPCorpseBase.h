// /Script/Icarus.IcarusGOAPCorpseBase
// Derives from: AIcarusCorpse > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5B0, declared in Icarus/Source/Icarus/AI/IcarusGOAPCorpseBase.h

UCLASS(Config=Engine)
class AIcarusGOAPCorpseBase : public AIcarusCorpse
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetupCorpseSettleTime(float NewMaxCorpseSettleTime);  // parameters 0x4
};
