// /Game/BP/AI/GOAP/Misc/BP_GOAPBaitInterface.BP_GOAPBaitInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_GOAPBaitInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetModifierToApplyOnConsume(FModifierStatesRowHandle& Modifier, float& Lifetime);  // parameters 0x1C
};
