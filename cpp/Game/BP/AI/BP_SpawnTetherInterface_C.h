// /Game/BP/AI/BP_SpawnTetherInterface.BP_SpawnTetherInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SpawnTetherInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void CanSupportNewTetheredAI(bool& CanSupport);  // parameters 0x1
};
