// /Game/BP/World/Crevasses/BP_Crevasse.BP_Crevasse_C
// Derives from: ACrevasse > AActor > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Crevasse_C : public ACrevasse
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* NavModifierVolume;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTerrainAnchorComponent* TerrainAnchor;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioSplineComponent* AudioSpline;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* TriggerVolume;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ActiveUpdateFrequency;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle UpdateTimerHandle;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentPlayerDepth;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpLinkSeparation;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float JumpDistance;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusJumpLink_C*> JumpLinks;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AnchorChangeEventRegistered;  // 0x0288, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAtmospheresEnum Atmosphere;  // 0x0290, size 0x10

    UFUNCTION(BlueprintCallable) void CheckTerrainAndGenerateJumpLinks();
    UFUNCTION(BlueprintCallable) void CleanupJumpLinks();
    UFUNCTION(BlueprintCallable) void CrevasseUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_Crevasse(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateJumpLinks();
    UFUNCTION(BlueprintCallable) void OnAnchorUpdated();
    UFUNCTION(BlueprintCallable) void OnTriggerVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnTriggerVolumeOverlapStart(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlayerDepth(float Depth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupNavModifierTransform();
    UFUNCTION(BlueprintCallable) void StartUpdateTimer();
    UFUNCTION(BlueprintCallable) void StopUpdateTimer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
