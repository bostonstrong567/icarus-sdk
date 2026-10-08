// /Game/BP/Objects/World/BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
// Derives from: AIcarusRocketSpawnBase > AIcarusActor > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusDropShipSpawn_C : public AIcarusRocketSpawnBase
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DS_Podhopper;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* TempDPPosition;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Group;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LocatorMesh;  // 0x0320, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetGroupIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideEditorLocator();
    UFUNCTION(BlueprintCallable) void ShowEditorLocator();
};
