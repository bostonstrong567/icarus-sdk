// /Game/BP/World/CaveTemplates/BP_CaveComponentInterface.BP_CaveComponentInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CaveComponentInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void SetCaveState(bool IsInCave, AActor* CaveActor);  // parameters 0x10
};
