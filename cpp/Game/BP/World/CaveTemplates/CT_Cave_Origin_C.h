// /Game/BP/World/CaveTemplates/CT_Cave_Origin.CT_Cave_Origin_C
// Derives from: AActor > UObject
// size 0x2A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACT_Cave_Origin_C : public AActor, public ICaveInterface
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_CaveEntranceComponent_C*> Entrances;  // 0x0228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBoxComponent*> Volumes;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_CaveComponent_C* CaveComponent;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultMinCaveCreatureNumber;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultMaxCaveCreatureNumber;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<AActor>, FVector2D> PerCreatureSpawnNumberOverride;  // 0x0258, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCreatureSpawnNumbers(TMap<TSubclassOf<AActor>, FVector2D>& PerCreatureSpawnNumber) const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetCurrentSpelunkingDepth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetSpelunkingDepthFromLocation(FVector Location) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
