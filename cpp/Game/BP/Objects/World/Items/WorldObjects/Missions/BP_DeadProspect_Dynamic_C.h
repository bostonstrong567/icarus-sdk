// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_DeadProspect_Dynamic.BP_DeadProspect_Dynamic_C
// Derives from: ABP_Dead_Prospector_Sinotai_Gored_01_C > ABP_Dead_Prospector_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x379, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeadProspect_Dynamic_C : public ABP_Dead_Prospector_Sinotai_Gored_01_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlapAudioComponent* OverlapAudio;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool Initialised;  // 0x0378, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_DeadProspect_Dynamic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnItemRemoved(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ReRun();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void StopAllClientAudio();
};
