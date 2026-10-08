// /Game/BP/AI/Basic/Caves/BP_CaveAISpawnInterface.BP_CaveAISpawnInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CaveAISpawnInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void OnAdditionalActorSpawned(AActor* SpawnedActor);  // parameters 0x8
};
