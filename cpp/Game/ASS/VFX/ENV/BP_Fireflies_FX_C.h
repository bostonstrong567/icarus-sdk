// /Game/ASS/VFX/ENV/BP_Fireflies_FX.BP_Fireflies_FX_C
// Derives from: AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fireflies_FX_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_fireFlies_FX;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnHeight;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x022C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
