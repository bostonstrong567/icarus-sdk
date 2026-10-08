// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Beacon_Tool_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_Deployable_BeaconTool_C* BeaconActionable;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* LinkedBeaconActor;  // 0x05C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void LinkedBeaconDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayLinkAudio();
    UFUNCTION(BlueprintCallable) void OnRep_LinkedBeaconActor();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TryRestoreLinkedBeaconActor();
    UFUNCTION(BlueprintCallable) void UpdateWidget();
};
