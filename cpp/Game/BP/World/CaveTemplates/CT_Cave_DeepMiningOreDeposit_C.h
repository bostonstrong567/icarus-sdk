// /Game/BP/World/CaveTemplates/CT_Cave_DeepMiningOreDeposit.CT_Cave_DeepMiningOreDeposit_C
// Derives from: AActor > UObject
// size 0x231, a blueprint class, blueprint

UCLASS(Config=Engine)
class ACT_Cave_DeepMiningOreDeposit_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* DeepMiningOreSpawner;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreviewMesh;  // 0x0230, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
