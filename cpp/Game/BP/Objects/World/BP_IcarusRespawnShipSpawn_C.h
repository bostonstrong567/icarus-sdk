// /Game/BP/Objects/World/BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusRespawnShipSpawn_C : public AIcarusActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DS_Podhopper;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* TempDPPosition;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Assigned;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Group;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PlayerUID;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugWithoutBackend;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CooldownTime;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle Biome;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* LocatorMesh;  // 0x0310, size 0x8

    UFUNCTION(BlueprintCallable) void AssignSpawn(FString PlayerID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HideEditorLocator();
    UFUNCTION(BlueprintCallable) void ShowEditorLocator();
    UFUNCTION(BlueprintCallable) void UnassignSpawn();
    UFUNCTION(BlueprintCallable) void UpdateBiomeValue();
};
