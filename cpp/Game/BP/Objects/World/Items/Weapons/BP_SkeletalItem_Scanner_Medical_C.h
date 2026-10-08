// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_Scanner_Medical.BP_SkeletalItem_Scanner_Medical_C
// Derives from: ABP_SkeletalItem_Scanner_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Scanner_Medical_C : public ABP_SkeletalItem_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* ScreenWidget;  // 0x05B8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* ScannedActor;  // 0x05C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Scanner_Medical(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UWidgetComponent* GetScreenWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_ScannedActor();
    UFUNCTION(BlueprintCallable) void OnViewModeChanged(bool bIsThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetScannedActor(AActor* ScannedActor);  // parameters 0x8
};
