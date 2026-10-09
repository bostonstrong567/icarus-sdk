// /Game/BP/AI/BP_ExplosiveNPCInterface.BP_ExplosiveNPCInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ExplosiveNPCInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void BeginDetonation(float Duration);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDetonationProgress(float& Percent);  // parameters 0x4
};
