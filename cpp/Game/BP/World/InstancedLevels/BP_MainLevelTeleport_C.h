// /Game/BP/World/InstancedLevels/BP_MainLevelTeleport.BP_MainLevelTeleport_C
// Derives from: ABaseLevelTeleport > AIcarusActor > AActor > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MainLevelTeleport_C : public ABaseLevelTeleport
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* BP_UIProjectionComponent;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool EntranceVisibility;  // 0x03D0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_MainLevelTeleport(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void LocationQueryComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_EntranceVisibility();
    UFUNCTION(BlueprintCallable) void SetEntranceVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void TeleportPlayerNearLocation(AIcarusPlayerCharacter* Character, FString LeavingUniqueLevelName) const;  // parameters 0x18
};
