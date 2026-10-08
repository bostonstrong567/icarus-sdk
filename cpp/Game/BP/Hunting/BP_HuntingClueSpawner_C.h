// /Game/BP/Hunting/BP_HuntingClueSpawner.BP_HuntingClueSpawner_C
// Derives from: UActorComponent > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_HuntingClueSpawner_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_HuntingClueSpawnerInstanceGroup_C*> HuntingClueGroupInstances;  // 0x00B8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_HuntingClueSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAI(ACharacter*& AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetGroundLocation(FVector& ImpactPoint);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_E05133814F8E9C2E95E5F3B60BEECF3C(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PreloadClueClass(int32 GroupIndex);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnBloodTrailClue(UBP_HuntingClueSpawnerInstanceGroup_BloodTrail_C* BloodTrailData);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnFootprintClue(UBP_HuntingClueSpawnerInstanceGroup_Footprint_C* FootprintData);  // parameters 0x8
    UFUNCTION(BlueprintCallable) UBP_HuntingClueSpawnerInstanceGroup_C* SpawnGroupInstance(FHuntingClueSetup Setup);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void TickBloodTrail(UBP_HuntingClueSpawnerInstanceGroup_C* Instance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickFootprint(UBP_HuntingClueSpawnerInstanceGroup_C* Instance);  // parameters 0x8
};
