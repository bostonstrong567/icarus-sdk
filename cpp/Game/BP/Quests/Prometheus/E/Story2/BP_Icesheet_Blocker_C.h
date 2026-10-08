// /Game/BP/Quests/Prometheus/E/Story2/BP_Icesheet_Blocker.BP_Icesheet_Blocker_C
// Derives from: AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Icesheet_Blocker_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8

    UFUNCTION(BlueprintCallable) void SetEnabled(bool Enabled);  // parameters 0x1
};
