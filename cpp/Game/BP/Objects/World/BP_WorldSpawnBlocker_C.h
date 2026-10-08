// /Game/BP/Objects/World/BP_WorldSpawnBlocker.BP_WorldSpawnBlocker_C
// Derives from: AActor > UObject
// size 0x234, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldSpawnBlocker_C : public AActor, public ISpawnBlockerInterface
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Debug_Sphere;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EffectiveRadius;  // 0x0230, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnAttractorEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSpawnBlockerEffectiveRadius() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
