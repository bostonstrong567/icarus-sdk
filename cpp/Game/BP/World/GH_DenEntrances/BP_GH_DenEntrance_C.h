// /Game/BP/World/GH_DenEntrances/BP_GH_DenEntrance.BP_GH_DenEntrance_C
// Derives from: ABP_MainLevelTeleport_C > ABaseLevelTeleport > AIcarusActor > AActor > UObject
// size 0x440, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GH_DenEntrance_C : public ABP_MainLevelTeleport_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* PPContainer;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* EntranceBackBlocker;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* EntrancePlane;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EntranceMeshes;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle RequiredMissionCompletion;  // 0x0410, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle TrackedCreatureType;  // 0x0428, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_GH_DenEntrance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnMissionHistoryUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetEntranceVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TeleportStateChanged();
    UFUNCTION(BlueprintCallable) void UpdateTeleportState();
};
